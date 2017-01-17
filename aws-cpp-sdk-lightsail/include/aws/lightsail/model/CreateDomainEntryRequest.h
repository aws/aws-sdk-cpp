﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/DomainEntry.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API CreateDomainEntryRequest : public LightsailRequest
  {
  public:
    CreateDomainEntryRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The domain name (e.g., <code>example.com</code>) for which you want to create
     * the domain entry.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name (e.g., <code>example.com</code>) for which you want to create
     * the domain entry.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name (e.g., <code>example.com</code>) for which you want to create
     * the domain entry.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name (e.g., <code>example.com</code>) for which you want to create
     * the domain entry.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name (e.g., <code>example.com</code>) for which you want to create
     * the domain entry.</p>
     */
    inline CreateDomainEntryRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name (e.g., <code>example.com</code>) for which you want to create
     * the domain entry.</p>
     */
    inline CreateDomainEntryRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name (e.g., <code>example.com</code>) for which you want to create
     * the domain entry.</p>
     */
    inline CreateDomainEntryRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the domain entry
     * request.</p>
     */
    inline const DomainEntry& GetDomainEntry() const{ return m_domainEntry; }

    /**
     * <p>An array of key-value pairs containing information about the domain entry
     * request.</p>
     */
    inline void SetDomainEntry(const DomainEntry& value) { m_domainEntryHasBeenSet = true; m_domainEntry = value; }

    /**
     * <p>An array of key-value pairs containing information about the domain entry
     * request.</p>
     */
    inline void SetDomainEntry(DomainEntry&& value) { m_domainEntryHasBeenSet = true; m_domainEntry = value; }

    /**
     * <p>An array of key-value pairs containing information about the domain entry
     * request.</p>
     */
    inline CreateDomainEntryRequest& WithDomainEntry(const DomainEntry& value) { SetDomainEntry(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the domain entry
     * request.</p>
     */
    inline CreateDomainEntryRequest& WithDomainEntry(DomainEntry&& value) { SetDomainEntry(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    DomainEntry m_domainEntry;
    bool m_domainEntryHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
