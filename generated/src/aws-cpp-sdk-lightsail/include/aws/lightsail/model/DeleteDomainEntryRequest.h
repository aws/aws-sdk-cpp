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
  class DeleteDomainEntryRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API DeleteDomainEntryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDomainEntry"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the domain entry to delete.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DeleteDomainEntryRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs containing information about your domain
     * entries.</p>
     */
    inline const DomainEntry& GetDomainEntry() const { return m_domainEntry; }
    inline bool DomainEntryHasBeenSet() const { return m_domainEntryHasBeenSet; }
    template<typename DomainEntryT = DomainEntry>
    void SetDomainEntry(DomainEntryT&& value) { m_domainEntryHasBeenSet = true; m_domainEntry = std::forward<DomainEntryT>(value); }
    template<typename DomainEntryT = DomainEntry>
    DeleteDomainEntryRequest& WithDomainEntry(DomainEntryT&& value) { SetDomainEntry(std::forward<DomainEntryT>(value)); return *this;}
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
