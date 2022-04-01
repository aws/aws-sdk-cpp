﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_SWF_API UndeprecateActivityTypeRequest : public SWFRequest
  {
  public:
    UndeprecateActivityTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UndeprecateActivityType"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the domain of the deprecated activity type.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the domain of the deprecated activity type.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The name of the domain of the deprecated activity type.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain of the deprecated activity type.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The name of the domain of the deprecated activity type.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The name of the domain of the deprecated activity type.</p>
     */
    inline UndeprecateActivityTypeRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain of the deprecated activity type.</p>
     */
    inline UndeprecateActivityTypeRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The name of the domain of the deprecated activity type.</p>
     */
    inline UndeprecateActivityTypeRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The activity type to undeprecate.</p>
     */
    inline const ActivityType& GetActivityType() const{ return m_activityType; }

    /**
     * <p>The activity type to undeprecate.</p>
     */
    inline bool ActivityTypeHasBeenSet() const { return m_activityTypeHasBeenSet; }

    /**
     * <p>The activity type to undeprecate.</p>
     */
    inline void SetActivityType(const ActivityType& value) { m_activityTypeHasBeenSet = true; m_activityType = value; }

    /**
     * <p>The activity type to undeprecate.</p>
     */
    inline void SetActivityType(ActivityType&& value) { m_activityTypeHasBeenSet = true; m_activityType = std::move(value); }

    /**
     * <p>The activity type to undeprecate.</p>
     */
    inline UndeprecateActivityTypeRequest& WithActivityType(const ActivityType& value) { SetActivityType(value); return *this;}

    /**
     * <p>The activity type to undeprecate.</p>
     */
    inline UndeprecateActivityTypeRequest& WithActivityType(ActivityType&& value) { SetActivityType(std::move(value)); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    ActivityType m_activityType;
    bool m_activityTypeHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
