/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>The image configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/ImageConfigurationInput">AWS
   * API Reference</a></p>
   */
  class ImageConfigurationInput
  {
  public:
    AWS_EMRSERVERLESS_API ImageConfigurationInput();
    AWS_EMRSERVERLESS_API ImageConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API ImageConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URI of an image in the Amazon ECR registry. This field is required when
     * you create a new application. If you leave this field blank in an update, Amazon
     * EMR will remove the image configuration.</p>
     */
    inline const Aws::String& GetImageUri() const{ return m_imageUri; }

    /**
     * <p>The URI of an image in the Amazon ECR registry. This field is required when
     * you create a new application. If you leave this field blank in an update, Amazon
     * EMR will remove the image configuration.</p>
     */
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }

    /**
     * <p>The URI of an image in the Amazon ECR registry. This field is required when
     * you create a new application. If you leave this field blank in an update, Amazon
     * EMR will remove the image configuration.</p>
     */
    inline void SetImageUri(const Aws::String& value) { m_imageUriHasBeenSet = true; m_imageUri = value; }

    /**
     * <p>The URI of an image in the Amazon ECR registry. This field is required when
     * you create a new application. If you leave this field blank in an update, Amazon
     * EMR will remove the image configuration.</p>
     */
    inline void SetImageUri(Aws::String&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::move(value); }

    /**
     * <p>The URI of an image in the Amazon ECR registry. This field is required when
     * you create a new application. If you leave this field blank in an update, Amazon
     * EMR will remove the image configuration.</p>
     */
    inline void SetImageUri(const char* value) { m_imageUriHasBeenSet = true; m_imageUri.assign(value); }

    /**
     * <p>The URI of an image in the Amazon ECR registry. This field is required when
     * you create a new application. If you leave this field blank in an update, Amazon
     * EMR will remove the image configuration.</p>
     */
    inline ImageConfigurationInput& WithImageUri(const Aws::String& value) { SetImageUri(value); return *this;}

    /**
     * <p>The URI of an image in the Amazon ECR registry. This field is required when
     * you create a new application. If you leave this field blank in an update, Amazon
     * EMR will remove the image configuration.</p>
     */
    inline ImageConfigurationInput& WithImageUri(Aws::String&& value) { SetImageUri(std::move(value)); return *this;}

    /**
     * <p>The URI of an image in the Amazon ECR registry. This field is required when
     * you create a new application. If you leave this field blank in an update, Amazon
     * EMR will remove the image configuration.</p>
     */
    inline ImageConfigurationInput& WithImageUri(const char* value) { SetImageUri(value); return *this;}

  private:

    Aws::String m_imageUri;
    bool m_imageUriHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
