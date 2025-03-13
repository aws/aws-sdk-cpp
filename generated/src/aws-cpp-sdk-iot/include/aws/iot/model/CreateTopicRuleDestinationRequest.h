/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/iot/model/TopicRuleDestinationConfiguration.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class CreateTopicRuleDestinationRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateTopicRuleDestinationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTopicRuleDestination"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The topic rule destination configuration.</p>
     */
    inline const TopicRuleDestinationConfiguration& GetDestinationConfiguration() const { return m_destinationConfiguration; }
    inline bool DestinationConfigurationHasBeenSet() const { return m_destinationConfigurationHasBeenSet; }
    template<typename DestinationConfigurationT = TopicRuleDestinationConfiguration>
    void SetDestinationConfiguration(DestinationConfigurationT&& value) { m_destinationConfigurationHasBeenSet = true; m_destinationConfiguration = std::forward<DestinationConfigurationT>(value); }
    template<typename DestinationConfigurationT = TopicRuleDestinationConfiguration>
    CreateTopicRuleDestinationRequest& WithDestinationConfiguration(DestinationConfigurationT&& value) { SetDestinationConfiguration(std::forward<DestinationConfigurationT>(value)); return *this;}
    ///@}
  private:

    TopicRuleDestinationConfiguration m_destinationConfiguration;
    bool m_destinationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
