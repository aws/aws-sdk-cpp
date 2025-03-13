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
    AWS_GUARDDUTY_API Session() = default;
    AWS_GUARDDUTY_API Session(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Session& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the session.</p>
     */
    inline const Aws::String& GetUid() const { return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    template<typename UidT = Aws::String>
    void SetUid(UidT&& value) { m_uidHasBeenSet = true; m_uid = std::forward<UidT>(value); }
    template<typename UidT = Aws::String>
    Session& WithUid(UidT&& value) { SetUid(std::forward<UidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not multi-factor authencation (MFA) was used during
     * authentication.</p> <p>In Amazon Web Services CloudTrail, you can find this
     * value as
     * <code>userIdentity.sessionContext.attributes.mfaAuthenticated</code>.</p>
     */
    inline MfaStatus GetMfaStatus() const { return m_mfaStatus; }
    inline bool MfaStatusHasBeenSet() const { return m_mfaStatusHasBeenSet; }
    inline void SetMfaStatus(MfaStatus value) { m_mfaStatusHasBeenSet = true; m_mfaStatus = value; }
    inline Session& WithMfaStatus(MfaStatus value) { SetMfaStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the session was created.</p> <p>In Amazon Web Services
     * CloudTrail, you can find this value as
     * <code>userIdentity.sessionContext.attributes.creationDate</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    Session& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the session issuer.</p> <p>In Amazon Web Services CloudTrail,
     * you can find this value as
     * <code>userIdentity.sessionContext.sessionIssuer.arn</code>.</p>
     */
    inline const Aws::String& GetIssuer() const { return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    template<typename IssuerT = Aws::String>
    void SetIssuer(IssuerT&& value) { m_issuerHasBeenSet = true; m_issuer = std::forward<IssuerT>(value); }
    template<typename IssuerT = Aws::String>
    Session& WithIssuer(IssuerT&& value) { SetIssuer(std::forward<IssuerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_uid;
    bool m_uidHasBeenSet = false;

    MfaStatus m_mfaStatus{MfaStatus::NOT_SET};
    bool m_mfaStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
