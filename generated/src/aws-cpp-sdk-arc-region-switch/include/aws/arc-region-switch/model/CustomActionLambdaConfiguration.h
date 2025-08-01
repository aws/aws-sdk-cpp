/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/arc-region-switch/model/RegionToRunIn.h>
#include <aws/arc-region-switch/model/LambdaUngraceful.h>
#include <aws/arc-region-switch/model/Lambdas.h>
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
namespace ARCRegionswitch
{
namespace Model
{

  /**
   * <p>Configuration for Amazon Web Services Lambda functions that perform custom
   * actions during a Region switch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/CustomActionLambdaConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomActionLambdaConfiguration
  {
  public:
    AWS_ARCREGIONSWITCH_API CustomActionLambdaConfiguration() = default;
    AWS_ARCREGIONSWITCH_API CustomActionLambdaConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API CustomActionLambdaConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timeout value specified for the configuration.</p>
     */
    inline int GetTimeoutMinutes() const { return m_timeoutMinutes; }
    inline bool TimeoutMinutesHasBeenSet() const { return m_timeoutMinutesHasBeenSet; }
    inline void SetTimeoutMinutes(int value) { m_timeoutMinutesHasBeenSet = true; m_timeoutMinutes = value; }
    inline CustomActionLambdaConfiguration& WithTimeoutMinutes(int value) { SetTimeoutMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Lambda functions for the execution block.</p>
     */
    inline const Aws::Vector<Lambdas>& GetLambdas() const { return m_lambdas; }
    inline bool LambdasHasBeenSet() const { return m_lambdasHasBeenSet; }
    template<typename LambdasT = Aws::Vector<Lambdas>>
    void SetLambdas(LambdasT&& value) { m_lambdasHasBeenSet = true; m_lambdas = std::forward<LambdasT>(value); }
    template<typename LambdasT = Aws::Vector<Lambdas>>
    CustomActionLambdaConfiguration& WithLambdas(LambdasT&& value) { SetLambdas(std::forward<LambdasT>(value)); return *this;}
    template<typename LambdasT = Lambdas>
    CustomActionLambdaConfiguration& AddLambdas(LambdasT&& value) { m_lambdasHasBeenSet = true; m_lambdas.emplace_back(std::forward<LambdasT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The retry interval specified.</p>
     */
    inline double GetRetryIntervalMinutes() const { return m_retryIntervalMinutes; }
    inline bool RetryIntervalMinutesHasBeenSet() const { return m_retryIntervalMinutesHasBeenSet; }
    inline void SetRetryIntervalMinutes(double value) { m_retryIntervalMinutesHasBeenSet = true; m_retryIntervalMinutes = value; }
    inline CustomActionLambdaConfiguration& WithRetryIntervalMinutes(double value) { SetRetryIntervalMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region for the function to run in.</p>
     */
    inline RegionToRunIn GetRegionToRun() const { return m_regionToRun; }
    inline bool RegionToRunHasBeenSet() const { return m_regionToRunHasBeenSet; }
    inline void SetRegionToRun(RegionToRunIn value) { m_regionToRunHasBeenSet = true; m_regionToRun = value; }
    inline CustomActionLambdaConfiguration& WithRegionToRun(RegionToRunIn value) { SetRegionToRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for ungraceful execution.</p>
     */
    inline const LambdaUngraceful& GetUngraceful() const { return m_ungraceful; }
    inline bool UngracefulHasBeenSet() const { return m_ungracefulHasBeenSet; }
    template<typename UngracefulT = LambdaUngraceful>
    void SetUngraceful(UngracefulT&& value) { m_ungracefulHasBeenSet = true; m_ungraceful = std::forward<UngracefulT>(value); }
    template<typename UngracefulT = LambdaUngraceful>
    CustomActionLambdaConfiguration& WithUngraceful(UngracefulT&& value) { SetUngraceful(std::forward<UngracefulT>(value)); return *this;}
    ///@}
  private:

    int m_timeoutMinutes{0};
    bool m_timeoutMinutesHasBeenSet = false;

    Aws::Vector<Lambdas> m_lambdas;
    bool m_lambdasHasBeenSet = false;

    double m_retryIntervalMinutes{0.0};
    bool m_retryIntervalMinutesHasBeenSet = false;

    RegionToRunIn m_regionToRun{RegionToRunIn::NOT_SET};
    bool m_regionToRunHasBeenSet = false;

    LambdaUngraceful m_ungraceful;
    bool m_ungracefulHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
