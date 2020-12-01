/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>

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
namespace DevOpsGuru
{
namespace Model
{

  class AWS_DEVOPSGURU_API InsightHealth
  {
  public:
    InsightHealth();
    InsightHealth(Aws::Utils::Json::JsonView jsonValue);
    InsightHealth& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline long long GetMeanTimeToRecoverInMilliseconds() const{ return m_meanTimeToRecoverInMilliseconds; }

    
    inline bool MeanTimeToRecoverInMillisecondsHasBeenSet() const { return m_meanTimeToRecoverInMillisecondsHasBeenSet; }

    
    inline void SetMeanTimeToRecoverInMilliseconds(long long value) { m_meanTimeToRecoverInMillisecondsHasBeenSet = true; m_meanTimeToRecoverInMilliseconds = value; }

    
    inline InsightHealth& WithMeanTimeToRecoverInMilliseconds(long long value) { SetMeanTimeToRecoverInMilliseconds(value); return *this;}


    
    inline int GetOpenProactiveInsights() const{ return m_openProactiveInsights; }

    
    inline bool OpenProactiveInsightsHasBeenSet() const { return m_openProactiveInsightsHasBeenSet; }

    
    inline void SetOpenProactiveInsights(int value) { m_openProactiveInsightsHasBeenSet = true; m_openProactiveInsights = value; }

    
    inline InsightHealth& WithOpenProactiveInsights(int value) { SetOpenProactiveInsights(value); return *this;}


    
    inline int GetOpenReactiveInsights() const{ return m_openReactiveInsights; }

    
    inline bool OpenReactiveInsightsHasBeenSet() const { return m_openReactiveInsightsHasBeenSet; }

    
    inline void SetOpenReactiveInsights(int value) { m_openReactiveInsightsHasBeenSet = true; m_openReactiveInsights = value; }

    
    inline InsightHealth& WithOpenReactiveInsights(int value) { SetOpenReactiveInsights(value); return *this;}

  private:

    long long m_meanTimeToRecoverInMilliseconds;
    bool m_meanTimeToRecoverInMillisecondsHasBeenSet;

    int m_openProactiveInsights;
    bool m_openProactiveInsightsHasBeenSet;

    int m_openReactiveInsights;
    bool m_openReactiveInsightsHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
