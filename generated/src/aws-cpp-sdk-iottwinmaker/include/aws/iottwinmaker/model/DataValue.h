/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iottwinmaker/model/RelationshipValue.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>An object that specifies a value for a property.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/DataValue">AWS
   * API Reference</a></p>
   */
  class DataValue
  {
  public:
    AWS_IOTTWINMAKER_API DataValue() = default;
    AWS_IOTTWINMAKER_API DataValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API DataValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A Boolean value.</p>
     */
    inline bool GetBooleanValue() const { return m_booleanValue; }
    inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }
    inline void SetBooleanValue(bool value) { m_booleanValueHasBeenSet = true; m_booleanValue = value; }
    inline DataValue& WithBooleanValue(bool value) { SetBooleanValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A double value.</p>
     */
    inline double GetDoubleValue() const { return m_doubleValue; }
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }
    inline void SetDoubleValue(double value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }
    inline DataValue& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer value.</p>
     */
    inline int GetIntegerValue() const { return m_integerValue; }
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }
    inline void SetIntegerValue(int value) { m_integerValueHasBeenSet = true; m_integerValue = value; }
    inline DataValue& WithIntegerValue(int value) { SetIntegerValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A long value.</p>
     */
    inline long long GetLongValue() const { return m_longValue; }
    inline bool LongValueHasBeenSet() const { return m_longValueHasBeenSet; }
    inline void SetLongValue(long long value) { m_longValueHasBeenSet = true; m_longValue = value; }
    inline DataValue& WithLongValue(long long value) { SetLongValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string value.</p>
     */
    inline const Aws::String& GetStringValue() const { return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    template<typename StringValueT = Aws::String>
    void SetStringValue(StringValueT&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::forward<StringValueT>(value); }
    template<typename StringValueT = Aws::String>
    DataValue& WithStringValue(StringValueT&& value) { SetStringValue(std::forward<StringValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of multiple values.</p>
     */
    inline const Aws::Vector<DataValue>& GetListValue() const { return m_listValue; }
    inline bool ListValueHasBeenSet() const { return m_listValueHasBeenSet; }
    template<typename ListValueT = Aws::Vector<DataValue>>
    void SetListValue(ListValueT&& value) { m_listValueHasBeenSet = true; m_listValue = std::forward<ListValueT>(value); }
    template<typename ListValueT = Aws::Vector<DataValue>>
    DataValue& WithListValue(ListValueT&& value) { SetListValue(std::forward<ListValueT>(value)); return *this;}
    template<typename ListValueT = DataValue>
    DataValue& AddListValue(ListValueT&& value) { m_listValueHasBeenSet = true; m_listValue.emplace_back(std::forward<ListValueT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that maps strings to multiple <code>DataValue</code> objects.</p>
     */
    inline const Aws::Map<Aws::String, DataValue>& GetMapValue() const { return m_mapValue; }
    inline bool MapValueHasBeenSet() const { return m_mapValueHasBeenSet; }
    template<typename MapValueT = Aws::Map<Aws::String, DataValue>>
    void SetMapValue(MapValueT&& value) { m_mapValueHasBeenSet = true; m_mapValue = std::forward<MapValueT>(value); }
    template<typename MapValueT = Aws::Map<Aws::String, DataValue>>
    DataValue& WithMapValue(MapValueT&& value) { SetMapValue(std::forward<MapValueT>(value)); return *this;}
    template<typename MapValueKeyT = Aws::String, typename MapValueValueT = DataValue>
    DataValue& AddMapValue(MapValueKeyT&& key, MapValueValueT&& value) {
      m_mapValueHasBeenSet = true; m_mapValue.emplace(std::forward<MapValueKeyT>(key), std::forward<MapValueValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A value that relates a component to another component.</p>
     */
    inline const RelationshipValue& GetRelationshipValue() const { return m_relationshipValue; }
    inline bool RelationshipValueHasBeenSet() const { return m_relationshipValueHasBeenSet; }
    template<typename RelationshipValueT = RelationshipValue>
    void SetRelationshipValue(RelationshipValueT&& value) { m_relationshipValueHasBeenSet = true; m_relationshipValue = std::forward<RelationshipValueT>(value); }
    template<typename RelationshipValueT = RelationshipValue>
    DataValue& WithRelationshipValue(RelationshipValueT&& value) { SetRelationshipValue(std::forward<RelationshipValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An expression that produces the value.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    DataValue& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}
  private:

    bool m_booleanValue{false};
    bool m_booleanValueHasBeenSet = false;

    double m_doubleValue{0.0};
    bool m_doubleValueHasBeenSet = false;

    int m_integerValue{0};
    bool m_integerValueHasBeenSet = false;

    long long m_longValue{0};
    bool m_longValueHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    Aws::Vector<DataValue> m_listValue;
    bool m_listValueHasBeenSet = false;

    Aws::Map<Aws::String, DataValue> m_mapValue;
    bool m_mapValueHasBeenSet = false;

    RelationshipValue m_relationshipValue;
    bool m_relationshipValueHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
