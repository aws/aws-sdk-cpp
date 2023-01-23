/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/BulkDeploymentResult.h>
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
namespace Greengrass
{
namespace Model
{
  class ListBulkDeploymentDetailedReportsResult
  {
  public:
    AWS_GREENGRASS_API ListBulkDeploymentDetailedReportsResult();
    AWS_GREENGRASS_API ListBulkDeploymentDetailedReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API ListBulkDeploymentDetailedReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A list of the individual group deployments in the bulk deployment operation.
     */
    inline const Aws::Vector<BulkDeploymentResult>& GetDeployments() const{ return m_deployments; }

    /**
     * A list of the individual group deployments in the bulk deployment operation.
     */
    inline void SetDeployments(const Aws::Vector<BulkDeploymentResult>& value) { m_deployments = value; }

    /**
     * A list of the individual group deployments in the bulk deployment operation.
     */
    inline void SetDeployments(Aws::Vector<BulkDeploymentResult>&& value) { m_deployments = std::move(value); }

    /**
     * A list of the individual group deployments in the bulk deployment operation.
     */
    inline ListBulkDeploymentDetailedReportsResult& WithDeployments(const Aws::Vector<BulkDeploymentResult>& value) { SetDeployments(value); return *this;}

    /**
     * A list of the individual group deployments in the bulk deployment operation.
     */
    inline ListBulkDeploymentDetailedReportsResult& WithDeployments(Aws::Vector<BulkDeploymentResult>&& value) { SetDeployments(std::move(value)); return *this;}

    /**
     * A list of the individual group deployments in the bulk deployment operation.
     */
    inline ListBulkDeploymentDetailedReportsResult& AddDeployments(const BulkDeploymentResult& value) { m_deployments.push_back(value); return *this; }

    /**
     * A list of the individual group deployments in the bulk deployment operation.
     */
    inline ListBulkDeploymentDetailedReportsResult& AddDeployments(BulkDeploymentResult&& value) { m_deployments.push_back(std::move(value)); return *this; }


    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline ListBulkDeploymentDetailedReportsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline ListBulkDeploymentDetailedReportsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline ListBulkDeploymentDetailedReportsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BulkDeploymentResult> m_deployments;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
