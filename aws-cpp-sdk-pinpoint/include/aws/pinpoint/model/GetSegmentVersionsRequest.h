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
  class AWS_PINPOINT_API GetSegmentVersionsRequest : public PinpointRequest
  {
  public:
    GetSegmentVersionsRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSegmentVersions"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    
    inline GetSegmentVersionsRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    
    inline GetSegmentVersionsRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    
    inline GetSegmentVersionsRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * The number of entries you want on each page in the response.
     */
    inline const Aws::String& GetPageSize() const{ return m_pageSize; }

    /**
     * The number of entries you want on each page in the response.
     */
    inline void SetPageSize(const Aws::String& value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * The number of entries you want on each page in the response.
     */
    inline void SetPageSize(Aws::String&& value) { m_pageSizeHasBeenSet = true; m_pageSize = std::move(value); }

    /**
     * The number of entries you want on each page in the response.
     */
    inline void SetPageSize(const char* value) { m_pageSizeHasBeenSet = true; m_pageSize.assign(value); }

    /**
     * The number of entries you want on each page in the response.
     */
    inline GetSegmentVersionsRequest& WithPageSize(const Aws::String& value) { SetPageSize(value); return *this;}

    /**
     * The number of entries you want on each page in the response.
     */
    inline GetSegmentVersionsRequest& WithPageSize(Aws::String&& value) { SetPageSize(std::move(value)); return *this;}

    /**
     * The number of entries you want on each page in the response.
     */
    inline GetSegmentVersionsRequest& WithPageSize(const char* value) { SetPageSize(value); return *this;}


    
    inline const Aws::String& GetSegmentId() const{ return m_segmentId; }

    
    inline void SetSegmentId(const Aws::String& value) { m_segmentIdHasBeenSet = true; m_segmentId = value; }

    
    inline void SetSegmentId(Aws::String&& value) { m_segmentIdHasBeenSet = true; m_segmentId = std::move(value); }

    
    inline void SetSegmentId(const char* value) { m_segmentIdHasBeenSet = true; m_segmentId.assign(value); }

    
    inline GetSegmentVersionsRequest& WithSegmentId(const Aws::String& value) { SetSegmentId(value); return *this;}

    
    inline GetSegmentVersionsRequest& WithSegmentId(Aws::String&& value) { SetSegmentId(std::move(value)); return *this;}

    
    inline GetSegmentVersionsRequest& WithSegmentId(const char* value) { SetSegmentId(value); return *this;}


    /**
     * The NextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * The NextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * The NextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    /**
     * The NextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * The NextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.
     */
    inline GetSegmentVersionsRequest& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * The NextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.
     */
    inline GetSegmentVersionsRequest& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * The NextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.
     */
    inline GetSegmentVersionsRequest& WithToken(const char* value) { SetToken(value); return *this;}

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
