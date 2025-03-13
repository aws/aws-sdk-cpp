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
    AWS_GREENGRASS_API GetSubscriptionDefinitionVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSubscriptionDefinitionVersion"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;

    AWS_GREENGRASS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetSubscriptionDefinitionVersionRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the subscription definition.
     */
    inline const Aws::String& GetSubscriptionDefinitionId() const { return m_subscriptionDefinitionId; }
    inline bool SubscriptionDefinitionIdHasBeenSet() const { return m_subscriptionDefinitionIdHasBeenSet; }
    template<typename SubscriptionDefinitionIdT = Aws::String>
    void SetSubscriptionDefinitionId(SubscriptionDefinitionIdT&& value) { m_subscriptionDefinitionIdHasBeenSet = true; m_subscriptionDefinitionId = std::forward<SubscriptionDefinitionIdT>(value); }
    template<typename SubscriptionDefinitionIdT = Aws::String>
    GetSubscriptionDefinitionVersionRequest& WithSubscriptionDefinitionId(SubscriptionDefinitionIdT&& value) { SetSubscriptionDefinitionId(std::forward<SubscriptionDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the subscription definition version. This value maps to the
     * ''Version'' property of the corresponding ''VersionInformation'' object, which
     * is returned by ''ListSubscriptionDefinitionVersions'' requests. If the version
     * is the last one that was associated with a subscription definition, the value
     * also maps to the ''LatestVersion'' property of the corresponding
     * ''DefinitionInformation'' object.
     */
    inline const Aws::String& GetSubscriptionDefinitionVersionId() const { return m_subscriptionDefinitionVersionId; }
    inline bool SubscriptionDefinitionVersionIdHasBeenSet() const { return m_subscriptionDefinitionVersionIdHasBeenSet; }
    template<typename SubscriptionDefinitionVersionIdT = Aws::String>
    void SetSubscriptionDefinitionVersionId(SubscriptionDefinitionVersionIdT&& value) { m_subscriptionDefinitionVersionIdHasBeenSet = true; m_subscriptionDefinitionVersionId = std::forward<SubscriptionDefinitionVersionIdT>(value); }
    template<typename SubscriptionDefinitionVersionIdT = Aws::String>
    GetSubscriptionDefinitionVersionRequest& WithSubscriptionDefinitionVersionId(SubscriptionDefinitionVersionIdT&& value) { SetSubscriptionDefinitionVersionId(std::forward<SubscriptionDefinitionVersionIdT>(value)); return *this;}
    ///@}
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
