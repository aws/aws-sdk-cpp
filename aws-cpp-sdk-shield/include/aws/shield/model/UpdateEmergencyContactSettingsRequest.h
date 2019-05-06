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
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/ShieldRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/shield/model/EmergencyContact.h>
#include <utility>

namespace Aws
{
namespace Shield
{
namespace Model
{

  /**
   */
  class AWS_SHIELD_API UpdateEmergencyContactSettingsRequest : public ShieldRequest
  {
  public:
    UpdateEmergencyContactSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEmergencyContactSettings"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of email addresses that the DRT can use to contact you during a
     * suspected attack.</p>
     */
    inline const Aws::Vector<EmergencyContact>& GetEmergencyContactList() const{ return m_emergencyContactList; }

    /**
     * <p>A list of email addresses that the DRT can use to contact you during a
     * suspected attack.</p>
     */
    inline bool EmergencyContactListHasBeenSet() const { return m_emergencyContactListHasBeenSet; }

    /**
     * <p>A list of email addresses that the DRT can use to contact you during a
     * suspected attack.</p>
     */
    inline void SetEmergencyContactList(const Aws::Vector<EmergencyContact>& value) { m_emergencyContactListHasBeenSet = true; m_emergencyContactList = value; }

    /**
     * <p>A list of email addresses that the DRT can use to contact you during a
     * suspected attack.</p>
     */
    inline void SetEmergencyContactList(Aws::Vector<EmergencyContact>&& value) { m_emergencyContactListHasBeenSet = true; m_emergencyContactList = std::move(value); }

    /**
     * <p>A list of email addresses that the DRT can use to contact you during a
     * suspected attack.</p>
     */
    inline UpdateEmergencyContactSettingsRequest& WithEmergencyContactList(const Aws::Vector<EmergencyContact>& value) { SetEmergencyContactList(value); return *this;}

    /**
     * <p>A list of email addresses that the DRT can use to contact you during a
     * suspected attack.</p>
     */
    inline UpdateEmergencyContactSettingsRequest& WithEmergencyContactList(Aws::Vector<EmergencyContact>&& value) { SetEmergencyContactList(std::move(value)); return *this;}

    /**
     * <p>A list of email addresses that the DRT can use to contact you during a
     * suspected attack.</p>
     */
    inline UpdateEmergencyContactSettingsRequest& AddEmergencyContactList(const EmergencyContact& value) { m_emergencyContactListHasBeenSet = true; m_emergencyContactList.push_back(value); return *this; }

    /**
     * <p>A list of email addresses that the DRT can use to contact you during a
     * suspected attack.</p>
     */
    inline UpdateEmergencyContactSettingsRequest& AddEmergencyContactList(EmergencyContact&& value) { m_emergencyContactListHasBeenSet = true; m_emergencyContactList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EmergencyContact> m_emergencyContactList;
    bool m_emergencyContactListHasBeenSet;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
