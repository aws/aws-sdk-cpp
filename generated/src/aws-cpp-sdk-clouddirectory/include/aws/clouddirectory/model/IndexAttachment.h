/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/AttributeKeyAndValue.h>
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
   * <p>Represents an index and an attached object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/IndexAttachment">AWS
   * API Reference</a></p>
   */
  class IndexAttachment
  {
  public:
    AWS_CLOUDDIRECTORY_API IndexAttachment() = default;
    AWS_CLOUDDIRECTORY_API IndexAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API IndexAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The indexed attribute values.</p>
     */
    inline const Aws::Vector<AttributeKeyAndValue>& GetIndexedAttributes() const { return m_indexedAttributes; }
    inline bool IndexedAttributesHasBeenSet() const { return m_indexedAttributesHasBeenSet; }
    template<typename IndexedAttributesT = Aws::Vector<AttributeKeyAndValue>>
    void SetIndexedAttributes(IndexedAttributesT&& value) { m_indexedAttributesHasBeenSet = true; m_indexedAttributes = std::forward<IndexedAttributesT>(value); }
    template<typename IndexedAttributesT = Aws::Vector<AttributeKeyAndValue>>
    IndexAttachment& WithIndexedAttributes(IndexedAttributesT&& value) { SetIndexedAttributes(std::forward<IndexedAttributesT>(value)); return *this;}
    template<typename IndexedAttributesT = AttributeKeyAndValue>
    IndexAttachment& AddIndexedAttributes(IndexedAttributesT&& value) { m_indexedAttributesHasBeenSet = true; m_indexedAttributes.emplace_back(std::forward<IndexedAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>In response to <a>ListIndex</a>, the <code>ObjectIdentifier</code> of the
     * object attached to the index. In response to <a>ListAttachedIndices</a>, the
     * <code>ObjectIdentifier</code> of the index attached to the object. This field
     * will always contain the <code>ObjectIdentifier</code> of the object on the
     * opposite side of the attachment specified in the query.</p>
     */
    inline const Aws::String& GetObjectIdentifier() const { return m_objectIdentifier; }
    inline bool ObjectIdentifierHasBeenSet() const { return m_objectIdentifierHasBeenSet; }
    template<typename ObjectIdentifierT = Aws::String>
    void SetObjectIdentifier(ObjectIdentifierT&& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = std::forward<ObjectIdentifierT>(value); }
    template<typename ObjectIdentifierT = Aws::String>
    IndexAttachment& WithObjectIdentifier(ObjectIdentifierT&& value) { SetObjectIdentifier(std::forward<ObjectIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AttributeKeyAndValue> m_indexedAttributes;
    bool m_indexedAttributesHasBeenSet = false;

    Aws::String m_objectIdentifier;
    bool m_objectIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
