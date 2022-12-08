/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/SchemaFacet.h>
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
   * <p>Represents the output of a <a>GetObjectInformation</a> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchGetObjectInformationResponse">AWS
   * API Reference</a></p>
   */
  class BatchGetObjectInformationResponse
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchGetObjectInformationResponse();
    AWS_CLOUDDIRECTORY_API BatchGetObjectInformationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchGetObjectInformationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The facets attached to the specified object.</p>
     */
    inline const Aws::Vector<SchemaFacet>& GetSchemaFacets() const{ return m_schemaFacets; }

    /**
     * <p>The facets attached to the specified object.</p>
     */
    inline bool SchemaFacetsHasBeenSet() const { return m_schemaFacetsHasBeenSet; }

    /**
     * <p>The facets attached to the specified object.</p>
     */
    inline void SetSchemaFacets(const Aws::Vector<SchemaFacet>& value) { m_schemaFacetsHasBeenSet = true; m_schemaFacets = value; }

    /**
     * <p>The facets attached to the specified object.</p>
     */
    inline void SetSchemaFacets(Aws::Vector<SchemaFacet>&& value) { m_schemaFacetsHasBeenSet = true; m_schemaFacets = std::move(value); }

    /**
     * <p>The facets attached to the specified object.</p>
     */
    inline BatchGetObjectInformationResponse& WithSchemaFacets(const Aws::Vector<SchemaFacet>& value) { SetSchemaFacets(value); return *this;}

    /**
     * <p>The facets attached to the specified object.</p>
     */
    inline BatchGetObjectInformationResponse& WithSchemaFacets(Aws::Vector<SchemaFacet>&& value) { SetSchemaFacets(std::move(value)); return *this;}

    /**
     * <p>The facets attached to the specified object.</p>
     */
    inline BatchGetObjectInformationResponse& AddSchemaFacets(const SchemaFacet& value) { m_schemaFacetsHasBeenSet = true; m_schemaFacets.push_back(value); return *this; }

    /**
     * <p>The facets attached to the specified object.</p>
     */
    inline BatchGetObjectInformationResponse& AddSchemaFacets(SchemaFacet&& value) { m_schemaFacetsHasBeenSet = true; m_schemaFacets.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>ObjectIdentifier</code> of the specified object.</p>
     */
    inline const Aws::String& GetObjectIdentifier() const{ return m_objectIdentifier; }

    /**
     * <p>The <code>ObjectIdentifier</code> of the specified object.</p>
     */
    inline bool ObjectIdentifierHasBeenSet() const { return m_objectIdentifierHasBeenSet; }

    /**
     * <p>The <code>ObjectIdentifier</code> of the specified object.</p>
     */
    inline void SetObjectIdentifier(const Aws::String& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = value; }

    /**
     * <p>The <code>ObjectIdentifier</code> of the specified object.</p>
     */
    inline void SetObjectIdentifier(Aws::String&& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = std::move(value); }

    /**
     * <p>The <code>ObjectIdentifier</code> of the specified object.</p>
     */
    inline void SetObjectIdentifier(const char* value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier.assign(value); }

    /**
     * <p>The <code>ObjectIdentifier</code> of the specified object.</p>
     */
    inline BatchGetObjectInformationResponse& WithObjectIdentifier(const Aws::String& value) { SetObjectIdentifier(value); return *this;}

    /**
     * <p>The <code>ObjectIdentifier</code> of the specified object.</p>
     */
    inline BatchGetObjectInformationResponse& WithObjectIdentifier(Aws::String&& value) { SetObjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>ObjectIdentifier</code> of the specified object.</p>
     */
    inline BatchGetObjectInformationResponse& WithObjectIdentifier(const char* value) { SetObjectIdentifier(value); return *this;}

  private:

    Aws::Vector<SchemaFacet> m_schemaFacets;
    bool m_schemaFacetsHasBeenSet = false;

    Aws::String m_objectIdentifier;
    bool m_objectIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
