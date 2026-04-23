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
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodbstreams/model/KeyType.h>
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
namespace DynamoDBStreams
{
namespace Model
{

  /**
   * <p>Represents <i>a single element</i> of a key schema. A key schema specifies
   * the attributes that make up the primary key of a table, or the key attributes of
   * an index.</p> <p>A <i>KeySchemaElement</i> represents exactly one attribute of
   * the primary key. For example, a hash type primary key would be represented by
   * one <i>KeySchemaElement</i>. A hash-and-range type primary key would require one
   * <i>KeySchemaElement</i> for the hash attribute, and another
   * <i>KeySchemaElement</i> for the range attribute.</p>
   */
  class AWS_DYNAMODBSTREAMS_API KeySchemaElement
  {
  public:
    KeySchemaElement();
    KeySchemaElement(Aws::Utils::Json::JsonView jsonValue);
    KeySchemaElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a key attribute.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of a key attribute.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of a key attribute.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of a key attribute.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of a key attribute.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of a key attribute.</p>
     */
    inline KeySchemaElement& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of a key attribute.</p>
     */
    inline KeySchemaElement& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of a key attribute.</p>
     */
    inline KeySchemaElement& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The attribute data, consisting of the data type and the attribute value
     * itself.</p>
     */
    inline const KeyType& GetKeyType() const{ return m_keyType; }

    /**
     * <p>The attribute data, consisting of the data type and the attribute value
     * itself.</p>
     */
    inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }

    /**
     * <p>The attribute data, consisting of the data type and the attribute value
     * itself.</p>
     */
    inline void SetKeyType(const KeyType& value) { m_keyTypeHasBeenSet = true; m_keyType = value; }

    /**
     * <p>The attribute data, consisting of the data type and the attribute value
     * itself.</p>
     */
    inline void SetKeyType(KeyType&& value) { m_keyTypeHasBeenSet = true; m_keyType = std::move(value); }

    /**
     * <p>The attribute data, consisting of the data type and the attribute value
     * itself.</p>
     */
    inline KeySchemaElement& WithKeyType(const KeyType& value) { SetKeyType(value); return *this;}

    /**
     * <p>The attribute data, consisting of the data type and the attribute value
     * itself.</p>
     */
    inline KeySchemaElement& WithKeyType(KeyType&& value) { SetKeyType(std::move(value)); return *this;}

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet;

    KeyType m_keyType;
    bool m_keyTypeHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
