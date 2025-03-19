/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/Runtime.h>
#include <aws/lambda/model/Architecture.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>Details about a version of an <a
   * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">Lambda
   * layer</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/LayerVersionsListItem">AWS
   * API Reference</a></p>
   */
  class LayerVersionsListItem
  {
  public:
    AWS_LAMBDA_API LayerVersionsListItem() = default;
    AWS_LAMBDA_API LayerVersionsListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API LayerVersionsListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the layer version.</p>
     */
    inline const Aws::String& GetLayerVersionArn() const { return m_layerVersionArn; }
    inline bool LayerVersionArnHasBeenSet() const { return m_layerVersionArnHasBeenSet; }
    template<typename LayerVersionArnT = Aws::String>
    void SetLayerVersionArn(LayerVersionArnT&& value) { m_layerVersionArnHasBeenSet = true; m_layerVersionArn = std::forward<LayerVersionArnT>(value); }
    template<typename LayerVersionArnT = Aws::String>
    LayerVersionsListItem& WithLayerVersionArn(LayerVersionArnT&& value) { SetLayerVersionArn(std::forward<LayerVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number.</p>
     */
    inline long long GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline LayerVersionsListItem& WithVersion(long long value) { SetVersion(value); return *this;}
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
    LayerVersionsListItem& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the version was created, in ISO 8601 format. For example,
     * <code>2018-11-27T15:10:45.123+0000</code>.</p>
     */
    inline const Aws::String& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::String>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::String>
    LayerVersionsListItem& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layer's compatible runtimes.</p> <p>The following list includes
     * deprecated runtimes. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtime-deprecation-levels">Runtime
     * use after deprecation</a>.</p> <p>For a list of all currently supported
     * runtimes, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtimes-supported">Supported
     * runtimes</a>.</p>
     */
    inline const Aws::Vector<Runtime>& GetCompatibleRuntimes() const { return m_compatibleRuntimes; }
    inline bool CompatibleRuntimesHasBeenSet() const { return m_compatibleRuntimesHasBeenSet; }
    template<typename CompatibleRuntimesT = Aws::Vector<Runtime>>
    void SetCompatibleRuntimes(CompatibleRuntimesT&& value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes = std::forward<CompatibleRuntimesT>(value); }
    template<typename CompatibleRuntimesT = Aws::Vector<Runtime>>
    LayerVersionsListItem& WithCompatibleRuntimes(CompatibleRuntimesT&& value) { SetCompatibleRuntimes(std::forward<CompatibleRuntimesT>(value)); return *this;}
    inline LayerVersionsListItem& AddCompatibleRuntimes(Runtime value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The layer's open-source license.</p>
     */
    inline const Aws::String& GetLicenseInfo() const { return m_licenseInfo; }
    inline bool LicenseInfoHasBeenSet() const { return m_licenseInfoHasBeenSet; }
    template<typename LicenseInfoT = Aws::String>
    void SetLicenseInfo(LicenseInfoT&& value) { m_licenseInfoHasBeenSet = true; m_licenseInfo = std::forward<LicenseInfoT>(value); }
    template<typename LicenseInfoT = Aws::String>
    LayerVersionsListItem& WithLicenseInfo(LicenseInfoT&& value) { SetLicenseInfo(std::forward<LicenseInfoT>(value)); return *this;}
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
    LayerVersionsListItem& WithCompatibleArchitectures(CompatibleArchitecturesT&& value) { SetCompatibleArchitectures(std::forward<CompatibleArchitecturesT>(value)); return *this;}
    inline LayerVersionsListItem& AddCompatibleArchitectures(Architecture value) { m_compatibleArchitecturesHasBeenSet = true; m_compatibleArchitectures.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_layerVersionArn;
    bool m_layerVersionArnHasBeenSet = false;

    long long m_version{0};
    bool m_versionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_createdDate;
    bool m_createdDateHasBeenSet = false;

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
