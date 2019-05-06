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
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   * <p>Represents the input to <a>ApplyPendingMaintenanceAction</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ApplyPendingMaintenanceActionMessage">AWS
   * API Reference</a></p>
   */
  class AWS_DOCDB_API ApplyPendingMaintenanceActionRequest : public DocDBRequest
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
     * <p>The Amazon Resource Name (ARN) of the resource that the pending maintenance
     * action applies to.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the pending maintenance
     * action applies to.</p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the pending maintenance
     * action applies to.</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the pending maintenance
     * action applies to.</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the pending maintenance
     * action applies to.</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the pending maintenance
     * action applies to.</p>
     */
    inline ApplyPendingMaintenanceActionRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the pending maintenance
     * action applies to.</p>
     */
    inline ApplyPendingMaintenanceActionRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the pending maintenance
     * action applies to.</p>
     */
    inline ApplyPendingMaintenanceActionRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}


    /**
     * <p>The pending maintenance action to apply to this resource.</p> <p>Valid
     * values: <code>system-update</code>, <code>db-upgrade</code> </p>
     */
    inline const Aws::String& GetApplyAction() const{ return m_applyAction; }

    /**
     * <p>The pending maintenance action to apply to this resource.</p> <p>Valid
     * values: <code>system-update</code>, <code>db-upgrade</code> </p>
     */
    inline bool ApplyActionHasBeenSet() const { return m_applyActionHasBeenSet; }

    /**
     * <p>The pending maintenance action to apply to this resource.</p> <p>Valid
     * values: <code>system-update</code>, <code>db-upgrade</code> </p>
     */
    inline void SetApplyAction(const Aws::String& value) { m_applyActionHasBeenSet = true; m_applyAction = value; }

    /**
     * <p>The pending maintenance action to apply to this resource.</p> <p>Valid
     * values: <code>system-update</code>, <code>db-upgrade</code> </p>
     */
    inline void SetApplyAction(Aws::String&& value) { m_applyActionHasBeenSet = true; m_applyAction = std::move(value); }

    /**
     * <p>The pending maintenance action to apply to this resource.</p> <p>Valid
     * values: <code>system-update</code>, <code>db-upgrade</code> </p>
     */
    inline void SetApplyAction(const char* value) { m_applyActionHasBeenSet = true; m_applyAction.assign(value); }

    /**
     * <p>The pending maintenance action to apply to this resource.</p> <p>Valid
     * values: <code>system-update</code>, <code>db-upgrade</code> </p>
     */
    inline ApplyPendingMaintenanceActionRequest& WithApplyAction(const Aws::String& value) { SetApplyAction(value); return *this;}

    /**
     * <p>The pending maintenance action to apply to this resource.</p> <p>Valid
     * values: <code>system-update</code>, <code>db-upgrade</code> </p>
     */
    inline ApplyPendingMaintenanceActionRequest& WithApplyAction(Aws::String&& value) { SetApplyAction(std::move(value)); return *this;}

    /**
     * <p>The pending maintenance action to apply to this resource.</p> <p>Valid
     * values: <code>system-update</code>, <code>db-upgrade</code> </p>
     */
    inline ApplyPendingMaintenanceActionRequest& WithApplyAction(const char* value) { SetApplyAction(value); return *this;}


    /**
     * <p>A value that specifies the type of opt-in request or undoes an opt-in
     * request. An opt-in request of type <code>immediate</code> can't be undone.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>immediate</code> - Apply the
     * maintenance action immediately.</p> </li> <li> <p> <code>next-maintenance</code>
     * - Apply the maintenance action during the next maintenance window for the
     * resource.</p> </li> <li> <p> <code>undo-opt-in</code> - Cancel any existing
     * <code>next-maintenance</code> opt-in requests.</p> </li> </ul>
     */
    inline const Aws::String& GetOptInType() const{ return m_optInType; }

    /**
     * <p>A value that specifies the type of opt-in request or undoes an opt-in
     * request. An opt-in request of type <code>immediate</code> can't be undone.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>immediate</code> - Apply the
     * maintenance action immediately.</p> </li> <li> <p> <code>next-maintenance</code>
     * - Apply the maintenance action during the next maintenance window for the
     * resource.</p> </li> <li> <p> <code>undo-opt-in</code> - Cancel any existing
     * <code>next-maintenance</code> opt-in requests.</p> </li> </ul>
     */
    inline bool OptInTypeHasBeenSet() const { return m_optInTypeHasBeenSet; }

    /**
     * <p>A value that specifies the type of opt-in request or undoes an opt-in
     * request. An opt-in request of type <code>immediate</code> can't be undone.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>immediate</code> - Apply the
     * maintenance action immediately.</p> </li> <li> <p> <code>next-maintenance</code>
     * - Apply the maintenance action during the next maintenance window for the
     * resource.</p> </li> <li> <p> <code>undo-opt-in</code> - Cancel any existing
     * <code>next-maintenance</code> opt-in requests.</p> </li> </ul>
     */
    inline void SetOptInType(const Aws::String& value) { m_optInTypeHasBeenSet = true; m_optInType = value; }

    /**
     * <p>A value that specifies the type of opt-in request or undoes an opt-in
     * request. An opt-in request of type <code>immediate</code> can't be undone.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>immediate</code> - Apply the
     * maintenance action immediately.</p> </li> <li> <p> <code>next-maintenance</code>
     * - Apply the maintenance action during the next maintenance window for the
     * resource.</p> </li> <li> <p> <code>undo-opt-in</code> - Cancel any existing
     * <code>next-maintenance</code> opt-in requests.</p> </li> </ul>
     */
    inline void SetOptInType(Aws::String&& value) { m_optInTypeHasBeenSet = true; m_optInType = std::move(value); }

    /**
     * <p>A value that specifies the type of opt-in request or undoes an opt-in
     * request. An opt-in request of type <code>immediate</code> can't be undone.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>immediate</code> - Apply the
     * maintenance action immediately.</p> </li> <li> <p> <code>next-maintenance</code>
     * - Apply the maintenance action during the next maintenance window for the
     * resource.</p> </li> <li> <p> <code>undo-opt-in</code> - Cancel any existing
     * <code>next-maintenance</code> opt-in requests.</p> </li> </ul>
     */
    inline void SetOptInType(const char* value) { m_optInTypeHasBeenSet = true; m_optInType.assign(value); }

    /**
     * <p>A value that specifies the type of opt-in request or undoes an opt-in
     * request. An opt-in request of type <code>immediate</code> can't be undone.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>immediate</code> - Apply the
     * maintenance action immediately.</p> </li> <li> <p> <code>next-maintenance</code>
     * - Apply the maintenance action during the next maintenance window for the
     * resource.</p> </li> <li> <p> <code>undo-opt-in</code> - Cancel any existing
     * <code>next-maintenance</code> opt-in requests.</p> </li> </ul>
     */
    inline ApplyPendingMaintenanceActionRequest& WithOptInType(const Aws::String& value) { SetOptInType(value); return *this;}

    /**
     * <p>A value that specifies the type of opt-in request or undoes an opt-in
     * request. An opt-in request of type <code>immediate</code> can't be undone.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>immediate</code> - Apply the
     * maintenance action immediately.</p> </li> <li> <p> <code>next-maintenance</code>
     * - Apply the maintenance action during the next maintenance window for the
     * resource.</p> </li> <li> <p> <code>undo-opt-in</code> - Cancel any existing
     * <code>next-maintenance</code> opt-in requests.</p> </li> </ul>
     */
    inline ApplyPendingMaintenanceActionRequest& WithOptInType(Aws::String&& value) { SetOptInType(std::move(value)); return *this;}

    /**
     * <p>A value that specifies the type of opt-in request or undoes an opt-in
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
} // namespace DocDB
} // namespace Aws
