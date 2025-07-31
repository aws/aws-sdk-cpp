/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/IdNamespaceType.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>An object containing <code>inputSourceARN</code>, <code>schemaName</code>,
   * and <code>type</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/IdMappingWorkflowInputSource">AWS
   * API Reference</a></p>
   */
  class IdMappingWorkflowInputSource
  {
  public:
    AWS_ENTITYRESOLUTION_API IdMappingWorkflowInputSource() = default;
    AWS_ENTITYRESOLUTION_API IdMappingWorkflowInputSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API IdMappingWorkflowInputSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Glue table Amazon Resource Name (ARN) or a matching workflow ARN for the
     * input source table.</p>
     */
    inline const Aws::String& GetInputSourceARN() const { return m_inputSourceARN; }
    inline bool InputSourceARNHasBeenSet() const { return m_inputSourceARNHasBeenSet; }
    template<typename InputSourceARNT = Aws::String>
    void SetInputSourceARN(InputSourceARNT&& value) { m_inputSourceARNHasBeenSet = true; m_inputSourceARN = std::forward<InputSourceARNT>(value); }
    template<typename InputSourceARNT = Aws::String>
    IdMappingWorkflowInputSource& WithInputSourceARN(InputSourceARNT&& value) { SetInputSourceARN(std::forward<InputSourceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schema to be retrieved.</p>
     */
    inline const Aws::String& GetSchemaName() const { return m_schemaName; }
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }
    template<typename SchemaNameT = Aws::String>
    void SetSchemaName(SchemaNameT&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::forward<SchemaNameT>(value); }
    template<typename SchemaNameT = Aws::String>
    IdMappingWorkflowInputSource& WithSchemaName(SchemaNameT&& value) { SetSchemaName(std::forward<SchemaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of ID namespace. There are two types: <code>SOURCE</code> and
     * <code>TARGET</code>. </p> <p>The <code>SOURCE</code> contains configurations for
     * <code>sourceId</code> data that will be processed in an ID mapping workflow.
     * </p> <p>The <code>TARGET</code> contains a configuration of
     * <code>targetId</code> which all <code>sourceIds</code> will resolve to.</p>
     */
    inline IdNamespaceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(IdNamespaceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline IdMappingWorkflowInputSource& WithType(IdNamespaceType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_inputSourceARN;
    bool m_inputSourceARNHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    IdNamespaceType m_type{IdNamespaceType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
