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
    AWS_CLEANROOMS_API IdMappingTableInputReferenceProperties();
    AWS_CLEANROOMS_API IdMappingTableInputReferenceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API IdMappingTableInputReferenceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input source of the ID mapping table.</p>
     */
    inline const Aws::Vector<IdMappingTableInputSource>& GetIdMappingTableInputSource() const{ return m_idMappingTableInputSource; }
    inline bool IdMappingTableInputSourceHasBeenSet() const { return m_idMappingTableInputSourceHasBeenSet; }
    inline void SetIdMappingTableInputSource(const Aws::Vector<IdMappingTableInputSource>& value) { m_idMappingTableInputSourceHasBeenSet = true; m_idMappingTableInputSource = value; }
    inline void SetIdMappingTableInputSource(Aws::Vector<IdMappingTableInputSource>&& value) { m_idMappingTableInputSourceHasBeenSet = true; m_idMappingTableInputSource = std::move(value); }
    inline IdMappingTableInputReferenceProperties& WithIdMappingTableInputSource(const Aws::Vector<IdMappingTableInputSource>& value) { SetIdMappingTableInputSource(value); return *this;}
    inline IdMappingTableInputReferenceProperties& WithIdMappingTableInputSource(Aws::Vector<IdMappingTableInputSource>&& value) { SetIdMappingTableInputSource(std::move(value)); return *this;}
    inline IdMappingTableInputReferenceProperties& AddIdMappingTableInputSource(const IdMappingTableInputSource& value) { m_idMappingTableInputSourceHasBeenSet = true; m_idMappingTableInputSource.push_back(value); return *this; }
    inline IdMappingTableInputReferenceProperties& AddIdMappingTableInputSource(IdMappingTableInputSource&& value) { m_idMappingTableInputSourceHasBeenSet = true; m_idMappingTableInputSource.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<IdMappingTableInputSource> m_idMappingTableInputSource;
    bool m_idMappingTableInputSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
