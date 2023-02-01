/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p> Container for request parameters to <code> <a>ListDomainsForPackage</a>
   * </code> operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListDomainsForPackageRequest">AWS
   * API Reference</a></p>
   */
  class ListDomainsForPackageRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ListDomainsForPackageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDomainsForPackage"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;

    AWS_ELASTICSEARCHSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The package for which to list domains.</p>
     */
    inline const Aws::String& GetPackageID() const{ return m_packageID; }

    /**
     * <p>The package for which to list domains.</p>
     */
    inline bool PackageIDHasBeenSet() const { return m_packageIDHasBeenSet; }

    /**
     * <p>The package for which to list domains.</p>
     */
    inline void SetPackageID(const Aws::String& value) { m_packageIDHasBeenSet = true; m_packageID = value; }

    /**
     * <p>The package for which to list domains.</p>
     */
    inline void SetPackageID(Aws::String&& value) { m_packageIDHasBeenSet = true; m_packageID = std::move(value); }

    /**
     * <p>The package for which to list domains.</p>
     */
    inline void SetPackageID(const char* value) { m_packageIDHasBeenSet = true; m_packageID.assign(value); }

    /**
     * <p>The package for which to list domains.</p>
     */
    inline ListDomainsForPackageRequest& WithPackageID(const Aws::String& value) { SetPackageID(value); return *this;}

    /**
     * <p>The package for which to list domains.</p>
     */
    inline ListDomainsForPackageRequest& WithPackageID(Aws::String&& value) { SetPackageID(std::move(value)); return *this;}

    /**
     * <p>The package for which to list domains.</p>
     */
    inline ListDomainsForPackageRequest& WithPackageID(const char* value) { SetPackageID(value); return *this;}


    /**
     * <p>Limits results to a maximum number of domains.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Limits results to a maximum number of domains.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Limits results to a maximum number of domains.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Limits results to a maximum number of domains.</p>
     */
    inline ListDomainsForPackageRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Used for pagination. Only necessary if a previous API call includes a
     * non-null NextToken value. If provided, returns results for the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Used for pagination. Only necessary if a previous API call includes a
     * non-null NextToken value. If provided, returns results for the next page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Used for pagination. Only necessary if a previous API call includes a
     * non-null NextToken value. If provided, returns results for the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Used for pagination. Only necessary if a previous API call includes a
     * non-null NextToken value. If provided, returns results for the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Used for pagination. Only necessary if a previous API call includes a
     * non-null NextToken value. If provided, returns results for the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Used for pagination. Only necessary if a previous API call includes a
     * non-null NextToken value. If provided, returns results for the next page.</p>
     */
    inline ListDomainsForPackageRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Used for pagination. Only necessary if a previous API call includes a
     * non-null NextToken value. If provided, returns results for the next page.</p>
     */
    inline ListDomainsForPackageRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Used for pagination. Only necessary if a previous API call includes a
     * non-null NextToken value. If provided, returns results for the next page.</p>
     */
    inline ListDomainsForPackageRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_packageID;
    bool m_packageIDHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
