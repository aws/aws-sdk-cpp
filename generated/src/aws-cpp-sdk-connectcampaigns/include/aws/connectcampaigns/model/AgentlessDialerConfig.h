/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>

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
   * <p>Agentless Dialer config</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/AgentlessDialerConfig">AWS
   * API Reference</a></p>
   */
  class AgentlessDialerConfig
  {
  public:
    AWS_CONNECTCAMPAIGNS_API AgentlessDialerConfig();
    AWS_CONNECTCAMPAIGNS_API AgentlessDialerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API AgentlessDialerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline double GetDialingCapacity() const{ return m_dialingCapacity; }

    
    inline bool DialingCapacityHasBeenSet() const { return m_dialingCapacityHasBeenSet; }

    
    inline void SetDialingCapacity(double value) { m_dialingCapacityHasBeenSet = true; m_dialingCapacity = value; }

    
    inline AgentlessDialerConfig& WithDialingCapacity(double value) { SetDialingCapacity(value); return *this;}

  private:

    double m_dialingCapacity;
    bool m_dialingCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
