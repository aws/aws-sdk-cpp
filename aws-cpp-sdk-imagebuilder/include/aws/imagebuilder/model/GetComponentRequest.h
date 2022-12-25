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
  class GetComponentRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API GetComponentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetComponent"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

    AWS_IMAGEBUILDER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the component that you want to retrieve.
     * Regex requires "/\d+$" suffix.</p>
     */
    inline const Aws::String& GetComponentBuildVersionArn() const{ return m_componentBuildVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component that you want to retrieve.
     * Regex requires "/\d+$" suffix.</p>
     */
    inline bool ComponentBuildVersionArnHasBeenSet() const { return m_componentBuildVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component that you want to retrieve.
     * Regex requires "/\d+$" suffix.</p>
     */
    inline void SetComponentBuildVersionArn(const Aws::String& value) { m_componentBuildVersionArnHasBeenSet = true; m_componentBuildVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component that you want to retrieve.
     * Regex requires "/\d+$" suffix.</p>
     */
    inline void SetComponentBuildVersionArn(Aws::String&& value) { m_componentBuildVersionArnHasBeenSet = true; m_componentBuildVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the component that you want to retrieve.
     * Regex requires "/\d+$" suffix.</p>
     */
    inline void SetComponentBuildVersionArn(const char* value) { m_componentBuildVersionArnHasBeenSet = true; m_componentBuildVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the component that you want to retrieve.
     * Regex requires "/\d+$" suffix.</p>
     */
    inline GetComponentRequest& WithComponentBuildVersionArn(const Aws::String& value) { SetComponentBuildVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the component that you want to retrieve.
     * Regex requires "/\d+$" suffix.</p>
     */
    inline GetComponentRequest& WithComponentBuildVersionArn(Aws::String&& value) { SetComponentBuildVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the component that you want to retrieve.
     * Regex requires "/\d+$" suffix.</p>
     */
    inline GetComponentRequest& WithComponentBuildVersionArn(const char* value) { SetComponentBuildVersionArn(value); return *this;}

  private:

    Aws::String m_componentBuildVersionArn;
    bool m_componentBuildVersionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
