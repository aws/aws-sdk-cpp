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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/ResourceLocation.h>
#include <aws/lightsail/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/DomainEntry.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a domain where you are storing recordsets in
   * Lightsail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/Domain">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API Domain
  {
  public:
    Domain();
    Domain(const Aws::Utils::Json::JsonValue& jsonValue);
    Domain& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline Domain& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline Domain& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline Domain& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the domain recordset (e.g.,
     * <code>arn:aws:lightsail:global:123456789101:Domain/824cede0-abc7-4f84-8dbc-12345EXAMPLE</code>).</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain recordset (e.g.,
     * <code>arn:aws:lightsail:global:123456789101:Domain/824cede0-abc7-4f84-8dbc-12345EXAMPLE</code>).</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain recordset (e.g.,
     * <code>arn:aws:lightsail:global:123456789101:Domain/824cede0-abc7-4f84-8dbc-12345EXAMPLE</code>).</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain recordset (e.g.,
     * <code>arn:aws:lightsail:global:123456789101:Domain/824cede0-abc7-4f84-8dbc-12345EXAMPLE</code>).</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain recordset (e.g.,
     * <code>arn:aws:lightsail:global:123456789101:Domain/824cede0-abc7-4f84-8dbc-12345EXAMPLE</code>).</p>
     */
    inline Domain& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the domain recordset (e.g.,
     * <code>arn:aws:lightsail:global:123456789101:Domain/824cede0-abc7-4f84-8dbc-12345EXAMPLE</code>).</p>
     */
    inline Domain& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the domain recordset (e.g.,
     * <code>arn:aws:lightsail:global:123456789101:Domain/824cede0-abc7-4f84-8dbc-12345EXAMPLE</code>).</p>
     */
    inline Domain& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const{ return m_supportCode; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(const Aws::String& value) { m_supportCodeHasBeenSet = true; m_supportCode = value; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(Aws::String&& value) { m_supportCodeHasBeenSet = true; m_supportCode = value; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(const char* value) { m_supportCodeHasBeenSet = true; m_supportCode.assign(value); }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline Domain& WithSupportCode(const Aws::String& value) { SetSupportCode(value); return *this;}

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline Domain& WithSupportCode(Aws::String&& value) { SetSupportCode(value); return *this;}

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline Domain& WithSupportCode(const char* value) { SetSupportCode(value); return *this;}

    /**
     * <p>The date when the domain recordset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date when the domain recordset was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date when the domain recordset was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date when the domain recordset was created.</p>
     */
    inline Domain& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date when the domain recordset was created.</p>
     */
    inline Domain& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The AWS Region and Availability Zones where the domain recordset was
     * created.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }

    /**
     * <p>The AWS Region and Availability Zones where the domain recordset was
     * created.</p>
     */
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The AWS Region and Availability Zones where the domain recordset was
     * created.</p>
     */
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The AWS Region and Availability Zones where the domain recordset was
     * created.</p>
     */
    inline Domain& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>The AWS Region and Availability Zones where the domain recordset was
     * created.</p>
     */
    inline Domain& WithLocation(ResourceLocation&& value) { SetLocation(value); return *this;}

    /**
     * <p>The resource type. </p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type. </p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type. </p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type. </p>
     */
    inline Domain& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type. </p>
     */
    inline Domain& WithResourceType(ResourceType&& value) { SetResourceType(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the domain
     * entries.</p>
     */
    inline const Aws::Vector<DomainEntry>& GetDomainEntries() const{ return m_domainEntries; }

    /**
     * <p>An array of key-value pairs containing information about the domain
     * entries.</p>
     */
    inline void SetDomainEntries(const Aws::Vector<DomainEntry>& value) { m_domainEntriesHasBeenSet = true; m_domainEntries = value; }

    /**
     * <p>An array of key-value pairs containing information about the domain
     * entries.</p>
     */
    inline void SetDomainEntries(Aws::Vector<DomainEntry>&& value) { m_domainEntriesHasBeenSet = true; m_domainEntries = value; }

    /**
     * <p>An array of key-value pairs containing information about the domain
     * entries.</p>
     */
    inline Domain& WithDomainEntries(const Aws::Vector<DomainEntry>& value) { SetDomainEntries(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the domain
     * entries.</p>
     */
    inline Domain& WithDomainEntries(Aws::Vector<DomainEntry>&& value) { SetDomainEntries(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the domain
     * entries.</p>
     */
    inline Domain& AddDomainEntries(const DomainEntry& value) { m_domainEntriesHasBeenSet = true; m_domainEntries.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs containing information about the domain
     * entries.</p>
     */
    inline Domain& AddDomainEntries(DomainEntry&& value) { m_domainEntriesHasBeenSet = true; m_domainEntries.push_back(value); return *this; }

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet;
    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;
    ResourceLocation m_location;
    bool m_locationHasBeenSet;
    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;
    Aws::Vector<DomainEntry> m_domainEntries;
    bool m_domainEntriesHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
