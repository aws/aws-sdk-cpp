/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connectcampaignsv2/model/EventType.h>
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
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>Customer Profiles integration summary</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/CustomerProfilesIntegrationSummary">AWS
   * API Reference</a></p>
   */
  class CustomerProfilesIntegrationSummary
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API CustomerProfilesIntegrationSummary();
    AWS_CONNECTCAMPAIGNSV2_API CustomerProfilesIntegrationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API CustomerProfilesIntegrationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetDomainArn() const{ return m_domainArn; }
    inline bool DomainArnHasBeenSet() const { return m_domainArnHasBeenSet; }
    inline void SetDomainArn(const Aws::String& value) { m_domainArnHasBeenSet = true; m_domainArn = value; }
    inline void SetDomainArn(Aws::String&& value) { m_domainArnHasBeenSet = true; m_domainArn = std::move(value); }
    inline void SetDomainArn(const char* value) { m_domainArnHasBeenSet = true; m_domainArn.assign(value); }
    inline CustomerProfilesIntegrationSummary& WithDomainArn(const Aws::String& value) { SetDomainArn(value); return *this;}
    inline CustomerProfilesIntegrationSummary& WithDomainArn(Aws::String&& value) { SetDomainArn(std::move(value)); return *this;}
    inline CustomerProfilesIntegrationSummary& WithDomainArn(const char* value) { SetDomainArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<EventType, Aws::String>& GetObjectTypeNames() const{ return m_objectTypeNames; }
    inline bool ObjectTypeNamesHasBeenSet() const { return m_objectTypeNamesHasBeenSet; }
    inline void SetObjectTypeNames(const Aws::Map<EventType, Aws::String>& value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames = value; }
    inline void SetObjectTypeNames(Aws::Map<EventType, Aws::String>&& value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames = std::move(value); }
    inline CustomerProfilesIntegrationSummary& WithObjectTypeNames(const Aws::Map<EventType, Aws::String>& value) { SetObjectTypeNames(value); return *this;}
    inline CustomerProfilesIntegrationSummary& WithObjectTypeNames(Aws::Map<EventType, Aws::String>&& value) { SetObjectTypeNames(std::move(value)); return *this;}
    inline CustomerProfilesIntegrationSummary& AddObjectTypeNames(const EventType& key, const Aws::String& value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(key, value); return *this; }
    inline CustomerProfilesIntegrationSummary& AddObjectTypeNames(EventType&& key, const Aws::String& value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(std::move(key), value); return *this; }
    inline CustomerProfilesIntegrationSummary& AddObjectTypeNames(const EventType& key, Aws::String&& value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(key, std::move(value)); return *this; }
    inline CustomerProfilesIntegrationSummary& AddObjectTypeNames(EventType&& key, Aws::String&& value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(std::move(key), std::move(value)); return *this; }
    inline CustomerProfilesIntegrationSummary& AddObjectTypeNames(EventType&& key, const char* value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(std::move(key), value); return *this; }
    inline CustomerProfilesIntegrationSummary& AddObjectTypeNames(const EventType& key, const char* value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_domainArn;
    bool m_domainArnHasBeenSet = false;

    Aws::Map<EventType, Aws::String> m_objectTypeNames;
    bool m_objectTypeNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
