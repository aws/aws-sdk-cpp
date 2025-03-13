/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/RoutingStrategy.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class UpdateAliasRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API UpdateAliasRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAlias"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the alias that you want to update. You can use either
     * the alias ID or ARN value.</p>
     */
    inline const Aws::String& GetAliasId() const { return m_aliasId; }
    inline bool AliasIdHasBeenSet() const { return m_aliasIdHasBeenSet; }
    template<typename AliasIdT = Aws::String>
    void SetAliasId(AliasIdT&& value) { m_aliasIdHasBeenSet = true; m_aliasId = std::forward<AliasIdT>(value); }
    template<typename AliasIdT = Aws::String>
    UpdateAliasRequest& WithAliasId(AliasIdT&& value) { SetAliasId(std::forward<AliasIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateAliasRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable description of the alias.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateAliasRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routing configuration, including routing type and fleet target, for the
     * alias.</p>
     */
    inline const RoutingStrategy& GetRoutingStrategy() const { return m_routingStrategy; }
    inline bool RoutingStrategyHasBeenSet() const { return m_routingStrategyHasBeenSet; }
    template<typename RoutingStrategyT = RoutingStrategy>
    void SetRoutingStrategy(RoutingStrategyT&& value) { m_routingStrategyHasBeenSet = true; m_routingStrategy = std::forward<RoutingStrategyT>(value); }
    template<typename RoutingStrategyT = RoutingStrategy>
    UpdateAliasRequest& WithRoutingStrategy(RoutingStrategyT&& value) { SetRoutingStrategy(std::forward<RoutingStrategyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_aliasId;
    bool m_aliasIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    RoutingStrategy m_routingStrategy;
    bool m_routingStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
