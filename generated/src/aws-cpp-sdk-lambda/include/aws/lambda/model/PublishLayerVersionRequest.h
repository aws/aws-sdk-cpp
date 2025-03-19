/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/LayerVersionContentInput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/Runtime.h>
#include <aws/lambda/model/Architecture.h>
#include <utility>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   */
  class PublishLayerVersionRequest : public LambdaRequest
  {
  public:
    AWS_LAMBDA_API PublishLayerVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PublishLayerVersion"; }

    AWS_LAMBDA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline const Aws::String& GetLayerName() const { return m_layerName; }
    inline bool LayerNameHasBeenSet() const { return m_layerNameHasBeenSet; }
    template<typename LayerNameT = Aws::String>
    void SetLayerName(LayerNameT&& value) { m_layerNameHasBeenSet = true; m_layerName = std::forward<LayerNameT>(value); }
    template<typename LayerNameT = Aws::String>
    PublishLayerVersionRequest& WithLayerName(LayerNameT&& value) { SetLayerName(std::forward<LayerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the version.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PublishLayerVersionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function layer archive.</p>
     */
    inline const LayerVersionContentInput& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = LayerVersionContentInput>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = LayerVersionContentInput>
    PublishLayerVersionRequest& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of compatible <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">function
     * runtimes</a>. Used for filtering with <a>ListLayers</a> and
     * <a>ListLayerVersions</a>.</p> <p>The following list includes deprecated
     * runtimes. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtime-support-policy">Runtime
     * deprecation policy</a>.</p>
     */
    inline const Aws::Vector<Runtime>& GetCompatibleRuntimes() const { return m_compatibleRuntimes; }
    inline bool CompatibleRuntimesHasBeenSet() const { return m_compatibleRuntimesHasBeenSet; }
    template<typename CompatibleRuntimesT = Aws::Vector<Runtime>>
    void SetCompatibleRuntimes(CompatibleRuntimesT&& value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes = std::forward<CompatibleRuntimesT>(value); }
    template<typename CompatibleRuntimesT = Aws::Vector<Runtime>>
    PublishLayerVersionRequest& WithCompatibleRuntimes(CompatibleRuntimesT&& value) { SetCompatibleRuntimes(std::forward<CompatibleRuntimesT>(value)); return *this;}
    inline PublishLayerVersionRequest& AddCompatibleRuntimes(Runtime value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The layer's software license. It can be any of the following:</p> <ul> <li>
     * <p>An <a href="https://spdx.org/licenses/">SPDX license identifier</a>. For
     * example, <code>MIT</code>.</p> </li> <li> <p>The URL of a license hosted on the
     * internet. For example, <code>https://opensource.org/licenses/MIT</code>.</p>
     * </li> <li> <p>The full text of the license.</p> </li> </ul>
     */
    inline const Aws::String& GetLicenseInfo() const { return m_licenseInfo; }
    inline bool LicenseInfoHasBeenSet() const { return m_licenseInfoHasBeenSet; }
    template<typename LicenseInfoT = Aws::String>
    void SetLicenseInfo(LicenseInfoT&& value) { m_licenseInfoHasBeenSet = true; m_licenseInfo = std::forward<LicenseInfoT>(value); }
    template<typename LicenseInfoT = Aws::String>
    PublishLayerVersionRequest& WithLicenseInfo(LicenseInfoT&& value) { SetLicenseInfo(std::forward<LicenseInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of compatible <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/foundation-arch.html">instruction
     * set architectures</a>.</p>
     */
    inline const Aws::Vector<Architecture>& GetCompatibleArchitectures() const { return m_compatibleArchitectures; }
    inline bool CompatibleArchitecturesHasBeenSet() const { return m_compatibleArchitecturesHasBeenSet; }
    template<typename CompatibleArchitecturesT = Aws::Vector<Architecture>>
    void SetCompatibleArchitectures(CompatibleArchitecturesT&& value) { m_compatibleArchitecturesHasBeenSet = true; m_compatibleArchitectures = std::forward<CompatibleArchitecturesT>(value); }
    template<typename CompatibleArchitecturesT = Aws::Vector<Architecture>>
    PublishLayerVersionRequest& WithCompatibleArchitectures(CompatibleArchitecturesT&& value) { SetCompatibleArchitectures(std::forward<CompatibleArchitecturesT>(value)); return *this;}
    inline PublishLayerVersionRequest& AddCompatibleArchitectures(Architecture value) { m_compatibleArchitecturesHasBeenSet = true; m_compatibleArchitectures.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_layerName;
    bool m_layerNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    LayerVersionContentInput m_content;
    bool m_contentHasBeenSet = false;

    Aws::Vector<Runtime> m_compatibleRuntimes;
    bool m_compatibleRuntimesHasBeenSet = false;

    Aws::String m_licenseInfo;
    bool m_licenseInfoHasBeenSet = false;

    Aws::Vector<Architecture> m_compatibleArchitectures;
    bool m_compatibleArchitecturesHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
