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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Container details related to a finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ContainerDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API ContainerDetails
  {
  public:
    ContainerDetails();
    ContainerDetails(Aws::Utils::Json::JsonView jsonValue);
    ContainerDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the container related to a finding.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the container related to a finding.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the container related to a finding.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the container related to a finding.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the container related to a finding.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the container related to a finding.</p>
     */
    inline ContainerDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the container related to a finding.</p>
     */
    inline ContainerDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the container related to a finding.</p>
     */
    inline ContainerDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of the image related to a finding.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The identifier of the image related to a finding.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The identifier of the image related to a finding.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The identifier of the image related to a finding.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The identifier of the image related to a finding.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The identifier of the image related to a finding.</p>
     */
    inline ContainerDetails& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The identifier of the image related to a finding.</p>
     */
    inline ContainerDetails& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the image related to a finding.</p>
     */
    inline ContainerDetails& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The name of the image related to a finding.</p>
     */
    inline const Aws::String& GetImageName() const{ return m_imageName; }

    /**
     * <p>The name of the image related to a finding.</p>
     */
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }

    /**
     * <p>The name of the image related to a finding.</p>
     */
    inline void SetImageName(const Aws::String& value) { m_imageNameHasBeenSet = true; m_imageName = value; }

    /**
     * <p>The name of the image related to a finding.</p>
     */
    inline void SetImageName(Aws::String&& value) { m_imageNameHasBeenSet = true; m_imageName = std::move(value); }

    /**
     * <p>The name of the image related to a finding.</p>
     */
    inline void SetImageName(const char* value) { m_imageNameHasBeenSet = true; m_imageName.assign(value); }

    /**
     * <p>The name of the image related to a finding.</p>
     */
    inline ContainerDetails& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}

    /**
     * <p>The name of the image related to a finding.</p>
     */
    inline ContainerDetails& WithImageName(Aws::String&& value) { SetImageName(std::move(value)); return *this;}

    /**
     * <p>The name of the image related to a finding.</p>
     */
    inline ContainerDetails& WithImageName(const char* value) { SetImageName(value); return *this;}


    /**
     * <p>The date and time when the container started.</p>
     */
    inline const Aws::String& GetLaunchedAt() const{ return m_launchedAt; }

    /**
     * <p>The date and time when the container started.</p>
     */
    inline bool LaunchedAtHasBeenSet() const { return m_launchedAtHasBeenSet; }

    /**
     * <p>The date and time when the container started.</p>
     */
    inline void SetLaunchedAt(const Aws::String& value) { m_launchedAtHasBeenSet = true; m_launchedAt = value; }

    /**
     * <p>The date and time when the container started.</p>
     */
    inline void SetLaunchedAt(Aws::String&& value) { m_launchedAtHasBeenSet = true; m_launchedAt = std::move(value); }

    /**
     * <p>The date and time when the container started.</p>
     */
    inline void SetLaunchedAt(const char* value) { m_launchedAtHasBeenSet = true; m_launchedAt.assign(value); }

    /**
     * <p>The date and time when the container started.</p>
     */
    inline ContainerDetails& WithLaunchedAt(const Aws::String& value) { SetLaunchedAt(value); return *this;}

    /**
     * <p>The date and time when the container started.</p>
     */
    inline ContainerDetails& WithLaunchedAt(Aws::String&& value) { SetLaunchedAt(std::move(value)); return *this;}

    /**
     * <p>The date and time when the container started.</p>
     */
    inline ContainerDetails& WithLaunchedAt(const char* value) { SetLaunchedAt(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet;

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet;

    Aws::String m_launchedAt;
    bool m_launchedAtHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
