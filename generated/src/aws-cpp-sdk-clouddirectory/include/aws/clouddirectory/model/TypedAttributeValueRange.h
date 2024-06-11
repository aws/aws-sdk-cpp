/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/RangeMode.h>
#include <aws/clouddirectory/model/TypedAttributeValue.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>A range of attribute values. For more information, see <a
   * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_range_filters.html">Range
   * Filters</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/TypedAttributeValueRange">AWS
   * API Reference</a></p>
   */
  class TypedAttributeValueRange
  {
  public:
    AWS_CLOUDDIRECTORY_API TypedAttributeValueRange();
    AWS_CLOUDDIRECTORY_API TypedAttributeValueRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API TypedAttributeValueRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The inclusive or exclusive range start.</p>
     */
    inline const RangeMode& GetStartMode() const{ return m_startMode; }
    inline bool StartModeHasBeenSet() const { return m_startModeHasBeenSet; }
    inline void SetStartMode(const RangeMode& value) { m_startModeHasBeenSet = true; m_startMode = value; }
    inline void SetStartMode(RangeMode&& value) { m_startModeHasBeenSet = true; m_startMode = std::move(value); }
    inline TypedAttributeValueRange& WithStartMode(const RangeMode& value) { SetStartMode(value); return *this;}
    inline TypedAttributeValueRange& WithStartMode(RangeMode&& value) { SetStartMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to start the range at.</p>
     */
    inline const TypedAttributeValue& GetStartValue() const{ return m_startValue; }
    inline bool StartValueHasBeenSet() const { return m_startValueHasBeenSet; }
    inline void SetStartValue(const TypedAttributeValue& value) { m_startValueHasBeenSet = true; m_startValue = value; }
    inline void SetStartValue(TypedAttributeValue&& value) { m_startValueHasBeenSet = true; m_startValue = std::move(value); }
    inline TypedAttributeValueRange& WithStartValue(const TypedAttributeValue& value) { SetStartValue(value); return *this;}
    inline TypedAttributeValueRange& WithStartValue(TypedAttributeValue&& value) { SetStartValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inclusive or exclusive range end.</p>
     */
    inline const RangeMode& GetEndMode() const{ return m_endMode; }
    inline bool EndModeHasBeenSet() const { return m_endModeHasBeenSet; }
    inline void SetEndMode(const RangeMode& value) { m_endModeHasBeenSet = true; m_endMode = value; }
    inline void SetEndMode(RangeMode&& value) { m_endModeHasBeenSet = true; m_endMode = std::move(value); }
    inline TypedAttributeValueRange& WithEndMode(const RangeMode& value) { SetEndMode(value); return *this;}
    inline TypedAttributeValueRange& WithEndMode(RangeMode&& value) { SetEndMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute value to terminate the range at.</p>
     */
    inline const TypedAttributeValue& GetEndValue() const{ return m_endValue; }
    inline bool EndValueHasBeenSet() const { return m_endValueHasBeenSet; }
    inline void SetEndValue(const TypedAttributeValue& value) { m_endValueHasBeenSet = true; m_endValue = value; }
    inline void SetEndValue(TypedAttributeValue&& value) { m_endValueHasBeenSet = true; m_endValue = std::move(value); }
    inline TypedAttributeValueRange& WithEndValue(const TypedAttributeValue& value) { SetEndValue(value); return *this;}
    inline TypedAttributeValueRange& WithEndValue(TypedAttributeValue&& value) { SetEndValue(std::move(value)); return *this;}
    ///@}
  private:

    RangeMode m_startMode;
    bool m_startModeHasBeenSet = false;

    TypedAttributeValue m_startValue;
    bool m_startValueHasBeenSet = false;

    RangeMode m_endMode;
    bool m_endModeHasBeenSet = false;

    TypedAttributeValue m_endValue;
    bool m_endValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
