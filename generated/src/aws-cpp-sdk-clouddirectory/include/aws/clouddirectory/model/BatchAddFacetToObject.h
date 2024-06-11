﻿/**
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
    AWS_CLOUDDIRECTORY_API BatchAddFacetToObject();
    AWS_CLOUDDIRECTORY_API BatchAddFacetToObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchAddFacetToObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the facet being added to the object.</p>
     */
    inline const SchemaFacet& GetSchemaFacet() const{ return m_schemaFacet; }
    inline bool SchemaFacetHasBeenSet() const { return m_schemaFacetHasBeenSet; }
    inline void SetSchemaFacet(const SchemaFacet& value) { m_schemaFacetHasBeenSet = true; m_schemaFacet = value; }
    inline void SetSchemaFacet(SchemaFacet&& value) { m_schemaFacetHasBeenSet = true; m_schemaFacet = std::move(value); }
    inline BatchAddFacetToObject& WithSchemaFacet(const SchemaFacet& value) { SetSchemaFacet(value); return *this;}
    inline BatchAddFacetToObject& WithSchemaFacet(SchemaFacet&& value) { SetSchemaFacet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes to set on the object.</p>
     */
    inline const Aws::Vector<AttributeKeyAndValue>& GetObjectAttributeList() const{ return m_objectAttributeList; }
    inline bool ObjectAttributeListHasBeenSet() const { return m_objectAttributeListHasBeenSet; }
    inline void SetObjectAttributeList(const Aws::Vector<AttributeKeyAndValue>& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList = value; }
    inline void SetObjectAttributeList(Aws::Vector<AttributeKeyAndValue>&& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList = std::move(value); }
    inline BatchAddFacetToObject& WithObjectAttributeList(const Aws::Vector<AttributeKeyAndValue>& value) { SetObjectAttributeList(value); return *this;}
    inline BatchAddFacetToObject& WithObjectAttributeList(Aws::Vector<AttributeKeyAndValue>&& value) { SetObjectAttributeList(std::move(value)); return *this;}
    inline BatchAddFacetToObject& AddObjectAttributeList(const AttributeKeyAndValue& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList.push_back(value); return *this; }
    inline BatchAddFacetToObject& AddObjectAttributeList(AttributeKeyAndValue&& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A reference to the object being mutated.</p>
     */
    inline const ObjectReference& GetObjectReference() const{ return m_objectReference; }
    inline bool ObjectReferenceHasBeenSet() const { return m_objectReferenceHasBeenSet; }
    inline void SetObjectReference(const ObjectReference& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }
    inline void SetObjectReference(ObjectReference&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = std::move(value); }
    inline BatchAddFacetToObject& WithObjectReference(const ObjectReference& value) { SetObjectReference(value); return *this;}
    inline BatchAddFacetToObject& WithObjectReference(ObjectReference&& value) { SetObjectReference(std::move(value)); return *this;}
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
