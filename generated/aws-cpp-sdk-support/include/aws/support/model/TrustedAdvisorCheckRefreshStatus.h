﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Support
{
namespace Model
{

  /**
   * <p>The refresh status of a Trusted Advisor check.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/TrustedAdvisorCheckRefreshStatus">AWS
   * API Reference</a></p>
   */
  class AWS_SUPPORT_API TrustedAdvisorCheckRefreshStatus
  {
  public:
    TrustedAdvisorCheckRefreshStatus();
    TrustedAdvisorCheckRefreshStatus(Aws::Utils::Json::JsonView jsonValue);
    TrustedAdvisorCheckRefreshStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline const Aws::String& GetCheckId() const{ return m_checkId; }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline bool CheckIdHasBeenSet() const { return m_checkIdHasBeenSet; }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline void SetCheckId(const Aws::String& value) { m_checkIdHasBeenSet = true; m_checkId = value; }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline void SetCheckId(Aws::String&& value) { m_checkIdHasBeenSet = true; m_checkId = std::move(value); }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline void SetCheckId(const char* value) { m_checkIdHasBeenSet = true; m_checkId.assign(value); }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline TrustedAdvisorCheckRefreshStatus& WithCheckId(const Aws::String& value) { SetCheckId(value); return *this;}

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline TrustedAdvisorCheckRefreshStatus& WithCheckId(Aws::String&& value) { SetCheckId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline TrustedAdvisorCheckRefreshStatus& WithCheckId(const char* value) { SetCheckId(value); return *this;}


    /**
     * <p>The status of the Trusted Advisor check for which a refresh has been
     * requested: </p> <ul> <li> <p> <code>none</code> - The check is not refreshed or
     * the non-success status exceeds the timeout</p> </li> <li> <p>
     * <code>enqueued</code> - The check refresh requests has entered the refresh
     * queue</p> </li> <li> <p> <code>processing</code> - The check refresh request is
     * picked up by the rule processing engine</p> </li> <li> <p> <code>success</code>
     * - The check is successfully refreshed</p> </li> <li> <p> <code>abandoned</code>
     * - The check refresh has failed</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Trusted Advisor check for which a refresh has been
     * requested: </p> <ul> <li> <p> <code>none</code> - The check is not refreshed or
     * the non-success status exceeds the timeout</p> </li> <li> <p>
     * <code>enqueued</code> - The check refresh requests has entered the refresh
     * queue</p> </li> <li> <p> <code>processing</code> - The check refresh request is
     * picked up by the rule processing engine</p> </li> <li> <p> <code>success</code>
     * - The check is successfully refreshed</p> </li> <li> <p> <code>abandoned</code>
     * - The check refresh has failed</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Trusted Advisor check for which a refresh has been
     * requested: </p> <ul> <li> <p> <code>none</code> - The check is not refreshed or
     * the non-success status exceeds the timeout</p> </li> <li> <p>
     * <code>enqueued</code> - The check refresh requests has entered the refresh
     * queue</p> </li> <li> <p> <code>processing</code> - The check refresh request is
     * picked up by the rule processing engine</p> </li> <li> <p> <code>success</code>
     * - The check is successfully refreshed</p> </li> <li> <p> <code>abandoned</code>
     * - The check refresh has failed</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Trusted Advisor check for which a refresh has been
     * requested: </p> <ul> <li> <p> <code>none</code> - The check is not refreshed or
     * the non-success status exceeds the timeout</p> </li> <li> <p>
     * <code>enqueued</code> - The check refresh requests has entered the refresh
     * queue</p> </li> <li> <p> <code>processing</code> - The check refresh request is
     * picked up by the rule processing engine</p> </li> <li> <p> <code>success</code>
     * - The check is successfully refreshed</p> </li> <li> <p> <code>abandoned</code>
     * - The check refresh has failed</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Trusted Advisor check for which a refresh has been
     * requested: </p> <ul> <li> <p> <code>none</code> - The check is not refreshed or
     * the non-success status exceeds the timeout</p> </li> <li> <p>
     * <code>enqueued</code> - The check refresh requests has entered the refresh
     * queue</p> </li> <li> <p> <code>processing</code> - The check refresh request is
     * picked up by the rule processing engine</p> </li> <li> <p> <code>success</code>
     * - The check is successfully refreshed</p> </li> <li> <p> <code>abandoned</code>
     * - The check refresh has failed</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the Trusted Advisor check for which a refresh has been
     * requested: </p> <ul> <li> <p> <code>none</code> - The check is not refreshed or
     * the non-success status exceeds the timeout</p> </li> <li> <p>
     * <code>enqueued</code> - The check refresh requests has entered the refresh
     * queue</p> </li> <li> <p> <code>processing</code> - The check refresh request is
     * picked up by the rule processing engine</p> </li> <li> <p> <code>success</code>
     * - The check is successfully refreshed</p> </li> <li> <p> <code>abandoned</code>
     * - The check refresh has failed</p> </li> </ul>
     */
    inline TrustedAdvisorCheckRefreshStatus& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Trusted Advisor check for which a refresh has been
     * requested: </p> <ul> <li> <p> <code>none</code> - The check is not refreshed or
     * the non-success status exceeds the timeout</p> </li> <li> <p>
     * <code>enqueued</code> - The check refresh requests has entered the refresh
     * queue</p> </li> <li> <p> <code>processing</code> - The check refresh request is
     * picked up by the rule processing engine</p> </li> <li> <p> <code>success</code>
     * - The check is successfully refreshed</p> </li> <li> <p> <code>abandoned</code>
     * - The check refresh has failed</p> </li> </ul>
     */
    inline TrustedAdvisorCheckRefreshStatus& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the Trusted Advisor check for which a refresh has been
     * requested: </p> <ul> <li> <p> <code>none</code> - The check is not refreshed or
     * the non-success status exceeds the timeout</p> </li> <li> <p>
     * <code>enqueued</code> - The check refresh requests has entered the refresh
     * queue</p> </li> <li> <p> <code>processing</code> - The check refresh request is
     * picked up by the rule processing engine</p> </li> <li> <p> <code>success</code>
     * - The check is successfully refreshed</p> </li> <li> <p> <code>abandoned</code>
     * - The check refresh has failed</p> </li> </ul>
     */
    inline TrustedAdvisorCheckRefreshStatus& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The amount of time, in milliseconds, until the Trusted Advisor check is
     * eligible for refresh.</p>
     */
    inline long long GetMillisUntilNextRefreshable() const{ return m_millisUntilNextRefreshable; }

    /**
     * <p>The amount of time, in milliseconds, until the Trusted Advisor check is
     * eligible for refresh.</p>
     */
    inline bool MillisUntilNextRefreshableHasBeenSet() const { return m_millisUntilNextRefreshableHasBeenSet; }

    /**
     * <p>The amount of time, in milliseconds, until the Trusted Advisor check is
     * eligible for refresh.</p>
     */
    inline void SetMillisUntilNextRefreshable(long long value) { m_millisUntilNextRefreshableHasBeenSet = true; m_millisUntilNextRefreshable = value; }

    /**
     * <p>The amount of time, in milliseconds, until the Trusted Advisor check is
     * eligible for refresh.</p>
     */
    inline TrustedAdvisorCheckRefreshStatus& WithMillisUntilNextRefreshable(long long value) { SetMillisUntilNextRefreshable(value); return *this;}

  private:

    Aws::String m_checkId;
    bool m_checkIdHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    long long m_millisUntilNextRefreshable;
    bool m_millisUntilNextRefreshableHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
