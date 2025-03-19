/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/IdNamespaceType.h>
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
   * <p>The input source of the ID mapping table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/IdMappingTableInputSource">AWS
   * API Reference</a></p>
   */
  class IdMappingTableInputSource
  {
  public:
    AWS_CLEANROOMS_API IdMappingTableInputSource() = default;
    AWS_CLEANROOMS_API IdMappingTableInputSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API IdMappingTableInputSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the ID namespace association.</p>
     */
    inline const Aws::String& GetIdNamespaceAssociationId() const { return m_idNamespaceAssociationId; }
    inline bool IdNamespaceAssociationIdHasBeenSet() const { return m_idNamespaceAssociationIdHasBeenSet; }
    template<typename IdNamespaceAssociationIdT = Aws::String>
    void SetIdNamespaceAssociationId(IdNamespaceAssociationIdT&& value) { m_idNamespaceAssociationIdHasBeenSet = true; m_idNamespaceAssociationId = std::forward<IdNamespaceAssociationIdT>(value); }
    template<typename IdNamespaceAssociationIdT = Aws::String>
    IdMappingTableInputSource& WithIdNamespaceAssociationId(IdNamespaceAssociationIdT&& value) { SetIdNamespaceAssociationId(std::forward<IdNamespaceAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the input source of the ID mapping table.</p>
     */
    inline IdNamespaceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(IdNamespaceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline IdMappingTableInputSource& WithType(IdNamespaceType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_idNamespaceAssociationId;
    bool m_idNamespaceAssociationIdHasBeenSet = false;

    IdNamespaceType m_type{IdNamespaceType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
