/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_APPFLOW_API DescribeConnectorEntityResult();
    AWS_APPFLOW_API DescribeConnectorEntityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API DescribeConnectorEntityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Describes the fields for that connector entity. For example, for an
     * <i>account</i> entity, the fields would be <i>account name</i>, <i>account
     * ID</i>, and so on. </p>
     */
    inline const Aws::Vector<ConnectorEntityField>& GetConnectorEntityFields() const{ return m_connectorEntityFields; }

    /**
     * <p> Describes the fields for that connector entity. For example, for an
     * <i>account</i> entity, the fields would be <i>account name</i>, <i>account
     * ID</i>, and so on. </p>
     */
    inline void SetConnectorEntityFields(const Aws::Vector<ConnectorEntityField>& value) { m_connectorEntityFields = value; }

    /**
     * <p> Describes the fields for that connector entity. For example, for an
     * <i>account</i> entity, the fields would be <i>account name</i>, <i>account
     * ID</i>, and so on. </p>
     */
    inline void SetConnectorEntityFields(Aws::Vector<ConnectorEntityField>&& value) { m_connectorEntityFields = std::move(value); }

    /**
     * <p> Describes the fields for that connector entity. For example, for an
     * <i>account</i> entity, the fields would be <i>account name</i>, <i>account
     * ID</i>, and so on. </p>
     */
    inline DescribeConnectorEntityResult& WithConnectorEntityFields(const Aws::Vector<ConnectorEntityField>& value) { SetConnectorEntityFields(value); return *this;}

    /**
     * <p> Describes the fields for that connector entity. For example, for an
     * <i>account</i> entity, the fields would be <i>account name</i>, <i>account
     * ID</i>, and so on. </p>
     */
    inline DescribeConnectorEntityResult& WithConnectorEntityFields(Aws::Vector<ConnectorEntityField>&& value) { SetConnectorEntityFields(std::move(value)); return *this;}

    /**
     * <p> Describes the fields for that connector entity. For example, for an
     * <i>account</i> entity, the fields would be <i>account name</i>, <i>account
     * ID</i>, and so on. </p>
     */
    inline DescribeConnectorEntityResult& AddConnectorEntityFields(const ConnectorEntityField& value) { m_connectorEntityFields.push_back(value); return *this; }

    /**
     * <p> Describes the fields for that connector entity. For example, for an
     * <i>account</i> entity, the fields would be <i>account name</i>, <i>account
     * ID</i>, and so on. </p>
     */
    inline DescribeConnectorEntityResult& AddConnectorEntityFields(ConnectorEntityField&& value) { m_connectorEntityFields.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ConnectorEntityField> m_connectorEntityFields;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
