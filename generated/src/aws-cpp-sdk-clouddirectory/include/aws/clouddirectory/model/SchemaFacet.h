/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
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
   * <p>A facet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/SchemaFacet">AWS
   * API Reference</a></p>
   */
  class SchemaFacet
  {
  public:
    AWS_CLOUDDIRECTORY_API SchemaFacet() = default;
    AWS_CLOUDDIRECTORY_API SchemaFacet(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API SchemaFacet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the schema that contains the facet with no minor component. See
     * <a>arns</a> and <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_inplaceschemaupgrade.html">In-Place
     * Schema Upgrade</a> for a description of when to provide minor versions. If this
     * value is set, FacetName must also be set.</p>
     */
    inline const Aws::String& GetSchemaArn() const { return m_schemaArn; }
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }
    template<typename SchemaArnT = Aws::String>
    void SetSchemaArn(SchemaArnT&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::forward<SchemaArnT>(value); }
    template<typename SchemaArnT = Aws::String>
    SchemaFacet& WithSchemaArn(SchemaArnT&& value) { SetSchemaArn(std::forward<SchemaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the facet. If this value is set, SchemaArn must also be set.</p>
     */
    inline const Aws::String& GetFacetName() const { return m_facetName; }
    inline bool FacetNameHasBeenSet() const { return m_facetNameHasBeenSet; }
    template<typename FacetNameT = Aws::String>
    void SetFacetName(FacetNameT&& value) { m_facetNameHasBeenSet = true; m_facetName = std::forward<FacetNameT>(value); }
    template<typename FacetNameT = Aws::String>
    SchemaFacet& WithFacetName(FacetNameT&& value) { SetFacetName(std::forward<FacetNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;

    Aws::String m_facetName;
    bool m_facetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
