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
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class GetInsightResultsRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API GetInsightResultsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInsightResults"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the insight for which to return results.</p>
     */
    inline const Aws::String& GetInsightArn() const{ return m_insightArn; }

    /**
     * <p>The ARN of the insight for which to return results.</p>
     */
    inline bool InsightArnHasBeenSet() const { return m_insightArnHasBeenSet; }

    /**
     * <p>The ARN of the insight for which to return results.</p>
     */
    inline void SetInsightArn(const Aws::String& value) { m_insightArnHasBeenSet = true; m_insightArn = value; }

    /**
     * <p>The ARN of the insight for which to return results.</p>
     */
    inline void SetInsightArn(Aws::String&& value) { m_insightArnHasBeenSet = true; m_insightArn = std::move(value); }

    /**
     * <p>The ARN of the insight for which to return results.</p>
     */
    inline void SetInsightArn(const char* value) { m_insightArnHasBeenSet = true; m_insightArn.assign(value); }

    /**
     * <p>The ARN of the insight for which to return results.</p>
     */
    inline GetInsightResultsRequest& WithInsightArn(const Aws::String& value) { SetInsightArn(value); return *this;}

    /**
     * <p>The ARN of the insight for which to return results.</p>
     */
    inline GetInsightResultsRequest& WithInsightArn(Aws::String&& value) { SetInsightArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the insight for which to return results.</p>
     */
    inline GetInsightResultsRequest& WithInsightArn(const char* value) { SetInsightArn(value); return *this;}

  private:

    Aws::String m_insightArn;
    bool m_insightArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
