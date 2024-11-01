/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/docdb-elastic/DocDBElasticRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb-elastic/model/OptInType.h>
#include <utility>

namespace Aws
{
namespace DocDBElastic
{
namespace Model
{

  /**
   */
  class ApplyPendingMaintenanceActionRequest : public DocDBElasticRequest
  {
  public:
    AWS_DOCDBELASTIC_API ApplyPendingMaintenanceActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ApplyPendingMaintenanceAction"; }

    AWS_DOCDBELASTIC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The pending maintenance action to apply to the resource.</p> <p>Valid actions
     * are:</p> <ul> <li> <p> <code>ENGINE_UPDATE<i/> </code> </p> </li> <li> <p>
     * <code>ENGINE_UPGRADE</code> </p> </li> <li> <p> <code>SECURITY_UPDATE</code>
     * </p> </li> <li> <p> <code>OS_UPDATE</code> </p> </li> <li> <p>
     * <code>MASTER_USER_PASSWORD_UPDATE</code> </p> </li> </ul>
     */
    inline const Aws::String& GetApplyAction() const{ return m_applyAction; }
    inline bool ApplyActionHasBeenSet() const { return m_applyActionHasBeenSet; }
    inline void SetApplyAction(const Aws::String& value) { m_applyActionHasBeenSet = true; m_applyAction = value; }
    inline void SetApplyAction(Aws::String&& value) { m_applyActionHasBeenSet = true; m_applyAction = std::move(value); }
    inline void SetApplyAction(const char* value) { m_applyActionHasBeenSet = true; m_applyAction.assign(value); }
    inline ApplyPendingMaintenanceActionRequest& WithApplyAction(const Aws::String& value) { SetApplyAction(value); return *this;}
    inline ApplyPendingMaintenanceActionRequest& WithApplyAction(Aws::String&& value) { SetApplyAction(std::move(value)); return *this;}
    inline ApplyPendingMaintenanceActionRequest& WithApplyAction(const char* value) { SetApplyAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A specific date to apply the pending maintenance action. Required if
     * opt-in-type is <code>APPLY_ON</code>. Format: <code>yyyy/MM/dd HH:mm-yyyy/MM/dd
     * HH:mm</code> </p>
     */
    inline const Aws::String& GetApplyOn() const{ return m_applyOn; }
    inline bool ApplyOnHasBeenSet() const { return m_applyOnHasBeenSet; }
    inline void SetApplyOn(const Aws::String& value) { m_applyOnHasBeenSet = true; m_applyOn = value; }
    inline void SetApplyOn(Aws::String&& value) { m_applyOnHasBeenSet = true; m_applyOn = std::move(value); }
    inline void SetApplyOn(const char* value) { m_applyOnHasBeenSet = true; m_applyOn.assign(value); }
    inline ApplyPendingMaintenanceActionRequest& WithApplyOn(const Aws::String& value) { SetApplyOn(value); return *this;}
    inline ApplyPendingMaintenanceActionRequest& WithApplyOn(Aws::String&& value) { SetApplyOn(std::move(value)); return *this;}
    inline ApplyPendingMaintenanceActionRequest& WithApplyOn(const char* value) { SetApplyOn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies the type of opt-in request, or undoes an opt-in
     * request. An opt-in request of type <code>IMMEDIATE</code> can't be undone.</p>
     */
    inline const OptInType& GetOptInType() const{ return m_optInType; }
    inline bool OptInTypeHasBeenSet() const { return m_optInTypeHasBeenSet; }
    inline void SetOptInType(const OptInType& value) { m_optInTypeHasBeenSet = true; m_optInType = value; }
    inline void SetOptInType(OptInType&& value) { m_optInTypeHasBeenSet = true; m_optInType = std::move(value); }
    inline ApplyPendingMaintenanceActionRequest& WithOptInType(const OptInType& value) { SetOptInType(value); return *this;}
    inline ApplyPendingMaintenanceActionRequest& WithOptInType(OptInType&& value) { SetOptInType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DocumentDB Amazon Resource Name (ARN) of the resource to which the
     * pending maintenance action applies.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline ApplyPendingMaintenanceActionRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline ApplyPendingMaintenanceActionRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline ApplyPendingMaintenanceActionRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}
  private:

    Aws::String m_applyAction;
    bool m_applyActionHasBeenSet = false;

    Aws::String m_applyOn;
    bool m_applyOnHasBeenSet = false;

    OptInType m_optInType;
    bool m_optInTypeHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
