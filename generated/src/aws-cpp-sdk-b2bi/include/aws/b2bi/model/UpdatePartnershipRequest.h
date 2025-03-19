/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/b2bi/model/CapabilityOptions.h>
#include <utility>

namespace Aws
{
namespace B2BI
{
namespace Model
{

  /**
   */
  class UpdatePartnershipRequest : public B2BIRequest
  {
  public:
    AWS_B2BI_API UpdatePartnershipRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePartnership"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the unique, system-generated identifier for a partnership.</p>
     */
    inline const Aws::String& GetPartnershipId() const { return m_partnershipId; }
    inline bool PartnershipIdHasBeenSet() const { return m_partnershipIdHasBeenSet; }
    template<typename PartnershipIdT = Aws::String>
    void SetPartnershipId(PartnershipIdT&& value) { m_partnershipIdHasBeenSet = true; m_partnershipId = std::forward<PartnershipIdT>(value); }
    template<typename PartnershipIdT = Aws::String>
    UpdatePartnershipRequest& WithPartnershipId(PartnershipIdT&& value) { SetPartnershipId(std::forward<PartnershipIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the partnership, used to identify it.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdatePartnershipRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of the capabilities associated with this partnership.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapabilities() const { return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    template<typename CapabilitiesT = Aws::Vector<Aws::String>>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = Aws::Vector<Aws::String>>
    UpdatePartnershipRequest& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    template<typename CapabilitiesT = Aws::String>
    UpdatePartnershipRequest& AddCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.emplace_back(std::forward<CapabilitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>To update, specify the structure that contains the details for the associated
     * capabilities.</p>
     */
    inline const CapabilityOptions& GetCapabilityOptions() const { return m_capabilityOptions; }
    inline bool CapabilityOptionsHasBeenSet() const { return m_capabilityOptionsHasBeenSet; }
    template<typename CapabilityOptionsT = CapabilityOptions>
    void SetCapabilityOptions(CapabilityOptionsT&& value) { m_capabilityOptionsHasBeenSet = true; m_capabilityOptions = std::forward<CapabilityOptionsT>(value); }
    template<typename CapabilityOptionsT = CapabilityOptions>
    UpdatePartnershipRequest& WithCapabilityOptions(CapabilityOptionsT&& value) { SetCapabilityOptions(std::forward<CapabilityOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_partnershipId;
    bool m_partnershipIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    CapabilityOptions m_capabilityOptions;
    bool m_capabilityOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
