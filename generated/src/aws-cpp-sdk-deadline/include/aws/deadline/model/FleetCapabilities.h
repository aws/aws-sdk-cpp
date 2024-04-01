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
    AWS_DEADLINE_API FleetCapabilities();
    AWS_DEADLINE_API FleetCapabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API FleetCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amount capabilities of the fleet.</p>
     */
    inline const Aws::Vector<FleetAmountCapability>& GetAmounts() const{ return m_amounts; }

    /**
     * <p>Amount capabilities of the fleet.</p>
     */
    inline bool AmountsHasBeenSet() const { return m_amountsHasBeenSet; }

    /**
     * <p>Amount capabilities of the fleet.</p>
     */
    inline void SetAmounts(const Aws::Vector<FleetAmountCapability>& value) { m_amountsHasBeenSet = true; m_amounts = value; }

    /**
     * <p>Amount capabilities of the fleet.</p>
     */
    inline void SetAmounts(Aws::Vector<FleetAmountCapability>&& value) { m_amountsHasBeenSet = true; m_amounts = std::move(value); }

    /**
     * <p>Amount capabilities of the fleet.</p>
     */
    inline FleetCapabilities& WithAmounts(const Aws::Vector<FleetAmountCapability>& value) { SetAmounts(value); return *this;}

    /**
     * <p>Amount capabilities of the fleet.</p>
     */
    inline FleetCapabilities& WithAmounts(Aws::Vector<FleetAmountCapability>&& value) { SetAmounts(std::move(value)); return *this;}

    /**
     * <p>Amount capabilities of the fleet.</p>
     */
    inline FleetCapabilities& AddAmounts(const FleetAmountCapability& value) { m_amountsHasBeenSet = true; m_amounts.push_back(value); return *this; }

    /**
     * <p>Amount capabilities of the fleet.</p>
     */
    inline FleetCapabilities& AddAmounts(FleetAmountCapability&& value) { m_amountsHasBeenSet = true; m_amounts.push_back(std::move(value)); return *this; }


    /**
     * <p>Attribute capabilities of the fleet.</p>
     */
    inline const Aws::Vector<FleetAttributeCapability>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Attribute capabilities of the fleet.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>Attribute capabilities of the fleet.</p>
     */
    inline void SetAttributes(const Aws::Vector<FleetAttributeCapability>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>Attribute capabilities of the fleet.</p>
     */
    inline void SetAttributes(Aws::Vector<FleetAttributeCapability>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>Attribute capabilities of the fleet.</p>
     */
    inline FleetCapabilities& WithAttributes(const Aws::Vector<FleetAttributeCapability>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Attribute capabilities of the fleet.</p>
     */
    inline FleetCapabilities& WithAttributes(Aws::Vector<FleetAttributeCapability>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Attribute capabilities of the fleet.</p>
     */
    inline FleetCapabilities& AddAttributes(const FleetAttributeCapability& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>Attribute capabilities of the fleet.</p>
     */
    inline FleetCapabilities& AddAttributes(FleetAttributeCapability&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FleetAmountCapability> m_amounts;
    bool m_amountsHasBeenSet = false;

    Aws::Vector<FleetAttributeCapability> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
