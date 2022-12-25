/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/SchemaDefinition.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>Contains the configuration information of the Parquet format.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ParquetConfiguration">AWS
   * API Reference</a></p>
   */
  class ParquetConfiguration
  {
  public:
    AWS_IOTANALYTICS_API ParquetConfiguration();
    AWS_IOTANALYTICS_API ParquetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API ParquetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information needed to define a schema.</p>
     */
    inline const SchemaDefinition& GetSchemaDefinition() const{ return m_schemaDefinition; }

    /**
     * <p>Information needed to define a schema.</p>
     */
    inline bool SchemaDefinitionHasBeenSet() const { return m_schemaDefinitionHasBeenSet; }

    /**
     * <p>Information needed to define a schema.</p>
     */
    inline void SetSchemaDefinition(const SchemaDefinition& value) { m_schemaDefinitionHasBeenSet = true; m_schemaDefinition = value; }

    /**
     * <p>Information needed to define a schema.</p>
     */
    inline void SetSchemaDefinition(SchemaDefinition&& value) { m_schemaDefinitionHasBeenSet = true; m_schemaDefinition = std::move(value); }

    /**
     * <p>Information needed to define a schema.</p>
     */
    inline ParquetConfiguration& WithSchemaDefinition(const SchemaDefinition& value) { SetSchemaDefinition(value); return *this;}

    /**
     * <p>Information needed to define a schema.</p>
     */
    inline ParquetConfiguration& WithSchemaDefinition(SchemaDefinition&& value) { SetSchemaDefinition(std::move(value)); return *this;}

  private:

    SchemaDefinition m_schemaDefinition;
    bool m_schemaDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
