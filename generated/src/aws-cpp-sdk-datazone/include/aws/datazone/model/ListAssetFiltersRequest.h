/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/FilterStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DataZone
{
namespace Model
{

  /**
   */
  class ListAssetFiltersRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API ListAssetFiltersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssetFilters"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the data asset.</p>
     */
    inline const Aws::String& GetAssetIdentifier() const{ return m_assetIdentifier; }
    inline bool AssetIdentifierHasBeenSet() const { return m_assetIdentifierHasBeenSet; }
    inline void SetAssetIdentifier(const Aws::String& value) { m_assetIdentifierHasBeenSet = true; m_assetIdentifier = value; }
    inline void SetAssetIdentifier(Aws::String&& value) { m_assetIdentifierHasBeenSet = true; m_assetIdentifier = std::move(value); }
    inline void SetAssetIdentifier(const char* value) { m_assetIdentifierHasBeenSet = true; m_assetIdentifier.assign(value); }
    inline ListAssetFiltersRequest& WithAssetIdentifier(const Aws::String& value) { SetAssetIdentifier(value); return *this;}
    inline ListAssetFiltersRequest& WithAssetIdentifier(Aws::String&& value) { SetAssetIdentifier(std::move(value)); return *this;}
    inline ListAssetFiltersRequest& WithAssetIdentifier(const char* value) { SetAssetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where you want to list asset filters.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline ListAssetFiltersRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline ListAssetFiltersRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline ListAssetFiltersRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of asset filters to return in a single call to
     * <code>ListAssetFilters</code>. When the number of asset filters to be listed is
     * greater than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListAssetFilters</code> to list the next set of asset filters.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAssetFiltersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the number of asset filters is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of asset filters, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListAssetFilters</code> to list the next set of asset filters.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListAssetFiltersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssetFiltersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssetFiltersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the asset filter.</p>
     */
    inline const FilterStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const FilterStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(FilterStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListAssetFiltersRequest& WithStatus(const FilterStatus& value) { SetStatus(value); return *this;}
    inline ListAssetFiltersRequest& WithStatus(FilterStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetIdentifier;
    bool m_assetIdentifierHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    FilterStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
