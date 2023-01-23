/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AssociatedAssetsSummary.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class ListAssociatedAssetsResult
  {
  public:
    AWS_IOTSITEWISE_API ListAssociatedAssetsResult();
    AWS_IOTSITEWISE_API ListAssociatedAssetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListAssociatedAssetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that summarizes the associated assets.</p>
     */
    inline const Aws::Vector<AssociatedAssetsSummary>& GetAssetSummaries() const{ return m_assetSummaries; }

    /**
     * <p>A list that summarizes the associated assets.</p>
     */
    inline void SetAssetSummaries(const Aws::Vector<AssociatedAssetsSummary>& value) { m_assetSummaries = value; }

    /**
     * <p>A list that summarizes the associated assets.</p>
     */
    inline void SetAssetSummaries(Aws::Vector<AssociatedAssetsSummary>&& value) { m_assetSummaries = std::move(value); }

    /**
     * <p>A list that summarizes the associated assets.</p>
     */
    inline ListAssociatedAssetsResult& WithAssetSummaries(const Aws::Vector<AssociatedAssetsSummary>& value) { SetAssetSummaries(value); return *this;}

    /**
     * <p>A list that summarizes the associated assets.</p>
     */
    inline ListAssociatedAssetsResult& WithAssetSummaries(Aws::Vector<AssociatedAssetsSummary>&& value) { SetAssetSummaries(std::move(value)); return *this;}

    /**
     * <p>A list that summarizes the associated assets.</p>
     */
    inline ListAssociatedAssetsResult& AddAssetSummaries(const AssociatedAssetsSummary& value) { m_assetSummaries.push_back(value); return *this; }

    /**
     * <p>A list that summarizes the associated assets.</p>
     */
    inline ListAssociatedAssetsResult& AddAssetSummaries(AssociatedAssetsSummary&& value) { m_assetSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListAssociatedAssetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListAssociatedAssetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListAssociatedAssetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AssociatedAssetsSummary> m_assetSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
