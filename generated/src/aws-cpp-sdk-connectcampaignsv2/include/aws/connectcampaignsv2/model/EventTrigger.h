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
   * <p>Event trigger of the campaign</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/EventTrigger">AWS
   * API Reference</a></p>
   */
  class EventTrigger
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API EventTrigger() = default;
    AWS_CONNECTCAMPAIGNSV2_API EventTrigger(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API EventTrigger& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetCustomerProfilesDomainArn() const { return m_customerProfilesDomainArn; }
    inline bool CustomerProfilesDomainArnHasBeenSet() const { return m_customerProfilesDomainArnHasBeenSet; }
    template<typename CustomerProfilesDomainArnT = Aws::String>
    void SetCustomerProfilesDomainArn(CustomerProfilesDomainArnT&& value) { m_customerProfilesDomainArnHasBeenSet = true; m_customerProfilesDomainArn = std::forward<CustomerProfilesDomainArnT>(value); }
    template<typename CustomerProfilesDomainArnT = Aws::String>
    EventTrigger& WithCustomerProfilesDomainArn(CustomerProfilesDomainArnT&& value) { SetCustomerProfilesDomainArn(std::forward<CustomerProfilesDomainArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customerProfilesDomainArn;
    bool m_customerProfilesDomainArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
