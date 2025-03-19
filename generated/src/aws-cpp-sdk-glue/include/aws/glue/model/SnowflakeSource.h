/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/SnowflakeNodeData.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/GlueSchema.h>
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
   * <p>Specifies a Snowflake data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SnowflakeSource">AWS
   * API Reference</a></p>
   */
  class SnowflakeSource
  {
  public:
    AWS_GLUE_API SnowflakeSource() = default;
    AWS_GLUE_API SnowflakeSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SnowflakeSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Snowflake data source.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SnowflakeSource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for the Snowflake data source.</p>
     */
    inline const SnowflakeNodeData& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = SnowflakeNodeData>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = SnowflakeNodeData>
    SnowflakeSource& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies user-defined schemas for your output data.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const { return m_outputSchemas; }
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }
    template<typename OutputSchemasT = Aws::Vector<GlueSchema>>
    void SetOutputSchemas(OutputSchemasT&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::forward<OutputSchemasT>(value); }
    template<typename OutputSchemasT = Aws::Vector<GlueSchema>>
    SnowflakeSource& WithOutputSchemas(OutputSchemasT&& value) { SetOutputSchemas(std::forward<OutputSchemasT>(value)); return *this;}
    template<typename OutputSchemasT = GlueSchema>
    SnowflakeSource& AddOutputSchemas(OutputSchemasT&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.emplace_back(std::forward<OutputSchemasT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SnowflakeNodeData m_data;
    bool m_dataHasBeenSet = false;

    Aws::Vector<GlueSchema> m_outputSchemas;
    bool m_outputSchemasHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
