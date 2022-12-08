/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/EntityPersonaConfiguration.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class AssociatePersonasToEntitiesRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API AssociatePersonasToEntitiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociatePersonasToEntities"; }

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
    inline AssociatePersonasToEntitiesRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of your Amazon Kendra experience.</p>
     */
    inline AssociatePersonasToEntitiesRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of your Amazon Kendra experience.</p>
     */
    inline AssociatePersonasToEntitiesRequest& WithId(const char* value) { SetId(value); return *this;}


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
    inline AssociatePersonasToEntitiesRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index for your Amazon Kendra experience.</p>
     */
    inline AssociatePersonasToEntitiesRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index for your Amazon Kendra experience.</p>
     */
    inline AssociatePersonasToEntitiesRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The personas that define the specific permissions of users or groups in your
     * IAM Identity Center identity source. The available personas or access roles are
     * <code>Owner</code> and <code>Viewer</code>. For more information on these
     * personas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html#access-search-experience">Providing
     * access to your search page</a>.</p>
     */
    inline const Aws::Vector<EntityPersonaConfiguration>& GetPersonas() const{ return m_personas; }

    /**
     * <p>The personas that define the specific permissions of users or groups in your
     * IAM Identity Center identity source. The available personas or access roles are
     * <code>Owner</code> and <code>Viewer</code>. For more information on these
     * personas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html#access-search-experience">Providing
     * access to your search page</a>.</p>
     */
    inline bool PersonasHasBeenSet() const { return m_personasHasBeenSet; }

    /**
     * <p>The personas that define the specific permissions of users or groups in your
     * IAM Identity Center identity source. The available personas or access roles are
     * <code>Owner</code> and <code>Viewer</code>. For more information on these
     * personas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html#access-search-experience">Providing
     * access to your search page</a>.</p>
     */
    inline void SetPersonas(const Aws::Vector<EntityPersonaConfiguration>& value) { m_personasHasBeenSet = true; m_personas = value; }

    /**
     * <p>The personas that define the specific permissions of users or groups in your
     * IAM Identity Center identity source. The available personas or access roles are
     * <code>Owner</code> and <code>Viewer</code>. For more information on these
     * personas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html#access-search-experience">Providing
     * access to your search page</a>.</p>
     */
    inline void SetPersonas(Aws::Vector<EntityPersonaConfiguration>&& value) { m_personasHasBeenSet = true; m_personas = std::move(value); }

    /**
     * <p>The personas that define the specific permissions of users or groups in your
     * IAM Identity Center identity source. The available personas or access roles are
     * <code>Owner</code> and <code>Viewer</code>. For more information on these
     * personas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html#access-search-experience">Providing
     * access to your search page</a>.</p>
     */
    inline AssociatePersonasToEntitiesRequest& WithPersonas(const Aws::Vector<EntityPersonaConfiguration>& value) { SetPersonas(value); return *this;}

    /**
     * <p>The personas that define the specific permissions of users or groups in your
     * IAM Identity Center identity source. The available personas or access roles are
     * <code>Owner</code> and <code>Viewer</code>. For more information on these
     * personas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html#access-search-experience">Providing
     * access to your search page</a>.</p>
     */
    inline AssociatePersonasToEntitiesRequest& WithPersonas(Aws::Vector<EntityPersonaConfiguration>&& value) { SetPersonas(std::move(value)); return *this;}

    /**
     * <p>The personas that define the specific permissions of users or groups in your
     * IAM Identity Center identity source. The available personas or access roles are
     * <code>Owner</code> and <code>Viewer</code>. For more information on these
     * personas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html#access-search-experience">Providing
     * access to your search page</a>.</p>
     */
    inline AssociatePersonasToEntitiesRequest& AddPersonas(const EntityPersonaConfiguration& value) { m_personasHasBeenSet = true; m_personas.push_back(value); return *this; }

    /**
     * <p>The personas that define the specific permissions of users or groups in your
     * IAM Identity Center identity source. The available personas or access roles are
     * <code>Owner</code> and <code>Viewer</code>. For more information on these
     * personas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html#access-search-experience">Providing
     * access to your search page</a>.</p>
     */
    inline AssociatePersonasToEntitiesRequest& AddPersonas(EntityPersonaConfiguration&& value) { m_personasHasBeenSet = true; m_personas.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::Vector<EntityPersonaConfiguration> m_personas;
    bool m_personasHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
