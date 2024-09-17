/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace deadline
{
namespace Model
{

  /**
   */
  class ListMeteredProductsRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API ListMeteredProductsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMeteredProducts"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;

    AWS_DEADLINE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The license endpoint ID to include on the list of metered products.</p>
     */
    inline const Aws::String& GetLicenseEndpointId() const{ return m_licenseEndpointId; }
    inline bool LicenseEndpointIdHasBeenSet() const { return m_licenseEndpointIdHasBeenSet; }
    inline void SetLicenseEndpointId(const Aws::String& value) { m_licenseEndpointIdHasBeenSet = true; m_licenseEndpointId = value; }
    inline void SetLicenseEndpointId(Aws::String&& value) { m_licenseEndpointIdHasBeenSet = true; m_licenseEndpointId = std::move(value); }
    inline void SetLicenseEndpointId(const char* value) { m_licenseEndpointIdHasBeenSet = true; m_licenseEndpointId.assign(value); }
    inline ListMeteredProductsRequest& WithLicenseEndpointId(const Aws::String& value) { SetLicenseEndpointId(value); return *this;}
    inline ListMeteredProductsRequest& WithLicenseEndpointId(Aws::String&& value) { SetLicenseEndpointId(std::move(value)); return *this;}
    inline ListMeteredProductsRequest& WithLicenseEndpointId(const char* value) { SetLicenseEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or <code>null</code> to start from the
     * beginning.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListMeteredProductsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMeteredProductsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMeteredProductsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListMeteredProductsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_licenseEndpointId;
    bool m_licenseEndpointIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
