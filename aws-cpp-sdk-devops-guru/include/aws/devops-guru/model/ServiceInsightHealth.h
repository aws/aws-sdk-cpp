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
   * <p>Contains the number of open proactive and reactive insights in an analyzed
   * Amazon Web Services service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ServiceInsightHealth">AWS
   * API Reference</a></p>
   */
  class ServiceInsightHealth
  {
  public:
    AWS_DEVOPSGURU_API ServiceInsightHealth();
    AWS_DEVOPSGURU_API ServiceInsightHealth(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ServiceInsightHealth& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of open proactive insights in the Amazon Web Services service</p>
     */
    inline int GetOpenProactiveInsights() const{ return m_openProactiveInsights; }

    /**
     * <p>The number of open proactive insights in the Amazon Web Services service</p>
     */
    inline bool OpenProactiveInsightsHasBeenSet() const { return m_openProactiveInsightsHasBeenSet; }

    /**
     * <p>The number of open proactive insights in the Amazon Web Services service</p>
     */
    inline void SetOpenProactiveInsights(int value) { m_openProactiveInsightsHasBeenSet = true; m_openProactiveInsights = value; }

    /**
     * <p>The number of open proactive insights in the Amazon Web Services service</p>
     */
    inline ServiceInsightHealth& WithOpenProactiveInsights(int value) { SetOpenProactiveInsights(value); return *this;}


    /**
     * <p>The number of open reactive insights in the Amazon Web Services service</p>
     */
    inline int GetOpenReactiveInsights() const{ return m_openReactiveInsights; }

    /**
     * <p>The number of open reactive insights in the Amazon Web Services service</p>
     */
    inline bool OpenReactiveInsightsHasBeenSet() const { return m_openReactiveInsightsHasBeenSet; }

    /**
     * <p>The number of open reactive insights in the Amazon Web Services service</p>
     */
    inline void SetOpenReactiveInsights(int value) { m_openReactiveInsightsHasBeenSet = true; m_openReactiveInsights = value; }

    /**
     * <p>The number of open reactive insights in the Amazon Web Services service</p>
     */
    inline ServiceInsightHealth& WithOpenReactiveInsights(int value) { SetOpenReactiveInsights(value); return *this;}

  private:

    int m_openProactiveInsights;
    bool m_openProactiveInsightsHasBeenSet = false;

    int m_openReactiveInsights;
    bool m_openReactiveInsightsHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
