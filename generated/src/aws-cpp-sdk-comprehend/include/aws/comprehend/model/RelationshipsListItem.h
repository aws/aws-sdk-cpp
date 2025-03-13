/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/RelationshipType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>List of child blocks for the current block.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/RelationshipsListItem">AWS
   * API Reference</a></p>
   */
  class RelationshipsListItem
  {
  public:
    AWS_COMPREHEND_API RelationshipsListItem() = default;
    AWS_COMPREHEND_API RelationshipsListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API RelationshipsListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifers of the child blocks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const { return m_ids; }
    inline bool IdsHasBeenSet() const { return m_idsHasBeenSet; }
    template<typename IdsT = Aws::Vector<Aws::String>>
    void SetIds(IdsT&& value) { m_idsHasBeenSet = true; m_ids = std::forward<IdsT>(value); }
    template<typename IdsT = Aws::Vector<Aws::String>>
    RelationshipsListItem& WithIds(IdsT&& value) { SetIds(std::forward<IdsT>(value)); return *this;}
    template<typename IdsT = Aws::String>
    RelationshipsListItem& AddIds(IdsT&& value) { m_idsHasBeenSet = true; m_ids.emplace_back(std::forward<IdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Only supported relationship is a child relationship.</p>
     */
    inline RelationshipType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RelationshipType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RelationshipsListItem& WithType(RelationshipType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_ids;
    bool m_idsHasBeenSet = false;

    RelationshipType m_type{RelationshipType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
