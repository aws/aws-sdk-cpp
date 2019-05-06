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
  class AWS_CLOUDWATCHLOGS_API PutDestinationPolicyRequest : public CloudWatchLogsRequest
  {
  public:
    PutDestinationPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDestinationPolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * log events to the associated destination.</p>
     */
    inline const Aws::String& GetAccessPolicy() const{ return m_accessPolicy; }

    /**
     * <p>An IAM policy document that authorizes cross-account users to deliver their
     * log events to the associated destination.</p>
     */
    inline bool AccessPolicyHasBeenSet() const { return m_accessPolicyHasBeenSet; }

    /**
     * <p>An IAM policy document that authorizes cross-account users to deliver their
     * log events to the associated destination.</p>
     */
    inline void SetAccessPolicy(const Aws::String& value) { m_accessPolicyHasBeenSet = true; m_accessPolicy = value; }

    /**
     * <p>An IAM policy document that authorizes cross-account users to deliver their
     * log events to the associated destination.</p>
     */
    inline void SetAccessPolicy(Aws::String&& value) { m_accessPolicyHasBeenSet = true; m_accessPolicy = std::move(value); }

    /**
     * <p>An IAM policy document that authorizes cross-account users to deliver their
     * log events to the associated destination.</p>
     */
    inline void SetAccessPolicy(const char* value) { m_accessPolicyHasBeenSet = true; m_accessPolicy.assign(value); }

    /**
     * <p>An IAM policy document that authorizes cross-account users to deliver their
     * log events to the associated destination.</p>
     */
    inline PutDestinationPolicyRequest& WithAccessPolicy(const Aws::String& value) { SetAccessPolicy(value); return *this;}

    /**
     * <p>An IAM policy document that authorizes cross-account users to deliver their
     * log events to the associated destination.</p>
     */
    inline PutDestinationPolicyRequest& WithAccessPolicy(Aws::String&& value) { SetAccessPolicy(std::move(value)); return *this;}

    /**
     * <p>An IAM policy document that authorizes cross-account users to deliver their
     * log events to the associated destination.</p>
     */
    inline PutDestinationPolicyRequest& WithAccessPolicy(const char* value) { SetAccessPolicy(value); return *this;}

  private:

    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet;

    Aws::String m_accessPolicy;
    bool m_accessPolicyHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
