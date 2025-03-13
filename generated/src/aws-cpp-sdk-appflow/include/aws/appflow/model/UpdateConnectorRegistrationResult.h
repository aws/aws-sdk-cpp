/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
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
namespace Appflow
{
namespace Model
{
  class UpdateConnectorRegistrationResult
  {
  public:
    AWS_APPFLOW_API UpdateConnectorRegistrationResult() = default;
    AWS_APPFLOW_API UpdateConnectorRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API UpdateConnectorRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the connector being updated.</p>
     */
    inline const Aws::String& GetConnectorArn() const { return m_connectorArn; }
    template<typename ConnectorArnT = Aws::String>
    void SetConnectorArn(ConnectorArnT&& value) { m_connectorArnHasBeenSet = true; m_connectorArn = std::forward<ConnectorArnT>(value); }
    template<typename ConnectorArnT = Aws::String>
    UpdateConnectorRegistrationResult& WithConnectorArn(ConnectorArnT&& value) { SetConnectorArn(std::forward<ConnectorArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateConnectorRegistrationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorArn;
    bool m_connectorArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
