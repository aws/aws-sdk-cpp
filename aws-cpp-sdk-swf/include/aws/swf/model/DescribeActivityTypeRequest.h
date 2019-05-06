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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/ActivityType.h>
#include <utility>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class AWS_SWF_API DescribeActivityTypeRequest : public SWFRequest
  {
  public:
    DescribeActivityTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeActivityType"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the domain in which the activity type is registered.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the domain in which the activity type is registered.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The name of the domain in which the activity type is registered.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain in which the activity type is registered.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The name of the domain in which the activity type is registered.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The name of the domain in which the activity type is registered.</p>
     */
    inline DescribeActivityTypeRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain in which the activity type is registered.</p>
     */
    inline DescribeActivityTypeRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The name of the domain in which the activity type is registered.</p>
     */
    inline DescribeActivityTypeRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The activity type to get information about. Activity types are identified by
     * the <code>name</code> and <code>version</code> that were supplied when the
     * activity was registered.</p>
     */
    inline const ActivityType& GetActivityType() const{ return m_activityType; }

    /**
     * <p>The activity type to get information about. Activity types are identified by
     * the <code>name</code> and <code>version</code> that were supplied when the
     * activity was registered.</p>
     */
    inline bool ActivityTypeHasBeenSet() const { return m_activityTypeHasBeenSet; }

    /**
     * <p>The activity type to get information about. Activity types are identified by
     * the <code>name</code> and <code>version</code> that were supplied when the
     * activity was registered.</p>
     */
    inline void SetActivityType(const ActivityType& value) { m_activityTypeHasBeenSet = true; m_activityType = value; }

    /**
     * <p>The activity type to get information about. Activity types are identified by
     * the <code>name</code> and <code>version</code> that were supplied when the
     * activity was registered.</p>
     */
    inline void SetActivityType(ActivityType&& value) { m_activityTypeHasBeenSet = true; m_activityType = std::move(value); }

    /**
     * <p>The activity type to get information about. Activity types are identified by
     * the <code>name</code> and <code>version</code> that were supplied when the
     * activity was registered.</p>
     */
    inline DescribeActivityTypeRequest& WithActivityType(const ActivityType& value) { SetActivityType(value); return *this;}

    /**
     * <p>The activity type to get information about. Activity types are identified by
     * the <code>name</code> and <code>version</code> that were supplied when the
     * activity was registered.</p>
     */
    inline DescribeActivityTypeRequest& WithActivityType(ActivityType&& value) { SetActivityType(std::move(value)); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    ActivityType m_activityType;
    bool m_activityTypeHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
