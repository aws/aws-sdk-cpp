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
   * <p>Identifies the schema Amazon Resource Name (ARN) and facet name for the typed
   * link.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/TypedLinkSchemaAndFacetName">AWS
   * API Reference</a></p>
   */
  class TypedLinkSchemaAndFacetName
  {
  public:
    AWS_CLOUDDIRECTORY_API TypedLinkSchemaAndFacetName();
    AWS_CLOUDDIRECTORY_API TypedLinkSchemaAndFacetName(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API TypedLinkSchemaAndFacetName& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline TypedLinkSchemaAndFacetName& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline TypedLinkSchemaAndFacetName& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline TypedLinkSchemaAndFacetName& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline const Aws::String& GetTypedLinkName() const{ return m_typedLinkName; }

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline bool TypedLinkNameHasBeenSet() const { return m_typedLinkNameHasBeenSet; }

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline void SetTypedLinkName(const Aws::String& value) { m_typedLinkNameHasBeenSet = true; m_typedLinkName = value; }

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline void SetTypedLinkName(Aws::String&& value) { m_typedLinkNameHasBeenSet = true; m_typedLinkName = std::move(value); }

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline void SetTypedLinkName(const char* value) { m_typedLinkNameHasBeenSet = true; m_typedLinkName.assign(value); }

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline TypedLinkSchemaAndFacetName& WithTypedLinkName(const Aws::String& value) { SetTypedLinkName(value); return *this;}

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline TypedLinkSchemaAndFacetName& WithTypedLinkName(Aws::String&& value) { SetTypedLinkName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline TypedLinkSchemaAndFacetName& WithTypedLinkName(const char* value) { SetTypedLinkName(value); return *this;}

  private:

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;

    Aws::String m_typedLinkName;
    bool m_typedLinkNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
