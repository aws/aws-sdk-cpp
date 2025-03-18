/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/Behavior.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class ValidateSecurityProfileBehaviorsRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ValidateSecurityProfileBehaviorsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidateSecurityProfileBehaviors"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline const Aws::Vector<Behavior>& GetBehaviors() const { return m_behaviors; }
    inline bool BehaviorsHasBeenSet() const { return m_behaviorsHasBeenSet; }
    template<typename BehaviorsT = Aws::Vector<Behavior>>
    void SetBehaviors(BehaviorsT&& value) { m_behaviorsHasBeenSet = true; m_behaviors = std::forward<BehaviorsT>(value); }
    template<typename BehaviorsT = Aws::Vector<Behavior>>
    ValidateSecurityProfileBehaviorsRequest& WithBehaviors(BehaviorsT&& value) { SetBehaviors(std::forward<BehaviorsT>(value)); return *this;}
    template<typename BehaviorsT = Behavior>
    ValidateSecurityProfileBehaviorsRequest& AddBehaviors(BehaviorsT&& value) { m_behaviorsHasBeenSet = true; m_behaviors.emplace_back(std::forward<BehaviorsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Behavior> m_behaviors;
    bool m_behaviorsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
