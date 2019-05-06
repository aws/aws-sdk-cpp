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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for GetSubscriptionAttributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetSubscriptionAttributesInput">AWS
   * API Reference</a></p>
   */
  class AWS_SNS_API GetSubscriptionAttributesRequest : public SNSRequest
  {
  public:
    GetSubscriptionAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSubscriptionAttributes"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ARN of the subscription whose properties you want to get.</p>
     */
    inline const Aws::String& GetSubscriptionArn() const{ return m_subscriptionArn; }

    /**
     * <p>The ARN of the subscription whose properties you want to get.</p>
     */
    inline bool SubscriptionArnHasBeenSet() const { return m_subscriptionArnHasBeenSet; }

    /**
     * <p>The ARN of the subscription whose properties you want to get.</p>
     */
    inline void SetSubscriptionArn(const Aws::String& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = value; }

    /**
     * <p>The ARN of the subscription whose properties you want to get.</p>
     */
    inline void SetSubscriptionArn(Aws::String&& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = std::move(value); }

    /**
     * <p>The ARN of the subscription whose properties you want to get.</p>
     */
    inline void SetSubscriptionArn(const char* value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn.assign(value); }

    /**
     * <p>The ARN of the subscription whose properties you want to get.</p>
     */
    inline GetSubscriptionAttributesRequest& WithSubscriptionArn(const Aws::String& value) { SetSubscriptionArn(value); return *this;}

    /**
     * <p>The ARN of the subscription whose properties you want to get.</p>
     */
    inline GetSubscriptionAttributesRequest& WithSubscriptionArn(Aws::String&& value) { SetSubscriptionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the subscription whose properties you want to get.</p>
     */
    inline GetSubscriptionAttributesRequest& WithSubscriptionArn(const char* value) { SetSubscriptionArn(value); return *this;}

  private:

    Aws::String m_subscriptionArn;
    bool m_subscriptionArnHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
