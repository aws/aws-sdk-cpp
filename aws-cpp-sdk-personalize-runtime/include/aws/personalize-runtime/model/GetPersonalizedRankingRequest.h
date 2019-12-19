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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace PersonalizeRuntime
{
namespace Model
{

  /**
   */
  class AWS_PERSONALIZERUNTIME_API GetPersonalizedRankingRequest : public PersonalizeRuntimeRequest
  {
  public:
    GetPersonalizedRankingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPersonalizedRanking"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for generating the
     * personalized ranking.</p>
     */
    inline const Aws::String& GetCampaignArn() const{ return m_campaignArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for generating the
     * personalized ranking.</p>
     */
    inline bool CampaignArnHasBeenSet() const { return m_campaignArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for generating the
     * personalized ranking.</p>
     */
    inline void SetCampaignArn(const Aws::String& value) { m_campaignArnHasBeenSet = true; m_campaignArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for generating the
     * personalized ranking.</p>
     */
    inline void SetCampaignArn(Aws::String&& value) { m_campaignArnHasBeenSet = true; m_campaignArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for generating the
     * personalized ranking.</p>
     */
    inline void SetCampaignArn(const char* value) { m_campaignArnHasBeenSet = true; m_campaignArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for generating the
     * personalized ranking.</p>
     */
    inline GetPersonalizedRankingRequest& WithCampaignArn(const Aws::String& value) { SetCampaignArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for generating the
     * personalized ranking.</p>
     */
    inline GetPersonalizedRankingRequest& WithCampaignArn(Aws::String&& value) { SetCampaignArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for generating the
     * personalized ranking.</p>
     */
    inline GetPersonalizedRankingRequest& WithCampaignArn(const char* value) { SetCampaignArn(value); return *this;}


    /**
     * <p>A list of items (itemId's) to rank. If an item was not included in the
     * training dataset, the item is appended to the end of the reranked list. The
     * maximum is 500.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputList() const{ return m_inputList; }

    /**
     * <p>A list of items (itemId's) to rank. If an item was not included in the
     * training dataset, the item is appended to the end of the reranked list. The
     * maximum is 500.</p>
     */
    inline bool InputListHasBeenSet() const { return m_inputListHasBeenSet; }

    /**
     * <p>A list of items (itemId's) to rank. If an item was not included in the
     * training dataset, the item is appended to the end of the reranked list. The
     * maximum is 500.</p>
     */
    inline void SetInputList(const Aws::Vector<Aws::String>& value) { m_inputListHasBeenSet = true; m_inputList = value; }

    /**
     * <p>A list of items (itemId's) to rank. If an item was not included in the
     * training dataset, the item is appended to the end of the reranked list. The
     * maximum is 500.</p>
     */
    inline void SetInputList(Aws::Vector<Aws::String>&& value) { m_inputListHasBeenSet = true; m_inputList = std::move(value); }

    /**
     * <p>A list of items (itemId's) to rank. If an item was not included in the
     * training dataset, the item is appended to the end of the reranked list. The
     * maximum is 500.</p>
     */
    inline GetPersonalizedRankingRequest& WithInputList(const Aws::Vector<Aws::String>& value) { SetInputList(value); return *this;}

    /**
     * <p>A list of items (itemId's) to rank. If an item was not included in the
     * training dataset, the item is appended to the end of the reranked list. The
     * maximum is 500.</p>
     */
    inline GetPersonalizedRankingRequest& WithInputList(Aws::Vector<Aws::String>&& value) { SetInputList(std::move(value)); return *this;}

    /**
     * <p>A list of items (itemId's) to rank. If an item was not included in the
     * training dataset, the item is appended to the end of the reranked list. The
     * maximum is 500.</p>
     */
    inline GetPersonalizedRankingRequest& AddInputList(const Aws::String& value) { m_inputListHasBeenSet = true; m_inputList.push_back(value); return *this; }

    /**
     * <p>A list of items (itemId's) to rank. If an item was not included in the
     * training dataset, the item is appended to the end of the reranked list. The
     * maximum is 500.</p>
     */
    inline GetPersonalizedRankingRequest& AddInputList(Aws::String&& value) { m_inputListHasBeenSet = true; m_inputList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of items (itemId's) to rank. If an item was not included in the
     * training dataset, the item is appended to the end of the reranked list. The
     * maximum is 500.</p>
     */
    inline GetPersonalizedRankingRequest& AddInputList(const char* value) { m_inputListHasBeenSet = true; m_inputList.push_back(value); return *this; }


    /**
     * <p>The user for which you want the campaign to provide a personalized
     * ranking.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The user for which you want the campaign to provide a personalized
     * ranking.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The user for which you want the campaign to provide a personalized
     * ranking.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The user for which you want the campaign to provide a personalized
     * ranking.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The user for which you want the campaign to provide a personalized
     * ranking.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The user for which you want the campaign to provide a personalized
     * ranking.</p>
     */
    inline GetPersonalizedRankingRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The user for which you want the campaign to provide a personalized
     * ranking.</p>
     */
    inline GetPersonalizedRankingRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The user for which you want the campaign to provide a personalized
     * ranking.</p>
     */
    inline GetPersonalizedRankingRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type. For more information, see Contextual Metadata.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const{ return m_context; }

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type. For more information, see Contextual Metadata.</p>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type. For more information, see Contextual Metadata.</p>
     */
    inline void SetContext(const Aws::Map<Aws::String, Aws::String>& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type. For more information, see Contextual Metadata.</p>
     */
    inline void SetContext(Aws::Map<Aws::String, Aws::String>&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type. For more information, see Contextual Metadata.</p>
     */
    inline GetPersonalizedRankingRequest& WithContext(const Aws::Map<Aws::String, Aws::String>& value) { SetContext(value); return *this;}

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type. For more information, see Contextual Metadata.</p>
     */
    inline GetPersonalizedRankingRequest& WithContext(Aws::Map<Aws::String, Aws::String>&& value) { SetContext(std::move(value)); return *this;}

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type. For more information, see Contextual Metadata.</p>
     */
    inline GetPersonalizedRankingRequest& AddContext(const Aws::String& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type. For more information, see Contextual Metadata.</p>
     */
    inline GetPersonalizedRankingRequest& AddContext(Aws::String&& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type. For more information, see Contextual Metadata.</p>
     */
    inline GetPersonalizedRankingRequest& AddContext(const Aws::String& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type. For more information, see Contextual Metadata.</p>
     */
    inline GetPersonalizedRankingRequest& AddContext(Aws::String&& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type. For more information, see Contextual Metadata.</p>
     */
    inline GetPersonalizedRankingRequest& AddContext(const char* key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type. For more information, see Contextual Metadata.</p>
     */
    inline GetPersonalizedRankingRequest& AddContext(Aws::String&& key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type. For more information, see Contextual Metadata.</p>
     */
    inline GetPersonalizedRankingRequest& AddContext(const char* key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }

  private:

    Aws::String m_campaignArn;
    bool m_campaignArnHasBeenSet;

    Aws::Vector<Aws::String> m_inputList;
    bool m_inputListHasBeenSet;

    Aws::String m_userId;
    bool m_userIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_context;
    bool m_contextHasBeenSet;
  };

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
