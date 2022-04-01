﻿/**
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
  class AWS_LIGHTSAIL_API UpdateDomainEntryRequest : public LightsailRequest
  {
  public:
    UpdateDomainEntryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomainEntry"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the domain recordset to update.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain recordset to update.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain recordset to update.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain recordset to update.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain recordset to update.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain recordset to update.</p>
     */
    inline UpdateDomainEntryRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain recordset to update.</p>
     */
    inline UpdateDomainEntryRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain recordset to update.</p>
     */
    inline UpdateDomainEntryRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>An array of key-value pairs containing information about the domain
     * entry.</p>
     */
    inline const DomainEntry& GetDomainEntry() const{ return m_domainEntry; }

    /**
     * <p>An array of key-value pairs containing information about the domain
     * entry.</p>
     */
    inline bool DomainEntryHasBeenSet() const { return m_domainEntryHasBeenSet; }

    /**
     * <p>An array of key-value pairs containing information about the domain
     * entry.</p>
     */
    inline void SetDomainEntry(const DomainEntry& value) { m_domainEntryHasBeenSet = true; m_domainEntry = value; }

    /**
     * <p>An array of key-value pairs containing information about the domain
     * entry.</p>
     */
    inline void SetDomainEntry(DomainEntry&& value) { m_domainEntryHasBeenSet = true; m_domainEntry = std::move(value); }

    /**
     * <p>An array of key-value pairs containing information about the domain
     * entry.</p>
     */
    inline UpdateDomainEntryRequest& WithDomainEntry(const DomainEntry& value) { SetDomainEntry(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the domain
     * entry.</p>
     */
    inline UpdateDomainEntryRequest& WithDomainEntry(DomainEntry&& value) { SetDomainEntry(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    DomainEntry m_domainEntry;
    bool m_domainEntryHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
