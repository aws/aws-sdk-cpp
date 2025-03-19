/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactFlowModule.h>
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
  class DescribeContactFlowModuleResult
  {
  public:
    AWS_CONNECT_API DescribeContactFlowModuleResult() = default;
    AWS_CONNECT_API DescribeContactFlowModuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeContactFlowModuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the flow module.</p>
     */
    inline const ContactFlowModule& GetContactFlowModule() const { return m_contactFlowModule; }
    template<typename ContactFlowModuleT = ContactFlowModule>
    void SetContactFlowModule(ContactFlowModuleT&& value) { m_contactFlowModuleHasBeenSet = true; m_contactFlowModule = std::forward<ContactFlowModuleT>(value); }
    template<typename ContactFlowModuleT = ContactFlowModule>
    DescribeContactFlowModuleResult& WithContactFlowModule(ContactFlowModuleT&& value) { SetContactFlowModule(std::forward<ContactFlowModuleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeContactFlowModuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ContactFlowModule m_contactFlowModule;
    bool m_contactFlowModuleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
