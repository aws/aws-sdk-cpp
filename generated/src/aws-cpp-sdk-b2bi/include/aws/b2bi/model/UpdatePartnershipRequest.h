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
    AWS_B2BI_API UpdatePartnershipRequest();

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
    inline const Aws::String& GetPartnershipId() const{ return m_partnershipId; }
    inline bool PartnershipIdHasBeenSet() const { return m_partnershipIdHasBeenSet; }
    inline void SetPartnershipId(const Aws::String& value) { m_partnershipIdHasBeenSet = true; m_partnershipId = value; }
    inline void SetPartnershipId(Aws::String&& value) { m_partnershipIdHasBeenSet = true; m_partnershipId = std::move(value); }
    inline void SetPartnershipId(const char* value) { m_partnershipIdHasBeenSet = true; m_partnershipId.assign(value); }
    inline UpdatePartnershipRequest& WithPartnershipId(const Aws::String& value) { SetPartnershipId(value); return *this;}
    inline UpdatePartnershipRequest& WithPartnershipId(Aws::String&& value) { SetPartnershipId(std::move(value)); return *this;}
    inline UpdatePartnershipRequest& WithPartnershipId(const char* value) { SetPartnershipId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the partnership, used to identify it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdatePartnershipRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdatePartnershipRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdatePartnershipRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of the capabilities associated with this partnership.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapabilities() const{ return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    inline void SetCapabilities(const Aws::Vector<Aws::String>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }
    inline void SetCapabilities(Aws::Vector<Aws::String>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }
    inline UpdatePartnershipRequest& WithCapabilities(const Aws::Vector<Aws::String>& value) { SetCapabilities(value); return *this;}
    inline UpdatePartnershipRequest& WithCapabilities(Aws::Vector<Aws::String>&& value) { SetCapabilities(std::move(value)); return *this;}
    inline UpdatePartnershipRequest& AddCapabilities(const Aws::String& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    inline UpdatePartnershipRequest& AddCapabilities(Aws::String&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }
    inline UpdatePartnershipRequest& AddCapabilities(const char* value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>To update, specify the structure that contains the details for the associated
     * capabilities.</p>
     */
    inline const CapabilityOptions& GetCapabilityOptions() const{ return m_capabilityOptions; }
    inline bool CapabilityOptionsHasBeenSet() const { return m_capabilityOptionsHasBeenSet; }
    inline void SetCapabilityOptions(const CapabilityOptions& value) { m_capabilityOptionsHasBeenSet = true; m_capabilityOptions = value; }
    inline void SetCapabilityOptions(CapabilityOptions&& value) { m_capabilityOptionsHasBeenSet = true; m_capabilityOptions = std::move(value); }
    inline UpdatePartnershipRequest& WithCapabilityOptions(const CapabilityOptions& value) { SetCapabilityOptions(value); return *this;}
    inline UpdatePartnershipRequest& WithCapabilityOptions(CapabilityOptions&& value) { SetCapabilityOptions(std::move(value)); return *this;}
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
