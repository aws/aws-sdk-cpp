/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ConnectorProfile.h>
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
  class DescribeConnectorProfilesResult
  {
  public:
    AWS_APPFLOW_API DescribeConnectorProfilesResult();
    AWS_APPFLOW_API DescribeConnectorProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API DescribeConnectorProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Returns information about the connector profiles associated with the flow.
     * </p>
     */
    inline const Aws::Vector<ConnectorProfile>& GetConnectorProfileDetails() const{ return m_connectorProfileDetails; }

    /**
     * <p> Returns information about the connector profiles associated with the flow.
     * </p>
     */
    inline void SetConnectorProfileDetails(const Aws::Vector<ConnectorProfile>& value) { m_connectorProfileDetails = value; }

    /**
     * <p> Returns information about the connector profiles associated with the flow.
     * </p>
     */
    inline void SetConnectorProfileDetails(Aws::Vector<ConnectorProfile>&& value) { m_connectorProfileDetails = std::move(value); }

    /**
     * <p> Returns information about the connector profiles associated with the flow.
     * </p>
     */
    inline DescribeConnectorProfilesResult& WithConnectorProfileDetails(const Aws::Vector<ConnectorProfile>& value) { SetConnectorProfileDetails(value); return *this;}

    /**
     * <p> Returns information about the connector profiles associated with the flow.
     * </p>
     */
    inline DescribeConnectorProfilesResult& WithConnectorProfileDetails(Aws::Vector<ConnectorProfile>&& value) { SetConnectorProfileDetails(std::move(value)); return *this;}

    /**
     * <p> Returns information about the connector profiles associated with the flow.
     * </p>
     */
    inline DescribeConnectorProfilesResult& AddConnectorProfileDetails(const ConnectorProfile& value) { m_connectorProfileDetails.push_back(value); return *this; }

    /**
     * <p> Returns information about the connector profiles associated with the flow.
     * </p>
     */
    inline DescribeConnectorProfilesResult& AddConnectorProfileDetails(ConnectorProfile&& value) { m_connectorProfileDetails.push_back(std::move(value)); return *this; }


    /**
     * <p> The pagination token for the next page of data. If
     * <code>nextToken=null</code>, this means that all records have been fetched. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token for the next page of data. If
     * <code>nextToken=null</code>, this means that all records have been fetched. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The pagination token for the next page of data. If
     * <code>nextToken=null</code>, this means that all records have been fetched. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The pagination token for the next page of data. If
     * <code>nextToken=null</code>, this means that all records have been fetched. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The pagination token for the next page of data. If
     * <code>nextToken=null</code>, this means that all records have been fetched. </p>
     */
    inline DescribeConnectorProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token for the next page of data. If
     * <code>nextToken=null</code>, this means that all records have been fetched. </p>
     */
    inline DescribeConnectorProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token for the next page of data. If
     * <code>nextToken=null</code>, this means that all records have been fetched. </p>
     */
    inline DescribeConnectorProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ConnectorProfile> m_connectorProfileDetails;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
