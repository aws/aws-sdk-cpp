/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/SchemaFacet.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/ObjectReference.h>
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
   * <p>Represents the output of a batch add facet to object operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchAddFacetToObject">AWS
   * API Reference</a></p>
   */
  class BatchAddFacetToObject
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchAddFacetToObject() = default;
    AWS_CLOUDDIRECTORY_API BatchAddFacetToObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchAddFacetToObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the facet being added to the object.</p>
     */
    inline const SchemaFacet& GetSchemaFacet() const { return m_schemaFacet; }
    inline bool SchemaFacetHasBeenSet() const { return m_schemaFacetHasBeenSet; }
    template<typename SchemaFacetT = SchemaFacet>
    void SetSchemaFacet(SchemaFacetT&& value) { m_schemaFacetHasBeenSet = true; m_schemaFacet = std::forward<SchemaFacetT>(value); }
    template<typename SchemaFacetT = SchemaFacet>
    BatchAddFacetToObject& WithSchemaFacet(SchemaFacetT&& value) { SetSchemaFacet(std::forward<SchemaFacetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes to set on the object.</p>
     */
    inline const Aws::Vector<AttributeKeyAndValue>& GetObjectAttributeList() const { return m_objectAttributeList; }
    inline bool ObjectAttributeListHasBeenSet() const { return m_objectAttributeListHasBeenSet; }
    template<typename ObjectAttributeListT = Aws::Vector<AttributeKeyAndValue>>
    void SetObjectAttributeList(ObjectAttributeListT&& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList = std::forward<ObjectAttributeListT>(value); }
    template<typename ObjectAttributeListT = Aws::Vector<AttributeKeyAndValue>>
    BatchAddFacetToObject& WithObjectAttributeList(ObjectAttributeListT&& value) { SetObjectAttributeList(std::forward<ObjectAttributeListT>(value)); return *this;}
    template<typename ObjectAttributeListT = AttributeKeyAndValue>
    BatchAddFacetToObject& AddObjectAttributeList(ObjectAttributeListT&& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList.emplace_back(std::forward<ObjectAttributeListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A reference to the object being mutated.</p>
     */
    inline const ObjectReference& GetObjectReference() const { return m_objectReference; }
    inline bool ObjectReferenceHasBeenSet() const { return m_objectReferenceHasBeenSet; }
    template<typename ObjectReferenceT = ObjectReference>
    void SetObjectReference(ObjectReferenceT&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = std::forward<ObjectReferenceT>(value); }
    template<typename ObjectReferenceT = ObjectReference>
    BatchAddFacetToObject& WithObjectReference(ObjectReferenceT&& value) { SetObjectReference(std::forward<ObjectReferenceT>(value)); return *this;}
    ///@}
  private:

    SchemaFacet m_schemaFacet;
    bool m_schemaFacetHasBeenSet = false;

    Aws::Vector<AttributeKeyAndValue> m_objectAttributeList;
    bool m_objectAttributeListHasBeenSet = false;

    ObjectReference m_objectReference;
    bool m_objectReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
