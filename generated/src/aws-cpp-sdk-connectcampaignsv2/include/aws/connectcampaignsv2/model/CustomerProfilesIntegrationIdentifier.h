/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Customer Profiles integration identifier</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/CustomerProfilesIntegrationIdentifier">AWS
   * API Reference</a></p>
   */
  class CustomerProfilesIntegrationIdentifier
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API CustomerProfilesIntegrationIdentifier();
    AWS_CONNECTCAMPAIGNSV2_API CustomerProfilesIntegrationIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API CustomerProfilesIntegrationIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetDomainArn() const{ return m_domainArn; }
    inline bool DomainArnHasBeenSet() const { return m_domainArnHasBeenSet; }
    inline void SetDomainArn(const Aws::String& value) { m_domainArnHasBeenSet = true; m_domainArn = value; }
    inline void SetDomainArn(Aws::String&& value) { m_domainArnHasBeenSet = true; m_domainArn = std::move(value); }
    inline void SetDomainArn(const char* value) { m_domainArnHasBeenSet = true; m_domainArn.assign(value); }
    inline CustomerProfilesIntegrationIdentifier& WithDomainArn(const Aws::String& value) { SetDomainArn(value); return *this;}
    inline CustomerProfilesIntegrationIdentifier& WithDomainArn(Aws::String&& value) { SetDomainArn(std::move(value)); return *this;}
    inline CustomerProfilesIntegrationIdentifier& WithDomainArn(const char* value) { SetDomainArn(value); return *this;}
    ///@}
  private:

    Aws::String m_domainArn;
    bool m_domainArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
