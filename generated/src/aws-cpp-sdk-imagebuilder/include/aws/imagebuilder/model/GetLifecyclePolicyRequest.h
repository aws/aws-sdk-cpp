/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class GetLifecyclePolicyRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API GetLifecyclePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLifecyclePolicy"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

    AWS_IMAGEBUILDER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the image lifecycle policy
     * resource to get.</p>
     */
    inline const Aws::String& GetLifecyclePolicyArn() const{ return m_lifecyclePolicyArn; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the image lifecycle policy
     * resource to get.</p>
     */
    inline bool LifecyclePolicyArnHasBeenSet() const { return m_lifecyclePolicyArnHasBeenSet; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the image lifecycle policy
     * resource to get.</p>
     */
    inline void SetLifecyclePolicyArn(const Aws::String& value) { m_lifecyclePolicyArnHasBeenSet = true; m_lifecyclePolicyArn = value; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the image lifecycle policy
     * resource to get.</p>
     */
    inline void SetLifecyclePolicyArn(Aws::String&& value) { m_lifecyclePolicyArnHasBeenSet = true; m_lifecyclePolicyArn = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the image lifecycle policy
     * resource to get.</p>
     */
    inline void SetLifecyclePolicyArn(const char* value) { m_lifecyclePolicyArnHasBeenSet = true; m_lifecyclePolicyArn.assign(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the image lifecycle policy
     * resource to get.</p>
     */
    inline GetLifecyclePolicyRequest& WithLifecyclePolicyArn(const Aws::String& value) { SetLifecyclePolicyArn(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the image lifecycle policy
     * resource to get.</p>
     */
    inline GetLifecyclePolicyRequest& WithLifecyclePolicyArn(Aws::String&& value) { SetLifecyclePolicyArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the image lifecycle policy
     * resource to get.</p>
     */
    inline GetLifecyclePolicyRequest& WithLifecyclePolicyArn(const char* value) { SetLifecyclePolicyArn(value); return *this;}

  private:

    Aws::String m_lifecyclePolicyArn;
    bool m_lifecyclePolicyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
