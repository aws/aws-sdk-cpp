/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class AWS_PINPOINT_API GetSegmentImportJobsRequest : public PinpointRequest
  {
  public:
    GetSegmentImportJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSegmentImportJobs"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline GetSegmentImportJobsRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline GetSegmentImportJobsRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline GetSegmentImportJobsRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The maximum number of items to include on each page in a paginated
     * response.</p>
     */
    inline const Aws::String& GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The maximum number of items to include on each page in a paginated
     * response.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The maximum number of items to include on each page in a paginated
     * response.</p>
     */
    inline void SetPageSize(const Aws::String& value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The maximum number of items to include on each page in a paginated
     * response.</p>
     */
    inline void SetPageSize(Aws::String&& value) { m_pageSizeHasBeenSet = true; m_pageSize = std::move(value); }

    /**
     * <p>The maximum number of items to include on each page in a paginated
     * response.</p>
     */
    inline void SetPageSize(const char* value) { m_pageSizeHasBeenSet = true; m_pageSize.assign(value); }

    /**
     * <p>The maximum number of items to include on each page in a paginated
     * response.</p>
     */
    inline GetSegmentImportJobsRequest& WithPageSize(const Aws::String& value) { SetPageSize(value); return *this;}

    /**
     * <p>The maximum number of items to include on each page in a paginated
     * response.</p>
     */
    inline GetSegmentImportJobsRequest& WithPageSize(Aws::String&& value) { SetPageSize(std::move(value)); return *this;}

    /**
     * <p>The maximum number of items to include on each page in a paginated
     * response.</p>
     */
    inline GetSegmentImportJobsRequest& WithPageSize(const char* value) { SetPageSize(value); return *this;}


    /**
     * <p>The unique identifier for the segment.</p>
     */
    inline const Aws::String& GetSegmentId() const{ return m_segmentId; }

    /**
     * <p>The unique identifier for the segment.</p>
     */
    inline bool SegmentIdHasBeenSet() const { return m_segmentIdHasBeenSet; }

    /**
     * <p>The unique identifier for the segment.</p>
     */
    inline void SetSegmentId(const Aws::String& value) { m_segmentIdHasBeenSet = true; m_segmentId = value; }

    /**
     * <p>The unique identifier for the segment.</p>
     */
    inline void SetSegmentId(Aws::String&& value) { m_segmentIdHasBeenSet = true; m_segmentId = std::move(value); }

    /**
     * <p>The unique identifier for the segment.</p>
     */
    inline void SetSegmentId(const char* value) { m_segmentIdHasBeenSet = true; m_segmentId.assign(value); }

    /**
     * <p>The unique identifier for the segment.</p>
     */
    inline GetSegmentImportJobsRequest& WithSegmentId(const Aws::String& value) { SetSegmentId(value); return *this;}

    /**
     * <p>The unique identifier for the segment.</p>
     */
    inline GetSegmentImportJobsRequest& WithSegmentId(Aws::String&& value) { SetSegmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the segment.</p>
     */
    inline GetSegmentImportJobsRequest& WithSegmentId(const char* value) { SetSegmentId(value); return *this;}


    /**
     * <p>The NextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>The NextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }

    /**
     * <p>The NextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>The NextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    /**
     * <p>The NextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p>The NextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline GetSegmentImportJobsRequest& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>The NextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline GetSegmentImportJobsRequest& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p>The NextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline GetSegmentImportJobsRequest& WithToken(const char* value) { SetToken(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_pageSize;
    bool m_pageSizeHasBeenSet;

    Aws::String m_segmentId;
    bool m_segmentIdHasBeenSet;

    Aws::String m_token;
    bool m_tokenHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
