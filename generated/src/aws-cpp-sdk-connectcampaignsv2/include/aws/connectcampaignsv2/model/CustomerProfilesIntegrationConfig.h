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
   * <p>Customer Profiles integration config</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/CustomerProfilesIntegrationConfig">AWS
   * API Reference</a></p>
   */
  class CustomerProfilesIntegrationConfig
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API CustomerProfilesIntegrationConfig() = default;
    AWS_CONNECTCAMPAIGNSV2_API CustomerProfilesIntegrationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API CustomerProfilesIntegrationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetDomainArn() const { return m_domainArn; }
    inline bool DomainArnHasBeenSet() const { return m_domainArnHasBeenSet; }
    template<typename DomainArnT = Aws::String>
    void SetDomainArn(DomainArnT&& value) { m_domainArnHasBeenSet = true; m_domainArn = std::forward<DomainArnT>(value); }
    template<typename DomainArnT = Aws::String>
    CustomerProfilesIntegrationConfig& WithDomainArn(DomainArnT&& value) { SetDomainArn(std::forward<DomainArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<EventType, Aws::String>& GetObjectTypeNames() const { return m_objectTypeNames; }
    inline bool ObjectTypeNamesHasBeenSet() const { return m_objectTypeNamesHasBeenSet; }
    template<typename ObjectTypeNamesT = Aws::Map<EventType, Aws::String>>
    void SetObjectTypeNames(ObjectTypeNamesT&& value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames = std::forward<ObjectTypeNamesT>(value); }
    template<typename ObjectTypeNamesT = Aws::Map<EventType, Aws::String>>
    CustomerProfilesIntegrationConfig& WithObjectTypeNames(ObjectTypeNamesT&& value) { SetObjectTypeNames(std::forward<ObjectTypeNamesT>(value)); return *this;}
    inline CustomerProfilesIntegrationConfig& AddObjectTypeNames(EventType key, Aws::String value) {
      m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(key, value); return *this;
    }
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
