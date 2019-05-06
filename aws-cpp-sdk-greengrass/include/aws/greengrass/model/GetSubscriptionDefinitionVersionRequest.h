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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API GetSubscriptionDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    GetSubscriptionDefinitionVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSubscriptionDefinitionVersion"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline GetSubscriptionDefinitionVersionRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline GetSubscriptionDefinitionVersionRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline GetSubscriptionDefinitionVersionRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * The ID of the subscription definition.
     */
    inline const Aws::String& GetSubscriptionDefinitionId() const{ return m_subscriptionDefinitionId; }

    /**
     * The ID of the subscription definition.
     */
    inline bool SubscriptionDefinitionIdHasBeenSet() const { return m_subscriptionDefinitionIdHasBeenSet; }

    /**
     * The ID of the subscription definition.
     */
    inline void SetSubscriptionDefinitionId(const Aws::String& value) { m_subscriptionDefinitionIdHasBeenSet = true; m_subscriptionDefinitionId = value; }

    /**
     * The ID of the subscription definition.
     */
    inline void SetSubscriptionDefinitionId(Aws::String&& value) { m_subscriptionDefinitionIdHasBeenSet = true; m_subscriptionDefinitionId = std::move(value); }

    /**
     * The ID of the subscription definition.
     */
    inline void SetSubscriptionDefinitionId(const char* value) { m_subscriptionDefinitionIdHasBeenSet = true; m_subscriptionDefinitionId.assign(value); }

    /**
     * The ID of the subscription definition.
     */
    inline GetSubscriptionDefinitionVersionRequest& WithSubscriptionDefinitionId(const Aws::String& value) { SetSubscriptionDefinitionId(value); return *this;}

    /**
     * The ID of the subscription definition.
     */
    inline GetSubscriptionDefinitionVersionRequest& WithSubscriptionDefinitionId(Aws::String&& value) { SetSubscriptionDefinitionId(std::move(value)); return *this;}

    /**
     * The ID of the subscription definition.
     */
    inline GetSubscriptionDefinitionVersionRequest& WithSubscriptionDefinitionId(const char* value) { SetSubscriptionDefinitionId(value); return *this;}


    /**
     * The ID of the subscription definition version.
     */
    inline const Aws::String& GetSubscriptionDefinitionVersionId() const{ return m_subscriptionDefinitionVersionId; }

    /**
     * The ID of the subscription definition version.
     */
    inline bool SubscriptionDefinitionVersionIdHasBeenSet() const { return m_subscriptionDefinitionVersionIdHasBeenSet; }

    /**
     * The ID of the subscription definition version.
     */
    inline void SetSubscriptionDefinitionVersionId(const Aws::String& value) { m_subscriptionDefinitionVersionIdHasBeenSet = true; m_subscriptionDefinitionVersionId = value; }

    /**
     * The ID of the subscription definition version.
     */
    inline void SetSubscriptionDefinitionVersionId(Aws::String&& value) { m_subscriptionDefinitionVersionIdHasBeenSet = true; m_subscriptionDefinitionVersionId = std::move(value); }

    /**
     * The ID of the subscription definition version.
     */
    inline void SetSubscriptionDefinitionVersionId(const char* value) { m_subscriptionDefinitionVersionIdHasBeenSet = true; m_subscriptionDefinitionVersionId.assign(value); }

    /**
     * The ID of the subscription definition version.
     */
    inline GetSubscriptionDefinitionVersionRequest& WithSubscriptionDefinitionVersionId(const Aws::String& value) { SetSubscriptionDefinitionVersionId(value); return *this;}

    /**
     * The ID of the subscription definition version.
     */
    inline GetSubscriptionDefinitionVersionRequest& WithSubscriptionDefinitionVersionId(Aws::String&& value) { SetSubscriptionDefinitionVersionId(std::move(value)); return *this;}

    /**
     * The ID of the subscription definition version.
     */
    inline GetSubscriptionDefinitionVersionRequest& WithSubscriptionDefinitionVersionId(const char* value) { SetSubscriptionDefinitionVersionId(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::String m_subscriptionDefinitionId;
    bool m_subscriptionDefinitionIdHasBeenSet;

    Aws::String m_subscriptionDefinitionVersionId;
    bool m_subscriptionDefinitionVersionIdHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
