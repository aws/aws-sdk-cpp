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
    AWS_CLEANROOMS_API IdNamespaceAssociationInputReferencePropertiesSummary() = default;
    AWS_CLEANROOMS_API IdNamespaceAssociationInputReferencePropertiesSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API IdNamespaceAssociationInputReferencePropertiesSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID namespace type for this ID namespace association.</p>
     */
    inline IdNamespaceType GetIdNamespaceType() const { return m_idNamespaceType; }
    inline bool IdNamespaceTypeHasBeenSet() const { return m_idNamespaceTypeHasBeenSet; }
    inline void SetIdNamespaceType(IdNamespaceType value) { m_idNamespaceTypeHasBeenSet = true; m_idNamespaceType = value; }
    inline IdNamespaceAssociationInputReferencePropertiesSummary& WithIdNamespaceType(IdNamespaceType value) { SetIdNamespaceType(value); return *this;}
    ///@}
  private:

    IdNamespaceType m_idNamespaceType{IdNamespaceType::NOT_SET};
    bool m_idNamespaceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
