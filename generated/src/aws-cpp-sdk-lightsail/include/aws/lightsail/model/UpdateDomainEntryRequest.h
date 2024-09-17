/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/DomainEntry.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class UpdateDomainEntryRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API UpdateDomainEntryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomainEntry"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the domain recordset to update.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline UpdateDomainEntryRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline UpdateDomainEntryRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline UpdateDomainEntryRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs containing information about the domain
     * entry.</p>
     */
    inline const DomainEntry& GetDomainEntry() const{ return m_domainEntry; }
    inline bool DomainEntryHasBeenSet() const { return m_domainEntryHasBeenSet; }
    inline void SetDomainEntry(const DomainEntry& value) { m_domainEntryHasBeenSet = true; m_domainEntry = value; }
    inline void SetDomainEntry(DomainEntry&& value) { m_domainEntryHasBeenSet = true; m_domainEntry = std::move(value); }
    inline UpdateDomainEntryRequest& WithDomainEntry(const DomainEntry& value) { SetDomainEntry(value); return *this;}
    inline UpdateDomainEntryRequest& WithDomainEntry(DomainEntry&& value) { SetDomainEntry(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    DomainEntry m_domainEntry;
    bool m_domainEntryHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
