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
    AWS_CLOUDDIRECTORY_API TypedAttributeValueRange() = default;
    AWS_CLOUDDIRECTORY_API TypedAttributeValueRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API TypedAttributeValueRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The inclusive or exclusive range start.</p>
     */
    inline RangeMode GetStartMode() const { return m_startMode; }
    inline bool StartModeHasBeenSet() const { return m_startModeHasBeenSet; }
    inline void SetStartMode(RangeMode value) { m_startModeHasBeenSet = true; m_startMode = value; }
    inline TypedAttributeValueRange& WithStartMode(RangeMode value) { SetStartMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to start the range at.</p>
     */
    inline const TypedAttributeValue& GetStartValue() const { return m_startValue; }
    inline bool StartValueHasBeenSet() const { return m_startValueHasBeenSet; }
    template<typename StartValueT = TypedAttributeValue>
    void SetStartValue(StartValueT&& value) { m_startValueHasBeenSet = true; m_startValue = std::forward<StartValueT>(value); }
    template<typename StartValueT = TypedAttributeValue>
    TypedAttributeValueRange& WithStartValue(StartValueT&& value) { SetStartValue(std::forward<StartValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inclusive or exclusive range end.</p>
     */
    inline RangeMode GetEndMode() const { return m_endMode; }
    inline bool EndModeHasBeenSet() const { return m_endModeHasBeenSet; }
    inline void SetEndMode(RangeMode value) { m_endModeHasBeenSet = true; m_endMode = value; }
    inline TypedAttributeValueRange& WithEndMode(RangeMode value) { SetEndMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute value to terminate the range at.</p>
     */
    inline const TypedAttributeValue& GetEndValue() const { return m_endValue; }
    inline bool EndValueHasBeenSet() const { return m_endValueHasBeenSet; }
    template<typename EndValueT = TypedAttributeValue>
    void SetEndValue(EndValueT&& value) { m_endValueHasBeenSet = true; m_endValue = std::forward<EndValueT>(value); }
    template<typename EndValueT = TypedAttributeValue>
    TypedAttributeValueRange& WithEndValue(EndValueT&& value) { SetEndValue(std::forward<EndValueT>(value)); return *this;}
    ///@}
  private:

    RangeMode m_startMode{RangeMode::NOT_SET};
    bool m_startModeHasBeenSet = false;

    TypedAttributeValue m_startValue;
    bool m_startValueHasBeenSet = false;

    RangeMode m_endMode{RangeMode::NOT_SET};
    bool m_endModeHasBeenSet = false;

    TypedAttributeValue m_endValue;
    bool m_endValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
