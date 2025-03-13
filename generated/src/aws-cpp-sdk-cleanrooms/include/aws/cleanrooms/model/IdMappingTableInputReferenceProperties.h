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
   * <p>The input reference properties for the ID mapping table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/IdMappingTableInputReferenceProperties">AWS
   * API Reference</a></p>
   */
  class IdMappingTableInputReferenceProperties
  {
  public:
    AWS_CLEANROOMS_API IdMappingTableInputReferenceProperties() = default;
    AWS_CLEANROOMS_API IdMappingTableInputReferenceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API IdMappingTableInputReferenceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input source of the ID mapping table.</p>
     */
    inline const Aws::Vector<IdMappingTableInputSource>& GetIdMappingTableInputSource() const { return m_idMappingTableInputSource; }
    inline bool IdMappingTableInputSourceHasBeenSet() const { return m_idMappingTableInputSourceHasBeenSet; }
    template<typename IdMappingTableInputSourceT = Aws::Vector<IdMappingTableInputSource>>
    void SetIdMappingTableInputSource(IdMappingTableInputSourceT&& value) { m_idMappingTableInputSourceHasBeenSet = true; m_idMappingTableInputSource = std::forward<IdMappingTableInputSourceT>(value); }
    template<typename IdMappingTableInputSourceT = Aws::Vector<IdMappingTableInputSource>>
    IdMappingTableInputReferenceProperties& WithIdMappingTableInputSource(IdMappingTableInputSourceT&& value) { SetIdMappingTableInputSource(std::forward<IdMappingTableInputSourceT>(value)); return *this;}
    template<typename IdMappingTableInputSourceT = IdMappingTableInputSource>
    IdMappingTableInputReferenceProperties& AddIdMappingTableInputSource(IdMappingTableInputSourceT&& value) { m_idMappingTableInputSourceHasBeenSet = true; m_idMappingTableInputSource.emplace_back(std::forward<IdMappingTableInputSourceT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<IdMappingTableInputSource> m_idMappingTableInputSource;
    bool m_idMappingTableInputSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
