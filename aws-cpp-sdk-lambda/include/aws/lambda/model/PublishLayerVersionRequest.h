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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/LayerVersionContentInput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/Runtime.h>
#include <utility>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   */
  class AWS_LAMBDA_API PublishLayerVersionRequest : public LambdaRequest
  {
  public:
    PublishLayerVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PublishLayerVersion"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline const Aws::String& GetLayerName() const{ return m_layerName; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline bool LayerNameHasBeenSet() const { return m_layerNameHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline void SetLayerName(const Aws::String& value) { m_layerNameHasBeenSet = true; m_layerName = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline void SetLayerName(Aws::String&& value) { m_layerNameHasBeenSet = true; m_layerName = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline void SetLayerName(const char* value) { m_layerNameHasBeenSet = true; m_layerName.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline PublishLayerVersionRequest& WithLayerName(const Aws::String& value) { SetLayerName(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline PublishLayerVersionRequest& WithLayerName(Aws::String&& value) { SetLayerName(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline PublishLayerVersionRequest& WithLayerName(const char* value) { SetLayerName(value); return *this;}


    /**
     * <p>The description of the version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the version.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the version.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the version.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the version.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the version.</p>
     */
    inline PublishLayerVersionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the version.</p>
     */
    inline PublishLayerVersionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the version.</p>
     */
    inline PublishLayerVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The function layer archive.</p>
     */
    inline const LayerVersionContentInput& GetContent() const{ return m_content; }

    /**
     * <p>The function layer archive.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The function layer archive.</p>
     */
    inline void SetContent(const LayerVersionContentInput& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The function layer archive.</p>
     */
    inline void SetContent(LayerVersionContentInput&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The function layer archive.</p>
     */
    inline PublishLayerVersionRequest& WithContent(const LayerVersionContentInput& value) { SetContent(value); return *this;}

    /**
     * <p>The function layer archive.</p>
     */
    inline PublishLayerVersionRequest& WithContent(LayerVersionContentInput&& value) { SetContent(std::move(value)); return *this;}


    /**
     * <p>A list of compatible <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">function
     * runtimes</a>. Used for filtering with <a>ListLayers</a> and
     * <a>ListLayerVersions</a>.</p>
     */
    inline const Aws::Vector<Runtime>& GetCompatibleRuntimes() const{ return m_compatibleRuntimes; }

    /**
     * <p>A list of compatible <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">function
     * runtimes</a>. Used for filtering with <a>ListLayers</a> and
     * <a>ListLayerVersions</a>.</p>
     */
    inline bool CompatibleRuntimesHasBeenSet() const { return m_compatibleRuntimesHasBeenSet; }

    /**
     * <p>A list of compatible <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">function
     * runtimes</a>. Used for filtering with <a>ListLayers</a> and
     * <a>ListLayerVersions</a>.</p>
     */
    inline void SetCompatibleRuntimes(const Aws::Vector<Runtime>& value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes = value; }

    /**
     * <p>A list of compatible <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">function
     * runtimes</a>. Used for filtering with <a>ListLayers</a> and
     * <a>ListLayerVersions</a>.</p>
     */
    inline void SetCompatibleRuntimes(Aws::Vector<Runtime>&& value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes = std::move(value); }

    /**
     * <p>A list of compatible <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">function
     * runtimes</a>. Used for filtering with <a>ListLayers</a> and
     * <a>ListLayerVersions</a>.</p>
     */
    inline PublishLayerVersionRequest& WithCompatibleRuntimes(const Aws::Vector<Runtime>& value) { SetCompatibleRuntimes(value); return *this;}

    /**
     * <p>A list of compatible <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">function
     * runtimes</a>. Used for filtering with <a>ListLayers</a> and
     * <a>ListLayerVersions</a>.</p>
     */
    inline PublishLayerVersionRequest& WithCompatibleRuntimes(Aws::Vector<Runtime>&& value) { SetCompatibleRuntimes(std::move(value)); return *this;}

    /**
     * <p>A list of compatible <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">function
     * runtimes</a>. Used for filtering with <a>ListLayers</a> and
     * <a>ListLayerVersions</a>.</p>
     */
    inline PublishLayerVersionRequest& AddCompatibleRuntimes(const Runtime& value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes.push_back(value); return *this; }

    /**
     * <p>A list of compatible <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">function
     * runtimes</a>. Used for filtering with <a>ListLayers</a> and
     * <a>ListLayerVersions</a>.</p>
     */
    inline PublishLayerVersionRequest& AddCompatibleRuntimes(Runtime&& value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes.push_back(std::move(value)); return *this; }


    /**
     * <p>The layer's software license. It can be any of the following:</p> <ul> <li>
     * <p>An <a href="https://spdx.org/licenses/">SPDX license identifier</a>. For
     * example, <code>MIT</code>.</p> </li> <li> <p>The URL of a license hosted on the
     * internet. For example, <code>https://opensource.org/licenses/MIT</code>.</p>
     * </li> <li> <p>The full text of the license.</p> </li> </ul>
     */
    inline const Aws::String& GetLicenseInfo() const{ return m_licenseInfo; }

    /**
     * <p>The layer's software license. It can be any of the following:</p> <ul> <li>
     * <p>An <a href="https://spdx.org/licenses/">SPDX license identifier</a>. For
     * example, <code>MIT</code>.</p> </li> <li> <p>The URL of a license hosted on the
     * internet. For example, <code>https://opensource.org/licenses/MIT</code>.</p>
     * </li> <li> <p>The full text of the license.</p> </li> </ul>
     */
    inline bool LicenseInfoHasBeenSet() const { return m_licenseInfoHasBeenSet; }

    /**
     * <p>The layer's software license. It can be any of the following:</p> <ul> <li>
     * <p>An <a href="https://spdx.org/licenses/">SPDX license identifier</a>. For
     * example, <code>MIT</code>.</p> </li> <li> <p>The URL of a license hosted on the
     * internet. For example, <code>https://opensource.org/licenses/MIT</code>.</p>
     * </li> <li> <p>The full text of the license.</p> </li> </ul>
     */
    inline void SetLicenseInfo(const Aws::String& value) { m_licenseInfoHasBeenSet = true; m_licenseInfo = value; }

    /**
     * <p>The layer's software license. It can be any of the following:</p> <ul> <li>
     * <p>An <a href="https://spdx.org/licenses/">SPDX license identifier</a>. For
     * example, <code>MIT</code>.</p> </li> <li> <p>The URL of a license hosted on the
     * internet. For example, <code>https://opensource.org/licenses/MIT</code>.</p>
     * </li> <li> <p>The full text of the license.</p> </li> </ul>
     */
    inline void SetLicenseInfo(Aws::String&& value) { m_licenseInfoHasBeenSet = true; m_licenseInfo = std::move(value); }

    /**
     * <p>The layer's software license. It can be any of the following:</p> <ul> <li>
     * <p>An <a href="https://spdx.org/licenses/">SPDX license identifier</a>. For
     * example, <code>MIT</code>.</p> </li> <li> <p>The URL of a license hosted on the
     * internet. For example, <code>https://opensource.org/licenses/MIT</code>.</p>
     * </li> <li> <p>The full text of the license.</p> </li> </ul>
     */
    inline void SetLicenseInfo(const char* value) { m_licenseInfoHasBeenSet = true; m_licenseInfo.assign(value); }

    /**
     * <p>The layer's software license. It can be any of the following:</p> <ul> <li>
     * <p>An <a href="https://spdx.org/licenses/">SPDX license identifier</a>. For
     * example, <code>MIT</code>.</p> </li> <li> <p>The URL of a license hosted on the
     * internet. For example, <code>https://opensource.org/licenses/MIT</code>.</p>
     * </li> <li> <p>The full text of the license.</p> </li> </ul>
     */
    inline PublishLayerVersionRequest& WithLicenseInfo(const Aws::String& value) { SetLicenseInfo(value); return *this;}

    /**
     * <p>The layer's software license. It can be any of the following:</p> <ul> <li>
     * <p>An <a href="https://spdx.org/licenses/">SPDX license identifier</a>. For
     * example, <code>MIT</code>.</p> </li> <li> <p>The URL of a license hosted on the
     * internet. For example, <code>https://opensource.org/licenses/MIT</code>.</p>
     * </li> <li> <p>The full text of the license.</p> </li> </ul>
     */
    inline PublishLayerVersionRequest& WithLicenseInfo(Aws::String&& value) { SetLicenseInfo(std::move(value)); return *this;}

    /**
     * <p>The layer's software license. It can be any of the following:</p> <ul> <li>
     * <p>An <a href="https://spdx.org/licenses/">SPDX license identifier</a>. For
     * example, <code>MIT</code>.</p> </li> <li> <p>The URL of a license hosted on the
     * internet. For example, <code>https://opensource.org/licenses/MIT</code>.</p>
     * </li> <li> <p>The full text of the license.</p> </li> </ul>
     */
    inline PublishLayerVersionRequest& WithLicenseInfo(const char* value) { SetLicenseInfo(value); return *this;}

  private:

    Aws::String m_layerName;
    bool m_layerNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    LayerVersionContentInput m_content;
    bool m_contentHasBeenSet;

    Aws::Vector<Runtime> m_compatibleRuntimes;
    bool m_compatibleRuntimesHasBeenSet;

    Aws::String m_licenseInfo;
    bool m_licenseInfoHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
