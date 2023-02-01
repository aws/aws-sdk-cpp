/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class DescribeResourcePolicyRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API DescribeResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeResourcePolicy"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the custom model version that has the
     * resource policy.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom model version that has the
     * resource policy.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom model version that has the
     * resource policy.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom model version that has the
     * resource policy.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom model version that has the
     * resource policy.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom model version that has the
     * resource policy.</p>
     */
    inline DescribeResourcePolicyRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom model version that has the
     * resource policy.</p>
     */
    inline DescribeResourcePolicyRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom model version that has the
     * resource policy.</p>
     */
    inline DescribeResourcePolicyRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
