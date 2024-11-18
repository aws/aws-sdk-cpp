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
  class CreateContactFlowResult
  {
  public:
    AWS_CONNECT_API CreateContactFlowResult();
    AWS_CONNECT_API CreateContactFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateContactFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the flow.</p>
     */
    inline const Aws::String& GetContactFlowId() const{ return m_contactFlowId; }
    inline void SetContactFlowId(const Aws::String& value) { m_contactFlowId = value; }
    inline void SetContactFlowId(Aws::String&& value) { m_contactFlowId = std::move(value); }
    inline void SetContactFlowId(const char* value) { m_contactFlowId.assign(value); }
    inline CreateContactFlowResult& WithContactFlowId(const Aws::String& value) { SetContactFlowId(value); return *this;}
    inline CreateContactFlowResult& WithContactFlowId(Aws::String&& value) { SetContactFlowId(std::move(value)); return *this;}
    inline CreateContactFlowResult& WithContactFlowId(const char* value) { SetContactFlowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the flow.</p>
     */
    inline const Aws::String& GetContactFlowArn() const{ return m_contactFlowArn; }
    inline void SetContactFlowArn(const Aws::String& value) { m_contactFlowArn = value; }
    inline void SetContactFlowArn(Aws::String&& value) { m_contactFlowArn = std::move(value); }
    inline void SetContactFlowArn(const char* value) { m_contactFlowArn.assign(value); }
    inline CreateContactFlowResult& WithContactFlowArn(const Aws::String& value) { SetContactFlowArn(value); return *this;}
    inline CreateContactFlowResult& WithContactFlowArn(Aws::String&& value) { SetContactFlowArn(std::move(value)); return *this;}
    inline CreateContactFlowResult& WithContactFlowArn(const char* value) { SetContactFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the checksum value of the flow content.</p>
     */
    inline const Aws::String& GetFlowContentSha256() const{ return m_flowContentSha256; }
    inline void SetFlowContentSha256(const Aws::String& value) { m_flowContentSha256 = value; }
    inline void SetFlowContentSha256(Aws::String&& value) { m_flowContentSha256 = std::move(value); }
    inline void SetFlowContentSha256(const char* value) { m_flowContentSha256.assign(value); }
    inline CreateContactFlowResult& WithFlowContentSha256(const Aws::String& value) { SetFlowContentSha256(value); return *this;}
    inline CreateContactFlowResult& WithFlowContentSha256(Aws::String&& value) { SetFlowContentSha256(std::move(value)); return *this;}
    inline CreateContactFlowResult& WithFlowContentSha256(const char* value) { SetFlowContentSha256(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateContactFlowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateContactFlowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateContactFlowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_contactFlowId;

    Aws::String m_contactFlowArn;

    Aws::String m_flowContentSha256;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
