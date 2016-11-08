/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_REDSHIFT_API DeleteEventSubscriptionRequest : public RedshiftRequest
  {
  public:
    DeleteEventSubscriptionRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the Amazon Redshift event notification subscription to be
     * deleted.</p>
     */
    inline const Aws::String& GetSubscriptionName() const{ return m_subscriptionName; }

    /**
     * <p>The name of the Amazon Redshift event notification subscription to be
     * deleted.</p>
     */
    inline void SetSubscriptionName(const Aws::String& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = value; }

    /**
     * <p>The name of the Amazon Redshift event notification subscription to be
     * deleted.</p>
     */
    inline void SetSubscriptionName(Aws::String&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = value; }

    /**
     * <p>The name of the Amazon Redshift event notification subscription to be
     * deleted.</p>
     */
    inline void SetSubscriptionName(const char* value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName.assign(value); }

    /**
     * <p>The name of the Amazon Redshift event notification subscription to be
     * deleted.</p>
     */
    inline DeleteEventSubscriptionRequest& WithSubscriptionName(const Aws::String& value) { SetSubscriptionName(value); return *this;}

    /**
     * <p>The name of the Amazon Redshift event notification subscription to be
     * deleted.</p>
     */
    inline DeleteEventSubscriptionRequest& WithSubscriptionName(Aws::String&& value) { SetSubscriptionName(value); return *this;}

    /**
     * <p>The name of the Amazon Redshift event notification subscription to be
     * deleted.</p>
     */
    inline DeleteEventSubscriptionRequest& WithSubscriptionName(const char* value) { SetSubscriptionName(value); return *this;}

  private:
    Aws::String m_subscriptionName;
    bool m_subscriptionNameHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
