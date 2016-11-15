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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_RDS_API RemoveSourceIdentifierFromSubscriptionRequest : public RDSRequest
  {
  public:
    RemoveSourceIdentifierFromSubscriptionRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the RDS event notification subscription you want to remove a
     * source identifier from.</p>
     */
    inline const Aws::String& GetSubscriptionName() const{ return m_subscriptionName; }

    /**
     * <p>The name of the RDS event notification subscription you want to remove a
     * source identifier from.</p>
     */
    inline void SetSubscriptionName(const Aws::String& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = value; }

    /**
     * <p>The name of the RDS event notification subscription you want to remove a
     * source identifier from.</p>
     */
    inline void SetSubscriptionName(Aws::String&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = value; }

    /**
     * <p>The name of the RDS event notification subscription you want to remove a
     * source identifier from.</p>
     */
    inline void SetSubscriptionName(const char* value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName.assign(value); }

    /**
     * <p>The name of the RDS event notification subscription you want to remove a
     * source identifier from.</p>
     */
    inline RemoveSourceIdentifierFromSubscriptionRequest& WithSubscriptionName(const Aws::String& value) { SetSubscriptionName(value); return *this;}

    /**
     * <p>The name of the RDS event notification subscription you want to remove a
     * source identifier from.</p>
     */
    inline RemoveSourceIdentifierFromSubscriptionRequest& WithSubscriptionName(Aws::String&& value) { SetSubscriptionName(value); return *this;}

    /**
     * <p>The name of the RDS event notification subscription you want to remove a
     * source identifier from.</p>
     */
    inline RemoveSourceIdentifierFromSubscriptionRequest& WithSubscriptionName(const char* value) { SetSubscriptionName(value); return *this;}

    /**
     * <p> The source identifier to be removed from the subscription, such as the <b>DB
     * instance identifier</b> for a DB instance or the name of a security group. </p>
     */
    inline const Aws::String& GetSourceIdentifier() const{ return m_sourceIdentifier; }

    /**
     * <p> The source identifier to be removed from the subscription, such as the <b>DB
     * instance identifier</b> for a DB instance or the name of a security group. </p>
     */
    inline void SetSourceIdentifier(const Aws::String& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = value; }

    /**
     * <p> The source identifier to be removed from the subscription, such as the <b>DB
     * instance identifier</b> for a DB instance or the name of a security group. </p>
     */
    inline void SetSourceIdentifier(Aws::String&& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = value; }

    /**
     * <p> The source identifier to be removed from the subscription, such as the <b>DB
     * instance identifier</b> for a DB instance or the name of a security group. </p>
     */
    inline void SetSourceIdentifier(const char* value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier.assign(value); }

    /**
     * <p> The source identifier to be removed from the subscription, such as the <b>DB
     * instance identifier</b> for a DB instance or the name of a security group. </p>
     */
    inline RemoveSourceIdentifierFromSubscriptionRequest& WithSourceIdentifier(const Aws::String& value) { SetSourceIdentifier(value); return *this;}

    /**
     * <p> The source identifier to be removed from the subscription, such as the <b>DB
     * instance identifier</b> for a DB instance or the name of a security group. </p>
     */
    inline RemoveSourceIdentifierFromSubscriptionRequest& WithSourceIdentifier(Aws::String&& value) { SetSourceIdentifier(value); return *this;}

    /**
     * <p> The source identifier to be removed from the subscription, such as the <b>DB
     * instance identifier</b> for a DB instance or the name of a security group. </p>
     */
    inline RemoveSourceIdentifierFromSubscriptionRequest& WithSourceIdentifier(const char* value) { SetSourceIdentifier(value); return *this;}

  private:
    Aws::String m_subscriptionName;
    bool m_subscriptionNameHasBeenSet;
    Aws::String m_sourceIdentifier;
    bool m_sourceIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
