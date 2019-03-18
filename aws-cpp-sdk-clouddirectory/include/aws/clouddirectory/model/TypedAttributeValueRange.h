/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CLOUDDIRECTORY_API TypedAttributeValueRange
  {
  public:
    TypedAttributeValueRange();
    TypedAttributeValueRange(Aws::Utils::Json::JsonView jsonValue);
    TypedAttributeValueRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The inclusive or exclusive range start.</p>
     */
    inline const RangeMode& GetStartMode() const{ return m_startMode; }

    /**
     * <p>The inclusive or exclusive range start.</p>
     */
    inline bool StartModeHasBeenSet() const { return m_startModeHasBeenSet; }

    /**
     * <p>The inclusive or exclusive range start.</p>
     */
    inline void SetStartMode(const RangeMode& value) { m_startModeHasBeenSet = true; m_startMode = value; }

    /**
     * <p>The inclusive or exclusive range start.</p>
     */
    inline void SetStartMode(RangeMode&& value) { m_startModeHasBeenSet = true; m_startMode = std::move(value); }

    /**
     * <p>The inclusive or exclusive range start.</p>
     */
    inline TypedAttributeValueRange& WithStartMode(const RangeMode& value) { SetStartMode(value); return *this;}

    /**
     * <p>The inclusive or exclusive range start.</p>
     */
    inline TypedAttributeValueRange& WithStartMode(RangeMode&& value) { SetStartMode(std::move(value)); return *this;}


    /**
     * <p>The value to start the range at.</p>
     */
    inline const TypedAttributeValue& GetStartValue() const{ return m_startValue; }

    /**
     * <p>The value to start the range at.</p>
     */
    inline bool StartValueHasBeenSet() const { return m_startValueHasBeenSet; }

    /**
     * <p>The value to start the range at.</p>
     */
    inline void SetStartValue(const TypedAttributeValue& value) { m_startValueHasBeenSet = true; m_startValue = value; }

    /**
     * <p>The value to start the range at.</p>
     */
    inline void SetStartValue(TypedAttributeValue&& value) { m_startValueHasBeenSet = true; m_startValue = std::move(value); }

    /**
     * <p>The value to start the range at.</p>
     */
    inline TypedAttributeValueRange& WithStartValue(const TypedAttributeValue& value) { SetStartValue(value); return *this;}

    /**
     * <p>The value to start the range at.</p>
     */
    inline TypedAttributeValueRange& WithStartValue(TypedAttributeValue&& value) { SetStartValue(std::move(value)); return *this;}


    /**
     * <p>The inclusive or exclusive range end.</p>
     */
    inline const RangeMode& GetEndMode() const{ return m_endMode; }

    /**
     * <p>The inclusive or exclusive range end.</p>
     */
    inline bool EndModeHasBeenSet() const { return m_endModeHasBeenSet; }

    /**
     * <p>The inclusive or exclusive range end.</p>
     */
    inline void SetEndMode(const RangeMode& value) { m_endModeHasBeenSet = true; m_endMode = value; }

    /**
     * <p>The inclusive or exclusive range end.</p>
     */
    inline void SetEndMode(RangeMode&& value) { m_endModeHasBeenSet = true; m_endMode = std::move(value); }

    /**
     * <p>The inclusive or exclusive range end.</p>
     */
    inline TypedAttributeValueRange& WithEndMode(const RangeMode& value) { SetEndMode(value); return *this;}

    /**
     * <p>The inclusive or exclusive range end.</p>
     */
    inline TypedAttributeValueRange& WithEndMode(RangeMode&& value) { SetEndMode(std::move(value)); return *this;}


    /**
     * <p>The attribute value to terminate the range at.</p>
     */
    inline const TypedAttributeValue& GetEndValue() const{ return m_endValue; }

    /**
     * <p>The attribute value to terminate the range at.</p>
     */
    inline bool EndValueHasBeenSet() const { return m_endValueHasBeenSet; }

    /**
     * <p>The attribute value to terminate the range at.</p>
     */
    inline void SetEndValue(const TypedAttributeValue& value) { m_endValueHasBeenSet = true; m_endValue = value; }

    /**
     * <p>The attribute value to terminate the range at.</p>
     */
    inline void SetEndValue(TypedAttributeValue&& value) { m_endValueHasBeenSet = true; m_endValue = std::move(value); }

    /**
     * <p>The attribute value to terminate the range at.</p>
     */
    inline TypedAttributeValueRange& WithEndValue(const TypedAttributeValue& value) { SetEndValue(value); return *this;}

    /**
     * <p>The attribute value to terminate the range at.</p>
     */
    inline TypedAttributeValueRange& WithEndValue(TypedAttributeValue&& value) { SetEndValue(std::move(value)); return *this;}

  private:

    RangeMode m_startMode;
    bool m_startModeHasBeenSet;

    TypedAttributeValue m_startValue;
    bool m_startValueHasBeenSet;

    RangeMode m_endMode;
    bool m_endModeHasBeenSet;

    TypedAttributeValue m_endValue;
    bool m_endValueHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
