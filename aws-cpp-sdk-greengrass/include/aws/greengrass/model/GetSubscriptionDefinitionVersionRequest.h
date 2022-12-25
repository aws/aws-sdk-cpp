/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetSubscriptionDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API GetSubscriptionDefinitionVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSubscriptionDefinitionVersion"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;

    AWS_GREENGRASS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
     * The ID of the subscription definition version. This value maps to the
     * ''Version'' property of the corresponding ''VersionInformation'' object, which
     * is returned by ''ListSubscriptionDefinitionVersions'' requests. If the version
     * is the last one that was associated with a subscription definition, the value
     * also maps to the ''LatestVersion'' property of the corresponding
     * ''DefinitionInformation'' object.
     */
    inline const Aws::String& GetSubscriptionDefinitionVersionId() const{ return m_subscriptionDefinitionVersionId; }

    /**
     * The ID of the subscription definition version. This value maps to the
     * ''Version'' property of the corresponding ''VersionInformation'' object, which
     * is returned by ''ListSubscriptionDefinitionVersions'' requests. If the version
     * is the last one that was associated with a subscription definition, the value
     * also maps to the ''LatestVersion'' property of the corresponding
     * ''DefinitionInformation'' object.
     */
    inline bool SubscriptionDefinitionVersionIdHasBeenSet() const { return m_subscriptionDefinitionVersionIdHasBeenSet; }

    /**
     * The ID of the subscription definition version. This value maps to the
     * ''Version'' property of the corresponding ''VersionInformation'' object, which
     * is returned by ''ListSubscriptionDefinitionVersions'' requests. If the version
     * is the last one that was associated with a subscription definition, the value
     * also maps to the ''LatestVersion'' property of the corresponding
     * ''DefinitionInformation'' object.
     */
    inline void SetSubscriptionDefinitionVersionId(const Aws::String& value) { m_subscriptionDefinitionVersionIdHasBeenSet = true; m_subscriptionDefinitionVersionId = value; }

    /**
     * The ID of the subscription definition version. This value maps to the
     * ''Version'' property of the corresponding ''VersionInformation'' object, which
     * is returned by ''ListSubscriptionDefinitionVersions'' requests. If the version
     * is the last one that was associated with a subscription definition, the value
     * also maps to the ''LatestVersion'' property of the corresponding
     * ''DefinitionInformation'' object.
     */
    inline void SetSubscriptionDefinitionVersionId(Aws::String&& value) { m_subscriptionDefinitionVersionIdHasBeenSet = true; m_subscriptionDefinitionVersionId = std::move(value); }

    /**
     * The ID of the subscription definition version. This value maps to the
     * ''Version'' property of the corresponding ''VersionInformation'' object, which
     * is returned by ''ListSubscriptionDefinitionVersions'' requests. If the version
     * is the last one that was associated with a subscription definition, the value
     * also maps to the ''LatestVersion'' property of the corresponding
     * ''DefinitionInformation'' object.
     */
    inline void SetSubscriptionDefinitionVersionId(const char* value) { m_subscriptionDefinitionVersionIdHasBeenSet = true; m_subscriptionDefinitionVersionId.assign(value); }

    /**
     * The ID of the subscription definition version. This value maps to the
     * ''Version'' property of the corresponding ''VersionInformation'' object, which
     * is returned by ''ListSubscriptionDefinitionVersions'' requests. If the version
     * is the last one that was associated with a subscription definition, the value
     * also maps to the ''LatestVersion'' property of the corresponding
     * ''DefinitionInformation'' object.
     */
    inline GetSubscriptionDefinitionVersionRequest& WithSubscriptionDefinitionVersionId(const Aws::String& value) { SetSubscriptionDefinitionVersionId(value); return *this;}

    /**
     * The ID of the subscription definition version. This value maps to the
     * ''Version'' property of the corresponding ''VersionInformation'' object, which
     * is returned by ''ListSubscriptionDefinitionVersions'' requests. If the version
     * is the last one that was associated with a subscription definition, the value
     * also maps to the ''LatestVersion'' property of the corresponding
     * ''DefinitionInformation'' object.
     */
    inline GetSubscriptionDefinitionVersionRequest& WithSubscriptionDefinitionVersionId(Aws::String&& value) { SetSubscriptionDefinitionVersionId(std::move(value)); return *this;}

    /**
     * The ID of the subscription definition version. This value maps to the
     * ''Version'' property of the corresponding ''VersionInformation'' object, which
     * is returned by ''ListSubscriptionDefinitionVersions'' requests. If the version
     * is the last one that was associated with a subscription definition, the value
     * also maps to the ''LatestVersion'' property of the corresponding
     * ''DefinitionInformation'' object.
     */
    inline GetSubscriptionDefinitionVersionRequest& WithSubscriptionDefinitionVersionId(const char* value) { SetSubscriptionDefinitionVersionId(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_subscriptionDefinitionId;
    bool m_subscriptionDefinitionIdHasBeenSet = false;

    Aws::String m_subscriptionDefinitionVersionId;
    bool m_subscriptionDefinitionVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
