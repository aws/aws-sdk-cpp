/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcampaignsv2/model/CommunicationLimit.h>
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
   * <p>Communication limits</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/CommunicationLimits">AWS
   * API Reference</a></p>
   */
  class CommunicationLimits
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API CommunicationLimits();
    AWS_CONNECTCAMPAIGNSV2_API CommunicationLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API CommunicationLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Vector<CommunicationLimit>& GetCommunicationLimitsList() const{ return m_communicationLimitsList; }
    inline bool CommunicationLimitsListHasBeenSet() const { return m_communicationLimitsListHasBeenSet; }
    inline void SetCommunicationLimitsList(const Aws::Vector<CommunicationLimit>& value) { m_communicationLimitsListHasBeenSet = true; m_communicationLimitsList = value; }
    inline void SetCommunicationLimitsList(Aws::Vector<CommunicationLimit>&& value) { m_communicationLimitsListHasBeenSet = true; m_communicationLimitsList = std::move(value); }
    inline CommunicationLimits& WithCommunicationLimitsList(const Aws::Vector<CommunicationLimit>& value) { SetCommunicationLimitsList(value); return *this;}
    inline CommunicationLimits& WithCommunicationLimitsList(Aws::Vector<CommunicationLimit>&& value) { SetCommunicationLimitsList(std::move(value)); return *this;}
    inline CommunicationLimits& AddCommunicationLimitsList(const CommunicationLimit& value) { m_communicationLimitsListHasBeenSet = true; m_communicationLimitsList.push_back(value); return *this; }
    inline CommunicationLimits& AddCommunicationLimitsList(CommunicationLimit&& value) { m_communicationLimitsListHasBeenSet = true; m_communicationLimitsList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CommunicationLimit> m_communicationLimitsList;
    bool m_communicationLimitsListHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
