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
    AWS_DEADLINE_API StepRequiredCapabilities();
    AWS_DEADLINE_API StepRequiredCapabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API StepRequiredCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The capability attributes that the step requires.</p>
     */
    inline const Aws::Vector<StepAttributeCapability>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Vector<StepAttributeCapability>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Vector<StepAttributeCapability>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline StepRequiredCapabilities& WithAttributes(const Aws::Vector<StepAttributeCapability>& value) { SetAttributes(value); return *this;}
    inline StepRequiredCapabilities& WithAttributes(Aws::Vector<StepAttributeCapability>&& value) { SetAttributes(std::move(value)); return *this;}
    inline StepRequiredCapabilities& AddAttributes(const StepAttributeCapability& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }
    inline StepRequiredCapabilities& AddAttributes(StepAttributeCapability&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The capability amounts that the step requires.</p>
     */
    inline const Aws::Vector<StepAmountCapability>& GetAmounts() const{ return m_amounts; }
    inline bool AmountsHasBeenSet() const { return m_amountsHasBeenSet; }
    inline void SetAmounts(const Aws::Vector<StepAmountCapability>& value) { m_amountsHasBeenSet = true; m_amounts = value; }
    inline void SetAmounts(Aws::Vector<StepAmountCapability>&& value) { m_amountsHasBeenSet = true; m_amounts = std::move(value); }
    inline StepRequiredCapabilities& WithAmounts(const Aws::Vector<StepAmountCapability>& value) { SetAmounts(value); return *this;}
    inline StepRequiredCapabilities& WithAmounts(Aws::Vector<StepAmountCapability>&& value) { SetAmounts(std::move(value)); return *this;}
    inline StepRequiredCapabilities& AddAmounts(const StepAmountCapability& value) { m_amountsHasBeenSet = true; m_amounts.push_back(value); return *this; }
    inline StepRequiredCapabilities& AddAmounts(StepAmountCapability&& value) { m_amountsHasBeenSet = true; m_amounts.push_back(std::move(value)); return *this; }
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
