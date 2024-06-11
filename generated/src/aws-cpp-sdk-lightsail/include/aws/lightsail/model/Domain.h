/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/ResourceLocation.h>
#include <aws/lightsail/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/RegisteredDomainDelegationInfo.h>
#include <aws/lightsail/model/Tag.h>
#include <aws/lightsail/model/DomainEntry.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a domain where you are storing recordsets.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/Domain">AWS
   * API Reference</a></p>
   */
  class Domain
  {
  public:
    AWS_LIGHTSAIL_API Domain();
    AWS_LIGHTSAIL_API Domain(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Domain& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Domain& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Domain& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Domain& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the domain recordset
     * (<code>arn:aws:lightsail:global:123456789101:Domain/824cede0-abc7-4f84-8dbc-12345EXAMPLE</code>).</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Domain& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Domain& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Domain& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const{ return m_supportCode; }
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }
    inline void SetSupportCode(const Aws::String& value) { m_supportCodeHasBeenSet = true; m_supportCode = value; }
    inline void SetSupportCode(Aws::String&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::move(value); }
    inline void SetSupportCode(const char* value) { m_supportCodeHasBeenSet = true; m_supportCode.assign(value); }
    inline Domain& WithSupportCode(const Aws::String& value) { SetSupportCode(value); return *this;}
    inline Domain& WithSupportCode(Aws::String&& value) { SetSupportCode(std::move(value)); return *this;}
    inline Domain& WithSupportCode(const char* value) { SetSupportCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the domain recordset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Domain& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Domain& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Region and Availability Zones where the domain recordset was
     * created.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline Domain& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}
    inline Domain& WithLocation(ResourceLocation&& value) { SetLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type. </p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline Domain& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline Domain& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Domain& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Domain& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Domain& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Domain& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs containing information about the domain
     * entries.</p>
     */
    inline const Aws::Vector<DomainEntry>& GetDomainEntries() const{ return m_domainEntries; }
    inline bool DomainEntriesHasBeenSet() const { return m_domainEntriesHasBeenSet; }
    inline void SetDomainEntries(const Aws::Vector<DomainEntry>& value) { m_domainEntriesHasBeenSet = true; m_domainEntries = value; }
    inline void SetDomainEntries(Aws::Vector<DomainEntry>&& value) { m_domainEntriesHasBeenSet = true; m_domainEntries = std::move(value); }
    inline Domain& WithDomainEntries(const Aws::Vector<DomainEntry>& value) { SetDomainEntries(value); return *this;}
    inline Domain& WithDomainEntries(Aws::Vector<DomainEntry>&& value) { SetDomainEntries(std::move(value)); return *this;}
    inline Domain& AddDomainEntries(const DomainEntry& value) { m_domainEntriesHasBeenSet = true; m_domainEntries.push_back(value); return *this; }
    inline Domain& AddDomainEntries(DomainEntry&& value) { m_domainEntriesHasBeenSet = true; m_domainEntries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that describes the state of the Route 53 domain delegation to a
     * Lightsail DNS zone.</p>
     */
    inline const RegisteredDomainDelegationInfo& GetRegisteredDomainDelegationInfo() const{ return m_registeredDomainDelegationInfo; }
    inline bool RegisteredDomainDelegationInfoHasBeenSet() const { return m_registeredDomainDelegationInfoHasBeenSet; }
    inline void SetRegisteredDomainDelegationInfo(const RegisteredDomainDelegationInfo& value) { m_registeredDomainDelegationInfoHasBeenSet = true; m_registeredDomainDelegationInfo = value; }
    inline void SetRegisteredDomainDelegationInfo(RegisteredDomainDelegationInfo&& value) { m_registeredDomainDelegationInfoHasBeenSet = true; m_registeredDomainDelegationInfo = std::move(value); }
    inline Domain& WithRegisteredDomainDelegationInfo(const RegisteredDomainDelegationInfo& value) { SetRegisteredDomainDelegationInfo(value); return *this;}
    inline Domain& WithRegisteredDomainDelegationInfo(RegisteredDomainDelegationInfo&& value) { SetRegisteredDomainDelegationInfo(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    ResourceLocation m_location;
    bool m_locationHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<DomainEntry> m_domainEntries;
    bool m_domainEntriesHasBeenSet = false;

    RegisteredDomainDelegationInfo m_registeredDomainDelegationInfo;
    bool m_registeredDomainDelegationInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
