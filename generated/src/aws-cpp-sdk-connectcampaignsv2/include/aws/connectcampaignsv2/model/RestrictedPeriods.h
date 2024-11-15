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
    AWS_CONNECTCAMPAIGNSV2_API RestrictedPeriods();
    AWS_CONNECTCAMPAIGNSV2_API RestrictedPeriods(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API RestrictedPeriods& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Vector<RestrictedPeriod>& GetRestrictedPeriodList() const{ return m_restrictedPeriodList; }
    inline bool RestrictedPeriodListHasBeenSet() const { return m_restrictedPeriodListHasBeenSet; }
    inline void SetRestrictedPeriodList(const Aws::Vector<RestrictedPeriod>& value) { m_restrictedPeriodListHasBeenSet = true; m_restrictedPeriodList = value; }
    inline void SetRestrictedPeriodList(Aws::Vector<RestrictedPeriod>&& value) { m_restrictedPeriodListHasBeenSet = true; m_restrictedPeriodList = std::move(value); }
    inline RestrictedPeriods& WithRestrictedPeriodList(const Aws::Vector<RestrictedPeriod>& value) { SetRestrictedPeriodList(value); return *this;}
    inline RestrictedPeriods& WithRestrictedPeriodList(Aws::Vector<RestrictedPeriod>&& value) { SetRestrictedPeriodList(std::move(value)); return *this;}
    inline RestrictedPeriods& AddRestrictedPeriodList(const RestrictedPeriod& value) { m_restrictedPeriodListHasBeenSet = true; m_restrictedPeriodList.push_back(value); return *this; }
    inline RestrictedPeriods& AddRestrictedPeriodList(RestrictedPeriod&& value) { m_restrictedPeriodListHasBeenSet = true; m_restrictedPeriodList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RestrictedPeriod> m_restrictedPeriodList;
    bool m_restrictedPeriodListHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
