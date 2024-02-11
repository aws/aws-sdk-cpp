/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class PutDestinationPolicyRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutDestinationPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDestinationPolicy"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for an existing destination.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }

    /**
     * <p>A name for an existing destination.</p>
     */
    inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }

    /**
     * <p>A name for an existing destination.</p>
     */
    inline void SetDestinationName(const Aws::String& value) { m_destinationNameHasBeenSet = true; m_destinationName = value; }

    /**
     * <p>A name for an existing destination.</p>
     */
    inline void SetDestinationName(Aws::String&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::move(value); }

    /**
     * <p>A name for an existing destination.</p>
     */
    inline void SetDestinationName(const char* value) { m_destinationNameHasBeenSet = true; m_destinationName.assign(value); }

    /**
     * <p>A name for an existing destination.</p>
     */
    inline PutDestinationPolicyRequest& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}

    /**
     * <p>A name for an existing destination.</p>
     */
    inline PutDestinationPolicyRequest& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}

    /**
     * <p>A name for an existing destination.</p>
     */
    inline PutDestinationPolicyRequest& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}


    /**
     * <p>An IAM policy document that authorizes cross-account users to deliver their
     * log events to the associated destination. This can be up to 5120 bytes.</p>
     */
    inline const Aws::String& GetAccessPolicy() const{ return m_accessPolicy; }

    /**
     * <p>An IAM policy document that authorizes cross-account users to deliver their
     * log events to the associated destination. This can be up to 5120 bytes.</p>
     */
    inline bool AccessPolicyHasBeenSet() const { return m_accessPolicyHasBeenSet; }

    /**
     * <p>An IAM policy document that authorizes cross-account users to deliver their
     * log events to the associated destination. This can be up to 5120 bytes.</p>
     */
    inline void SetAccessPolicy(const Aws::String& value) { m_accessPolicyHasBeenSet = true; m_accessPolicy = value; }

    /**
     * <p>An IAM policy document that authorizes cross-account users to deliver their
     * log events to the associated destination. This can be up to 5120 bytes.</p>
     */
    inline void SetAccessPolicy(Aws::String&& value) { m_accessPolicyHasBeenSet = true; m_accessPolicy = std::move(value); }

    /**
     * <p>An IAM policy document that authorizes cross-account users to deliver their
     * log events to the associated destination. This can be up to 5120 bytes.</p>
     */
    inline void SetAccessPolicy(const char* value) { m_accessPolicyHasBeenSet = true; m_accessPolicy.assign(value); }

    /**
     * <p>An IAM policy document that authorizes cross-account users to deliver their
     * log events to the associated destination. This can be up to 5120 bytes.</p>
     */
    inline PutDestinationPolicyRequest& WithAccessPolicy(const Aws::String& value) { SetAccessPolicy(value); return *this;}

    /**
     * <p>An IAM policy document that authorizes cross-account users to deliver their
     * log events to the associated destination. This can be up to 5120 bytes.</p>
     */
    inline PutDestinationPolicyRequest& WithAccessPolicy(Aws::String&& value) { SetAccessPolicy(std::move(value)); return *this;}

    /**
     * <p>An IAM policy document that authorizes cross-account users to deliver their
     * log events to the associated destination. This can be up to 5120 bytes.</p>
     */
    inline PutDestinationPolicyRequest& WithAccessPolicy(const char* value) { SetAccessPolicy(value); return *this;}


    /**
     * <p>Specify true if you are updating an existing destination policy to grant
     * permission to an organization ID instead of granting permission to individual
     * Amazon Web Services accounts. Before you update a destination policy this way,
     * you must first update the subscription filters in the accounts that send logs to
     * this destination. If you do not, the subscription filters might stop working. By
     * specifying <code>true</code> for <code>forceUpdate</code>, you are affirming
     * that you have already updated the subscription filters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Cross-Account-Log_Subscription-Update.html">
     * Updating an existing cross-account subscription</a> </p> <p>If you omit this
     * parameter, the default of <code>false</code> is used.</p>
     */
    inline bool GetForceUpdate() const{ return m_forceUpdate; }

    /**
     * <p>Specify true if you are updating an existing destination policy to grant
     * permission to an organization ID instead of granting permission to individual
     * Amazon Web Services accounts. Before you update a destination policy this way,
     * you must first update the subscription filters in the accounts that send logs to
     * this destination. If you do not, the subscription filters might stop working. By
     * specifying <code>true</code> for <code>forceUpdate</code>, you are affirming
     * that you have already updated the subscription filters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Cross-Account-Log_Subscription-Update.html">
     * Updating an existing cross-account subscription</a> </p> <p>If you omit this
     * parameter, the default of <code>false</code> is used.</p>
     */
    inline bool ForceUpdateHasBeenSet() const { return m_forceUpdateHasBeenSet; }

    /**
     * <p>Specify true if you are updating an existing destination policy to grant
     * permission to an organization ID instead of granting permission to individual
     * Amazon Web Services accounts. Before you update a destination policy this way,
     * you must first update the subscription filters in the accounts that send logs to
     * this destination. If you do not, the subscription filters might stop working. By
     * specifying <code>true</code> for <code>forceUpdate</code>, you are affirming
     * that you have already updated the subscription filters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Cross-Account-Log_Subscription-Update.html">
     * Updating an existing cross-account subscription</a> </p> <p>If you omit this
     * parameter, the default of <code>false</code> is used.</p>
     */
    inline void SetForceUpdate(bool value) { m_forceUpdateHasBeenSet = true; m_forceUpdate = value; }

    /**
     * <p>Specify true if you are updating an existing destination policy to grant
     * permission to an organization ID instead of granting permission to individual
     * Amazon Web Services accounts. Before you update a destination policy this way,
     * you must first update the subscription filters in the accounts that send logs to
     * this destination. If you do not, the subscription filters might stop working. By
     * specifying <code>true</code> for <code>forceUpdate</code>, you are affirming
     * that you have already updated the subscription filters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Cross-Account-Log_Subscription-Update.html">
     * Updating an existing cross-account subscription</a> </p> <p>If you omit this
     * parameter, the default of <code>false</code> is used.</p>
     */
    inline PutDestinationPolicyRequest& WithForceUpdate(bool value) { SetForceUpdate(value); return *this;}

  private:

    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet = false;

    Aws::String m_accessPolicy;
    bool m_accessPolicyHasBeenSet = false;

    bool m_forceUpdate;
    bool m_forceUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
