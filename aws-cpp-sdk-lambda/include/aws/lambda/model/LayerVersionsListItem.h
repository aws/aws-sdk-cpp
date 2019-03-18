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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/Runtime.h>
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
   * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
   * Lambda layer</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/LayerVersionsListItem">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API LayerVersionsListItem
  {
  public:
    LayerVersionsListItem();
    LayerVersionsListItem(Aws::Utils::Json::JsonView jsonValue);
    LayerVersionsListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The layer's compatible runtimes.</p>
     */
    inline const Aws::Vector<Runtime>& GetCompatibleRuntimes() const{ return m_compatibleRuntimes; }

    /**
     * <p>The layer's compatible runtimes.</p>
     */
    inline bool CompatibleRuntimesHasBeenSet() const { return m_compatibleRuntimesHasBeenSet; }

    /**
     * <p>The layer's compatible runtimes.</p>
     */
    inline void SetCompatibleRuntimes(const Aws::Vector<Runtime>& value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes = value; }

    /**
     * <p>The layer's compatible runtimes.</p>
     */
    inline void SetCompatibleRuntimes(Aws::Vector<Runtime>&& value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes = std::move(value); }

    /**
     * <p>The layer's compatible runtimes.</p>
     */
    inline LayerVersionsListItem& WithCompatibleRuntimes(const Aws::Vector<Runtime>& value) { SetCompatibleRuntimes(value); return *this;}

    /**
     * <p>The layer's compatible runtimes.</p>
     */
    inline LayerVersionsListItem& WithCompatibleRuntimes(Aws::Vector<Runtime>&& value) { SetCompatibleRuntimes(std::move(value)); return *this;}

    /**
     * <p>The layer's compatible runtimes.</p>
     */
    inline LayerVersionsListItem& AddCompatibleRuntimes(const Runtime& value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes.push_back(value); return *this; }

    /**
     * <p>The layer's compatible runtimes.</p>
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

  private:

    Aws::String m_layerVersionArn;
    bool m_layerVersionArnHasBeenSet;

    long long m_version;
    bool m_versionHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_createdDate;
    bool m_createdDateHasBeenSet;

    Aws::Vector<Runtime> m_compatibleRuntimes;
    bool m_compatibleRuntimesHasBeenSet;

    Aws::String m_licenseInfo;
    bool m_licenseInfoHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
