/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodb/model/AttributeValue.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents a set of primary keys and, for each key, the attributes to
   * retrieve from the table.</p> <p>For each primary key, you must provide
   * <i>all</i> of the key attributes. For example, with a simple primary key, you
   * only need to provide the partition key. For a composite primary key, you must
   * provide <i>both</i> the partition key and the sort key.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/KeysAndAttributes">AWS
   * API Reference</a></p>
   */
  class KeysAndAttributes
  {
  public:
    AWS_DYNAMODB_API KeysAndAttributes();
    AWS_DYNAMODB_API KeysAndAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API KeysAndAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The primary key attribute values that define the items and the attributes
     * associated with the items.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& GetKeys() const{ return m_keys; }
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }
    inline void SetKeys(const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& value) { m_keysHasBeenSet = true; m_keys = value; }
    inline void SetKeys(Aws::Vector<Aws::Map<Aws::String, AttributeValue>>&& value) { m_keysHasBeenSet = true; m_keys = std::move(value); }
    inline KeysAndAttributes& WithKeys(const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& value) { SetKeys(value); return *this;}
    inline KeysAndAttributes& WithKeys(Aws::Vector<Aws::Map<Aws::String, AttributeValue>>&& value) { SetKeys(std::move(value)); return *this;}
    inline KeysAndAttributes& AddKeys(const Aws::Map<Aws::String, AttributeValue>& value) { m_keysHasBeenSet = true; m_keys.push_back(value); return *this; }
    inline KeysAndAttributes& AddKeys(Aws::Map<Aws::String, AttributeValue>&& value) { m_keysHasBeenSet = true; m_keys.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This is a legacy parameter. Use <code>ProjectionExpression</code> instead.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributesToGet() const{ return m_attributesToGet; }
    inline bool AttributesToGetHasBeenSet() const { return m_attributesToGetHasBeenSet; }
    inline void SetAttributesToGet(const Aws::Vector<Aws::String>& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = value; }
    inline void SetAttributesToGet(Aws::Vector<Aws::String>&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = std::move(value); }
    inline KeysAndAttributes& WithAttributesToGet(const Aws::Vector<Aws::String>& value) { SetAttributesToGet(value); return *this;}
    inline KeysAndAttributes& WithAttributesToGet(Aws::Vector<Aws::String>&& value) { SetAttributesToGet(std::move(value)); return *this;}
    inline KeysAndAttributes& AddAttributesToGet(const Aws::String& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }
    inline KeysAndAttributes& AddAttributesToGet(Aws::String&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(std::move(value)); return *this; }
    inline KeysAndAttributes& AddAttributesToGet(const char* value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The consistency of a read operation. If set to <code>true</code>, then a
     * strongly consistent read is used; otherwise, an eventually consistent read is
     * used.</p>
     */
    inline bool GetConsistentRead() const{ return m_consistentRead; }
    inline bool ConsistentReadHasBeenSet() const { return m_consistentReadHasBeenSet; }
    inline void SetConsistentRead(bool value) { m_consistentReadHasBeenSet = true; m_consistentRead = value; }
    inline KeysAndAttributes& WithConsistentRead(bool value) { SetConsistentRead(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that identifies one or more attributes to retrieve from the table.
     * These attributes can include scalars, sets, or elements of a JSON document. The
     * attributes in the <code>ProjectionExpression</code> must be separated by
     * commas.</p> <p>If no attribute names are specified, then all attributes will be
     * returned. If any of the requested attributes are not found, they will not appear
     * in the result.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::String& GetProjectionExpression() const{ return m_projectionExpression; }
    inline bool ProjectionExpressionHasBeenSet() const { return m_projectionExpressionHasBeenSet; }
    inline void SetProjectionExpression(const Aws::String& value) { m_projectionExpressionHasBeenSet = true; m_projectionExpression = value; }
    inline void SetProjectionExpression(Aws::String&& value) { m_projectionExpressionHasBeenSet = true; m_projectionExpression = std::move(value); }
    inline void SetProjectionExpression(const char* value) { m_projectionExpressionHasBeenSet = true; m_projectionExpression.assign(value); }
    inline KeysAndAttributes& WithProjectionExpression(const Aws::String& value) { SetProjectionExpression(value); return *this;}
    inline KeysAndAttributes& WithProjectionExpression(Aws::String&& value) { SetProjectionExpression(std::move(value)); return *this;}
    inline KeysAndAttributes& WithProjectionExpression(const char* value) { SetProjectionExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul>  <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p>  <p>For more
     * information on expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetExpressionAttributeNames() const{ return m_expressionAttributeNames; }
    inline bool ExpressionAttributeNamesHasBeenSet() const { return m_expressionAttributeNamesHasBeenSet; }
    inline void SetExpressionAttributeNames(const Aws::Map<Aws::String, Aws::String>& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames = value; }
    inline void SetExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames = std::move(value); }
    inline KeysAndAttributes& WithExpressionAttributeNames(const Aws::Map<Aws::String, Aws::String>& value) { SetExpressionAttributeNames(value); return *this;}
    inline KeysAndAttributes& WithExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { SetExpressionAttributeNames(std::move(value)); return *this;}
    inline KeysAndAttributes& AddExpressionAttributeNames(const Aws::String& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, value); return *this; }
    inline KeysAndAttributes& AddExpressionAttributeNames(Aws::String&& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), value); return *this; }
    inline KeysAndAttributes& AddExpressionAttributeNames(const Aws::String& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, std::move(value)); return *this; }
    inline KeysAndAttributes& AddExpressionAttributeNames(Aws::String&& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), std::move(value)); return *this; }
    inline KeysAndAttributes& AddExpressionAttributeNames(const char* key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, std::move(value)); return *this; }
    inline KeysAndAttributes& AddExpressionAttributeNames(Aws::String&& key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), value); return *this; }
    inline KeysAndAttributes& AddExpressionAttributeNames(const char* key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::Map<Aws::String, AttributeValue>> m_keys;
    bool m_keysHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributesToGet;
    bool m_attributesToGetHasBeenSet = false;

    bool m_consistentRead;
    bool m_consistentReadHasBeenSet = false;

    Aws::String m_projectionExpression;
    bool m_projectionExpressionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_expressionAttributeNames;
    bool m_expressionAttributeNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
