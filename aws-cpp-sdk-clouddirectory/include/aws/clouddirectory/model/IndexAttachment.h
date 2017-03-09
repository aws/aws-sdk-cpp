/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/AttributeKeyAndValue.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Represents an index and an attached object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2016-05-10/IndexAttachment">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API IndexAttachment
  {
  public:
    IndexAttachment();
    IndexAttachment(const Aws::Utils::Json::JsonValue& jsonValue);
    IndexAttachment& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The indexed attribute values.</p>
     */
    inline const Aws::Vector<AttributeKeyAndValue>& GetIndexedAttributes() const{ return m_indexedAttributes; }

    /**
     * <p>The indexed attribute values.</p>
     */
    inline void SetIndexedAttributes(const Aws::Vector<AttributeKeyAndValue>& value) { m_indexedAttributesHasBeenSet = true; m_indexedAttributes = value; }

    /**
     * <p>The indexed attribute values.</p>
     */
    inline void SetIndexedAttributes(Aws::Vector<AttributeKeyAndValue>&& value) { m_indexedAttributesHasBeenSet = true; m_indexedAttributes = value; }

    /**
     * <p>The indexed attribute values.</p>
     */
    inline IndexAttachment& WithIndexedAttributes(const Aws::Vector<AttributeKeyAndValue>& value) { SetIndexedAttributes(value); return *this;}

    /**
     * <p>The indexed attribute values.</p>
     */
    inline IndexAttachment& WithIndexedAttributes(Aws::Vector<AttributeKeyAndValue>&& value) { SetIndexedAttributes(value); return *this;}

    /**
     * <p>The indexed attribute values.</p>
     */
    inline IndexAttachment& AddIndexedAttributes(const AttributeKeyAndValue& value) { m_indexedAttributesHasBeenSet = true; m_indexedAttributes.push_back(value); return *this; }

    /**
     * <p>The indexed attribute values.</p>
     */
    inline IndexAttachment& AddIndexedAttributes(AttributeKeyAndValue&& value) { m_indexedAttributesHasBeenSet = true; m_indexedAttributes.push_back(value); return *this; }

    /**
     * <p>The <code>ObjectIdentifier</code> of the object attached to the index.</p>
     */
    inline const Aws::String& GetObjectIdentifier() const{ return m_objectIdentifier; }

    /**
     * <p>The <code>ObjectIdentifier</code> of the object attached to the index.</p>
     */
    inline void SetObjectIdentifier(const Aws::String& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = value; }

    /**
     * <p>The <code>ObjectIdentifier</code> of the object attached to the index.</p>
     */
    inline void SetObjectIdentifier(Aws::String&& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = value; }

    /**
     * <p>The <code>ObjectIdentifier</code> of the object attached to the index.</p>
     */
    inline void SetObjectIdentifier(const char* value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier.assign(value); }

    /**
     * <p>The <code>ObjectIdentifier</code> of the object attached to the index.</p>
     */
    inline IndexAttachment& WithObjectIdentifier(const Aws::String& value) { SetObjectIdentifier(value); return *this;}

    /**
     * <p>The <code>ObjectIdentifier</code> of the object attached to the index.</p>
     */
    inline IndexAttachment& WithObjectIdentifier(Aws::String&& value) { SetObjectIdentifier(value); return *this;}

    /**
     * <p>The <code>ObjectIdentifier</code> of the object attached to the index.</p>
     */
    inline IndexAttachment& WithObjectIdentifier(const char* value) { SetObjectIdentifier(value); return *this;}

  private:
    Aws::Vector<AttributeKeyAndValue> m_indexedAttributes;
    bool m_indexedAttributesHasBeenSet;
    Aws::String m_objectIdentifier;
    bool m_objectIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
