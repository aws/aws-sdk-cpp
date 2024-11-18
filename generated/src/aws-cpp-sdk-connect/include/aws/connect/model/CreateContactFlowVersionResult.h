/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class CreateContactFlowVersionResult
  {
  public:
    AWS_CONNECT_API CreateContactFlowVersionResult();
    AWS_CONNECT_API CreateContactFlowVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateContactFlowVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the flow.</p>
     */
    inline const Aws::String& GetContactFlowArn() const{ return m_contactFlowArn; }
    inline void SetContactFlowArn(const Aws::String& value) { m_contactFlowArn = value; }
    inline void SetContactFlowArn(Aws::String&& value) { m_contactFlowArn = std::move(value); }
    inline void SetContactFlowArn(const char* value) { m_contactFlowArn.assign(value); }
    inline CreateContactFlowVersionResult& WithContactFlowArn(const Aws::String& value) { SetContactFlowArn(value); return *this;}
    inline CreateContactFlowVersionResult& WithContactFlowArn(Aws::String&& value) { SetContactFlowArn(std::move(value)); return *this;}
    inline CreateContactFlowVersionResult& WithContactFlowArn(const char* value) { SetContactFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the flow version.</p>
     */
    inline long long GetVersion() const{ return m_version; }
    inline void SetVersion(long long value) { m_version = value; }
    inline CreateContactFlowVersionResult& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateContactFlowVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateContactFlowVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateContactFlowVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_contactFlowArn;

    long long m_version;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
