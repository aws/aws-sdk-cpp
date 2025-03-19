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
    AWS_CLOUDDIRECTORY_API TypedLinkSchemaAndFacetName() = default;
    AWS_CLOUDDIRECTORY_API TypedLinkSchemaAndFacetName(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API TypedLinkSchemaAndFacetName& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the schema. For more
     * information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetSchemaArn() const { return m_schemaArn; }
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }
    template<typename SchemaArnT = Aws::String>
    void SetSchemaArn(SchemaArnT&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::forward<SchemaArnT>(value); }
    template<typename SchemaArnT = Aws::String>
    TypedLinkSchemaAndFacetName& WithSchemaArn(SchemaArnT&& value) { SetSchemaArn(std::forward<SchemaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline const Aws::String& GetTypedLinkName() const { return m_typedLinkName; }
    inline bool TypedLinkNameHasBeenSet() const { return m_typedLinkNameHasBeenSet; }
    template<typename TypedLinkNameT = Aws::String>
    void SetTypedLinkName(TypedLinkNameT&& value) { m_typedLinkNameHasBeenSet = true; m_typedLinkName = std::forward<TypedLinkNameT>(value); }
    template<typename TypedLinkNameT = Aws::String>
    TypedLinkSchemaAndFacetName& WithTypedLinkName(TypedLinkNameT&& value) { SetTypedLinkName(std::forward<TypedLinkNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;

    Aws::String m_typedLinkName;
    bool m_typedLinkNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
