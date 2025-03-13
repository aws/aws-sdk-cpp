/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/IdMappingTableSchemaTypeProperties.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Information about the schema type properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/SchemaTypeProperties">AWS
   * API Reference</a></p>
   */
  class SchemaTypeProperties
  {
  public:
    AWS_CLEANROOMS_API SchemaTypeProperties() = default;
    AWS_CLEANROOMS_API SchemaTypeProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API SchemaTypeProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID mapping table for the schema type properties.</p>
     */
    inline const IdMappingTableSchemaTypeProperties& GetIdMappingTable() const { return m_idMappingTable; }
    inline bool IdMappingTableHasBeenSet() const { return m_idMappingTableHasBeenSet; }
    template<typename IdMappingTableT = IdMappingTableSchemaTypeProperties>
    void SetIdMappingTable(IdMappingTableT&& value) { m_idMappingTableHasBeenSet = true; m_idMappingTable = std::forward<IdMappingTableT>(value); }
    template<typename IdMappingTableT = IdMappingTableSchemaTypeProperties>
    SchemaTypeProperties& WithIdMappingTable(IdMappingTableT&& value) { SetIdMappingTable(std::forward<IdMappingTableT>(value)); return *this;}
    ///@}
  private:

    IdMappingTableSchemaTypeProperties m_idMappingTable;
    bool m_idMappingTableHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
