/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AssociateProactiveEngagementDetailsRequest : public ShieldRequest
  {
  public:
    AWS_SHIELD_API AssociateProactiveEngagementDetailsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateProactiveEngagementDetails"; }

    AWS_SHIELD_API Aws::String SerializePayload() const override;

    AWS_SHIELD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of email addresses and phone numbers that the Shield Response Team
     * (SRT) can use to contact you for escalations to the SRT and to initiate
     * proactive customer support. </p> <p>To enable proactive engagement, the contact
     * list must include at least one phone number.</p>  <p>The contacts that you
     * provide here replace any contacts that were already defined. If you already have
     * contacts defined and want to use them, retrieve the list using
     * <code>DescribeEmergencyContactSettings</code> and then provide it here. </p>
     * 
     */
    inline const Aws::Vector<EmergencyContact>& GetEmergencyContactList() const{ return m_emergencyContactList; }

    /**
     * <p>A list of email addresses and phone numbers that the Shield Response Team
     * (SRT) can use to contact you for escalations to the SRT and to initiate
     * proactive customer support. </p> <p>To enable proactive engagement, the contact
     * list must include at least one phone number.</p>  <p>The contacts that you
     * provide here replace any contacts that were already defined. If you already have
     * contacts defined and want to use them, retrieve the list using
     * <code>DescribeEmergencyContactSettings</code> and then provide it here. </p>
     * 
     */
    inline bool EmergencyContactListHasBeenSet() const { return m_emergencyContactListHasBeenSet; }

    /**
     * <p>A list of email addresses and phone numbers that the Shield Response Team
     * (SRT) can use to contact you for escalations to the SRT and to initiate
     * proactive customer support. </p> <p>To enable proactive engagement, the contact
     * list must include at least one phone number.</p>  <p>The contacts that you
     * provide here replace any contacts that were already defined. If you already have
     * contacts defined and want to use them, retrieve the list using
     * <code>DescribeEmergencyContactSettings</code> and then provide it here. </p>
     * 
     */
    inline void SetEmergencyContactList(const Aws::Vector<EmergencyContact>& value) { m_emergencyContactListHasBeenSet = true; m_emergencyContactList = value; }

    /**
     * <p>A list of email addresses and phone numbers that the Shield Response Team
     * (SRT) can use to contact you for escalations to the SRT and to initiate
     * proactive customer support. </p> <p>To enable proactive engagement, the contact
     * list must include at least one phone number.</p>  <p>The contacts that you
     * provide here replace any contacts that were already defined. If you already have
     * contacts defined and want to use them, retrieve the list using
     * <code>DescribeEmergencyContactSettings</code> and then provide it here. </p>
     * 
     */
    inline void SetEmergencyContactList(Aws::Vector<EmergencyContact>&& value) { m_emergencyContactListHasBeenSet = true; m_emergencyContactList = std::move(value); }

    /**
     * <p>A list of email addresses and phone numbers that the Shield Response Team
     * (SRT) can use to contact you for escalations to the SRT and to initiate
     * proactive customer support. </p> <p>To enable proactive engagement, the contact
     * list must include at least one phone number.</p>  <p>The contacts that you
     * provide here replace any contacts that were already defined. If you already have
     * contacts defined and want to use them, retrieve the list using
     * <code>DescribeEmergencyContactSettings</code> and then provide it here. </p>
     * 
     */
    inline AssociateProactiveEngagementDetailsRequest& WithEmergencyContactList(const Aws::Vector<EmergencyContact>& value) { SetEmergencyContactList(value); return *this;}

    /**
     * <p>A list of email addresses and phone numbers that the Shield Response Team
     * (SRT) can use to contact you for escalations to the SRT and to initiate
     * proactive customer support. </p> <p>To enable proactive engagement, the contact
     * list must include at least one phone number.</p>  <p>The contacts that you
     * provide here replace any contacts that were already defined. If you already have
     * contacts defined and want to use them, retrieve the list using
     * <code>DescribeEmergencyContactSettings</code> and then provide it here. </p>
     * 
     */
    inline AssociateProactiveEngagementDetailsRequest& WithEmergencyContactList(Aws::Vector<EmergencyContact>&& value) { SetEmergencyContactList(std::move(value)); return *this;}

    /**
     * <p>A list of email addresses and phone numbers that the Shield Response Team
     * (SRT) can use to contact you for escalations to the SRT and to initiate
     * proactive customer support. </p> <p>To enable proactive engagement, the contact
     * list must include at least one phone number.</p>  <p>The contacts that you
     * provide here replace any contacts that were already defined. If you already have
     * contacts defined and want to use them, retrieve the list using
     * <code>DescribeEmergencyContactSettings</code> and then provide it here. </p>
     * 
     */
    inline AssociateProactiveEngagementDetailsRequest& AddEmergencyContactList(const EmergencyContact& value) { m_emergencyContactListHasBeenSet = true; m_emergencyContactList.push_back(value); return *this; }

    /**
     * <p>A list of email addresses and phone numbers that the Shield Response Team
     * (SRT) can use to contact you for escalations to the SRT and to initiate
     * proactive customer support. </p> <p>To enable proactive engagement, the contact
     * list must include at least one phone number.</p>  <p>The contacts that you
     * provide here replace any contacts that were already defined. If you already have
     * contacts defined and want to use them, retrieve the list using
     * <code>DescribeEmergencyContactSettings</code> and then provide it here. </p>
     * 
     */
    inline AssociateProactiveEngagementDetailsRequest& AddEmergencyContactList(EmergencyContact&& value) { m_emergencyContactListHasBeenSet = true; m_emergencyContactList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EmergencyContact> m_emergencyContactList;
    bool m_emergencyContactListHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
