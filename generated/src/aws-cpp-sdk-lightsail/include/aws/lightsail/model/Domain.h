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
    AWS_LIGHTSAIL_API Domain() = default;
    AWS_LIGHTSAIL_API Domain(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Domain& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Domain& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the domain recordset
     * (<code>arn:aws:lightsail:global:123456789101:Domain/824cede0-abc7-4f84-8dbc-12345EXAMPLE</code>).</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Domain& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const { return m_supportCode; }
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }
    template<typename SupportCodeT = Aws::String>
    void SetSupportCode(SupportCodeT&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::forward<SupportCodeT>(value); }
    template<typename SupportCodeT = Aws::String>
    Domain& WithSupportCode(SupportCodeT&& value) { SetSupportCode(std::forward<SupportCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the domain recordset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Domain& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Region and Availability Zones where the domain recordset was
     * created.</p>
     */
    inline const ResourceLocation& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = ResourceLocation>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = ResourceLocation>
    Domain& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type. </p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline Domain& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Domain& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Domain& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs containing information about the domain
     * entries.</p>
     */
    inline const Aws::Vector<DomainEntry>& GetDomainEntries() const { return m_domainEntries; }
    inline bool DomainEntriesHasBeenSet() const { return m_domainEntriesHasBeenSet; }
    template<typename DomainEntriesT = Aws::Vector<DomainEntry>>
    void SetDomainEntries(DomainEntriesT&& value) { m_domainEntriesHasBeenSet = true; m_domainEntries = std::forward<DomainEntriesT>(value); }
    template<typename DomainEntriesT = Aws::Vector<DomainEntry>>
    Domain& WithDomainEntries(DomainEntriesT&& value) { SetDomainEntries(std::forward<DomainEntriesT>(value)); return *this;}
    template<typename DomainEntriesT = DomainEntry>
    Domain& AddDomainEntries(DomainEntriesT&& value) { m_domainEntriesHasBeenSet = true; m_domainEntries.emplace_back(std::forward<DomainEntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that describes the state of the Route 53 domain delegation to a
     * Lightsail DNS zone.</p>
     */
    inline const RegisteredDomainDelegationInfo& GetRegisteredDomainDelegationInfo() const { return m_registeredDomainDelegationInfo; }
    inline bool RegisteredDomainDelegationInfoHasBeenSet() const { return m_registeredDomainDelegationInfoHasBeenSet; }
    template<typename RegisteredDomainDelegationInfoT = RegisteredDomainDelegationInfo>
    void SetRegisteredDomainDelegationInfo(RegisteredDomainDelegationInfoT&& value) { m_registeredDomainDelegationInfoHasBeenSet = true; m_registeredDomainDelegationInfo = std::forward<RegisteredDomainDelegationInfoT>(value); }
    template<typename RegisteredDomainDelegationInfoT = RegisteredDomainDelegationInfo>
    Domain& WithRegisteredDomainDelegationInfo(RegisteredDomainDelegationInfoT&& value) { SetRegisteredDomainDelegationInfo(std::forward<RegisteredDomainDelegationInfoT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    ResourceLocation m_location;
    bool m_locationHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
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
