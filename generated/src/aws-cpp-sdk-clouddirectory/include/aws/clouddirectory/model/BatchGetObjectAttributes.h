/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/clouddirectory/model/SchemaFacet.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Retrieves attributes within a facet that are associated with an object inside
   * an <a>BatchRead</a> operation. For more information, see
   * <a>GetObjectAttributes</a> and <a>BatchReadRequest$Operations</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchGetObjectAttributes">AWS
   * API Reference</a></p>
   */
  class BatchGetObjectAttributes
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchGetObjectAttributes() = default;
    AWS_CLOUDDIRECTORY_API BatchGetObjectAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchGetObjectAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Reference that identifies the object whose attributes will be retrieved.</p>
     */
    inline const ObjectReference& GetObjectReference() const { return m_objectReference; }
    inline bool ObjectReferenceHasBeenSet() const { return m_objectReferenceHasBeenSet; }
    template<typename ObjectReferenceT = ObjectReference>
    void SetObjectReference(ObjectReferenceT&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = std::forward<ObjectReferenceT>(value); }
    template<typename ObjectReferenceT = ObjectReference>
    BatchGetObjectAttributes& WithObjectReference(ObjectReferenceT&& value) { SetObjectReference(std::forward<ObjectReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier for the facet whose attributes will be retrieved. See
     * <a>SchemaFacet</a> for details.</p>
     */
    inline const SchemaFacet& GetSchemaFacet() const { return m_schemaFacet; }
    inline bool SchemaFacetHasBeenSet() const { return m_schemaFacetHasBeenSet; }
    template<typename SchemaFacetT = SchemaFacet>
    void SetSchemaFacet(SchemaFacetT&& value) { m_schemaFacetHasBeenSet = true; m_schemaFacet = std::forward<SchemaFacetT>(value); }
    template<typename SchemaFacetT = SchemaFacet>
    BatchGetObjectAttributes& WithSchemaFacet(SchemaFacetT&& value) { SetSchemaFacet(std::forward<SchemaFacetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of attribute names whose values will be retrieved.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributeNames() const { return m_attributeNames; }
    inline bool AttributeNamesHasBeenSet() const { return m_attributeNamesHasBeenSet; }
    template<typename AttributeNamesT = Aws::Vector<Aws::String>>
    void SetAttributeNames(AttributeNamesT&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = std::forward<AttributeNamesT>(value); }
    template<typename AttributeNamesT = Aws::Vector<Aws::String>>
    BatchGetObjectAttributes& WithAttributeNames(AttributeNamesT&& value) { SetAttributeNames(std::forward<AttributeNamesT>(value)); return *this;}
    template<typename AttributeNamesT = Aws::String>
    BatchGetObjectAttributes& AddAttributeNames(AttributeNamesT&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.emplace_back(std::forward<AttributeNamesT>(value)); return *this; }
    ///@}
  private:

    ObjectReference m_objectReference;
    bool m_objectReferenceHasBeenSet = false;

    SchemaFacet m_schemaFacet;
    bool m_schemaFacetHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributeNames;
    bool m_attributeNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
