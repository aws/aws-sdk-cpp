/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
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
   * <p>Detailed information about the ID namespace association input reference
   * properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/IdNamespaceAssociationInputReferencePropertiesSummary">AWS
   * API Reference</a></p>
   */
  class IdNamespaceAssociationInputReferencePropertiesSummary
  {
  public:
    AWS_CLEANROOMS_API IdNamespaceAssociationInputReferencePropertiesSummary();
    AWS_CLEANROOMS_API IdNamespaceAssociationInputReferencePropertiesSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API IdNamespaceAssociationInputReferencePropertiesSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID namespace type for this ID namespace association.</p>
     */
    inline const IdNamespaceType& GetIdNamespaceType() const{ return m_idNamespaceType; }
    inline bool IdNamespaceTypeHasBeenSet() const { return m_idNamespaceTypeHasBeenSet; }
    inline void SetIdNamespaceType(const IdNamespaceType& value) { m_idNamespaceTypeHasBeenSet = true; m_idNamespaceType = value; }
    inline void SetIdNamespaceType(IdNamespaceType&& value) { m_idNamespaceTypeHasBeenSet = true; m_idNamespaceType = std::move(value); }
    inline IdNamespaceAssociationInputReferencePropertiesSummary& WithIdNamespaceType(const IdNamespaceType& value) { SetIdNamespaceType(value); return *this;}
    inline IdNamespaceAssociationInputReferencePropertiesSummary& WithIdNamespaceType(IdNamespaceType&& value) { SetIdNamespaceType(std::move(value)); return *this;}
    ///@}
  private:

    IdNamespaceType m_idNamespaceType;
    bool m_idNamespaceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
