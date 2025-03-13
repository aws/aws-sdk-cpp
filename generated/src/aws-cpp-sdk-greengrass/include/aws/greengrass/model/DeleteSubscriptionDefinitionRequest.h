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
namespace Greengrass
{
namespace Model
{

  /**
   */
  class DeleteSubscriptionDefinitionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API DeleteSubscriptionDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSubscriptionDefinition"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The ID of the subscription definition.
     */
    inline const Aws::String& GetSubscriptionDefinitionId() const { return m_subscriptionDefinitionId; }
    inline bool SubscriptionDefinitionIdHasBeenSet() const { return m_subscriptionDefinitionIdHasBeenSet; }
    template<typename SubscriptionDefinitionIdT = Aws::String>
    void SetSubscriptionDefinitionId(SubscriptionDefinitionIdT&& value) { m_subscriptionDefinitionIdHasBeenSet = true; m_subscriptionDefinitionId = std::forward<SubscriptionDefinitionIdT>(value); }
    template<typename SubscriptionDefinitionIdT = Aws::String>
    DeleteSubscriptionDefinitionRequest& WithSubscriptionDefinitionId(SubscriptionDefinitionIdT&& value) { SetSubscriptionDefinitionId(std::forward<SubscriptionDefinitionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_subscriptionDefinitionId;
    bool m_subscriptionDefinitionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
