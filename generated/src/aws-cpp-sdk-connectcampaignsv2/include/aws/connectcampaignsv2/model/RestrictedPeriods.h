/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcampaignsv2/model/RestrictedPeriod.h>
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
   * <p>Restricted period config</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/RestrictedPeriods">AWS
   * API Reference</a></p>
   */
  class RestrictedPeriods
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API RestrictedPeriods() = default;
    AWS_CONNECTCAMPAIGNSV2_API RestrictedPeriods(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API RestrictedPeriods& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Vector<RestrictedPeriod>& GetRestrictedPeriodList() const { return m_restrictedPeriodList; }
    inline bool RestrictedPeriodListHasBeenSet() const { return m_restrictedPeriodListHasBeenSet; }
    template<typename RestrictedPeriodListT = Aws::Vector<RestrictedPeriod>>
    void SetRestrictedPeriodList(RestrictedPeriodListT&& value) { m_restrictedPeriodListHasBeenSet = true; m_restrictedPeriodList = std::forward<RestrictedPeriodListT>(value); }
    template<typename RestrictedPeriodListT = Aws::Vector<RestrictedPeriod>>
    RestrictedPeriods& WithRestrictedPeriodList(RestrictedPeriodListT&& value) { SetRestrictedPeriodList(std::forward<RestrictedPeriodListT>(value)); return *this;}
    template<typename RestrictedPeriodListT = RestrictedPeriod>
    RestrictedPeriods& AddRestrictedPeriodList(RestrictedPeriodListT&& value) { m_restrictedPeriodListHasBeenSet = true; m_restrictedPeriodList.emplace_back(std::forward<RestrictedPeriodListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RestrictedPeriod> m_restrictedPeriodList;
    bool m_restrictedPeriodListHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
