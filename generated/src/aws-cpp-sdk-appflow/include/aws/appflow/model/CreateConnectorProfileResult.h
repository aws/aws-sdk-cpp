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
  class CreateConnectorProfileResult
  {
  public:
    AWS_APPFLOW_API CreateConnectorProfileResult() = default;
    AWS_APPFLOW_API CreateConnectorProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API CreateConnectorProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the connector profile. </p>
     */
    inline const Aws::String& GetConnectorProfileArn() const { return m_connectorProfileArn; }
    template<typename ConnectorProfileArnT = Aws::String>
    void SetConnectorProfileArn(ConnectorProfileArnT&& value) { m_connectorProfileArnHasBeenSet = true; m_connectorProfileArn = std::forward<ConnectorProfileArnT>(value); }
    template<typename ConnectorProfileArnT = Aws::String>
    CreateConnectorProfileResult& WithConnectorProfileArn(ConnectorProfileArnT&& value) { SetConnectorProfileArn(std::forward<ConnectorProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateConnectorProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorProfileArn;
    bool m_connectorProfileArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
