/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/model/InstanceIdFilter.h>
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
namespace ConnectCampaigns
{
namespace Model
{

  /**
   * <p>Filter model by type</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/CampaignFilters">AWS
   * API Reference</a></p>
   */
  class CampaignFilters
  {
  public:
    AWS_CONNECTCAMPAIGNS_API CampaignFilters();
    AWS_CONNECTCAMPAIGNS_API CampaignFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API CampaignFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const InstanceIdFilter& GetInstanceIdFilter() const{ return m_instanceIdFilter; }

    
    inline bool InstanceIdFilterHasBeenSet() const { return m_instanceIdFilterHasBeenSet; }

    
    inline void SetInstanceIdFilter(const InstanceIdFilter& value) { m_instanceIdFilterHasBeenSet = true; m_instanceIdFilter = value; }

    
    inline void SetInstanceIdFilter(InstanceIdFilter&& value) { m_instanceIdFilterHasBeenSet = true; m_instanceIdFilter = std::move(value); }

    
    inline CampaignFilters& WithInstanceIdFilter(const InstanceIdFilter& value) { SetInstanceIdFilter(value); return *this;}

    
    inline CampaignFilters& WithInstanceIdFilter(InstanceIdFilter&& value) { SetInstanceIdFilter(std::move(value)); return *this;}

  private:

    InstanceIdFilter m_instanceIdFilter;
    bool m_instanceIdFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
