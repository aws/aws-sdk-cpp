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
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/AccountInsightHealth">AWS
   * API Reference</a></p>
   */
  class AccountInsightHealth
  {
  public:
    AWS_DEVOPSGURU_API AccountInsightHealth();
    AWS_DEVOPSGURU_API AccountInsightHealth(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API AccountInsightHealth& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline int GetOpenProactiveInsights() const{ return m_openProactiveInsights; }

    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline bool OpenProactiveInsightsHasBeenSet() const { return m_openProactiveInsightsHasBeenSet; }

    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline void SetOpenProactiveInsights(int value) { m_openProactiveInsightsHasBeenSet = true; m_openProactiveInsights = value; }

    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline AccountInsightHealth& WithOpenProactiveInsights(int value) { SetOpenProactiveInsights(value); return *this;}


    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline int GetOpenReactiveInsights() const{ return m_openReactiveInsights; }

    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline bool OpenReactiveInsightsHasBeenSet() const { return m_openReactiveInsightsHasBeenSet; }

    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline void SetOpenReactiveInsights(int value) { m_openReactiveInsightsHasBeenSet = true; m_openReactiveInsights = value; }

    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline AccountInsightHealth& WithOpenReactiveInsights(int value) { SetOpenReactiveInsights(value); return *this;}

  private:

    int m_openProactiveInsights;
    bool m_openProactiveInsightsHasBeenSet = false;

    int m_openReactiveInsights;
    bool m_openReactiveInsightsHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
