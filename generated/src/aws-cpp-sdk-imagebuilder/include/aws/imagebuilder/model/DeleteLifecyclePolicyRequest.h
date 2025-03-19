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
  class DeleteLifecyclePolicyRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API DeleteLifecyclePolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteLifecyclePolicy"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

    AWS_IMAGEBUILDER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy resource to
     * delete.</p>
     */
    inline const Aws::String& GetLifecyclePolicyArn() const { return m_lifecyclePolicyArn; }
    inline bool LifecyclePolicyArnHasBeenSet() const { return m_lifecyclePolicyArnHasBeenSet; }
    template<typename LifecyclePolicyArnT = Aws::String>
    void SetLifecyclePolicyArn(LifecyclePolicyArnT&& value) { m_lifecyclePolicyArnHasBeenSet = true; m_lifecyclePolicyArn = std::forward<LifecyclePolicyArnT>(value); }
    template<typename LifecyclePolicyArnT = Aws::String>
    DeleteLifecyclePolicyRequest& WithLifecyclePolicyArn(LifecyclePolicyArnT&& value) { SetLifecyclePolicyArn(std::forward<LifecyclePolicyArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lifecyclePolicyArn;
    bool m_lifecyclePolicyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
