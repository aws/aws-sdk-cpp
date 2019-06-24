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
  class AWS_SECURITYHUB_API DisableImportFindingsForProductRequest : public SecurityHubRequest
  {
  public:
    DisableImportFindingsForProductRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableImportFindingsForProduct"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the integrated product to disable the integration for.</p>
     */
    inline const Aws::String& GetProductSubscriptionArn() const{ return m_productSubscriptionArn; }

    /**
     * <p>The ARN of the integrated product to disable the integration for.</p>
     */
    inline bool ProductSubscriptionArnHasBeenSet() const { return m_productSubscriptionArnHasBeenSet; }

    /**
     * <p>The ARN of the integrated product to disable the integration for.</p>
     */
    inline void SetProductSubscriptionArn(const Aws::String& value) { m_productSubscriptionArnHasBeenSet = true; m_productSubscriptionArn = value; }

    /**
     * <p>The ARN of the integrated product to disable the integration for.</p>
     */
    inline void SetProductSubscriptionArn(Aws::String&& value) { m_productSubscriptionArnHasBeenSet = true; m_productSubscriptionArn = std::move(value); }

    /**
     * <p>The ARN of the integrated product to disable the integration for.</p>
     */
    inline void SetProductSubscriptionArn(const char* value) { m_productSubscriptionArnHasBeenSet = true; m_productSubscriptionArn.assign(value); }

    /**
     * <p>The ARN of the integrated product to disable the integration for.</p>
     */
    inline DisableImportFindingsForProductRequest& WithProductSubscriptionArn(const Aws::String& value) { SetProductSubscriptionArn(value); return *this;}

    /**
     * <p>The ARN of the integrated product to disable the integration for.</p>
     */
    inline DisableImportFindingsForProductRequest& WithProductSubscriptionArn(Aws::String&& value) { SetProductSubscriptionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the integrated product to disable the integration for.</p>
     */
    inline DisableImportFindingsForProductRequest& WithProductSubscriptionArn(const char* value) { SetProductSubscriptionArn(value); return *this;}

  private:

    Aws::String m_productSubscriptionArn;
    bool m_productSubscriptionArnHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
