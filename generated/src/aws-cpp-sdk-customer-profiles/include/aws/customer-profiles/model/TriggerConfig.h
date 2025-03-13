/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/TriggerType.h>
#include <aws/customer-profiles/model/TriggerProperties.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>The trigger settings that determine how and when Amazon AppFlow runs the
   * specified flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/TriggerConfig">AWS
   * API Reference</a></p>
   */
  class TriggerConfig
  {
  public:
    AWS_CUSTOMERPROFILES_API TriggerConfig() = default;
    AWS_CUSTOMERPROFILES_API TriggerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API TriggerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the type of flow trigger. It can be OnDemand, Scheduled, or
     * Event.</p>
     */
    inline TriggerType GetTriggerType() const { return m_triggerType; }
    inline bool TriggerTypeHasBeenSet() const { return m_triggerTypeHasBeenSet; }
    inline void SetTriggerType(TriggerType value) { m_triggerTypeHasBeenSet = true; m_triggerType = value; }
    inline TriggerConfig& WithTriggerType(TriggerType value) { SetTriggerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration details of a schedule-triggered flow that you
     * define. Currently, these settings only apply to the Scheduled trigger type.</p>
     */
    inline const TriggerProperties& GetTriggerProperties() const { return m_triggerProperties; }
    inline bool TriggerPropertiesHasBeenSet() const { return m_triggerPropertiesHasBeenSet; }
    template<typename TriggerPropertiesT = TriggerProperties>
    void SetTriggerProperties(TriggerPropertiesT&& value) { m_triggerPropertiesHasBeenSet = true; m_triggerProperties = std::forward<TriggerPropertiesT>(value); }
    template<typename TriggerPropertiesT = TriggerProperties>
    TriggerConfig& WithTriggerProperties(TriggerPropertiesT&& value) { SetTriggerProperties(std::forward<TriggerPropertiesT>(value)); return *this;}
    ///@}
  private:

    TriggerType m_triggerType{TriggerType::NOT_SET};
    bool m_triggerTypeHasBeenSet = false;

    TriggerProperties m_triggerProperties;
    bool m_triggerPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
