/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/SchemaFacet.h>
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
   * <p>Represents the output of a <a>CreateObject</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchCreateObject">AWS
   * API Reference</a></p>
   */
  class BatchCreateObject
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchCreateObject();
    AWS_CLOUDDIRECTORY_API BatchCreateObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchCreateObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of <code>FacetArns</code> that will be associated with the object. For
     * more information, see <a>arns</a>.</p>
     */
    inline const Aws::Vector<SchemaFacet>& GetSchemaFacet() const{ return m_schemaFacet; }
    inline bool SchemaFacetHasBeenSet() const { return m_schemaFacetHasBeenSet; }
    inline void SetSchemaFacet(const Aws::Vector<SchemaFacet>& value) { m_schemaFacetHasBeenSet = true; m_schemaFacet = value; }
    inline void SetSchemaFacet(Aws::Vector<SchemaFacet>&& value) { m_schemaFacetHasBeenSet = true; m_schemaFacet = std::move(value); }
    inline BatchCreateObject& WithSchemaFacet(const Aws::Vector<SchemaFacet>& value) { SetSchemaFacet(value); return *this;}
    inline BatchCreateObject& WithSchemaFacet(Aws::Vector<SchemaFacet>&& value) { SetSchemaFacet(std::move(value)); return *this;}
    inline BatchCreateObject& AddSchemaFacet(const SchemaFacet& value) { m_schemaFacetHasBeenSet = true; m_schemaFacet.push_back(value); return *this; }
    inline BatchCreateObject& AddSchemaFacet(SchemaFacet&& value) { m_schemaFacetHasBeenSet = true; m_schemaFacet.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An attribute map, which contains an attribute ARN as the key and attribute
     * value as the map value.</p>
     */
    inline const Aws::Vector<AttributeKeyAndValue>& GetObjectAttributeList() const{ return m_objectAttributeList; }
    inline bool ObjectAttributeListHasBeenSet() const { return m_objectAttributeListHasBeenSet; }
    inline void SetObjectAttributeList(const Aws::Vector<AttributeKeyAndValue>& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList = value; }
    inline void SetObjectAttributeList(Aws::Vector<AttributeKeyAndValue>&& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList = std::move(value); }
    inline BatchCreateObject& WithObjectAttributeList(const Aws::Vector<AttributeKeyAndValue>& value) { SetObjectAttributeList(value); return *this;}
    inline BatchCreateObject& WithObjectAttributeList(Aws::Vector<AttributeKeyAndValue>&& value) { SetObjectAttributeList(std::move(value)); return *this;}
    inline BatchCreateObject& AddObjectAttributeList(const AttributeKeyAndValue& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList.push_back(value); return *this; }
    inline BatchCreateObject& AddObjectAttributeList(AttributeKeyAndValue&& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If specified, the parent reference to which this object will be attached.</p>
     */
    inline const ObjectReference& GetParentReference() const{ return m_parentReference; }
    inline bool ParentReferenceHasBeenSet() const { return m_parentReferenceHasBeenSet; }
    inline void SetParentReference(const ObjectReference& value) { m_parentReferenceHasBeenSet = true; m_parentReference = value; }
    inline void SetParentReference(ObjectReference&& value) { m_parentReferenceHasBeenSet = true; m_parentReference = std::move(value); }
    inline BatchCreateObject& WithParentReference(const ObjectReference& value) { SetParentReference(value); return *this;}
    inline BatchCreateObject& WithParentReference(ObjectReference&& value) { SetParentReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the link.</p>
     */
    inline const Aws::String& GetLinkName() const{ return m_linkName; }
    inline bool LinkNameHasBeenSet() const { return m_linkNameHasBeenSet; }
    inline void SetLinkName(const Aws::String& value) { m_linkNameHasBeenSet = true; m_linkName = value; }
    inline void SetLinkName(Aws::String&& value) { m_linkNameHasBeenSet = true; m_linkName = std::move(value); }
    inline void SetLinkName(const char* value) { m_linkNameHasBeenSet = true; m_linkName.assign(value); }
    inline BatchCreateObject& WithLinkName(const Aws::String& value) { SetLinkName(value); return *this;}
    inline BatchCreateObject& WithLinkName(Aws::String&& value) { SetLinkName(std::move(value)); return *this;}
    inline BatchCreateObject& WithLinkName(const char* value) { SetLinkName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch reference name. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/transaction_support.html">Transaction
     * Support</a> for more information.</p>
     */
    inline const Aws::String& GetBatchReferenceName() const{ return m_batchReferenceName; }
    inline bool BatchReferenceNameHasBeenSet() const { return m_batchReferenceNameHasBeenSet; }
    inline void SetBatchReferenceName(const Aws::String& value) { m_batchReferenceNameHasBeenSet = true; m_batchReferenceName = value; }
    inline void SetBatchReferenceName(Aws::String&& value) { m_batchReferenceNameHasBeenSet = true; m_batchReferenceName = std::move(value); }
    inline void SetBatchReferenceName(const char* value) { m_batchReferenceNameHasBeenSet = true; m_batchReferenceName.assign(value); }
    inline BatchCreateObject& WithBatchReferenceName(const Aws::String& value) { SetBatchReferenceName(value); return *this;}
    inline BatchCreateObject& WithBatchReferenceName(Aws::String&& value) { SetBatchReferenceName(std::move(value)); return *this;}
    inline BatchCreateObject& WithBatchReferenceName(const char* value) { SetBatchReferenceName(value); return *this;}
    ///@}
  private:

    Aws::Vector<SchemaFacet> m_schemaFacet;
    bool m_schemaFacetHasBeenSet = false;

    Aws::Vector<AttributeKeyAndValue> m_objectAttributeList;
    bool m_objectAttributeListHasBeenSet = false;

    ObjectReference m_parentReference;
    bool m_parentReferenceHasBeenSet = false;

    Aws::String m_linkName;
    bool m_linkNameHasBeenSet = false;

    Aws::String m_batchReferenceName;
    bool m_batchReferenceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
