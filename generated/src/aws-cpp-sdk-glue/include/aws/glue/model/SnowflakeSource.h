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
    AWS_GLUE_API SnowflakeSource();
    AWS_GLUE_API SnowflakeSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SnowflakeSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Snowflake data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Snowflake data source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Snowflake data source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Snowflake data source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Snowflake data source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Snowflake data source.</p>
     */
    inline SnowflakeSource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Snowflake data source.</p>
     */
    inline SnowflakeSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Snowflake data source.</p>
     */
    inline SnowflakeSource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Configuration for the Snowflake data source.</p>
     */
    inline const SnowflakeNodeData& GetData() const{ return m_data; }

    /**
     * <p>Configuration for the Snowflake data source.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>Configuration for the Snowflake data source.</p>
     */
    inline void SetData(const SnowflakeNodeData& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>Configuration for the Snowflake data source.</p>
     */
    inline void SetData(SnowflakeNodeData&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>Configuration for the Snowflake data source.</p>
     */
    inline SnowflakeSource& WithData(const SnowflakeNodeData& value) { SetData(value); return *this;}

    /**
     * <p>Configuration for the Snowflake data source.</p>
     */
    inline SnowflakeSource& WithData(SnowflakeNodeData&& value) { SetData(std::move(value)); return *this;}


    /**
     * <p>Specifies user-defined schemas for your output data.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const{ return m_outputSchemas; }

    /**
     * <p>Specifies user-defined schemas for your output data.</p>
     */
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }

    /**
     * <p>Specifies user-defined schemas for your output data.</p>
     */
    inline void SetOutputSchemas(const Aws::Vector<GlueSchema>& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = value; }

    /**
     * <p>Specifies user-defined schemas for your output data.</p>
     */
    inline void SetOutputSchemas(Aws::Vector<GlueSchema>&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::move(value); }

    /**
     * <p>Specifies user-defined schemas for your output data.</p>
     */
    inline SnowflakeSource& WithOutputSchemas(const Aws::Vector<GlueSchema>& value) { SetOutputSchemas(value); return *this;}

    /**
     * <p>Specifies user-defined schemas for your output data.</p>
     */
    inline SnowflakeSource& WithOutputSchemas(Aws::Vector<GlueSchema>&& value) { SetOutputSchemas(std::move(value)); return *this;}

    /**
     * <p>Specifies user-defined schemas for your output data.</p>
     */
    inline SnowflakeSource& AddOutputSchemas(const GlueSchema& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(value); return *this; }

    /**
     * <p>Specifies user-defined schemas for your output data.</p>
     */
    inline SnowflakeSource& AddOutputSchemas(GlueSchema&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(std::move(value)); return *this; }

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
