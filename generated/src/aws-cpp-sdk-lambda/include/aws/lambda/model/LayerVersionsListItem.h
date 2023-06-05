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
    AWS_LAMBDA_API LayerVersionsListItem();
    AWS_LAMBDA_API LayerVersionsListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API LayerVersionsListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the layer version.</p>
     */
    inline const Aws::String& GetLayerVersionArn() const{ return m_layerVersionArn; }

    /**
     * <p>The ARN of the layer version.</p>
     */
    inline bool LayerVersionArnHasBeenSet() const { return m_layerVersionArnHasBeenSet; }

    /**
     * <p>The ARN of the layer version.</p>
     */
    inline void SetLayerVersionArn(const Aws::String& value) { m_layerVersionArnHasBeenSet = true; m_layerVersionArn = value; }

    /**
     * <p>The ARN of the layer version.</p>
     */
    inline void SetLayerVersionArn(Aws::String&& value) { m_layerVersionArnHasBeenSet = true; m_layerVersionArn = std::move(value); }

    /**
     * <p>The ARN of the layer version.</p>
     */
    inline void SetLayerVersionArn(const char* value) { m_layerVersionArnHasBeenSet = true; m_layerVersionArn.assign(value); }

    /**
     * <p>The ARN of the layer version.</p>
     */
    inline LayerVersionsListItem& WithLayerVersionArn(const Aws::String& value) { SetLayerVersionArn(value); return *this;}

    /**
     * <p>The ARN of the layer version.</p>
     */
    inline LayerVersionsListItem& WithLayerVersionArn(Aws::String&& value) { SetLayerVersionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the layer version.</p>
     */
    inline LayerVersionsListItem& WithLayerVersionArn(const char* value) { SetLayerVersionArn(value); return *this;}


    /**
     * <p>The version number.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The version number.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version number.</p>
     */
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number.</p>
     */
    inline LayerVersionsListItem& WithVersion(long long value) { SetVersion(value); return *this;}


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
    inline LayerVersionsListItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the version.</p>
     */
    inline LayerVersionsListItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the version.</p>
     */
    inline LayerVersionsListItem& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date that the version was created, in ISO 8601 format. For example,
     * <code>2018-11-27T15:10:45.123+0000</code>.</p>
     */
    inline const Aws::String& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date that the version was created, in ISO 8601 format. For example,
     * <code>2018-11-27T15:10:45.123+0000</code>.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The date that the version was created, in ISO 8601 format. For example,
     * <code>2018-11-27T15:10:45.123+0000</code>.</p>
     */
    inline void SetCreatedDate(const Aws::String& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date that the version was created, in ISO 8601 format. For example,
     * <code>2018-11-27T15:10:45.123+0000</code>.</p>
     */
    inline void SetCreatedDate(Aws::String&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The date that the version was created, in ISO 8601 format. For example,
     * <code>2018-11-27T15:10:45.123+0000</code>.</p>
     */
    inline void SetCreatedDate(const char* value) { m_createdDateHasBeenSet = true; m_createdDate.assign(value); }

    /**
     * <p>The date that the version was created, in ISO 8601 format. For example,
     * <code>2018-11-27T15:10:45.123+0000</code>.</p>
     */
    inline LayerVersionsListItem& WithCreatedDate(const Aws::String& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date that the version was created, in ISO 8601 format. For example,
     * <code>2018-11-27T15:10:45.123+0000</code>.</p>
     */
    inline LayerVersionsListItem& WithCreatedDate(Aws::String&& value) { SetCreatedDate(std::move(value)); return *this;}

    /**
     * <p>The date that the version was created, in ISO 8601 format. For example,
     * <code>2018-11-27T15:10:45.123+0000</code>.</p>
     */
    inline LayerVersionsListItem& WithCreatedDate(const char* value) { SetCreatedDate(value); return *this;}


    /**
     * <p>The layer's compatible runtimes.</p> <p>The following list includes
     * deprecated runtimes. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtime-support-policy">Runtime
     * deprecation policy</a>.</p>
     */
    inline const Aws::Vector<Runtime>& GetCompatibleRuntimes() const{ return m_compatibleRuntimes; }

    /**
     * <p>The layer's compatible runtimes.</p> <p>The following list includes
     * deprecated runtimes. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtime-support-policy">Runtime
     * deprecation policy</a>.</p>
     */
    inline bool CompatibleRuntimesHasBeenSet() const { return m_compatibleRuntimesHasBeenSet; }

    /**
     * <p>The layer's compatible runtimes.</p> <p>The following list includes
     * deprecated runtimes. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtime-support-policy">Runtime
     * deprecation policy</a>.</p>
     */
    inline void SetCompatibleRuntimes(const Aws::Vector<Runtime>& value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes = value; }

    /**
     * <p>The layer's compatible runtimes.</p> <p>The following list includes
     * deprecated runtimes. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtime-support-policy">Runtime
     * deprecation policy</a>.</p>
     */
    inline void SetCompatibleRuntimes(Aws::Vector<Runtime>&& value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes = std::move(value); }

    /**
     * <p>The layer's compatible runtimes.</p> <p>The following list includes
     * deprecated runtimes. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtime-support-policy">Runtime
     * deprecation policy</a>.</p>
     */
    inline LayerVersionsListItem& WithCompatibleRuntimes(const Aws::Vector<Runtime>& value) { SetCompatibleRuntimes(value); return *this;}

    /**
     * <p>The layer's compatible runtimes.</p> <p>The following list includes
     * deprecated runtimes. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtime-support-policy">Runtime
     * deprecation policy</a>.</p>
     */
    inline LayerVersionsListItem& WithCompatibleRuntimes(Aws::Vector<Runtime>&& value) { SetCompatibleRuntimes(std::move(value)); return *this;}

    /**
     * <p>The layer's compatible runtimes.</p> <p>The following list includes
     * deprecated runtimes. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtime-support-policy">Runtime
     * deprecation policy</a>.</p>
     */
    inline LayerVersionsListItem& AddCompatibleRuntimes(const Runtime& value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes.push_back(value); return *this; }

    /**
     * <p>The layer's compatible runtimes.</p> <p>The following list includes
     * deprecated runtimes. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtime-support-policy">Runtime
     * deprecation policy</a>.</p>
     */
    inline LayerVersionsListItem& AddCompatibleRuntimes(Runtime&& value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes.push_back(std::move(value)); return *this; }


    /**
     * <p>The layer's open-source license.</p>
     */
    inline const Aws::String& GetLicenseInfo() const{ return m_licenseInfo; }

    /**
     * <p>The layer's open-source license.</p>
     */
    inline bool LicenseInfoHasBeenSet() const { return m_licenseInfoHasBeenSet; }

    /**
     * <p>The layer's open-source license.</p>
     */
    inline void SetLicenseInfo(const Aws::String& value) { m_licenseInfoHasBeenSet = true; m_licenseInfo = value; }

    /**
     * <p>The layer's open-source license.</p>
     */
    inline void SetLicenseInfo(Aws::String&& value) { m_licenseInfoHasBeenSet = true; m_licenseInfo = std::move(value); }

    /**
     * <p>The layer's open-source license.</p>
     */
    inline void SetLicenseInfo(const char* value) { m_licenseInfoHasBeenSet = true; m_licenseInfo.assign(value); }

    /**
     * <p>The layer's open-source license.</p>
     */
    inline LayerVersionsListItem& WithLicenseInfo(const Aws::String& value) { SetLicenseInfo(value); return *this;}

    /**
     * <p>The layer's open-source license.</p>
     */
    inline LayerVersionsListItem& WithLicenseInfo(Aws::String&& value) { SetLicenseInfo(std::move(value)); return *this;}

    /**
     * <p>The layer's open-source license.</p>
     */
    inline LayerVersionsListItem& WithLicenseInfo(const char* value) { SetLicenseInfo(value); return *this;}


    /**
     * <p>A list of compatible <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/foundation-arch.html">instruction
     * set architectures</a>.</p>
     */
    inline const Aws::Vector<Architecture>& GetCompatibleArchitectures() const{ return m_compatibleArchitectures; }

    /**
     * <p>A list of compatible <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/foundation-arch.html">instruction
     * set architectures</a>.</p>
     */
    inline bool CompatibleArchitecturesHasBeenSet() const { return m_compatibleArchitecturesHasBeenSet; }

    /**
     * <p>A list of compatible <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/foundation-arch.html">instruction
     * set architectures</a>.</p>
     */
    inline void SetCompatibleArchitectures(const Aws::Vector<Architecture>& value) { m_compatibleArchitecturesHasBeenSet = true; m_compatibleArchitectures = value; }

    /**
     * <p>A list of compatible <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/foundation-arch.html">instruction
     * set architectures</a>.</p>
     */
    inline void SetCompatibleArchitectures(Aws::Vector<Architecture>&& value) { m_compatibleArchitecturesHasBeenSet = true; m_compatibleArchitectures = std::move(value); }

    /**
     * <p>A list of compatible <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/foundation-arch.html">instruction
     * set architectures</a>.</p>
     */
    inline LayerVersionsListItem& WithCompatibleArchitectures(const Aws::Vector<Architecture>& value) { SetCompatibleArchitectures(value); return *this;}

    /**
     * <p>A list of compatible <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/foundation-arch.html">instruction
     * set architectures</a>.</p>
     */
    inline LayerVersionsListItem& WithCompatibleArchitectures(Aws::Vector<Architecture>&& value) { SetCompatibleArchitectures(std::move(value)); return *this;}

    /**
     * <p>A list of compatible <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/foundation-arch.html">instruction
     * set architectures</a>.</p>
     */
    inline LayerVersionsListItem& AddCompatibleArchitectures(const Architecture& value) { m_compatibleArchitecturesHasBeenSet = true; m_compatibleArchitectures.push_back(value); return *this; }

    /**
     * <p>A list of compatible <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/foundation-arch.html">instruction
     * set architectures</a>.</p>
     */
    inline LayerVersionsListItem& AddCompatibleArchitectures(Architecture&& value) { m_compatibleArchitecturesHasBeenSet = true; m_compatibleArchitectures.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_layerVersionArn;
    bool m_layerVersionArnHasBeenSet = false;

    long long m_version;
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
