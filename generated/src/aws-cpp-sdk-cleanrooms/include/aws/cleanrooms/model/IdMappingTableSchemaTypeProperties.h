/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/IdMappingTableInputSource.h>
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
   * <p>Additional properties that are specific to the type of the associated
   * schema.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/IdMappingTableSchemaTypeProperties">AWS
   * API Reference</a></p>
   */
  class IdMappingTableSchemaTypeProperties
  {
  public:
    AWS_CLEANROOMS_API IdMappingTableSchemaTypeProperties() = default;
    AWS_CLEANROOMS_API IdMappingTableSchemaTypeProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API IdMappingTableSchemaTypeProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines which ID namespace associations are used to create the ID mapping
     * table.</p>
     */
    inline const Aws::Vector<IdMappingTableInputSource>& GetIdMappingTableInputSource() const { return m_idMappingTableInputSource; }
    inline bool IdMappingTableInputSourceHasBeenSet() const { return m_idMappingTableInputSourceHasBeenSet; }
    template<typename IdMappingTableInputSourceT = Aws::Vector<IdMappingTableInputSource>>
    void SetIdMappingTableInputSource(IdMappingTableInputSourceT&& value) { m_idMappingTableInputSourceHasBeenSet = true; m_idMappingTableInputSource = std::forward<IdMappingTableInputSourceT>(value); }
    template<typename IdMappingTableInputSourceT = Aws::Vector<IdMappingTableInputSource>>
    IdMappingTableSchemaTypeProperties& WithIdMappingTableInputSource(IdMappingTableInputSourceT&& value) { SetIdMappingTableInputSource(std::forward<IdMappingTableInputSourceT>(value)); return *this;}
    template<typename IdMappingTableInputSourceT = IdMappingTableInputSource>
    IdMappingTableSchemaTypeProperties& AddIdMappingTableInputSource(IdMappingTableInputSourceT&& value) { m_idMappingTableInputSourceHasBeenSet = true; m_idMappingTableInputSource.emplace_back(std::forward<IdMappingTableInputSourceT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<IdMappingTableInputSource> m_idMappingTableInputSource;
    bool m_idMappingTableInputSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
