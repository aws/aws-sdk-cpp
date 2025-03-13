/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The unique ID of the schema in the Glue schema registry.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SchemaId">AWS API
   * Reference</a></p>
   */
  class SchemaId
  {
  public:
    AWS_GLUE_API SchemaId() = default;
    AWS_GLUE_API SchemaId(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SchemaId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the schema. One of <code>SchemaArn</code>
     * or <code>SchemaName</code> has to be provided.</p>
     */
    inline const Aws::String& GetSchemaArn() const { return m_schemaArn; }
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }
    template<typename SchemaArnT = Aws::String>
    void SetSchemaArn(SchemaArnT&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::forward<SchemaArnT>(value); }
    template<typename SchemaArnT = Aws::String>
    SchemaId& WithSchemaArn(SchemaArnT&& value) { SetSchemaArn(std::forward<SchemaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schema. One of <code>SchemaArn</code> or
     * <code>SchemaName</code> has to be provided.</p>
     */
    inline const Aws::String& GetSchemaName() const { return m_schemaName; }
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }
    template<typename SchemaNameT = Aws::String>
    void SetSchemaName(SchemaNameT&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::forward<SchemaNameT>(value); }
    template<typename SchemaNameT = Aws::String>
    SchemaId& WithSchemaName(SchemaNameT&& value) { SetSchemaName(std::forward<SchemaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schema registry that contains the schema.</p>
     */
    inline const Aws::String& GetRegistryName() const { return m_registryName; }
    inline bool RegistryNameHasBeenSet() const { return m_registryNameHasBeenSet; }
    template<typename RegistryNameT = Aws::String>
    void SetRegistryName(RegistryNameT&& value) { m_registryNameHasBeenSet = true; m_registryName = std::forward<RegistryNameT>(value); }
    template<typename RegistryNameT = Aws::String>
    SchemaId& WithRegistryName(RegistryNameT&& value) { SetRegistryName(std::forward<RegistryNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    Aws::String m_registryName;
    bool m_registryNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
