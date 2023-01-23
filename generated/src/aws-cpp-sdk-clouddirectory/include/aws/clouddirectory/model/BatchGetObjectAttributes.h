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
    AWS_CLOUDDIRECTORY_API BatchGetObjectAttributes();
    AWS_CLOUDDIRECTORY_API BatchGetObjectAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchGetObjectAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reference that identifies the object whose attributes will be retrieved.</p>
     */
    inline const ObjectReference& GetObjectReference() const{ return m_objectReference; }

    /**
     * <p>Reference that identifies the object whose attributes will be retrieved.</p>
     */
    inline bool ObjectReferenceHasBeenSet() const { return m_objectReferenceHasBeenSet; }

    /**
     * <p>Reference that identifies the object whose attributes will be retrieved.</p>
     */
    inline void SetObjectReference(const ObjectReference& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }

    /**
     * <p>Reference that identifies the object whose attributes will be retrieved.</p>
     */
    inline void SetObjectReference(ObjectReference&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = std::move(value); }

    /**
     * <p>Reference that identifies the object whose attributes will be retrieved.</p>
     */
    inline BatchGetObjectAttributes& WithObjectReference(const ObjectReference& value) { SetObjectReference(value); return *this;}

    /**
     * <p>Reference that identifies the object whose attributes will be retrieved.</p>
     */
    inline BatchGetObjectAttributes& WithObjectReference(ObjectReference&& value) { SetObjectReference(std::move(value)); return *this;}


    /**
     * <p>Identifier for the facet whose attributes will be retrieved. See
     * <a>SchemaFacet</a> for details.</p>
     */
    inline const SchemaFacet& GetSchemaFacet() const{ return m_schemaFacet; }

    /**
     * <p>Identifier for the facet whose attributes will be retrieved. See
     * <a>SchemaFacet</a> for details.</p>
     */
    inline bool SchemaFacetHasBeenSet() const { return m_schemaFacetHasBeenSet; }

    /**
     * <p>Identifier for the facet whose attributes will be retrieved. See
     * <a>SchemaFacet</a> for details.</p>
     */
    inline void SetSchemaFacet(const SchemaFacet& value) { m_schemaFacetHasBeenSet = true; m_schemaFacet = value; }

    /**
     * <p>Identifier for the facet whose attributes will be retrieved. See
     * <a>SchemaFacet</a> for details.</p>
     */
    inline void SetSchemaFacet(SchemaFacet&& value) { m_schemaFacetHasBeenSet = true; m_schemaFacet = std::move(value); }

    /**
     * <p>Identifier for the facet whose attributes will be retrieved. See
     * <a>SchemaFacet</a> for details.</p>
     */
    inline BatchGetObjectAttributes& WithSchemaFacet(const SchemaFacet& value) { SetSchemaFacet(value); return *this;}

    /**
     * <p>Identifier for the facet whose attributes will be retrieved. See
     * <a>SchemaFacet</a> for details.</p>
     */
    inline BatchGetObjectAttributes& WithSchemaFacet(SchemaFacet&& value) { SetSchemaFacet(std::move(value)); return *this;}


    /**
     * <p>List of attribute names whose values will be retrieved.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributeNames() const{ return m_attributeNames; }

    /**
     * <p>List of attribute names whose values will be retrieved.</p>
     */
    inline bool AttributeNamesHasBeenSet() const { return m_attributeNamesHasBeenSet; }

    /**
     * <p>List of attribute names whose values will be retrieved.</p>
     */
    inline void SetAttributeNames(const Aws::Vector<Aws::String>& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }

    /**
     * <p>List of attribute names whose values will be retrieved.</p>
     */
    inline void SetAttributeNames(Aws::Vector<Aws::String>&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = std::move(value); }

    /**
     * <p>List of attribute names whose values will be retrieved.</p>
     */
    inline BatchGetObjectAttributes& WithAttributeNames(const Aws::Vector<Aws::String>& value) { SetAttributeNames(value); return *this;}

    /**
     * <p>List of attribute names whose values will be retrieved.</p>
     */
    inline BatchGetObjectAttributes& WithAttributeNames(Aws::Vector<Aws::String>&& value) { SetAttributeNames(std::move(value)); return *this;}

    /**
     * <p>List of attribute names whose values will be retrieved.</p>
     */
    inline BatchGetObjectAttributes& AddAttributeNames(const Aws::String& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

    /**
     * <p>List of attribute names whose values will be retrieved.</p>
     */
    inline BatchGetObjectAttributes& AddAttributeNames(Aws::String&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(std::move(value)); return *this; }

    /**
     * <p>List of attribute names whose values will be retrieved.</p>
     */
    inline BatchGetObjectAttributes& AddAttributeNames(const char* value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

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
