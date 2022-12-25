/**
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
    AWS_KENDRA_API DisassociatePersonasFromEntitiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociatePersonasFromEntities"; }

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
    inline DisassociatePersonasFromEntitiesRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of your Amazon Kendra experience.</p>
     */
    inline DisassociatePersonasFromEntitiesRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of your Amazon Kendra experience.</p>
     */
    inline DisassociatePersonasFromEntitiesRequest& WithId(const char* value) { SetId(value); return *this;}


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
    inline DisassociatePersonasFromEntitiesRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index for your Amazon Kendra experience.</p>
     */
    inline DisassociatePersonasFromEntitiesRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index for your Amazon Kendra experience.</p>
     */
    inline DisassociatePersonasFromEntitiesRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The identifiers of users or groups in your IAM Identity Center identity
     * source. For example, user IDs could be user emails.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityIds() const{ return m_entityIds; }

    /**
     * <p>The identifiers of users or groups in your IAM Identity Center identity
     * source. For example, user IDs could be user emails.</p>
     */
    inline bool EntityIdsHasBeenSet() const { return m_entityIdsHasBeenSet; }

    /**
     * <p>The identifiers of users or groups in your IAM Identity Center identity
     * source. For example, user IDs could be user emails.</p>
     */
    inline void SetEntityIds(const Aws::Vector<Aws::String>& value) { m_entityIdsHasBeenSet = true; m_entityIds = value; }

    /**
     * <p>The identifiers of users or groups in your IAM Identity Center identity
     * source. For example, user IDs could be user emails.</p>
     */
    inline void SetEntityIds(Aws::Vector<Aws::String>&& value) { m_entityIdsHasBeenSet = true; m_entityIds = std::move(value); }

    /**
     * <p>The identifiers of users or groups in your IAM Identity Center identity
     * source. For example, user IDs could be user emails.</p>
     */
    inline DisassociatePersonasFromEntitiesRequest& WithEntityIds(const Aws::Vector<Aws::String>& value) { SetEntityIds(value); return *this;}

    /**
     * <p>The identifiers of users or groups in your IAM Identity Center identity
     * source. For example, user IDs could be user emails.</p>
     */
    inline DisassociatePersonasFromEntitiesRequest& WithEntityIds(Aws::Vector<Aws::String>&& value) { SetEntityIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers of users or groups in your IAM Identity Center identity
     * source. For example, user IDs could be user emails.</p>
     */
    inline DisassociatePersonasFromEntitiesRequest& AddEntityIds(const Aws::String& value) { m_entityIdsHasBeenSet = true; m_entityIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of users or groups in your IAM Identity Center identity
     * source. For example, user IDs could be user emails.</p>
     */
    inline DisassociatePersonasFromEntitiesRequest& AddEntityIds(Aws::String&& value) { m_entityIdsHasBeenSet = true; m_entityIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers of users or groups in your IAM Identity Center identity
     * source. For example, user IDs could be user emails.</p>
     */
    inline DisassociatePersonasFromEntitiesRequest& AddEntityIds(const char* value) { m_entityIdsHasBeenSet = true; m_entityIds.push_back(value); return *this; }

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
