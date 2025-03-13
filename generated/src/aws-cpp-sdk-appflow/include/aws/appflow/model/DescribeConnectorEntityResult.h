/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ConnectorEntityField.h>
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
  class DescribeConnectorEntityResult
  {
  public:
    AWS_APPFLOW_API DescribeConnectorEntityResult() = default;
    AWS_APPFLOW_API DescribeConnectorEntityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API DescribeConnectorEntityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Describes the fields for that connector entity. For example, for an
     * <i>account</i> entity, the fields would be <i>account name</i>, <i>account
     * ID</i>, and so on. </p>
     */
    inline const Aws::Vector<ConnectorEntityField>& GetConnectorEntityFields() const { return m_connectorEntityFields; }
    template<typename ConnectorEntityFieldsT = Aws::Vector<ConnectorEntityField>>
    void SetConnectorEntityFields(ConnectorEntityFieldsT&& value) { m_connectorEntityFieldsHasBeenSet = true; m_connectorEntityFields = std::forward<ConnectorEntityFieldsT>(value); }
    template<typename ConnectorEntityFieldsT = Aws::Vector<ConnectorEntityField>>
    DescribeConnectorEntityResult& WithConnectorEntityFields(ConnectorEntityFieldsT&& value) { SetConnectorEntityFields(std::forward<ConnectorEntityFieldsT>(value)); return *this;}
    template<typename ConnectorEntityFieldsT = ConnectorEntityField>
    DescribeConnectorEntityResult& AddConnectorEntityFields(ConnectorEntityFieldsT&& value) { m_connectorEntityFieldsHasBeenSet = true; m_connectorEntityFields.emplace_back(std::forward<ConnectorEntityFieldsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConnectorEntityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConnectorEntityField> m_connectorEntityFields;
    bool m_connectorEntityFieldsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
