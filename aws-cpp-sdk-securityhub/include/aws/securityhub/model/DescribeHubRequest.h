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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class AWS_SECURITYHUB_API DescribeHubRequest : public SecurityHubRequest
  {
  public:
    DescribeHubRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeHub"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the Hub resource to retrieve.</p>
     */
    inline const Aws::String& GetHubArn() const{ return m_hubArn; }

    /**
     * <p>The ARN of the Hub resource to retrieve.</p>
     */
    inline bool HubArnHasBeenSet() const { return m_hubArnHasBeenSet; }

    /**
     * <p>The ARN of the Hub resource to retrieve.</p>
     */
    inline void SetHubArn(const Aws::String& value) { m_hubArnHasBeenSet = true; m_hubArn = value; }

    /**
     * <p>The ARN of the Hub resource to retrieve.</p>
     */
    inline void SetHubArn(Aws::String&& value) { m_hubArnHasBeenSet = true; m_hubArn = std::move(value); }

    /**
     * <p>The ARN of the Hub resource to retrieve.</p>
     */
    inline void SetHubArn(const char* value) { m_hubArnHasBeenSet = true; m_hubArn.assign(value); }

    /**
     * <p>The ARN of the Hub resource to retrieve.</p>
     */
    inline DescribeHubRequest& WithHubArn(const Aws::String& value) { SetHubArn(value); return *this;}

    /**
     * <p>The ARN of the Hub resource to retrieve.</p>
     */
    inline DescribeHubRequest& WithHubArn(Aws::String&& value) { SetHubArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Hub resource to retrieve.</p>
     */
    inline DescribeHubRequest& WithHubArn(const char* value) { SetHubArn(value); return *this;}

  private:

    Aws::String m_hubArn;
    bool m_hubArnHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
