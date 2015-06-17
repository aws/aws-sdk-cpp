/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace RDS
{
namespace Model
{

  /*
    <p></p>
  */
  class AWS_RDS_API ApplyPendingMaintenanceActionRequest : public RDSRequest
  {
  public:
    ApplyPendingMaintenanceActionRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The ARN of the resource that the pending maintenance action applies to.</p>
    */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }
    /*
     <p>The ARN of the resource that the pending maintenance action applies to.</p>
    */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /*
     <p>The ARN of the resource that the pending maintenance action applies to.</p>
    */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /*
     <p>The ARN of the resource that the pending maintenance action applies to.</p>
    */
    inline ApplyPendingMaintenanceActionRequest&  WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /*
     <p>The ARN of the resource that the pending maintenance action applies to.</p>
    */
    inline ApplyPendingMaintenanceActionRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}

    /*
     <p>The pending maintenance action to apply to this resource.</p>
    */
    inline const Aws::String& GetApplyAction() const{ return m_applyAction; }
    /*
     <p>The pending maintenance action to apply to this resource.</p>
    */
    inline void SetApplyAction(const Aws::String& value) { m_applyActionHasBeenSet = true; m_applyAction = value; }

    /*
     <p>The pending maintenance action to apply to this resource.</p>
    */
    inline void SetApplyAction(const char* value) { m_applyActionHasBeenSet = true; m_applyAction.assign(value); }

    /*
     <p>The pending maintenance action to apply to this resource.</p>
    */
    inline ApplyPendingMaintenanceActionRequest&  WithApplyAction(const Aws::String& value) { SetApplyAction(value); return *this;}

    /*
     <p>The pending maintenance action to apply to this resource.</p>
    */
    inline ApplyPendingMaintenanceActionRequest& WithApplyAction(const char* value) { SetApplyAction(value); return *this;}

    /*
     <p>A value that specifies the type of opt-in request, or undoes an opt-in request. An opt-in request of type <code>immediate</code> cannot be undone.</p> <p>Valid values:</p> <ul> <li> <code>immediate</code> - Apply the maintenance action immediately.</li> <li> <code>next-maintenance</code> - Apply the maintenance action during the next maintenance window for the resource.</li> <li> <code>undo-opt-in</code> - Cancel any existing <code>next-maintenance</code> opt-in requests.</li> </ul>
    */
    inline const Aws::String& GetOptInType() const{ return m_optInType; }
    /*
     <p>A value that specifies the type of opt-in request, or undoes an opt-in request. An opt-in request of type <code>immediate</code> cannot be undone.</p> <p>Valid values:</p> <ul> <li> <code>immediate</code> - Apply the maintenance action immediately.</li> <li> <code>next-maintenance</code> - Apply the maintenance action during the next maintenance window for the resource.</li> <li> <code>undo-opt-in</code> - Cancel any existing <code>next-maintenance</code> opt-in requests.</li> </ul>
    */
    inline void SetOptInType(const Aws::String& value) { m_optInTypeHasBeenSet = true; m_optInType = value; }

    /*
     <p>A value that specifies the type of opt-in request, or undoes an opt-in request. An opt-in request of type <code>immediate</code> cannot be undone.</p> <p>Valid values:</p> <ul> <li> <code>immediate</code> - Apply the maintenance action immediately.</li> <li> <code>next-maintenance</code> - Apply the maintenance action during the next maintenance window for the resource.</li> <li> <code>undo-opt-in</code> - Cancel any existing <code>next-maintenance</code> opt-in requests.</li> </ul>
    */
    inline void SetOptInType(const char* value) { m_optInTypeHasBeenSet = true; m_optInType.assign(value); }

    /*
     <p>A value that specifies the type of opt-in request, or undoes an opt-in request. An opt-in request of type <code>immediate</code> cannot be undone.</p> <p>Valid values:</p> <ul> <li> <code>immediate</code> - Apply the maintenance action immediately.</li> <li> <code>next-maintenance</code> - Apply the maintenance action during the next maintenance window for the resource.</li> <li> <code>undo-opt-in</code> - Cancel any existing <code>next-maintenance</code> opt-in requests.</li> </ul>
    */
    inline ApplyPendingMaintenanceActionRequest&  WithOptInType(const Aws::String& value) { SetOptInType(value); return *this;}

    /*
     <p>A value that specifies the type of opt-in request, or undoes an opt-in request. An opt-in request of type <code>immediate</code> cannot be undone.</p> <p>Valid values:</p> <ul> <li> <code>immediate</code> - Apply the maintenance action immediately.</li> <li> <code>next-maintenance</code> - Apply the maintenance action during the next maintenance window for the resource.</li> <li> <code>undo-opt-in</code> - Cancel any existing <code>next-maintenance</code> opt-in requests.</li> </ul>
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
