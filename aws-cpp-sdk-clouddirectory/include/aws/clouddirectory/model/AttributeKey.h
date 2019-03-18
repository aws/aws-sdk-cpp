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
   * <p>A unique identifier for an attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AttributeKey">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API AttributeKey
  {
  public:
    AttributeKey();
    AttributeKey(Aws::Utils::Json::JsonView jsonValue);
    AttributeKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the schema that contains the facet and
     * attribute.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schema that contains the facet and
     * attribute.</p>
     */
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schema that contains the facet and
     * attribute.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schema that contains the facet and
     * attribute.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schema that contains the facet and
     * attribute.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schema that contains the facet and
     * attribute.</p>
     */
    inline AttributeKey& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schema that contains the facet and
     * attribute.</p>
     */
    inline AttributeKey& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schema that contains the facet and
     * attribute.</p>
     */
    inline AttributeKey& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


    /**
     * <p>The name of the facet that the attribute exists within.</p>
     */
    inline const Aws::String& GetFacetName() const{ return m_facetName; }

    /**
     * <p>The name of the facet that the attribute exists within.</p>
     */
    inline bool FacetNameHasBeenSet() const { return m_facetNameHasBeenSet; }

    /**
     * <p>The name of the facet that the attribute exists within.</p>
     */
    inline void SetFacetName(const Aws::String& value) { m_facetNameHasBeenSet = true; m_facetName = value; }

    /**
     * <p>The name of the facet that the attribute exists within.</p>
     */
    inline void SetFacetName(Aws::String&& value) { m_facetNameHasBeenSet = true; m_facetName = std::move(value); }

    /**
     * <p>The name of the facet that the attribute exists within.</p>
     */
    inline void SetFacetName(const char* value) { m_facetNameHasBeenSet = true; m_facetName.assign(value); }

    /**
     * <p>The name of the facet that the attribute exists within.</p>
     */
    inline AttributeKey& WithFacetName(const Aws::String& value) { SetFacetName(value); return *this;}

    /**
     * <p>The name of the facet that the attribute exists within.</p>
     */
    inline AttributeKey& WithFacetName(Aws::String&& value) { SetFacetName(std::move(value)); return *this;}

    /**
     * <p>The name of the facet that the attribute exists within.</p>
     */
    inline AttributeKey& WithFacetName(const char* value) { SetFacetName(value); return *this;}


    /**
     * <p>The name of the attribute.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the attribute.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the attribute.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the attribute.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the attribute.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the attribute.</p>
     */
    inline AttributeKey& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the attribute.</p>
     */
    inline AttributeKey& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute.</p>
     */
    inline AttributeKey& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet;

    Aws::String m_facetName;
    bool m_facetNameHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
