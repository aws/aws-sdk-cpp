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
  class DisassociateEntitiesFromExperienceRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API DisassociateEntitiesFromExperienceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateEntitiesFromExperience"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of your Amazon Kendra experience.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of your Amazon Kendra experience.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of your Amazon Kendra experience.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of your Amazon Kendra experience.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of your Amazon Kendra experience.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of your Amazon Kendra experience.</p>
     */
    inline DisassociateEntitiesFromExperienceRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of your Amazon Kendra experience.</p>
     */
    inline DisassociateEntitiesFromExperienceRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of your Amazon Kendra experience.</p>
     */
    inline DisassociateEntitiesFromExperienceRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The identifier of the index for your Amazon Kendra experience.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index for your Amazon Kendra experience.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index for your Amazon Kendra experience.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index for your Amazon Kendra experience.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index for your Amazon Kendra experience.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index for your Amazon Kendra experience.</p>
     */
    inline DisassociateEntitiesFromExperienceRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index for your Amazon Kendra experience.</p>
     */
    inline DisassociateEntitiesFromExperienceRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index for your Amazon Kendra experience.</p>
     */
    inline DisassociateEntitiesFromExperienceRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>Lists users or groups in your IAM Identity Center identity source.</p>
     */
    inline const Aws::Vector<EntityConfiguration>& GetEntityList() const{ return m_entityList; }

    /**
     * <p>Lists users or groups in your IAM Identity Center identity source.</p>
     */
    inline bool EntityListHasBeenSet() const { return m_entityListHasBeenSet; }

    /**
     * <p>Lists users or groups in your IAM Identity Center identity source.</p>
     */
    inline void SetEntityList(const Aws::Vector<EntityConfiguration>& value) { m_entityListHasBeenSet = true; m_entityList = value; }

    /**
     * <p>Lists users or groups in your IAM Identity Center identity source.</p>
     */
    inline void SetEntityList(Aws::Vector<EntityConfiguration>&& value) { m_entityListHasBeenSet = true; m_entityList = std::move(value); }

    /**
     * <p>Lists users or groups in your IAM Identity Center identity source.</p>
     */
    inline DisassociateEntitiesFromExperienceRequest& WithEntityList(const Aws::Vector<EntityConfiguration>& value) { SetEntityList(value); return *this;}

    /**
     * <p>Lists users or groups in your IAM Identity Center identity source.</p>
     */
    inline DisassociateEntitiesFromExperienceRequest& WithEntityList(Aws::Vector<EntityConfiguration>&& value) { SetEntityList(std::move(value)); return *this;}

    /**
     * <p>Lists users or groups in your IAM Identity Center identity source.</p>
     */
    inline DisassociateEntitiesFromExperienceRequest& AddEntityList(const EntityConfiguration& value) { m_entityListHasBeenSet = true; m_entityList.push_back(value); return *this; }

    /**
     * <p>Lists users or groups in your IAM Identity Center identity source.</p>
     */
    inline DisassociateEntitiesFromExperienceRequest& AddEntityList(EntityConfiguration&& value) { m_entityListHasBeenSet = true; m_entityList.push_back(std::move(value)); return *this; }

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
