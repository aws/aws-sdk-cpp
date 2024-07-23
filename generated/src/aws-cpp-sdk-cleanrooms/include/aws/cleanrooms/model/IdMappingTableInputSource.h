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
    AWS_CLEANROOMS_API IdMappingTableInputSource();
    AWS_CLEANROOMS_API IdMappingTableInputSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API IdMappingTableInputSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the ID namespace association.</p>
     */
    inline const Aws::String& GetIdNamespaceAssociationId() const{ return m_idNamespaceAssociationId; }
    inline bool IdNamespaceAssociationIdHasBeenSet() const { return m_idNamespaceAssociationIdHasBeenSet; }
    inline void SetIdNamespaceAssociationId(const Aws::String& value) { m_idNamespaceAssociationIdHasBeenSet = true; m_idNamespaceAssociationId = value; }
    inline void SetIdNamespaceAssociationId(Aws::String&& value) { m_idNamespaceAssociationIdHasBeenSet = true; m_idNamespaceAssociationId = std::move(value); }
    inline void SetIdNamespaceAssociationId(const char* value) { m_idNamespaceAssociationIdHasBeenSet = true; m_idNamespaceAssociationId.assign(value); }
    inline IdMappingTableInputSource& WithIdNamespaceAssociationId(const Aws::String& value) { SetIdNamespaceAssociationId(value); return *this;}
    inline IdMappingTableInputSource& WithIdNamespaceAssociationId(Aws::String&& value) { SetIdNamespaceAssociationId(std::move(value)); return *this;}
    inline IdMappingTableInputSource& WithIdNamespaceAssociationId(const char* value) { SetIdNamespaceAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the input source of the ID mapping table.</p>
     */
    inline const IdNamespaceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const IdNamespaceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(IdNamespaceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline IdMappingTableInputSource& WithType(const IdNamespaceType& value) { SetType(value); return *this;}
    inline IdMappingTableInputSource& WithType(IdNamespaceType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_idNamespaceAssociationId;
    bool m_idNamespaceAssociationIdHasBeenSet = false;

    IdNamespaceType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
