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
    AWS_IOTTWINMAKER_API DataValue();
    AWS_IOTTWINMAKER_API DataValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API DataValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A Boolean value.</p>
     */
    inline bool GetBooleanValue() const{ return m_booleanValue; }
    inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }
    inline void SetBooleanValue(bool value) { m_booleanValueHasBeenSet = true; m_booleanValue = value; }
    inline DataValue& WithBooleanValue(bool value) { SetBooleanValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A double value.</p>
     */
    inline double GetDoubleValue() const{ return m_doubleValue; }
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }
    inline void SetDoubleValue(double value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }
    inline DataValue& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer value.</p>
     */
    inline int GetIntegerValue() const{ return m_integerValue; }
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }
    inline void SetIntegerValue(int value) { m_integerValueHasBeenSet = true; m_integerValue = value; }
    inline DataValue& WithIntegerValue(int value) { SetIntegerValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A long value.</p>
     */
    inline long long GetLongValue() const{ return m_longValue; }
    inline bool LongValueHasBeenSet() const { return m_longValueHasBeenSet; }
    inline void SetLongValue(long long value) { m_longValueHasBeenSet = true; m_longValue = value; }
    inline DataValue& WithLongValue(long long value) { SetLongValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string value.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }
    inline DataValue& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}
    inline DataValue& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}
    inline DataValue& WithStringValue(const char* value) { SetStringValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of multiple values.</p>
     */
    inline const Aws::Vector<DataValue>& GetListValue() const{ return m_listValue; }
    inline bool ListValueHasBeenSet() const { return m_listValueHasBeenSet; }
    inline void SetListValue(const Aws::Vector<DataValue>& value) { m_listValueHasBeenSet = true; m_listValue = value; }
    inline void SetListValue(Aws::Vector<DataValue>&& value) { m_listValueHasBeenSet = true; m_listValue = std::move(value); }
    inline DataValue& WithListValue(const Aws::Vector<DataValue>& value) { SetListValue(value); return *this;}
    inline DataValue& WithListValue(Aws::Vector<DataValue>&& value) { SetListValue(std::move(value)); return *this;}
    inline DataValue& AddListValue(const DataValue& value) { m_listValueHasBeenSet = true; m_listValue.push_back(value); return *this; }
    inline DataValue& AddListValue(DataValue&& value) { m_listValueHasBeenSet = true; m_listValue.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that maps strings to multiple <code>DataValue</code> objects.</p>
     */
    inline const Aws::Map<Aws::String, DataValue>& GetMapValue() const{ return m_mapValue; }
    inline bool MapValueHasBeenSet() const { return m_mapValueHasBeenSet; }
    inline void SetMapValue(const Aws::Map<Aws::String, DataValue>& value) { m_mapValueHasBeenSet = true; m_mapValue = value; }
    inline void SetMapValue(Aws::Map<Aws::String, DataValue>&& value) { m_mapValueHasBeenSet = true; m_mapValue = std::move(value); }
    inline DataValue& WithMapValue(const Aws::Map<Aws::String, DataValue>& value) { SetMapValue(value); return *this;}
    inline DataValue& WithMapValue(Aws::Map<Aws::String, DataValue>&& value) { SetMapValue(std::move(value)); return *this;}
    inline DataValue& AddMapValue(const Aws::String& key, const DataValue& value) { m_mapValueHasBeenSet = true; m_mapValue.emplace(key, value); return *this; }
    inline DataValue& AddMapValue(Aws::String&& key, const DataValue& value) { m_mapValueHasBeenSet = true; m_mapValue.emplace(std::move(key), value); return *this; }
    inline DataValue& AddMapValue(const Aws::String& key, DataValue&& value) { m_mapValueHasBeenSet = true; m_mapValue.emplace(key, std::move(value)); return *this; }
    inline DataValue& AddMapValue(Aws::String&& key, DataValue&& value) { m_mapValueHasBeenSet = true; m_mapValue.emplace(std::move(key), std::move(value)); return *this; }
    inline DataValue& AddMapValue(const char* key, DataValue&& value) { m_mapValueHasBeenSet = true; m_mapValue.emplace(key, std::move(value)); return *this; }
    inline DataValue& AddMapValue(const char* key, const DataValue& value) { m_mapValueHasBeenSet = true; m_mapValue.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value that relates a component to another component.</p>
     */
    inline const RelationshipValue& GetRelationshipValue() const{ return m_relationshipValue; }
    inline bool RelationshipValueHasBeenSet() const { return m_relationshipValueHasBeenSet; }
    inline void SetRelationshipValue(const RelationshipValue& value) { m_relationshipValueHasBeenSet = true; m_relationshipValue = value; }
    inline void SetRelationshipValue(RelationshipValue&& value) { m_relationshipValueHasBeenSet = true; m_relationshipValue = std::move(value); }
    inline DataValue& WithRelationshipValue(const RelationshipValue& value) { SetRelationshipValue(value); return *this;}
    inline DataValue& WithRelationshipValue(RelationshipValue&& value) { SetRelationshipValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An expression that produces the value.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }
    inline DataValue& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}
    inline DataValue& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}
    inline DataValue& WithExpression(const char* value) { SetExpression(value); return *this;}
    ///@}
  private:

    bool m_booleanValue;
    bool m_booleanValueHasBeenSet = false;

    double m_doubleValue;
    bool m_doubleValueHasBeenSet = false;

    int m_integerValue;
    bool m_integerValueHasBeenSet = false;

    long long m_longValue;
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
