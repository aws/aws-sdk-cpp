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
  class CreateRelatedItemResult
  {
  public:
    AWS_CONNECTCASES_API CreateRelatedItemResult();
    AWS_CONNECTCASES_API CreateRelatedItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API CreateRelatedItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the related item.</p>
     */
    inline const Aws::String& GetRelatedItemArn() const{ return m_relatedItemArn; }
    inline void SetRelatedItemArn(const Aws::String& value) { m_relatedItemArn = value; }
    inline void SetRelatedItemArn(Aws::String&& value) { m_relatedItemArn = std::move(value); }
    inline void SetRelatedItemArn(const char* value) { m_relatedItemArn.assign(value); }
    inline CreateRelatedItemResult& WithRelatedItemArn(const Aws::String& value) { SetRelatedItemArn(value); return *this;}
    inline CreateRelatedItemResult& WithRelatedItemArn(Aws::String&& value) { SetRelatedItemArn(std::move(value)); return *this;}
    inline CreateRelatedItemResult& WithRelatedItemArn(const char* value) { SetRelatedItemArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the related item.</p>
     */
    inline const Aws::String& GetRelatedItemId() const{ return m_relatedItemId; }
    inline void SetRelatedItemId(const Aws::String& value) { m_relatedItemId = value; }
    inline void SetRelatedItemId(Aws::String&& value) { m_relatedItemId = std::move(value); }
    inline void SetRelatedItemId(const char* value) { m_relatedItemId.assign(value); }
    inline CreateRelatedItemResult& WithRelatedItemId(const Aws::String& value) { SetRelatedItemId(value); return *this;}
    inline CreateRelatedItemResult& WithRelatedItemId(Aws::String&& value) { SetRelatedItemId(std::move(value)); return *this;}
    inline CreateRelatedItemResult& WithRelatedItemId(const char* value) { SetRelatedItemId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateRelatedItemResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateRelatedItemResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateRelatedItemResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_relatedItemArn;

    Aws::String m_relatedItemId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
