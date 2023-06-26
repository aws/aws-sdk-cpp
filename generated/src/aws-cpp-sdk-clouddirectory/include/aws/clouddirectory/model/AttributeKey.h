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
   * <p>A unique identifier for an attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AttributeKey">AWS
   * API Reference</a></p>
   */
  class AttributeKey
  {
  public:
    AWS_CLOUDDIRECTORY_API AttributeKey();
    AWS_CLOUDDIRECTORY_API AttributeKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API AttributeKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_schemaArnHasBeenSet = false;

    Aws::String m_facetName;
    bool m_facetNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
