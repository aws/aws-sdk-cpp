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
  class GetComponentPolicyRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API GetComponentPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetComponentPolicy"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

    AWS_IMAGEBUILDER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the component whose policy you want to
     * retrieve.</p>
     */
    inline const Aws::String& GetComponentArn() const{ return m_componentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component whose policy you want to
     * retrieve.</p>
     */
    inline bool ComponentArnHasBeenSet() const { return m_componentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component whose policy you want to
     * retrieve.</p>
     */
    inline void SetComponentArn(const Aws::String& value) { m_componentArnHasBeenSet = true; m_componentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component whose policy you want to
     * retrieve.</p>
     */
    inline void SetComponentArn(Aws::String&& value) { m_componentArnHasBeenSet = true; m_componentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the component whose policy you want to
     * retrieve.</p>
     */
    inline void SetComponentArn(const char* value) { m_componentArnHasBeenSet = true; m_componentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the component whose policy you want to
     * retrieve.</p>
     */
    inline GetComponentPolicyRequest& WithComponentArn(const Aws::String& value) { SetComponentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the component whose policy you want to
     * retrieve.</p>
     */
    inline GetComponentPolicyRequest& WithComponentArn(Aws::String&& value) { SetComponentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the component whose policy you want to
     * retrieve.</p>
     */
    inline GetComponentPolicyRequest& WithComponentArn(const char* value) { SetComponentArn(value); return *this;}

  private:

    Aws::String m_componentArn;
    bool m_componentArnHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
