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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace B2BI
{
namespace Model
{

  /**
   * <p>A structure that contains the details for a partnership. A partnership
   * represents the connection between you and your trading partner. It ties together
   * a profile and one or more trading capabilities.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/PartnershipSummary">AWS
   * API Reference</a></p>
   */
  class PartnershipSummary
  {
  public:
    AWS_B2BI_API PartnershipSummary() = default;
    AWS_B2BI_API PartnershipSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API PartnershipSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Returns the unique, system-generated identifier for the profile connected to
     * this partnership.</p>
     */
    inline const Aws::String& GetProfileId() const { return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    template<typename ProfileIdT = Aws::String>
    void SetProfileId(ProfileIdT&& value) { m_profileIdHasBeenSet = true; m_profileId = std::forward<ProfileIdT>(value); }
    template<typename ProfileIdT = Aws::String>
    PartnershipSummary& WithProfileId(ProfileIdT&& value) { SetProfileId(std::forward<ProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the unique, system-generated identifier for a partnership.</p>
     */
    inline const Aws::String& GetPartnershipId() const { return m_partnershipId; }
    inline bool PartnershipIdHasBeenSet() const { return m_partnershipIdHasBeenSet; }
    template<typename PartnershipIdT = Aws::String>
    void SetPartnershipId(PartnershipIdT&& value) { m_partnershipIdHasBeenSet = true; m_partnershipId = std::forward<PartnershipIdT>(value); }
    template<typename PartnershipIdT = Aws::String>
    PartnershipSummary& WithPartnershipId(PartnershipIdT&& value) { SetPartnershipId(std::forward<PartnershipIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the name of the partnership.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PartnershipSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns one or more capabilities associated with this partnership.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapabilities() const { return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    template<typename CapabilitiesT = Aws::Vector<Aws::String>>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = Aws::Vector<Aws::String>>
    PartnershipSummary& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    template<typename CapabilitiesT = Aws::String>
    PartnershipSummary& AddCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.emplace_back(std::forward<CapabilitiesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const CapabilityOptions& GetCapabilityOptions() const { return m_capabilityOptions; }
    inline bool CapabilityOptionsHasBeenSet() const { return m_capabilityOptionsHasBeenSet; }
    template<typename CapabilityOptionsT = CapabilityOptions>
    void SetCapabilityOptions(CapabilityOptionsT&& value) { m_capabilityOptionsHasBeenSet = true; m_capabilityOptions = std::forward<CapabilityOptionsT>(value); }
    template<typename CapabilityOptionsT = CapabilityOptions>
    PartnershipSummary& WithCapabilityOptions(CapabilityOptionsT&& value) { SetCapabilityOptions(std::forward<CapabilityOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the unique, system-generated identifier for a trading partner.</p>
     */
    inline const Aws::String& GetTradingPartnerId() const { return m_tradingPartnerId; }
    inline bool TradingPartnerIdHasBeenSet() const { return m_tradingPartnerIdHasBeenSet; }
    template<typename TradingPartnerIdT = Aws::String>
    void SetTradingPartnerId(TradingPartnerIdT&& value) { m_tradingPartnerIdHasBeenSet = true; m_tradingPartnerId = std::forward<TradingPartnerIdT>(value); }
    template<typename TradingPartnerIdT = Aws::String>
    PartnershipSummary& WithTradingPartnerId(TradingPartnerIdT&& value) { SetTradingPartnerId(std::forward<TradingPartnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a timestamp for creation date and time of the partnership.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    PartnershipSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a timestamp that identifies the most recent date and time that the
     * partnership was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    PartnershipSummary& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::String m_partnershipId;
    bool m_partnershipIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

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
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
