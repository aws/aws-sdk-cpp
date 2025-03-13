/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/EntityConfiguration.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class AssociateEntitiesToExperienceRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API AssociateEntitiesToExperienceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateEntitiesToExperience"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of your Amazon Kendra experience.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AssociateEntitiesToExperienceRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the index for your Amazon Kendra experience.</p>
     */
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    AssociateEntitiesToExperienceRequest& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists users or groups in your IAM Identity Center identity source.</p>
     */
    inline const Aws::Vector<EntityConfiguration>& GetEntityList() const { return m_entityList; }
    inline bool EntityListHasBeenSet() const { return m_entityListHasBeenSet; }
    template<typename EntityListT = Aws::Vector<EntityConfiguration>>
    void SetEntityList(EntityListT&& value) { m_entityListHasBeenSet = true; m_entityList = std::forward<EntityListT>(value); }
    template<typename EntityListT = Aws::Vector<EntityConfiguration>>
    AssociateEntitiesToExperienceRequest& WithEntityList(EntityListT&& value) { SetEntityList(std::forward<EntityListT>(value)); return *this;}
    template<typename EntityListT = EntityConfiguration>
    AssociateEntitiesToExperienceRequest& AddEntityList(EntityListT&& value) { m_entityListHasBeenSet = true; m_entityList.emplace_back(std::forward<EntityListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::Vector<EntityConfiguration> m_entityList;
    bool m_entityListHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
