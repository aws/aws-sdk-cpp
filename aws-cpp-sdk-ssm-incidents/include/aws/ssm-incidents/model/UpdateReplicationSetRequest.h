/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/SSMIncidentsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/UpdateReplicationSetAction.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

  /**
   */
  class UpdateReplicationSetRequest : public SSMIncidentsRequest
  {
  public:
    AWS_SSMINCIDENTS_API UpdateReplicationSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReplicationSet"; }

    AWS_SSMINCIDENTS_API Aws::String SerializePayload() const override;


    /**
     * <p>An action to add or delete a Region.</p>
     */
    inline const Aws::Vector<UpdateReplicationSetAction>& GetActions() const{ return m_actions; }

    /**
     * <p>An action to add or delete a Region.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>An action to add or delete a Region.</p>
     */
    inline void SetActions(const Aws::Vector<UpdateReplicationSetAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>An action to add or delete a Region.</p>
     */
    inline void SetActions(Aws::Vector<UpdateReplicationSetAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>An action to add or delete a Region.</p>
     */
    inline UpdateReplicationSetRequest& WithActions(const Aws::Vector<UpdateReplicationSetAction>& value) { SetActions(value); return *this;}

    /**
     * <p>An action to add or delete a Region.</p>
     */
    inline UpdateReplicationSetRequest& WithActions(Aws::Vector<UpdateReplicationSetAction>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>An action to add or delete a Region.</p>
     */
    inline UpdateReplicationSetRequest& AddActions(const UpdateReplicationSetAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>An action to add or delete a Region.</p>
     */
    inline UpdateReplicationSetRequest& AddActions(UpdateReplicationSetAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the replication set you're updating.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication set you're updating.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication set you're updating.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication set you're updating.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication set you're updating.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication set you're updating.</p>
     */
    inline UpdateReplicationSetRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication set you're updating.</p>
     */
    inline UpdateReplicationSetRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication set you're updating.</p>
     */
    inline UpdateReplicationSetRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline UpdateReplicationSetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline UpdateReplicationSetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline UpdateReplicationSetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::Vector<UpdateReplicationSetAction> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
