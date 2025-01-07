/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/MfaStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Contains information about the authenticated session.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Session">AWS
   * API Reference</a></p>
   */
  class Session
  {
  public:
    AWS_GUARDDUTY_API Session();
    AWS_GUARDDUTY_API Session(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Session& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the session.</p>
     */
    inline const Aws::String& GetUid() const{ return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    inline void SetUid(const Aws::String& value) { m_uidHasBeenSet = true; m_uid = value; }
    inline void SetUid(Aws::String&& value) { m_uidHasBeenSet = true; m_uid = std::move(value); }
    inline void SetUid(const char* value) { m_uidHasBeenSet = true; m_uid.assign(value); }
    inline Session& WithUid(const Aws::String& value) { SetUid(value); return *this;}
    inline Session& WithUid(Aws::String&& value) { SetUid(std::move(value)); return *this;}
    inline Session& WithUid(const char* value) { SetUid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not multi-factor authencation (MFA) was used during
     * authentication.</p> <p>In Amazon Web Services CloudTrail, you can find this
     * value as
     * <code>userIdentity.sessionContext.attributes.mfaAuthenticated</code>.</p>
     */
    inline const MfaStatus& GetMfaStatus() const{ return m_mfaStatus; }
    inline bool MfaStatusHasBeenSet() const { return m_mfaStatusHasBeenSet; }
    inline void SetMfaStatus(const MfaStatus& value) { m_mfaStatusHasBeenSet = true; m_mfaStatus = value; }
    inline void SetMfaStatus(MfaStatus&& value) { m_mfaStatusHasBeenSet = true; m_mfaStatus = std::move(value); }
    inline Session& WithMfaStatus(const MfaStatus& value) { SetMfaStatus(value); return *this;}
    inline Session& WithMfaStatus(MfaStatus&& value) { SetMfaStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the session was created.</p> <p>In Amazon Web Services
     * CloudTrail, you can find this value as
     * <code>userIdentity.sessionContext.attributes.creationDate</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline Session& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline Session& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the session issuer.</p> <p>In Amazon Web Services CloudTrail,
     * you can find this value as
     * <code>userIdentity.sessionContext.sessionIssuer.arn</code>.</p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }
    inline Session& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}
    inline Session& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}
    inline Session& WithIssuer(const char* value) { SetIssuer(value); return *this;}
    ///@}
  private:

    Aws::String m_uid;
    bool m_uidHasBeenSet = false;

    MfaStatus m_mfaStatus;
    bool m_mfaStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
