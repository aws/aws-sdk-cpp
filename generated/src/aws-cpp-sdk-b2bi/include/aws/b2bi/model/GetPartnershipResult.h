/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/b2bi/model/CapabilityOptions.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace B2BI
{
namespace Model
{
  class GetPartnershipResult
  {
  public:
    AWS_B2BI_API GetPartnershipResult() = default;
    AWS_B2BI_API GetPartnershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API GetPartnershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the unique, system-generated identifier for the profile connected to
     * this partnership.</p>
     */
    inline const Aws::String& GetProfileId() const { return m_profileId; }
    template<typename ProfileIdT = Aws::String>
    void SetProfileId(ProfileIdT&& value) { m_profileIdHasBeenSet = true; m_profileId = std::forward<ProfileIdT>(value); }
    template<typename ProfileIdT = Aws::String>
    GetPartnershipResult& WithProfileId(ProfileIdT&& value) { SetProfileId(std::forward<ProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the unique, system-generated identifier for a partnership.</p>
     */
    inline const Aws::String& GetPartnershipId() const { return m_partnershipId; }
    template<typename PartnershipIdT = Aws::String>
    void SetPartnershipId(PartnershipIdT&& value) { m_partnershipIdHasBeenSet = true; m_partnershipId = std::forward<PartnershipIdT>(value); }
    template<typename PartnershipIdT = Aws::String>
    GetPartnershipResult& WithPartnershipId(PartnershipIdT&& value) { SetPartnershipId(std::forward<PartnershipIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline const Aws::String& GetPartnershipArn() const { return m_partnershipArn; }
    template<typename PartnershipArnT = Aws::String>
    void SetPartnershipArn(PartnershipArnT&& value) { m_partnershipArnHasBeenSet = true; m_partnershipArn = std::forward<PartnershipArnT>(value); }
    template<typename PartnershipArnT = Aws::String>
    GetPartnershipResult& WithPartnershipArn(PartnershipArnT&& value) { SetPartnershipArn(std::forward<PartnershipArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the display name of the partnership</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetPartnershipResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the email address associated with this trading partner.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    GetPartnershipResult& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the phone number associated with the partnership.</p>
     */
    inline const Aws::String& GetPhone() const { return m_phone; }
    template<typename PhoneT = Aws::String>
    void SetPhone(PhoneT&& value) { m_phoneHasBeenSet = true; m_phone = std::forward<PhoneT>(value); }
    template<typename PhoneT = Aws::String>
    GetPartnershipResult& WithPhone(PhoneT&& value) { SetPhone(std::forward<PhoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns one or more capabilities associated with this partnership.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapabilities() const { return m_capabilities; }
    template<typename CapabilitiesT = Aws::Vector<Aws::String>>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = Aws::Vector<Aws::String>>
    GetPartnershipResult& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    template<typename CapabilitiesT = Aws::String>
    GetPartnershipResult& AddCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.emplace_back(std::forward<CapabilitiesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const CapabilityOptions& GetCapabilityOptions() const { return m_capabilityOptions; }
    template<typename CapabilityOptionsT = CapabilityOptions>
    void SetCapabilityOptions(CapabilityOptionsT&& value) { m_capabilityOptionsHasBeenSet = true; m_capabilityOptions = std::forward<CapabilityOptionsT>(value); }
    template<typename CapabilityOptionsT = CapabilityOptions>
    GetPartnershipResult& WithCapabilityOptions(CapabilityOptionsT&& value) { SetCapabilityOptions(std::forward<CapabilityOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the unique identifier for the partner for this partnership.</p>
     */
    inline const Aws::String& GetTradingPartnerId() const { return m_tradingPartnerId; }
    template<typename TradingPartnerIdT = Aws::String>
    void SetTradingPartnerId(TradingPartnerIdT&& value) { m_tradingPartnerIdHasBeenSet = true; m_tradingPartnerId = std::forward<TradingPartnerIdT>(value); }
    template<typename TradingPartnerIdT = Aws::String>
    GetPartnershipResult& WithTradingPartnerId(TradingPartnerIdT&& value) { SetTradingPartnerId(std::forward<TradingPartnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a timestamp for creation date and time of the partnership.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetPartnershipResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a timestamp that identifies the most recent date and time that the
     * partnership was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    GetPartnershipResult& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPartnershipResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::String m_partnershipId;
    bool m_partnershipIdHasBeenSet = false;

    Aws::String m_partnershipArn;
    bool m_partnershipArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_phone;
    bool m_phoneHasBeenSet = false;

    Aws::Vector<Aws::String> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    CapabilityOptions m_capabilityOptions;
    bool m_capabilityOptionsHasBeenSet = false;

    Aws::String m_tradingPartnerId;
    bool m_tradingPartnerIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
