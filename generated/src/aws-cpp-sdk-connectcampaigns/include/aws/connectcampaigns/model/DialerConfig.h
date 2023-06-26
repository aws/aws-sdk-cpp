/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/model/PredictiveDialerConfig.h>
#include <aws/connectcampaigns/model/ProgressiveDialerConfig.h>
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
   * <p>The possible types of dialer config parameters</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/DialerConfig">AWS
   * API Reference</a></p>
   */
  class DialerConfig
  {
  public:
    AWS_CONNECTCAMPAIGNS_API DialerConfig();
    AWS_CONNECTCAMPAIGNS_API DialerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API DialerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const PredictiveDialerConfig& GetPredictiveDialerConfig() const{ return m_predictiveDialerConfig; }

    
    inline bool PredictiveDialerConfigHasBeenSet() const { return m_predictiveDialerConfigHasBeenSet; }

    
    inline void SetPredictiveDialerConfig(const PredictiveDialerConfig& value) { m_predictiveDialerConfigHasBeenSet = true; m_predictiveDialerConfig = value; }

    
    inline void SetPredictiveDialerConfig(PredictiveDialerConfig&& value) { m_predictiveDialerConfigHasBeenSet = true; m_predictiveDialerConfig = std::move(value); }

    
    inline DialerConfig& WithPredictiveDialerConfig(const PredictiveDialerConfig& value) { SetPredictiveDialerConfig(value); return *this;}

    
    inline DialerConfig& WithPredictiveDialerConfig(PredictiveDialerConfig&& value) { SetPredictiveDialerConfig(std::move(value)); return *this;}


    
    inline const ProgressiveDialerConfig& GetProgressiveDialerConfig() const{ return m_progressiveDialerConfig; }

    
    inline bool ProgressiveDialerConfigHasBeenSet() const { return m_progressiveDialerConfigHasBeenSet; }

    
    inline void SetProgressiveDialerConfig(const ProgressiveDialerConfig& value) { m_progressiveDialerConfigHasBeenSet = true; m_progressiveDialerConfig = value; }

    
    inline void SetProgressiveDialerConfig(ProgressiveDialerConfig&& value) { m_progressiveDialerConfigHasBeenSet = true; m_progressiveDialerConfig = std::move(value); }

    
    inline DialerConfig& WithProgressiveDialerConfig(const ProgressiveDialerConfig& value) { SetProgressiveDialerConfig(value); return *this;}

    
    inline DialerConfig& WithProgressiveDialerConfig(ProgressiveDialerConfig&& value) { SetProgressiveDialerConfig(std::move(value)); return *this;}

  private:

    PredictiveDialerConfig m_predictiveDialerConfig;
    bool m_predictiveDialerConfigHasBeenSet = false;

    ProgressiveDialerConfig m_progressiveDialerConfig;
    bool m_progressiveDialerConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
