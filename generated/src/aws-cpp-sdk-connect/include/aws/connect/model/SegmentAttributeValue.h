/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
    AWS_CONNECT_API SegmentAttributeValue();
    AWS_CONNECT_API SegmentAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SegmentAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of a segment attribute.</p>
     */
    inline const Aws::String& GetValueString() const{ return m_valueString; }
    inline bool ValueStringHasBeenSet() const { return m_valueStringHasBeenSet; }
    inline void SetValueString(const Aws::String& value) { m_valueStringHasBeenSet = true; m_valueString = value; }
    inline void SetValueString(Aws::String&& value) { m_valueStringHasBeenSet = true; m_valueString = std::move(value); }
    inline void SetValueString(const char* value) { m_valueStringHasBeenSet = true; m_valueString.assign(value); }
    inline SegmentAttributeValue& WithValueString(const Aws::String& value) { SetValueString(value); return *this;}
    inline SegmentAttributeValue& WithValueString(Aws::String&& value) { SetValueString(std::move(value)); return *this;}
    inline SegmentAttributeValue& WithValueString(const char* value) { SetValueString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of a segment attribute.</p>
     */
    inline const Aws::Map<Aws::String, SegmentAttributeValue>& GetValueMap() const{ return m_valueMap; }
    inline bool ValueMapHasBeenSet() const { return m_valueMapHasBeenSet; }
    inline void SetValueMap(const Aws::Map<Aws::String, SegmentAttributeValue>& value) { m_valueMapHasBeenSet = true; m_valueMap = value; }
    inline void SetValueMap(Aws::Map<Aws::String, SegmentAttributeValue>&& value) { m_valueMapHasBeenSet = true; m_valueMap = std::move(value); }
    inline SegmentAttributeValue& WithValueMap(const Aws::Map<Aws::String, SegmentAttributeValue>& value) { SetValueMap(value); return *this;}
    inline SegmentAttributeValue& WithValueMap(Aws::Map<Aws::String, SegmentAttributeValue>&& value) { SetValueMap(std::move(value)); return *this;}
    inline SegmentAttributeValue& AddValueMap(const Aws::String& key, const SegmentAttributeValue& value) { m_valueMapHasBeenSet = true; m_valueMap.emplace(key, value); return *this; }
    inline SegmentAttributeValue& AddValueMap(Aws::String&& key, const SegmentAttributeValue& value) { m_valueMapHasBeenSet = true; m_valueMap.emplace(std::move(key), value); return *this; }
    inline SegmentAttributeValue& AddValueMap(const Aws::String& key, SegmentAttributeValue&& value) { m_valueMapHasBeenSet = true; m_valueMap.emplace(key, std::move(value)); return *this; }
    inline SegmentAttributeValue& AddValueMap(Aws::String&& key, SegmentAttributeValue&& value) { m_valueMapHasBeenSet = true; m_valueMap.emplace(std::move(key), std::move(value)); return *this; }
    inline SegmentAttributeValue& AddValueMap(const char* key, SegmentAttributeValue&& value) { m_valueMapHasBeenSet = true; m_valueMap.emplace(key, std::move(value)); return *this; }
    inline SegmentAttributeValue& AddValueMap(const char* key, const SegmentAttributeValue& value) { m_valueMapHasBeenSet = true; m_valueMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value of a segment attribute.</p>
     */
    inline int GetValueInteger() const{ return m_valueInteger; }
    inline bool ValueIntegerHasBeenSet() const { return m_valueIntegerHasBeenSet; }
    inline void SetValueInteger(int value) { m_valueIntegerHasBeenSet = true; m_valueInteger = value; }
    inline SegmentAttributeValue& WithValueInteger(int value) { SetValueInteger(value); return *this;}
    ///@}
  private:

    Aws::String m_valueString;
    bool m_valueStringHasBeenSet = false;

    Aws::Map<Aws::String, SegmentAttributeValue> m_valueMap;
    bool m_valueMapHasBeenSet = false;

    int m_valueInteger;
    bool m_valueIntegerHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
