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
    AWS_CLOUDDIRECTORY_API BatchGetObjectInformationResponse() = default;
    AWS_CLOUDDIRECTORY_API BatchGetObjectInformationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchGetObjectInformationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The facets attached to the specified object.</p>
     */
    inline const Aws::Vector<SchemaFacet>& GetSchemaFacets() const { return m_schemaFacets; }
    inline bool SchemaFacetsHasBeenSet() const { return m_schemaFacetsHasBeenSet; }
    template<typename SchemaFacetsT = Aws::Vector<SchemaFacet>>
    void SetSchemaFacets(SchemaFacetsT&& value) { m_schemaFacetsHasBeenSet = true; m_schemaFacets = std::forward<SchemaFacetsT>(value); }
    template<typename SchemaFacetsT = Aws::Vector<SchemaFacet>>
    BatchGetObjectInformationResponse& WithSchemaFacets(SchemaFacetsT&& value) { SetSchemaFacets(std::forward<SchemaFacetsT>(value)); return *this;}
    template<typename SchemaFacetsT = SchemaFacet>
    BatchGetObjectInformationResponse& AddSchemaFacets(SchemaFacetsT&& value) { m_schemaFacetsHasBeenSet = true; m_schemaFacets.emplace_back(std::forward<SchemaFacetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>ObjectIdentifier</code> of the specified object.</p>
     */
    inline const Aws::String& GetObjectIdentifier() const { return m_objectIdentifier; }
    inline bool ObjectIdentifierHasBeenSet() const { return m_objectIdentifierHasBeenSet; }
    template<typename ObjectIdentifierT = Aws::String>
    void SetObjectIdentifier(ObjectIdentifierT&& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = std::forward<ObjectIdentifierT>(value); }
    template<typename ObjectIdentifierT = Aws::String>
    BatchGetObjectInformationResponse& WithObjectIdentifier(ObjectIdentifierT&& value) { SetObjectIdentifier(std::forward<ObjectIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SchemaFacet> m_schemaFacets;
    bool m_schemaFacetsHasBeenSet = false;

    Aws::String m_objectIdentifier;
    bool m_objectIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
