/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ConnectCases
{
namespace Model
{
  class CreateFieldResult
  {
  public:
    AWS_CONNECTCASES_API CreateFieldResult();
    AWS_CONNECTCASES_API CreateFieldResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API CreateFieldResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the field.</p>
     */
    inline const Aws::String& GetFieldArn() const{ return m_fieldArn; }
    inline void SetFieldArn(const Aws::String& value) { m_fieldArn = value; }
    inline void SetFieldArn(Aws::String&& value) { m_fieldArn = std::move(value); }
    inline void SetFieldArn(const char* value) { m_fieldArn.assign(value); }
    inline CreateFieldResult& WithFieldArn(const Aws::String& value) { SetFieldArn(value); return *this;}
    inline CreateFieldResult& WithFieldArn(Aws::String&& value) { SetFieldArn(std::move(value)); return *this;}
    inline CreateFieldResult& WithFieldArn(const char* value) { SetFieldArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of a field.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }
    inline void SetFieldId(const Aws::String& value) { m_fieldId = value; }
    inline void SetFieldId(Aws::String&& value) { m_fieldId = std::move(value); }
    inline void SetFieldId(const char* value) { m_fieldId.assign(value); }
    inline CreateFieldResult& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}
    inline CreateFieldResult& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}
    inline CreateFieldResult& WithFieldId(const char* value) { SetFieldId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateFieldResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateFieldResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateFieldResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_fieldArn;

    Aws::String m_fieldId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
