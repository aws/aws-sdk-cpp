﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class DisassociatePersonasFromEntitiesRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API DisassociatePersonasFromEntitiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociatePersonasFromEntities"; }

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
    DisassociatePersonasFromEntitiesRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
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
    DisassociatePersonasFromEntitiesRequest& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of users or groups in your IAM Identity Center identity
     * source. For example, user IDs could be user emails.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityIds() const { return m_entityIds; }
    inline bool EntityIdsHasBeenSet() const { return m_entityIdsHasBeenSet; }
    template<typename EntityIdsT = Aws::Vector<Aws::String>>
    void SetEntityIds(EntityIdsT&& value) { m_entityIdsHasBeenSet = true; m_entityIds = std::forward<EntityIdsT>(value); }
    template<typename EntityIdsT = Aws::Vector<Aws::String>>
    DisassociatePersonasFromEntitiesRequest& WithEntityIds(EntityIdsT&& value) { SetEntityIds(std::forward<EntityIdsT>(value)); return *this;}
    template<typename EntityIdsT = Aws::String>
    DisassociatePersonasFromEntitiesRequest& AddEntityIds(EntityIdsT&& value) { m_entityIdsHasBeenSet = true; m_entityIds.emplace_back(std::forward<EntityIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_entityIds;
    bool m_entityIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
