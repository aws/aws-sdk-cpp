/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A value for a segment attribute. This is structured as a map where the key is
   * <code>valueString</code> and the value is a string.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SegmentAttributeValue">AWS
   * API Reference</a></p>
   */
  class SegmentAttributeValue
  {
  public:
    AWS_CONNECT_API SegmentAttributeValue() = default;
    AWS_CONNECT_API SegmentAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SegmentAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of a segment attribute.</p>
     */
    inline const Aws::String& GetValueString() const { return m_valueString; }
    inline bool ValueStringHasBeenSet() const { return m_valueStringHasBeenSet; }
    template<typename ValueStringT = Aws::String>
    void SetValueString(ValueStringT&& value) { m_valueStringHasBeenSet = true; m_valueString = std::forward<ValueStringT>(value); }
    template<typename ValueStringT = Aws::String>
    SegmentAttributeValue& WithValueString(ValueStringT&& value) { SetValueString(std::forward<ValueStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of a segment attribute.</p>
     */
    inline const Aws::Map<Aws::String, SegmentAttributeValue>& GetValueMap() const { return m_valueMap; }
    inline bool ValueMapHasBeenSet() const { return m_valueMapHasBeenSet; }
    template<typename ValueMapT = Aws::Map<Aws::String, SegmentAttributeValue>>
    void SetValueMap(ValueMapT&& value) { m_valueMapHasBeenSet = true; m_valueMap = std::forward<ValueMapT>(value); }
    template<typename ValueMapT = Aws::Map<Aws::String, SegmentAttributeValue>>
    SegmentAttributeValue& WithValueMap(ValueMapT&& value) { SetValueMap(std::forward<ValueMapT>(value)); return *this;}
    template<typename ValueMapKeyT = Aws::String, typename ValueMapValueT = SegmentAttributeValue>
    SegmentAttributeValue& AddValueMap(ValueMapKeyT&& key, ValueMapValueT&& value) {
      m_valueMapHasBeenSet = true; m_valueMap.emplace(std::forward<ValueMapKeyT>(key), std::forward<ValueMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The value of a segment attribute.</p>
     */
    inline int GetValueInteger() const { return m_valueInteger; }
    inline bool ValueIntegerHasBeenSet() const { return m_valueIntegerHasBeenSet; }
    inline void SetValueInteger(int value) { m_valueIntegerHasBeenSet = true; m_valueInteger = value; }
    inline SegmentAttributeValue& WithValueInteger(int value) { SetValueInteger(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of a segment attribute. This is only supported for system-defined
     * attributes, not for user-defined attributes.</p>
     */
    inline const Aws::Vector<SegmentAttributeValue>& GetValueList() const { return m_valueList; }
    inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }
    template<typename ValueListT = Aws::Vector<SegmentAttributeValue>>
    void SetValueList(ValueListT&& value) { m_valueListHasBeenSet = true; m_valueList = std::forward<ValueListT>(value); }
    template<typename ValueListT = Aws::Vector<SegmentAttributeValue>>
    SegmentAttributeValue& WithValueList(ValueListT&& value) { SetValueList(std::forward<ValueListT>(value)); return *this;}
    template<typename ValueListT = SegmentAttributeValue>
    SegmentAttributeValue& AddValueList(ValueListT&& value) { m_valueListHasBeenSet = true; m_valueList.emplace_back(std::forward<ValueListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value of a segment attribute that has to be a valid ARN. This is only
     * supported for system-defined attributes, not for user-defined attributes.</p>
     */
    inline const Aws::String& GetValueArn() const { return m_valueArn; }
    inline bool ValueArnHasBeenSet() const { return m_valueArnHasBeenSet; }
    template<typename ValueArnT = Aws::String>
    void SetValueArn(ValueArnT&& value) { m_valueArnHasBeenSet = true; m_valueArn = std::forward<ValueArnT>(value); }
    template<typename ValueArnT = Aws::String>
    SegmentAttributeValue& WithValueArn(ValueArnT&& value) { SetValueArn(std::forward<ValueArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_valueString;
    bool m_valueStringHasBeenSet = false;

    Aws::Map<Aws::String, SegmentAttributeValue> m_valueMap;
    bool m_valueMapHasBeenSet = false;

    int m_valueInteger{0};
    bool m_valueIntegerHasBeenSet = false;

    Aws::Vector<SegmentAttributeValue> m_valueList;
    bool m_valueListHasBeenSet = false;

    Aws::String m_valueArn;
    bool m_valueArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
