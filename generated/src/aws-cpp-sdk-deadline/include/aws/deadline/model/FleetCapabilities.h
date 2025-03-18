/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/FleetAmountCapability.h>
#include <aws/deadline/model/FleetAttributeCapability.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The amounts and attributes of fleets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/FleetCapabilities">AWS
   * API Reference</a></p>
   */
  class FleetCapabilities
  {
  public:
    AWS_DEADLINE_API FleetCapabilities() = default;
    AWS_DEADLINE_API FleetCapabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API FleetCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amount capabilities of the fleet.</p>
     */
    inline const Aws::Vector<FleetAmountCapability>& GetAmounts() const { return m_amounts; }
    inline bool AmountsHasBeenSet() const { return m_amountsHasBeenSet; }
    template<typename AmountsT = Aws::Vector<FleetAmountCapability>>
    void SetAmounts(AmountsT&& value) { m_amountsHasBeenSet = true; m_amounts = std::forward<AmountsT>(value); }
    template<typename AmountsT = Aws::Vector<FleetAmountCapability>>
    FleetCapabilities& WithAmounts(AmountsT&& value) { SetAmounts(std::forward<AmountsT>(value)); return *this;}
    template<typename AmountsT = FleetAmountCapability>
    FleetCapabilities& AddAmounts(AmountsT&& value) { m_amountsHasBeenSet = true; m_amounts.emplace_back(std::forward<AmountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Attribute capabilities of the fleet.</p>
     */
    inline const Aws::Vector<FleetAttributeCapability>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<FleetAttributeCapability>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<FleetAttributeCapability>>
    FleetCapabilities& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = FleetAttributeCapability>
    FleetCapabilities& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<FleetAmountCapability> m_amounts;
    bool m_amountsHasBeenSet = false;

    Aws::Vector<FleetAttributeCapability> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
