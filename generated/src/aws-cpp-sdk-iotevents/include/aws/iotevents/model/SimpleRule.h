/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/ComparisonOperator.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>A rule that compares an input property value to a threshold value with a
   * comparison operator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/SimpleRule">AWS
   * API Reference</a></p>
   */
  class SimpleRule
  {
  public:
    AWS_IOTEVENTS_API SimpleRule();
    AWS_IOTEVENTS_API SimpleRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API SimpleRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value on the left side of the comparison operator. You can specify an AWS
     * IoT Events input attribute as an input property.</p>
     */
    inline const Aws::String& GetInputProperty() const{ return m_inputProperty; }

    /**
     * <p>The value on the left side of the comparison operator. You can specify an AWS
     * IoT Events input attribute as an input property.</p>
     */
    inline bool InputPropertyHasBeenSet() const { return m_inputPropertyHasBeenSet; }

    /**
     * <p>The value on the left side of the comparison operator. You can specify an AWS
     * IoT Events input attribute as an input property.</p>
     */
    inline void SetInputProperty(const Aws::String& value) { m_inputPropertyHasBeenSet = true; m_inputProperty = value; }

    /**
     * <p>The value on the left side of the comparison operator. You can specify an AWS
     * IoT Events input attribute as an input property.</p>
     */
    inline void SetInputProperty(Aws::String&& value) { m_inputPropertyHasBeenSet = true; m_inputProperty = std::move(value); }

    /**
     * <p>The value on the left side of the comparison operator. You can specify an AWS
     * IoT Events input attribute as an input property.</p>
     */
    inline void SetInputProperty(const char* value) { m_inputPropertyHasBeenSet = true; m_inputProperty.assign(value); }

    /**
     * <p>The value on the left side of the comparison operator. You can specify an AWS
     * IoT Events input attribute as an input property.</p>
     */
    inline SimpleRule& WithInputProperty(const Aws::String& value) { SetInputProperty(value); return *this;}

    /**
     * <p>The value on the left side of the comparison operator. You can specify an AWS
     * IoT Events input attribute as an input property.</p>
     */
    inline SimpleRule& WithInputProperty(Aws::String&& value) { SetInputProperty(std::move(value)); return *this;}

    /**
     * <p>The value on the left side of the comparison operator. You can specify an AWS
     * IoT Events input attribute as an input property.</p>
     */
    inline SimpleRule& WithInputProperty(const char* value) { SetInputProperty(value); return *this;}


    /**
     * <p>The comparison operator.</p>
     */
    inline const ComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }

    /**
     * <p>The comparison operator.</p>
     */
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }

    /**
     * <p>The comparison operator.</p>
     */
    inline void SetComparisonOperator(const ComparisonOperator& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p>The comparison operator.</p>
     */
    inline void SetComparisonOperator(ComparisonOperator&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }

    /**
     * <p>The comparison operator.</p>
     */
    inline SimpleRule& WithComparisonOperator(const ComparisonOperator& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p>The comparison operator.</p>
     */
    inline SimpleRule& WithComparisonOperator(ComparisonOperator&& value) { SetComparisonOperator(std::move(value)); return *this;}


    /**
     * <p>The value on the right side of the comparison operator. You can enter a
     * number or specify an AWS IoT Events input attribute.</p>
     */
    inline const Aws::String& GetThreshold() const{ return m_threshold; }

    /**
     * <p>The value on the right side of the comparison operator. You can enter a
     * number or specify an AWS IoT Events input attribute.</p>
     */
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

    /**
     * <p>The value on the right side of the comparison operator. You can enter a
     * number or specify an AWS IoT Events input attribute.</p>
     */
    inline void SetThreshold(const Aws::String& value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p>The value on the right side of the comparison operator. You can enter a
     * number or specify an AWS IoT Events input attribute.</p>
     */
    inline void SetThreshold(Aws::String&& value) { m_thresholdHasBeenSet = true; m_threshold = std::move(value); }

    /**
     * <p>The value on the right side of the comparison operator. You can enter a
     * number or specify an AWS IoT Events input attribute.</p>
     */
    inline void SetThreshold(const char* value) { m_thresholdHasBeenSet = true; m_threshold.assign(value); }

    /**
     * <p>The value on the right side of the comparison operator. You can enter a
     * number or specify an AWS IoT Events input attribute.</p>
     */
    inline SimpleRule& WithThreshold(const Aws::String& value) { SetThreshold(value); return *this;}

    /**
     * <p>The value on the right side of the comparison operator. You can enter a
     * number or specify an AWS IoT Events input attribute.</p>
     */
    inline SimpleRule& WithThreshold(Aws::String&& value) { SetThreshold(std::move(value)); return *this;}

    /**
     * <p>The value on the right side of the comparison operator. You can enter a
     * number or specify an AWS IoT Events input attribute.</p>
     */
    inline SimpleRule& WithThreshold(const char* value) { SetThreshold(value); return *this;}

  private:

    Aws::String m_inputProperty;
    bool m_inputPropertyHasBeenSet = false;

    ComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet = false;

    Aws::String m_threshold;
    bool m_thresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
