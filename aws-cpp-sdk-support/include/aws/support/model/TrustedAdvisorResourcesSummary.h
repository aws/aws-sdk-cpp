/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/support/Support_EXPORTS.h>

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
namespace Support
{
namespace Model
{

  /**
   * <p>Details about AWS resources that were analyzed in a call to Trusted Advisor
   * <a>DescribeTrustedAdvisorCheckSummaries</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/TrustedAdvisorResourcesSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SUPPORT_API TrustedAdvisorResourcesSummary
  {
  public:
    TrustedAdvisorResourcesSummary();
    TrustedAdvisorResourcesSummary(Aws::Utils::Json::JsonView jsonValue);
    TrustedAdvisorResourcesSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of AWS resources that were analyzed by the Trusted Advisor
     * check.</p>
     */
    inline long long GetResourcesProcessed() const{ return m_resourcesProcessed; }

    /**
     * <p>The number of AWS resources that were analyzed by the Trusted Advisor
     * check.</p>
     */
    inline bool ResourcesProcessedHasBeenSet() const { return m_resourcesProcessedHasBeenSet; }

    /**
     * <p>The number of AWS resources that were analyzed by the Trusted Advisor
     * check.</p>
     */
    inline void SetResourcesProcessed(long long value) { m_resourcesProcessedHasBeenSet = true; m_resourcesProcessed = value; }

    /**
     * <p>The number of AWS resources that were analyzed by the Trusted Advisor
     * check.</p>
     */
    inline TrustedAdvisorResourcesSummary& WithResourcesProcessed(long long value) { SetResourcesProcessed(value); return *this;}


    /**
     * <p>The number of AWS resources that were flagged (listed) by the Trusted Advisor
     * check.</p>
     */
    inline long long GetResourcesFlagged() const{ return m_resourcesFlagged; }

    /**
     * <p>The number of AWS resources that were flagged (listed) by the Trusted Advisor
     * check.</p>
     */
    inline bool ResourcesFlaggedHasBeenSet() const { return m_resourcesFlaggedHasBeenSet; }

    /**
     * <p>The number of AWS resources that were flagged (listed) by the Trusted Advisor
     * check.</p>
     */
    inline void SetResourcesFlagged(long long value) { m_resourcesFlaggedHasBeenSet = true; m_resourcesFlagged = value; }

    /**
     * <p>The number of AWS resources that were flagged (listed) by the Trusted Advisor
     * check.</p>
     */
    inline TrustedAdvisorResourcesSummary& WithResourcesFlagged(long long value) { SetResourcesFlagged(value); return *this;}


    /**
     * <p>The number of AWS resources ignored by Trusted Advisor because information
     * was unavailable.</p>
     */
    inline long long GetResourcesIgnored() const{ return m_resourcesIgnored; }

    /**
     * <p>The number of AWS resources ignored by Trusted Advisor because information
     * was unavailable.</p>
     */
    inline bool ResourcesIgnoredHasBeenSet() const { return m_resourcesIgnoredHasBeenSet; }

    /**
     * <p>The number of AWS resources ignored by Trusted Advisor because information
     * was unavailable.</p>
     */
    inline void SetResourcesIgnored(long long value) { m_resourcesIgnoredHasBeenSet = true; m_resourcesIgnored = value; }

    /**
     * <p>The number of AWS resources ignored by Trusted Advisor because information
     * was unavailable.</p>
     */
    inline TrustedAdvisorResourcesSummary& WithResourcesIgnored(long long value) { SetResourcesIgnored(value); return *this;}


    /**
     * <p>The number of AWS resources ignored by Trusted Advisor because they were
     * marked as suppressed by the user.</p>
     */
    inline long long GetResourcesSuppressed() const{ return m_resourcesSuppressed; }

    /**
     * <p>The number of AWS resources ignored by Trusted Advisor because they were
     * marked as suppressed by the user.</p>
     */
    inline bool ResourcesSuppressedHasBeenSet() const { return m_resourcesSuppressedHasBeenSet; }

    /**
     * <p>The number of AWS resources ignored by Trusted Advisor because they were
     * marked as suppressed by the user.</p>
     */
    inline void SetResourcesSuppressed(long long value) { m_resourcesSuppressedHasBeenSet = true; m_resourcesSuppressed = value; }

    /**
     * <p>The number of AWS resources ignored by Trusted Advisor because they were
     * marked as suppressed by the user.</p>
     */
    inline TrustedAdvisorResourcesSummary& WithResourcesSuppressed(long long value) { SetResourcesSuppressed(value); return *this;}

  private:

    long long m_resourcesProcessed;
    bool m_resourcesProcessedHasBeenSet;

    long long m_resourcesFlagged;
    bool m_resourcesFlaggedHasBeenSet;

    long long m_resourcesIgnored;
    bool m_resourcesIgnoredHasBeenSet;

    long long m_resourcesSuppressed;
    bool m_resourcesSuppressedHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
