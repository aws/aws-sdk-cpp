/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class DeleteImageVersionRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteImageVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteImageVersion"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the image to delete.</p>
     */
    inline const Aws::String& GetImageName() const{ return m_imageName; }

    /**
     * <p>The name of the image to delete.</p>
     */
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }

    /**
     * <p>The name of the image to delete.</p>
     */
    inline void SetImageName(const Aws::String& value) { m_imageNameHasBeenSet = true; m_imageName = value; }

    /**
     * <p>The name of the image to delete.</p>
     */
    inline void SetImageName(Aws::String&& value) { m_imageNameHasBeenSet = true; m_imageName = std::move(value); }

    /**
     * <p>The name of the image to delete.</p>
     */
    inline void SetImageName(const char* value) { m_imageNameHasBeenSet = true; m_imageName.assign(value); }

    /**
     * <p>The name of the image to delete.</p>
     */
    inline DeleteImageVersionRequest& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}

    /**
     * <p>The name of the image to delete.</p>
     */
    inline DeleteImageVersionRequest& WithImageName(Aws::String&& value) { SetImageName(std::move(value)); return *this;}

    /**
     * <p>The name of the image to delete.</p>
     */
    inline DeleteImageVersionRequest& WithImageName(const char* value) { SetImageName(value); return *this;}


    /**
     * <p>The version to delete.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The version to delete.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version to delete.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version to delete.</p>
     */
    inline DeleteImageVersionRequest& WithVersion(int value) { SetVersion(value); return *this;}


    /**
     * <p>The alias of the image to delete.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The alias of the image to delete.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>The alias of the image to delete.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>The alias of the image to delete.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>The alias of the image to delete.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>The alias of the image to delete.</p>
     */
    inline DeleteImageVersionRequest& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The alias of the image to delete.</p>
     */
    inline DeleteImageVersionRequest& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The alias of the image to delete.</p>
     */
    inline DeleteImageVersionRequest& WithAlias(const char* value) { SetAlias(value); return *this;}

  private:

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet = false;

    int m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
