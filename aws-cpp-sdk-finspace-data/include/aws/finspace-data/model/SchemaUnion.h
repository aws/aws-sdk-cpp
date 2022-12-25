/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/model/SchemaDefinition.h>
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
namespace FinSpaceData
{
namespace Model
{

  /**
   * <p>A union of schema types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/SchemaUnion">AWS
   * API Reference</a></p>
   */
  class SchemaUnion
  {
  public:
    AWS_FINSPACEDATA_API SchemaUnion();
    AWS_FINSPACEDATA_API SchemaUnion(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API SchemaUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration for a schema on a tabular Dataset.</p>
     */
    inline const SchemaDefinition& GetTabularSchemaConfig() const{ return m_tabularSchemaConfig; }

    /**
     * <p>The configuration for a schema on a tabular Dataset.</p>
     */
    inline bool TabularSchemaConfigHasBeenSet() const { return m_tabularSchemaConfigHasBeenSet; }

    /**
     * <p>The configuration for a schema on a tabular Dataset.</p>
     */
    inline void SetTabularSchemaConfig(const SchemaDefinition& value) { m_tabularSchemaConfigHasBeenSet = true; m_tabularSchemaConfig = value; }

    /**
     * <p>The configuration for a schema on a tabular Dataset.</p>
     */
    inline void SetTabularSchemaConfig(SchemaDefinition&& value) { m_tabularSchemaConfigHasBeenSet = true; m_tabularSchemaConfig = std::move(value); }

    /**
     * <p>The configuration for a schema on a tabular Dataset.</p>
     */
    inline SchemaUnion& WithTabularSchemaConfig(const SchemaDefinition& value) { SetTabularSchemaConfig(value); return *this;}

    /**
     * <p>The configuration for a schema on a tabular Dataset.</p>
     */
    inline SchemaUnion& WithTabularSchemaConfig(SchemaDefinition&& value) { SetTabularSchemaConfig(std::move(value)); return *this;}

  private:

    SchemaDefinition m_tabularSchemaConfig;
    bool m_tabularSchemaConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
