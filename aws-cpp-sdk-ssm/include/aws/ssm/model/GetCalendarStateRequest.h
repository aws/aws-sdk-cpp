/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class GetCalendarStateRequest : public SSMRequest
  {
  public:
    AWS_SSM_API GetCalendarStateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCalendarState"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The names or Amazon Resource Names (ARNs) of the Systems Manager documents
     * (SSM documents) that represent the calendar entries for which you want to get
     * the state.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCalendarNames() const{ return m_calendarNames; }

    /**
     * <p>The names or Amazon Resource Names (ARNs) of the Systems Manager documents
     * (SSM documents) that represent the calendar entries for which you want to get
     * the state.</p>
     */
    inline bool CalendarNamesHasBeenSet() const { return m_calendarNamesHasBeenSet; }

    /**
     * <p>The names or Amazon Resource Names (ARNs) of the Systems Manager documents
     * (SSM documents) that represent the calendar entries for which you want to get
     * the state.</p>
     */
    inline void SetCalendarNames(const Aws::Vector<Aws::String>& value) { m_calendarNamesHasBeenSet = true; m_calendarNames = value; }

    /**
     * <p>The names or Amazon Resource Names (ARNs) of the Systems Manager documents
     * (SSM documents) that represent the calendar entries for which you want to get
     * the state.</p>
     */
    inline void SetCalendarNames(Aws::Vector<Aws::String>&& value) { m_calendarNamesHasBeenSet = true; m_calendarNames = std::move(value); }

    /**
     * <p>The names or Amazon Resource Names (ARNs) of the Systems Manager documents
     * (SSM documents) that represent the calendar entries for which you want to get
     * the state.</p>
     */
    inline GetCalendarStateRequest& WithCalendarNames(const Aws::Vector<Aws::String>& value) { SetCalendarNames(value); return *this;}

    /**
     * <p>The names or Amazon Resource Names (ARNs) of the Systems Manager documents
     * (SSM documents) that represent the calendar entries for which you want to get
     * the state.</p>
     */
    inline GetCalendarStateRequest& WithCalendarNames(Aws::Vector<Aws::String>&& value) { SetCalendarNames(std::move(value)); return *this;}

    /**
     * <p>The names or Amazon Resource Names (ARNs) of the Systems Manager documents
     * (SSM documents) that represent the calendar entries for which you want to get
     * the state.</p>
     */
    inline GetCalendarStateRequest& AddCalendarNames(const Aws::String& value) { m_calendarNamesHasBeenSet = true; m_calendarNames.push_back(value); return *this; }

    /**
     * <p>The names or Amazon Resource Names (ARNs) of the Systems Manager documents
     * (SSM documents) that represent the calendar entries for which you want to get
     * the state.</p>
     */
    inline GetCalendarStateRequest& AddCalendarNames(Aws::String&& value) { m_calendarNamesHasBeenSet = true; m_calendarNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names or Amazon Resource Names (ARNs) of the Systems Manager documents
     * (SSM documents) that represent the calendar entries for which you want to get
     * the state.</p>
     */
    inline GetCalendarStateRequest& AddCalendarNames(const char* value) { m_calendarNamesHasBeenSet = true; m_calendarNames.push_back(value); return *this; }


    /**
     * <p>(Optional) The specific time for which you want to get calendar state
     * information, in <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * format. If you don't specify a value or <code>AtTime</code>, the current time is
     * used.</p>
     */
    inline const Aws::String& GetAtTime() const{ return m_atTime; }

    /**
     * <p>(Optional) The specific time for which you want to get calendar state
     * information, in <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * format. If you don't specify a value or <code>AtTime</code>, the current time is
     * used.</p>
     */
    inline bool AtTimeHasBeenSet() const { return m_atTimeHasBeenSet; }

    /**
     * <p>(Optional) The specific time for which you want to get calendar state
     * information, in <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * format. If you don't specify a value or <code>AtTime</code>, the current time is
     * used.</p>
     */
    inline void SetAtTime(const Aws::String& value) { m_atTimeHasBeenSet = true; m_atTime = value; }

    /**
     * <p>(Optional) The specific time for which you want to get calendar state
     * information, in <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * format. If you don't specify a value or <code>AtTime</code>, the current time is
     * used.</p>
     */
    inline void SetAtTime(Aws::String&& value) { m_atTimeHasBeenSet = true; m_atTime = std::move(value); }

    /**
     * <p>(Optional) The specific time for which you want to get calendar state
     * information, in <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * format. If you don't specify a value or <code>AtTime</code>, the current time is
     * used.</p>
     */
    inline void SetAtTime(const char* value) { m_atTimeHasBeenSet = true; m_atTime.assign(value); }

    /**
     * <p>(Optional) The specific time for which you want to get calendar state
     * information, in <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * format. If you don't specify a value or <code>AtTime</code>, the current time is
     * used.</p>
     */
    inline GetCalendarStateRequest& WithAtTime(const Aws::String& value) { SetAtTime(value); return *this;}

    /**
     * <p>(Optional) The specific time for which you want to get calendar state
     * information, in <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * format. If you don't specify a value or <code>AtTime</code>, the current time is
     * used.</p>
     */
    inline GetCalendarStateRequest& WithAtTime(Aws::String&& value) { SetAtTime(std::move(value)); return *this;}

    /**
     * <p>(Optional) The specific time for which you want to get calendar state
     * information, in <a href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601</a>
     * format. If you don't specify a value or <code>AtTime</code>, the current time is
     * used.</p>
     */
    inline GetCalendarStateRequest& WithAtTime(const char* value) { SetAtTime(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_calendarNames;
    bool m_calendarNamesHasBeenSet = false;

    Aws::String m_atTime;
    bool m_atTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
