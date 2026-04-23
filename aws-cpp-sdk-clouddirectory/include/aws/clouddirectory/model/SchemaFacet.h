/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CLOUDDIRECTORY_API SchemaFacet
  {
  public:
    SchemaFacet();
    SchemaFacet(Aws::Utils::Json::JsonView jsonValue);
    SchemaFacet& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the schema that contains the facet with no minor component. See
     * <a>arns</a> and <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_inplaceschemaupgrade.html">In-Place
     * Schema Upgrade</a> for a description of when to provide minor versions.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The ARN of the schema that contains the facet with no minor component. See
     * <a>arns</a> and <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_inplaceschemaupgrade.html">In-Place
     * Schema Upgrade</a> for a description of when to provide minor versions.</p>
     */
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }

    /**
     * <p>The ARN of the schema that contains the facet with no minor component. See
     * <a>arns</a> and <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_inplaceschemaupgrade.html">In-Place
     * Schema Upgrade</a> for a description of when to provide minor versions.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>The ARN of the schema that contains the facet with no minor component. See
     * <a>arns</a> and <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_inplaceschemaupgrade.html">In-Place
     * Schema Upgrade</a> for a description of when to provide minor versions.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }

    /**
     * <p>The ARN of the schema that contains the facet with no minor component. See
     * <a>arns</a> and <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_inplaceschemaupgrade.html">In-Place
     * Schema Upgrade</a> for a description of when to provide minor versions.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    /**
     * <p>The ARN of the schema that contains the facet with no minor component. See
     * <a>arns</a> and <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_inplaceschemaupgrade.html">In-Place
     * Schema Upgrade</a> for a description of when to provide minor versions.</p>
     */
    inline SchemaFacet& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The ARN of the schema that contains the facet with no minor component. See
     * <a>arns</a> and <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_inplaceschemaupgrade.html">In-Place
     * Schema Upgrade</a> for a description of when to provide minor versions.</p>
     */
    inline SchemaFacet& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the schema that contains the facet with no minor component. See
     * <a>arns</a> and <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_inplaceschemaupgrade.html">In-Place
     * Schema Upgrade</a> for a description of when to provide minor versions.</p>
     */
    inline SchemaFacet& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


    /**
     * <p>The name of the facet.</p>
     */
    inline const Aws::String& GetFacetName() const{ return m_facetName; }

    /**
     * <p>The name of the facet.</p>
     */
    inline bool FacetNameHasBeenSet() const { return m_facetNameHasBeenSet; }

    /**
     * <p>The name of the facet.</p>
     */
    inline void SetFacetName(const Aws::String& value) { m_facetNameHasBeenSet = true; m_facetName = value; }

    /**
     * <p>The name of the facet.</p>
     */
    inline void SetFacetName(Aws::String&& value) { m_facetNameHasBeenSet = true; m_facetName = std::move(value); }

    /**
     * <p>The name of the facet.</p>
     */
    inline void SetFacetName(const char* value) { m_facetNameHasBeenSet = true; m_facetName.assign(value); }

    /**
     * <p>The name of the facet.</p>
     */
    inline SchemaFacet& WithFacetName(const Aws::String& value) { SetFacetName(value); return *this;}

    /**
     * <p>The name of the facet.</p>
     */
    inline SchemaFacet& WithFacetName(Aws::String&& value) { SetFacetName(std::move(value)); return *this;}

    /**
     * <p>The name of the facet.</p>
     */
    inline SchemaFacet& WithFacetName(const char* value) { SetFacetName(value); return *this;}

  private:

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet;

    Aws::String m_facetName;
    bool m_facetNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
