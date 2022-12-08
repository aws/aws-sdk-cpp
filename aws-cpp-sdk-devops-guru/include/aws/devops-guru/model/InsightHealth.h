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

  /**
   * <p> Information about the number of open reactive and proactive insights that
   * can be used to gauge the health of your system. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/InsightHealth">AWS
   * API Reference</a></p>
   */
  class InsightHealth
  {
  public:
    AWS_DEVOPSGURU_API InsightHealth();
    AWS_DEVOPSGURU_API InsightHealth(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API InsightHealth& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The number of open proactive insights. </p>
     */
    inline int GetOpenProactiveInsights() const{ return m_openProactiveInsights; }

    /**
     * <p> The number of open proactive insights. </p>
     */
    inline bool OpenProactiveInsightsHasBeenSet() const { return m_openProactiveInsightsHasBeenSet; }

    /**
     * <p> The number of open proactive insights. </p>
     */
    inline void SetOpenProactiveInsights(int value) { m_openProactiveInsightsHasBeenSet = true; m_openProactiveInsights = value; }

    /**
     * <p> The number of open proactive insights. </p>
     */
    inline InsightHealth& WithOpenProactiveInsights(int value) { SetOpenProactiveInsights(value); return *this;}


    /**
     * <p> The number of open reactive insights. </p>
     */
    inline int GetOpenReactiveInsights() const{ return m_openReactiveInsights; }

    /**
     * <p> The number of open reactive insights. </p>
     */
    inline bool OpenReactiveInsightsHasBeenSet() const { return m_openReactiveInsightsHasBeenSet; }

    /**
     * <p> The number of open reactive insights. </p>
     */
    inline void SetOpenReactiveInsights(int value) { m_openReactiveInsightsHasBeenSet = true; m_openReactiveInsights = value; }

    /**
     * <p> The number of open reactive insights. </p>
     */
    inline InsightHealth& WithOpenReactiveInsights(int value) { SetOpenReactiveInsights(value); return *this;}


    /**
     * <p> The Meant Time to Recover (MTTR) for the insight. </p>
     */
    inline long long GetMeanTimeToRecoverInMilliseconds() const{ return m_meanTimeToRecoverInMilliseconds; }

    /**
     * <p> The Meant Time to Recover (MTTR) for the insight. </p>
     */
    inline bool MeanTimeToRecoverInMillisecondsHasBeenSet() const { return m_meanTimeToRecoverInMillisecondsHasBeenSet; }

    /**
     * <p> The Meant Time to Recover (MTTR) for the insight. </p>
     */
    inline void SetMeanTimeToRecoverInMilliseconds(long long value) { m_meanTimeToRecoverInMillisecondsHasBeenSet = true; m_meanTimeToRecoverInMilliseconds = value; }

    /**
     * <p> The Meant Time to Recover (MTTR) for the insight. </p>
     */
    inline InsightHealth& WithMeanTimeToRecoverInMilliseconds(long long value) { SetMeanTimeToRecoverInMilliseconds(value); return *this;}

  private:

    int m_openProactiveInsights;
    bool m_openProactiveInsightsHasBeenSet = false;

    int m_openReactiveInsights;
    bool m_openReactiveInsightsHasBeenSet = false;

    long long m_meanTimeToRecoverInMilliseconds;
    bool m_meanTimeToRecoverInMillisecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
