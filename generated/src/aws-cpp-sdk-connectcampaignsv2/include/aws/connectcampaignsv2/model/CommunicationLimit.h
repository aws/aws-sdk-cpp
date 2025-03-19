/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/CommunicationLimitTimeUnit.h>
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
   * <p>Communication Limit</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/CommunicationLimit">AWS
   * API Reference</a></p>
   */
  class CommunicationLimit
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API CommunicationLimit() = default;
    AWS_CONNECTCAMPAIGNSV2_API CommunicationLimit(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API CommunicationLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Maximum number of contacts allowed for a given target within the given
     * frequency.</p>
     */
    inline int GetMaxCountPerRecipient() const { return m_maxCountPerRecipient; }
    inline bool MaxCountPerRecipientHasBeenSet() const { return m_maxCountPerRecipientHasBeenSet; }
    inline void SetMaxCountPerRecipient(int value) { m_maxCountPerRecipientHasBeenSet = true; m_maxCountPerRecipient = value; }
    inline CommunicationLimit& WithMaxCountPerRecipient(int value) { SetMaxCountPerRecipient(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to consider with regards to this limit.</p>
     */
    inline int GetFrequency() const { return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    inline void SetFrequency(int value) { m_frequencyHasBeenSet = true; m_frequency = value; }
    inline CommunicationLimit& WithFrequency(int value) { SetFrequency(value); return *this;}
    ///@}

    ///@{
    
    inline CommunicationLimitTimeUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(CommunicationLimitTimeUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline CommunicationLimit& WithUnit(CommunicationLimitTimeUnit value) { SetUnit(value); return *this;}
    ///@}
  private:

    int m_maxCountPerRecipient{0};
    bool m_maxCountPerRecipientHasBeenSet = false;

    int m_frequency{0};
    bool m_frequencyHasBeenSet = false;

    CommunicationLimitTimeUnit m_unit{CommunicationLimitTimeUnit::NOT_SET};
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
