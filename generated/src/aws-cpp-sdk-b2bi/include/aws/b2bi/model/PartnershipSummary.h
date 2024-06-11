﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_B2BI_API PartnershipSummary();
    AWS_B2BI_API PartnershipSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API PartnershipSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Returns the unique, system-generated identifier for the profile connected to
     * this partnership.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }
    inline PartnershipSummary& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}
    inline PartnershipSummary& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}
    inline PartnershipSummary& WithProfileId(const char* value) { SetProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the unique, system-generated identifier for a partnership.</p>
     */
    inline const Aws::String& GetPartnershipId() const{ return m_partnershipId; }
    inline bool PartnershipIdHasBeenSet() const { return m_partnershipIdHasBeenSet; }
    inline void SetPartnershipId(const Aws::String& value) { m_partnershipIdHasBeenSet = true; m_partnershipId = value; }
    inline void SetPartnershipId(Aws::String&& value) { m_partnershipIdHasBeenSet = true; m_partnershipId = std::move(value); }
    inline void SetPartnershipId(const char* value) { m_partnershipIdHasBeenSet = true; m_partnershipId.assign(value); }
    inline PartnershipSummary& WithPartnershipId(const Aws::String& value) { SetPartnershipId(value); return *this;}
    inline PartnershipSummary& WithPartnershipId(Aws::String&& value) { SetPartnershipId(std::move(value)); return *this;}
    inline PartnershipSummary& WithPartnershipId(const char* value) { SetPartnershipId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the name of the partnership.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PartnershipSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PartnershipSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PartnershipSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns one or more capabilities associated with this partnership.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapabilities() const{ return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    inline void SetCapabilities(const Aws::Vector<Aws::String>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }
    inline void SetCapabilities(Aws::Vector<Aws::String>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }
    inline PartnershipSummary& WithCapabilities(const Aws::Vector<Aws::String>& value) { SetCapabilities(value); return *this;}
    inline PartnershipSummary& WithCapabilities(Aws::Vector<Aws::String>&& value) { SetCapabilities(std::move(value)); return *this;}
    inline PartnershipSummary& AddCapabilities(const Aws::String& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    inline PartnershipSummary& AddCapabilities(Aws::String&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }
    inline PartnershipSummary& AddCapabilities(const char* value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns the unique, system-generated identifier for a trading partner.</p>
     */
    inline const Aws::String& GetTradingPartnerId() const{ return m_tradingPartnerId; }
    inline bool TradingPartnerIdHasBeenSet() const { return m_tradingPartnerIdHasBeenSet; }
    inline void SetTradingPartnerId(const Aws::String& value) { m_tradingPartnerIdHasBeenSet = true; m_tradingPartnerId = value; }
    inline void SetTradingPartnerId(Aws::String&& value) { m_tradingPartnerIdHasBeenSet = true; m_tradingPartnerId = std::move(value); }
    inline void SetTradingPartnerId(const char* value) { m_tradingPartnerIdHasBeenSet = true; m_tradingPartnerId.assign(value); }
    inline PartnershipSummary& WithTradingPartnerId(const Aws::String& value) { SetTradingPartnerId(value); return *this;}
    inline PartnershipSummary& WithTradingPartnerId(Aws::String&& value) { SetTradingPartnerId(std::move(value)); return *this;}
    inline PartnershipSummary& WithTradingPartnerId(const char* value) { SetTradingPartnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a timestamp for creation date and time of the partnership.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline PartnershipSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline PartnershipSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a timestamp that identifies the most recent date and time that the
     * partnership was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }
    inline PartnershipSummary& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}
    inline PartnershipSummary& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}
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

    Aws::String m_tradingPartnerId;
    bool m_tradingPartnerIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
