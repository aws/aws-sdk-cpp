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
#include <aws/workmail/WorkMail_EXPORTS.h>

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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>At least one delegate must be associated to the resource to disable automatic
   * replies from the resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/BookingOptions">AWS
   * API Reference</a></p>
   */
  class AWS_WORKMAIL_API BookingOptions
  {
  public:
    BookingOptions();
    BookingOptions(Aws::Utils::Json::JsonView jsonValue);
    BookingOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resource's ability to automatically reply to requests. If disabled,
     * delegates must be associated to the resource.</p>
     */
    inline bool GetAutoAcceptRequests() const{ return m_autoAcceptRequests; }

    /**
     * <p>The resource's ability to automatically reply to requests. If disabled,
     * delegates must be associated to the resource.</p>
     */
    inline bool AutoAcceptRequestsHasBeenSet() const { return m_autoAcceptRequestsHasBeenSet; }

    /**
     * <p>The resource's ability to automatically reply to requests. If disabled,
     * delegates must be associated to the resource.</p>
     */
    inline void SetAutoAcceptRequests(bool value) { m_autoAcceptRequestsHasBeenSet = true; m_autoAcceptRequests = value; }

    /**
     * <p>The resource's ability to automatically reply to requests. If disabled,
     * delegates must be associated to the resource.</p>
     */
    inline BookingOptions& WithAutoAcceptRequests(bool value) { SetAutoAcceptRequests(value); return *this;}


    /**
     * <p>The resource's ability to automatically decline any recurring requests.</p>
     */
    inline bool GetAutoDeclineRecurringRequests() const{ return m_autoDeclineRecurringRequests; }

    /**
     * <p>The resource's ability to automatically decline any recurring requests.</p>
     */
    inline bool AutoDeclineRecurringRequestsHasBeenSet() const { return m_autoDeclineRecurringRequestsHasBeenSet; }

    /**
     * <p>The resource's ability to automatically decline any recurring requests.</p>
     */
    inline void SetAutoDeclineRecurringRequests(bool value) { m_autoDeclineRecurringRequestsHasBeenSet = true; m_autoDeclineRecurringRequests = value; }

    /**
     * <p>The resource's ability to automatically decline any recurring requests.</p>
     */
    inline BookingOptions& WithAutoDeclineRecurringRequests(bool value) { SetAutoDeclineRecurringRequests(value); return *this;}


    /**
     * <p>The resource's ability to automatically decline any conflicting requests.</p>
     */
    inline bool GetAutoDeclineConflictingRequests() const{ return m_autoDeclineConflictingRequests; }

    /**
     * <p>The resource's ability to automatically decline any conflicting requests.</p>
     */
    inline bool AutoDeclineConflictingRequestsHasBeenSet() const { return m_autoDeclineConflictingRequestsHasBeenSet; }

    /**
     * <p>The resource's ability to automatically decline any conflicting requests.</p>
     */
    inline void SetAutoDeclineConflictingRequests(bool value) { m_autoDeclineConflictingRequestsHasBeenSet = true; m_autoDeclineConflictingRequests = value; }

    /**
     * <p>The resource's ability to automatically decline any conflicting requests.</p>
     */
    inline BookingOptions& WithAutoDeclineConflictingRequests(bool value) { SetAutoDeclineConflictingRequests(value); return *this;}

  private:

    bool m_autoAcceptRequests;
    bool m_autoAcceptRequestsHasBeenSet;

    bool m_autoDeclineRecurringRequests;
    bool m_autoDeclineRecurringRequestsHasBeenSet;

    bool m_autoDeclineConflictingRequests;
    bool m_autoDeclineConflictingRequestsHasBeenSet;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
