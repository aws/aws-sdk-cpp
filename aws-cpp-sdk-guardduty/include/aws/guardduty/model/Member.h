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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GuardDuty
{
namespace Model
{

  /**
   * Contains details about the member account.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Member">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API Member
  {
  public:
    Member();
    Member(Aws::Utils::Json::JsonView jsonValue);
    Member& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    
    inline Member& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    
    inline Member& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    
    inline Member& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    
    inline Member& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    
    inline Member& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    
    inline Member& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * Member account's email address.
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * Member account's email address.
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * Member account's email address.
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * Member account's email address.
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * Member account's email address.
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * Member account's email address.
     */
    inline Member& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * Member account's email address.
     */
    inline Member& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * Member account's email address.
     */
    inline Member& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * Timestamp at which the invitation was sent
     */
    inline const Aws::String& GetInvitedAt() const{ return m_invitedAt; }

    /**
     * Timestamp at which the invitation was sent
     */
    inline bool InvitedAtHasBeenSet() const { return m_invitedAtHasBeenSet; }

    /**
     * Timestamp at which the invitation was sent
     */
    inline void SetInvitedAt(const Aws::String& value) { m_invitedAtHasBeenSet = true; m_invitedAt = value; }

    /**
     * Timestamp at which the invitation was sent
     */
    inline void SetInvitedAt(Aws::String&& value) { m_invitedAtHasBeenSet = true; m_invitedAt = std::move(value); }

    /**
     * Timestamp at which the invitation was sent
     */
    inline void SetInvitedAt(const char* value) { m_invitedAtHasBeenSet = true; m_invitedAt.assign(value); }

    /**
     * Timestamp at which the invitation was sent
     */
    inline Member& WithInvitedAt(const Aws::String& value) { SetInvitedAt(value); return *this;}

    /**
     * Timestamp at which the invitation was sent
     */
    inline Member& WithInvitedAt(Aws::String&& value) { SetInvitedAt(std::move(value)); return *this;}

    /**
     * Timestamp at which the invitation was sent
     */
    inline Member& WithInvitedAt(const char* value) { SetInvitedAt(value); return *this;}


    
    inline const Aws::String& GetMasterId() const{ return m_masterId; }

    
    inline bool MasterIdHasBeenSet() const { return m_masterIdHasBeenSet; }

    
    inline void SetMasterId(const Aws::String& value) { m_masterIdHasBeenSet = true; m_masterId = value; }

    
    inline void SetMasterId(Aws::String&& value) { m_masterIdHasBeenSet = true; m_masterId = std::move(value); }

    
    inline void SetMasterId(const char* value) { m_masterIdHasBeenSet = true; m_masterId.assign(value); }

    
    inline Member& WithMasterId(const Aws::String& value) { SetMasterId(value); return *this;}

    
    inline Member& WithMasterId(Aws::String&& value) { SetMasterId(std::move(value)); return *this;}

    
    inline Member& WithMasterId(const char* value) { SetMasterId(value); return *this;}


    /**
     * The status of the relationship between the member and the master.
     */
    inline const Aws::String& GetRelationshipStatus() const{ return m_relationshipStatus; }

    /**
     * The status of the relationship between the member and the master.
     */
    inline bool RelationshipStatusHasBeenSet() const { return m_relationshipStatusHasBeenSet; }

    /**
     * The status of the relationship between the member and the master.
     */
    inline void SetRelationshipStatus(const Aws::String& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = value; }

    /**
     * The status of the relationship between the member and the master.
     */
    inline void SetRelationshipStatus(Aws::String&& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = std::move(value); }

    /**
     * The status of the relationship between the member and the master.
     */
    inline void SetRelationshipStatus(const char* value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus.assign(value); }

    /**
     * The status of the relationship between the member and the master.
     */
    inline Member& WithRelationshipStatus(const Aws::String& value) { SetRelationshipStatus(value); return *this;}

    /**
     * The status of the relationship between the member and the master.
     */
    inline Member& WithRelationshipStatus(Aws::String&& value) { SetRelationshipStatus(std::move(value)); return *this;}

    /**
     * The status of the relationship between the member and the master.
     */
    inline Member& WithRelationshipStatus(const char* value) { SetRelationshipStatus(value); return *this;}


    
    inline const Aws::String& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    
    inline void SetUpdatedAt(const Aws::String& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::String&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    
    inline void SetUpdatedAt(const char* value) { m_updatedAtHasBeenSet = true; m_updatedAt.assign(value); }

    
    inline Member& WithUpdatedAt(const Aws::String& value) { SetUpdatedAt(value); return *this;}

    
    inline Member& WithUpdatedAt(Aws::String&& value) { SetUpdatedAt(std::move(value)); return *this;}

    
    inline Member& WithUpdatedAt(const char* value) { SetUpdatedAt(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    Aws::String m_email;
    bool m_emailHasBeenSet;

    Aws::String m_invitedAt;
    bool m_invitedAtHasBeenSet;

    Aws::String m_masterId;
    bool m_masterIdHasBeenSet;

    Aws::String m_relationshipStatus;
    bool m_relationshipStatusHasBeenSet;

    Aws::String m_updatedAt;
    bool m_updatedAtHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
