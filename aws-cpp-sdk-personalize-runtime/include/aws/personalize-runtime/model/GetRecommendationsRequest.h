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
#include <aws/personalize-runtime/PersonalizeRuntime_EXPORTS.h>
#include <aws/personalize-runtime/PersonalizeRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PersonalizeRuntime
{
namespace Model
{

  /**
   */
  class AWS_PERSONALIZERUNTIME_API GetRecommendationsRequest : public PersonalizeRuntimeRequest
  {
  public:
    GetRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRecommendations"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for getting
     * recommendations.</p>
     */
    inline const Aws::String& GetCampaignArn() const{ return m_campaignArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for getting
     * recommendations.</p>
     */
    inline bool CampaignArnHasBeenSet() const { return m_campaignArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for getting
     * recommendations.</p>
     */
    inline void SetCampaignArn(const Aws::String& value) { m_campaignArnHasBeenSet = true; m_campaignArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for getting
     * recommendations.</p>
     */
    inline void SetCampaignArn(Aws::String&& value) { m_campaignArnHasBeenSet = true; m_campaignArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for getting
     * recommendations.</p>
     */
    inline void SetCampaignArn(const char* value) { m_campaignArnHasBeenSet = true; m_campaignArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for getting
     * recommendations.</p>
     */
    inline GetRecommendationsRequest& WithCampaignArn(const Aws::String& value) { SetCampaignArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for getting
     * recommendations.</p>
     */
    inline GetRecommendationsRequest& WithCampaignArn(Aws::String&& value) { SetCampaignArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for getting
     * recommendations.</p>
     */
    inline GetRecommendationsRequest& WithCampaignArn(const char* value) { SetCampaignArn(value); return *this;}


    /**
     * <p>The item ID to provide recommendations for.</p> <p>Required for
     * <code>RELATED_ITEMS</code> recipe type.</p>
     */
    inline const Aws::String& GetItemId() const{ return m_itemId; }

    /**
     * <p>The item ID to provide recommendations for.</p> <p>Required for
     * <code>RELATED_ITEMS</code> recipe type.</p>
     */
    inline bool ItemIdHasBeenSet() const { return m_itemIdHasBeenSet; }

    /**
     * <p>The item ID to provide recommendations for.</p> <p>Required for
     * <code>RELATED_ITEMS</code> recipe type.</p>
     */
    inline void SetItemId(const Aws::String& value) { m_itemIdHasBeenSet = true; m_itemId = value; }

    /**
     * <p>The item ID to provide recommendations for.</p> <p>Required for
     * <code>RELATED_ITEMS</code> recipe type.</p>
     */
    inline void SetItemId(Aws::String&& value) { m_itemIdHasBeenSet = true; m_itemId = std::move(value); }

    /**
     * <p>The item ID to provide recommendations for.</p> <p>Required for
     * <code>RELATED_ITEMS</code> recipe type.</p>
     */
    inline void SetItemId(const char* value) { m_itemIdHasBeenSet = true; m_itemId.assign(value); }

    /**
     * <p>The item ID to provide recommendations for.</p> <p>Required for
     * <code>RELATED_ITEMS</code> recipe type.</p>
     */
    inline GetRecommendationsRequest& WithItemId(const Aws::String& value) { SetItemId(value); return *this;}

    /**
     * <p>The item ID to provide recommendations for.</p> <p>Required for
     * <code>RELATED_ITEMS</code> recipe type.</p>
     */
    inline GetRecommendationsRequest& WithItemId(Aws::String&& value) { SetItemId(std::move(value)); return *this;}

    /**
     * <p>The item ID to provide recommendations for.</p> <p>Required for
     * <code>RELATED_ITEMS</code> recipe type.</p>
     */
    inline GetRecommendationsRequest& WithItemId(const char* value) { SetItemId(value); return *this;}


    /**
     * <p>The user ID to provide recommendations for.</p> <p>Required for
     * <code>USER_PERSONALIZATION</code> recipe type.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The user ID to provide recommendations for.</p> <p>Required for
     * <code>USER_PERSONALIZATION</code> recipe type.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The user ID to provide recommendations for.</p> <p>Required for
     * <code>USER_PERSONALIZATION</code> recipe type.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The user ID to provide recommendations for.</p> <p>Required for
     * <code>USER_PERSONALIZATION</code> recipe type.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The user ID to provide recommendations for.</p> <p>Required for
     * <code>USER_PERSONALIZATION</code> recipe type.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The user ID to provide recommendations for.</p> <p>Required for
     * <code>USER_PERSONALIZATION</code> recipe type.</p>
     */
    inline GetRecommendationsRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The user ID to provide recommendations for.</p> <p>Required for
     * <code>USER_PERSONALIZATION</code> recipe type.</p>
     */
    inline GetRecommendationsRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The user ID to provide recommendations for.</p> <p>Required for
     * <code>USER_PERSONALIZATION</code> recipe type.</p>
     */
    inline GetRecommendationsRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The number of results to return. The default is 25. The maximum is 100.</p>
     */
    inline int GetNumResults() const{ return m_numResults; }

    /**
     * <p>The number of results to return. The default is 25. The maximum is 100.</p>
     */
    inline bool NumResultsHasBeenSet() const { return m_numResultsHasBeenSet; }

    /**
     * <p>The number of results to return. The default is 25. The maximum is 100.</p>
     */
    inline void SetNumResults(int value) { m_numResultsHasBeenSet = true; m_numResults = value; }

    /**
     * <p>The number of results to return. The default is 25. The maximum is 100.</p>
     */
    inline GetRecommendationsRequest& WithNumResults(int value) { SetNumResults(value); return *this;}

  private:

    Aws::String m_campaignArn;
    bool m_campaignArnHasBeenSet;

    Aws::String m_itemId;
    bool m_itemIdHasBeenSet;

    Aws::String m_userId;
    bool m_userIdHasBeenSet;

    int m_numResults;
    bool m_numResultsHasBeenSet;
  };

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
