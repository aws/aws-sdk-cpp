/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ApplyPendingMaintenanceActionMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API ApplyPendingMaintenanceActionRequest : public RDSRequest
  {
  public:
    ApplyPendingMaintenanceActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ApplyPendingMaintenanceAction"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The RDS Amazon Resource Name (ARN) of the resource that the pending
     * maintenance action applies to. For information about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>The RDS Amazon Resource Name (ARN) of the resource that the pending
     * maintenance action applies to. For information about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p>The RDS Amazon Resource Name (ARN) of the resource that the pending
     * maintenance action applies to. For information about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>The RDS Amazon Resource Name (ARN) of the resource that the pending
     * maintenance action applies to. For information about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p>The RDS Amazon Resource Name (ARN) of the resource that the pending
     * maintenance action applies to. For information about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p>The RDS Amazon Resource Name (ARN) of the resource that the pending
     * maintenance action applies to. For information about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline ApplyPendingMaintenanceActionRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>The RDS Amazon Resource Name (ARN) of the resource that the pending
     * maintenance action applies to. For information about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline ApplyPendingMaintenanceActionRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The RDS Amazon Resource Name (ARN) of the resource that the pending
     * maintenance action applies to. For information about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline ApplyPendingMaintenanceActionRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}


    /**
     * <p>The pending maintenance action to apply to this resource.</p> <p>Valid
     * values: <code>system-update</code>, <code>db-upgrade</code>,
     * <code>hardware-maintenance</code> </p>
     */
    inline const Aws::String& GetApplyAction() const{ return m_applyAction; }

    /**
     * <p>The pending maintenance action to apply to this resource.</p> <p>Valid
     * values: <code>system-update</code>, <code>db-upgrade</code>,
     * <code>hardware-maintenance</code> </p>
     */
    inline bool ApplyActionHasBeenSet() const { return m_applyActionHasBeenSet; }

    /**
     * <p>The pending maintenance action to apply to this resource.</p> <p>Valid
     * values: <code>system-update</code>, <code>db-upgrade</code>,
     * <code>hardware-maintenance</code> </p>
     */
    inline void SetApplyAction(const Aws::String& value) { m_applyActionHasBeenSet = true; m_applyAction = value; }

    /**
     * <p>The pending maintenance action to apply to this resource.</p> <p>Valid
     * values: <code>system-update</code>, <code>db-upgrade</code>,
     * <code>hardware-maintenance</code> </p>
     */
    inline void SetApplyAction(Aws::String&& value) { m_applyActionHasBeenSet = true; m_applyAction = std::move(value); }

    /**
     * <p>The pending maintenance action to apply to this resource.</p> <p>Valid
     * values: <code>system-update</code>, <code>db-upgrade</code>,
     * <code>hardware-maintenance</code> </p>
     */
    inline void SetApplyAction(const char* value) { m_applyActionHasBeenSet = true; m_applyAction.assign(value); }

    /**
     * <p>The pending maintenance action to apply to this resource.</p> <p>Valid
     * values: <code>system-update</code>, <code>db-upgrade</code>,
     * <code>hardware-maintenance</code> </p>
     */
    inline ApplyPendingMaintenanceActionRequest& WithApplyAction(const Aws::String& value) { SetApplyAction(value); return *this;}

    /**
     * <p>The pending maintenance action to apply to this resource.</p> <p>Valid
     * values: <code>system-update</code>, <code>db-upgrade</code>,
     * <code>hardware-maintenance</code> </p>
     */
    inline ApplyPendingMaintenanceActionRequest& WithApplyAction(Aws::String&& value) { SetApplyAction(std::move(value)); return *this;}

    /**
     * <p>The pending maintenance action to apply to this resource.</p> <p>Valid
     * values: <code>system-update</code>, <code>db-upgrade</code>,
     * <code>hardware-maintenance</code> </p>
     */
    inline ApplyPendingMaintenanceActionRequest& WithApplyAction(const char* value) { SetApplyAction(value); return *this;}


    /**
     * <p>A value that specifies the type of opt-in request, or undoes an opt-in
     * request. An opt-in request of type <code>immediate</code> can't be undone.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>immediate</code> - Apply the
     * maintenance action immediately.</p> </li> <li> <p> <code>next-maintenance</code>
     * - Apply the maintenance action during the next maintenance window for the
     * resource.</p> </li> <li> <p> <code>undo-opt-in</code> - Cancel any existing
     * <code>next-maintenance</code> opt-in requests.</p> </li> </ul>
     */
    inline const Aws::String& GetOptInType() const{ return m_optInType; }

    /**
     * <p>A value that specifies the type of opt-in request, or undoes an opt-in
     * request. An opt-in request of type <code>immediate</code> can't be undone.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>immediate</code> - Apply the
     * maintenance action immediately.</p> </li> <li> <p> <code>next-maintenance</code>
     * - Apply the maintenance action during the next maintenance window for the
     * resource.</p> </li> <li> <p> <code>undo-opt-in</code> - Cancel any existing
     * <code>next-maintenance</code> opt-in requests.</p> </li> </ul>
     */
    inline bool OptInTypeHasBeenSet() const { return m_optInTypeHasBeenSet; }

    /**
     * <p>A value that specifies the type of opt-in request, or undoes an opt-in
     * request. An opt-in request of type <code>immediate</code> can't be undone.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>immediate</code> - Apply the
     * maintenance action immediately.</p> </li> <li> <p> <code>next-maintenance</code>
     * - Apply the maintenance action during the next maintenance window for the
     * resource.</p> </li> <li> <p> <code>undo-opt-in</code> - Cancel any existing
     * <code>next-maintenance</code> opt-in requests.</p> </li> </ul>
     */
    inline void SetOptInType(const Aws::String& value) { m_optInTypeHasBeenSet = true; m_optInType = value; }

    /**
     * <p>A value that specifies the type of opt-in request, or undoes an opt-in
     * request. An opt-in request of type <code>immediate</code> can't be undone.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>immediate</code> - Apply the
     * maintenance action immediately.</p> </li> <li> <p> <code>next-maintenance</code>
     * - Apply the maintenance action during the next maintenance window for the
     * resource.</p> </li> <li> <p> <code>undo-opt-in</code> - Cancel any existing
     * <code>next-maintenance</code> opt-in requests.</p> </li> </ul>
     */
    inline void SetOptInType(Aws::String&& value) { m_optInTypeHasBeenSet = true; m_optInType = std::move(value); }

    /**
     * <p>A value that specifies the type of opt-in request, or undoes an opt-in
     * request. An opt-in request of type <code>immediate</code> can't be undone.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>immediate</code> - Apply the
     * maintenance action immediately.</p> </li> <li> <p> <code>next-maintenance</code>
     * - Apply the maintenance action during the next maintenance window for the
     * resource.</p> </li> <li> <p> <code>undo-opt-in</code> - Cancel any existing
     * <code>next-maintenance</code> opt-in requests.</p> </li> </ul>
     */
    inline void SetOptInType(const char* value) { m_optInTypeHasBeenSet = true; m_optInType.assign(value); }

    /**
     * <p>A value that specifies the type of opt-in request, or undoes an opt-in
     * request. An opt-in request of type <code>immediate</code> can't be undone.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>immediate</code> - Apply the
     * maintenance action immediately.</p> </li> <li> <p> <code>next-maintenance</code>
     * - Apply the maintenance action during the next maintenance window for the
     * resource.</p> </li> <li> <p> <code>undo-opt-in</code> - Cancel any existing
     * <code>next-maintenance</code> opt-in requests.</p> </li> </ul>
     */
    inline ApplyPendingMaintenanceActionRequest& WithOptInType(const Aws::String& value) { SetOptInType(value); return *this;}

    /**
     * <p>A value that specifies the type of opt-in request, or undoes an opt-in
     * request. An opt-in request of type <code>immediate</code> can't be undone.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>immediate</code> - Apply the
     * maintenance action immediately.</p> </li> <li> <p> <code>next-maintenance</code>
     * - Apply the maintenance action during the next maintenance window for the
     * resource.</p> </li> <li> <p> <code>undo-opt-in</code> - Cancel any existing
     * <code>next-maintenance</code> opt-in requests.</p> </li> </ul>
     */
    inline ApplyPendingMaintenanceActionRequest& WithOptInType(Aws::String&& value) { SetOptInType(std::move(value)); return *this;}

    /**
     * <p>A value that specifies the type of opt-in request, or undoes an opt-in
     * request. An opt-in request of type <code>immediate</code> can't be undone.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>immediate</code> - Apply the
     * maintenance action immediately.</p> </li> <li> <p> <code>next-maintenance</code>
     * - Apply the maintenance action during the next maintenance window for the
     * resource.</p> </li> <li> <p> <code>undo-opt-in</code> - Cancel any existing
     * <code>next-maintenance</code> opt-in requests.</p> </li> </ul>
     */
    inline ApplyPendingMaintenanceActionRequest& WithOptInType(const char* value) { SetOptInType(value); return *this;}

  private:

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet;

    Aws::String m_applyAction;
    bool m_applyActionHasBeenSet;

    Aws::String m_optInType;
    bool m_optInTypeHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
