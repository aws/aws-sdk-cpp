/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/StepAmountCapability.h>
#include <aws/deadline/model/StepAttributeCapability.h>
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


    /**
     * <p>The capability amounts that the step requires.</p>
     */
    inline const Aws::Vector<StepAmountCapability>& GetAmounts() const{ return m_amounts; }

    /**
     * <p>The capability amounts that the step requires.</p>
     */
    inline bool AmountsHasBeenSet() const { return m_amountsHasBeenSet; }

    /**
     * <p>The capability amounts that the step requires.</p>
     */
    inline void SetAmounts(const Aws::Vector<StepAmountCapability>& value) { m_amountsHasBeenSet = true; m_amounts = value; }

    /**
     * <p>The capability amounts that the step requires.</p>
     */
    inline void SetAmounts(Aws::Vector<StepAmountCapability>&& value) { m_amountsHasBeenSet = true; m_amounts = std::move(value); }

    /**
     * <p>The capability amounts that the step requires.</p>
     */
    inline StepRequiredCapabilities& WithAmounts(const Aws::Vector<StepAmountCapability>& value) { SetAmounts(value); return *this;}

    /**
     * <p>The capability amounts that the step requires.</p>
     */
    inline StepRequiredCapabilities& WithAmounts(Aws::Vector<StepAmountCapability>&& value) { SetAmounts(std::move(value)); return *this;}

    /**
     * <p>The capability amounts that the step requires.</p>
     */
    inline StepRequiredCapabilities& AddAmounts(const StepAmountCapability& value) { m_amountsHasBeenSet = true; m_amounts.push_back(value); return *this; }

    /**
     * <p>The capability amounts that the step requires.</p>
     */
    inline StepRequiredCapabilities& AddAmounts(StepAmountCapability&& value) { m_amountsHasBeenSet = true; m_amounts.push_back(std::move(value)); return *this; }


    /**
     * <p>The capability attributes that the step requires.</p>
     */
    inline const Aws::Vector<StepAttributeCapability>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The capability attributes that the step requires.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The capability attributes that the step requires.</p>
     */
    inline void SetAttributes(const Aws::Vector<StepAttributeCapability>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The capability attributes that the step requires.</p>
     */
    inline void SetAttributes(Aws::Vector<StepAttributeCapability>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The capability attributes that the step requires.</p>
     */
    inline StepRequiredCapabilities& WithAttributes(const Aws::Vector<StepAttributeCapability>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The capability attributes that the step requires.</p>
     */
    inline StepRequiredCapabilities& WithAttributes(Aws::Vector<StepAttributeCapability>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The capability attributes that the step requires.</p>
     */
    inline StepRequiredCapabilities& AddAttributes(const StepAttributeCapability& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The capability attributes that the step requires.</p>
     */
    inline StepRequiredCapabilities& AddAttributes(StepAttributeCapability&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<StepAmountCapability> m_amounts;
    bool m_amountsHasBeenSet = false;

    Aws::Vector<StepAttributeCapability> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
