/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class DescribeHubRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API DescribeHubRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeHub"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

    AWS_SECURITYHUB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    bool m_hubArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
