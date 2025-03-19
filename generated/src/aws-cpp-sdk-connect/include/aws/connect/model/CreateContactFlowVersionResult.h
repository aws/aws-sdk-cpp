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
    AWS_CONNECT_API CreateContactFlowVersionResult() = default;
    AWS_CONNECT_API CreateContactFlowVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateContactFlowVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the flow.</p>
     */
    inline const Aws::String& GetContactFlowArn() const { return m_contactFlowArn; }
    template<typename ContactFlowArnT = Aws::String>
    void SetContactFlowArn(ContactFlowArnT&& value) { m_contactFlowArnHasBeenSet = true; m_contactFlowArn = std::forward<ContactFlowArnT>(value); }
    template<typename ContactFlowArnT = Aws::String>
    CreateContactFlowVersionResult& WithContactFlowArn(ContactFlowArnT&& value) { SetContactFlowArn(std::forward<ContactFlowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the flow version.</p>
     */
    inline long long GetVersion() const { return m_version; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline CreateContactFlowVersionResult& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateContactFlowVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contactFlowArn;
    bool m_contactFlowArnHasBeenSet = false;

    long long m_version{0};
    bool m_versionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
