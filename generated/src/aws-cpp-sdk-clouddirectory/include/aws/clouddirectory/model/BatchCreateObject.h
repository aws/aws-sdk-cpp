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
    AWS_CLOUDDIRECTORY_API BatchCreateObject() = default;
    AWS_CLOUDDIRECTORY_API BatchCreateObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchCreateObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of <code>FacetArns</code> that will be associated with the object. For
     * more information, see <a>arns</a>.</p>
     */
    inline const Aws::Vector<SchemaFacet>& GetSchemaFacet() const { return m_schemaFacet; }
    inline bool SchemaFacetHasBeenSet() const { return m_schemaFacetHasBeenSet; }
    template<typename SchemaFacetT = Aws::Vector<SchemaFacet>>
    void SetSchemaFacet(SchemaFacetT&& value) { m_schemaFacetHasBeenSet = true; m_schemaFacet = std::forward<SchemaFacetT>(value); }
    template<typename SchemaFacetT = Aws::Vector<SchemaFacet>>
    BatchCreateObject& WithSchemaFacet(SchemaFacetT&& value) { SetSchemaFacet(std::forward<SchemaFacetT>(value)); return *this;}
    template<typename SchemaFacetT = SchemaFacet>
    BatchCreateObject& AddSchemaFacet(SchemaFacetT&& value) { m_schemaFacetHasBeenSet = true; m_schemaFacet.emplace_back(std::forward<SchemaFacetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An attribute map, which contains an attribute ARN as the key and attribute
     * value as the map value.</p>
     */
    inline const Aws::Vector<AttributeKeyAndValue>& GetObjectAttributeList() const { return m_objectAttributeList; }
    inline bool ObjectAttributeListHasBeenSet() const { return m_objectAttributeListHasBeenSet; }
    template<typename ObjectAttributeListT = Aws::Vector<AttributeKeyAndValue>>
    void SetObjectAttributeList(ObjectAttributeListT&& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList = std::forward<ObjectAttributeListT>(value); }
    template<typename ObjectAttributeListT = Aws::Vector<AttributeKeyAndValue>>
    BatchCreateObject& WithObjectAttributeList(ObjectAttributeListT&& value) { SetObjectAttributeList(std::forward<ObjectAttributeListT>(value)); return *this;}
    template<typename ObjectAttributeListT = AttributeKeyAndValue>
    BatchCreateObject& AddObjectAttributeList(ObjectAttributeListT&& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList.emplace_back(std::forward<ObjectAttributeListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If specified, the parent reference to which this object will be attached.</p>
     */
    inline const ObjectReference& GetParentReference() const { return m_parentReference; }
    inline bool ParentReferenceHasBeenSet() const { return m_parentReferenceHasBeenSet; }
    template<typename ParentReferenceT = ObjectReference>
    void SetParentReference(ParentReferenceT&& value) { m_parentReferenceHasBeenSet = true; m_parentReference = std::forward<ParentReferenceT>(value); }
    template<typename ParentReferenceT = ObjectReference>
    BatchCreateObject& WithParentReference(ParentReferenceT&& value) { SetParentReference(std::forward<ParentReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the link.</p>
     */
    inline const Aws::String& GetLinkName() const { return m_linkName; }
    inline bool LinkNameHasBeenSet() const { return m_linkNameHasBeenSet; }
    template<typename LinkNameT = Aws::String>
    void SetLinkName(LinkNameT&& value) { m_linkNameHasBeenSet = true; m_linkName = std::forward<LinkNameT>(value); }
    template<typename LinkNameT = Aws::String>
    BatchCreateObject& WithLinkName(LinkNameT&& value) { SetLinkName(std::forward<LinkNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch reference name. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/transaction_support.html">Transaction
     * Support</a> for more information.</p>
     */
    inline const Aws::String& GetBatchReferenceName() const { return m_batchReferenceName; }
    inline bool BatchReferenceNameHasBeenSet() const { return m_batchReferenceNameHasBeenSet; }
    template<typename BatchReferenceNameT = Aws::String>
    void SetBatchReferenceName(BatchReferenceNameT&& value) { m_batchReferenceNameHasBeenSet = true; m_batchReferenceName = std::forward<BatchReferenceNameT>(value); }
    template<typename BatchReferenceNameT = Aws::String>
    BatchCreateObject& WithBatchReferenceName(BatchReferenceNameT&& value) { SetBatchReferenceName(std::forward<BatchReferenceNameT>(value)); return *this;}
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
