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
   * <p>Specifies a single column in a Glue schema definition.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GlueStudioSchemaColumn">AWS
   * API Reference</a></p>
   */
  class GlueStudioSchemaColumn
  {
  public:
    AWS_GLUE_API GlueStudioSchemaColumn() = default;
    AWS_GLUE_API GlueStudioSchemaColumn(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API GlueStudioSchemaColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the column in the Glue Studio schema.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GlueStudioSchemaColumn& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hive type for this column in the Glue Studio schema.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    GlueStudioSchemaColumn& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the column as defined in Glue Studio.</p>
     */
    inline const Aws::String& GetGlueStudioType() const { return m_glueStudioType; }
    inline bool GlueStudioTypeHasBeenSet() const { return m_glueStudioTypeHasBeenSet; }
    template<typename GlueStudioTypeT = Aws::String>
    void SetGlueStudioType(GlueStudioTypeT&& value) { m_glueStudioTypeHasBeenSet = true; m_glueStudioType = std::forward<GlueStudioTypeT>(value); }
    template<typename GlueStudioTypeT = Aws::String>
    GlueStudioSchemaColumn& WithGlueStudioType(GlueStudioTypeT&& value) { SetGlueStudioType(std::forward<GlueStudioTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_glueStudioType;
    bool m_glueStudioTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
