/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/MediaPackageRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaPackage
{
namespace Model
{

  /**
   */
  class ListHarvestJobsRequest : public MediaPackageRequest
  {
  public:
    AWS_MEDIAPACKAGE_API ListHarvestJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListHarvestJobs"; }

    AWS_MEDIAPACKAGE_API Aws::String SerializePayload() const override;

    AWS_MEDIAPACKAGE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * When specified, the request will return only HarvestJobs associated with the
     * given Channel ID.
     */
    inline const Aws::String& GetIncludeChannelId() const{ return m_includeChannelId; }

    /**
     * When specified, the request will return only HarvestJobs associated with the
     * given Channel ID.
     */
    inline bool IncludeChannelIdHasBeenSet() const { return m_includeChannelIdHasBeenSet; }

    /**
     * When specified, the request will return only HarvestJobs associated with the
     * given Channel ID.
     */
    inline void SetIncludeChannelId(const Aws::String& value) { m_includeChannelIdHasBeenSet = true; m_includeChannelId = value; }

    /**
     * When specified, the request will return only HarvestJobs associated with the
     * given Channel ID.
     */
    inline void SetIncludeChannelId(Aws::String&& value) { m_includeChannelIdHasBeenSet = true; m_includeChannelId = std::move(value); }

    /**
     * When specified, the request will return only HarvestJobs associated with the
     * given Channel ID.
     */
    inline void SetIncludeChannelId(const char* value) { m_includeChannelIdHasBeenSet = true; m_includeChannelId.assign(value); }

    /**
     * When specified, the request will return only HarvestJobs associated with the
     * given Channel ID.
     */
    inline ListHarvestJobsRequest& WithIncludeChannelId(const Aws::String& value) { SetIncludeChannelId(value); return *this;}

    /**
     * When specified, the request will return only HarvestJobs associated with the
     * given Channel ID.
     */
    inline ListHarvestJobsRequest& WithIncludeChannelId(Aws::String&& value) { SetIncludeChannelId(std::move(value)); return *this;}

    /**
     * When specified, the request will return only HarvestJobs associated with the
     * given Channel ID.
     */
    inline ListHarvestJobsRequest& WithIncludeChannelId(const char* value) { SetIncludeChannelId(value); return *this;}


    /**
     * When specified, the request will return only HarvestJobs in the given status.
     */
    inline const Aws::String& GetIncludeStatus() const{ return m_includeStatus; }

    /**
     * When specified, the request will return only HarvestJobs in the given status.
     */
    inline bool IncludeStatusHasBeenSet() const { return m_includeStatusHasBeenSet; }

    /**
     * When specified, the request will return only HarvestJobs in the given status.
     */
    inline void SetIncludeStatus(const Aws::String& value) { m_includeStatusHasBeenSet = true; m_includeStatus = value; }

    /**
     * When specified, the request will return only HarvestJobs in the given status.
     */
    inline void SetIncludeStatus(Aws::String&& value) { m_includeStatusHasBeenSet = true; m_includeStatus = std::move(value); }

    /**
     * When specified, the request will return only HarvestJobs in the given status.
     */
    inline void SetIncludeStatus(const char* value) { m_includeStatusHasBeenSet = true; m_includeStatus.assign(value); }

    /**
     * When specified, the request will return only HarvestJobs in the given status.
     */
    inline ListHarvestJobsRequest& WithIncludeStatus(const Aws::String& value) { SetIncludeStatus(value); return *this;}

    /**
     * When specified, the request will return only HarvestJobs in the given status.
     */
    inline ListHarvestJobsRequest& WithIncludeStatus(Aws::String&& value) { SetIncludeStatus(std::move(value)); return *this;}

    /**
     * When specified, the request will return only HarvestJobs in the given status.
     */
    inline ListHarvestJobsRequest& WithIncludeStatus(const char* value) { SetIncludeStatus(value); return *this;}


    /**
     * The upper bound on the number of records to return.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * The upper bound on the number of records to return.
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * The upper bound on the number of records to return.
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * The upper bound on the number of records to return.
     */
    inline ListHarvestJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline ListHarvestJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline ListHarvestJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline ListHarvestJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_includeChannelId;
    bool m_includeChannelIdHasBeenSet = false;

    Aws::String m_includeStatus;
    bool m_includeStatusHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
