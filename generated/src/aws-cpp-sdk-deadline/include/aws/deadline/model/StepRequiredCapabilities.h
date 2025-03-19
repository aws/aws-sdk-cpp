/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/StepAttributeCapability.h>
#include <aws/deadline/model/StepAmountCapability.h>
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
   * <p>The details of required step capabilities.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/StepRequiredCapabilities">AWS
   * API Reference</a></p>
   */
  class StepRequiredCapabilities
  {
  public:
    AWS_DEADLINE_API StepRequiredCapabilities() = default;
    AWS_DEADLINE_API StepRequiredCapabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API StepRequiredCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The capability attributes that the step requires.</p>
     */
    inline const Aws::Vector<StepAttributeCapability>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<StepAttributeCapability>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<StepAttributeCapability>>
    StepRequiredCapabilities& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = StepAttributeCapability>
    StepRequiredCapabilities& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The capability amounts that the step requires.</p>
     */
    inline const Aws::Vector<StepAmountCapability>& GetAmounts() const { return m_amounts; }
    inline bool AmountsHasBeenSet() const { return m_amountsHasBeenSet; }
    template<typename AmountsT = Aws::Vector<StepAmountCapability>>
    void SetAmounts(AmountsT&& value) { m_amountsHasBeenSet = true; m_amounts = std::forward<AmountsT>(value); }
    template<typename AmountsT = Aws::Vector<StepAmountCapability>>
    StepRequiredCapabilities& WithAmounts(AmountsT&& value) { SetAmounts(std::forward<AmountsT>(value)); return *this;}
    template<typename AmountsT = StepAmountCapability>
    StepRequiredCapabilities& AddAmounts(AmountsT&& value) { m_amountsHasBeenSet = true; m_amounts.emplace_back(std::forward<AmountsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<StepAttributeCapability> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Vector<StepAmountCapability> m_amounts;
    bool m_amountsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
