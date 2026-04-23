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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Summary information about a provisioning artifact (also known as a version)
   * for a product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisioningArtifactSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API ProvisioningArtifactSummary
  {
  public:
    ProvisioningArtifactSummary();
    ProvisioningArtifactSummary(Aws::Utils::Json::JsonView jsonValue);
    ProvisioningArtifactSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline ProvisioningArtifactSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline ProvisioningArtifactSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline ProvisioningArtifactSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the provisioning artifact.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the provisioning artifact.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the provisioning artifact.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the provisioning artifact.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the provisioning artifact.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the provisioning artifact.</p>
     */
    inline ProvisioningArtifactSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the provisioning artifact.</p>
     */
    inline ProvisioningArtifactSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the provisioning artifact.</p>
     */
    inline ProvisioningArtifactSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the provisioning artifact.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the provisioning artifact.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the provisioning artifact.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the provisioning artifact.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the provisioning artifact.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the provisioning artifact.</p>
     */
    inline ProvisioningArtifactSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the provisioning artifact.</p>
     */
    inline ProvisioningArtifactSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the provisioning artifact.</p>
     */
    inline ProvisioningArtifactSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline ProvisioningArtifactSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline ProvisioningArtifactSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The metadata for the provisioning artifact. This is used with AWS Marketplace
     * products.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProvisioningArtifactMetadata() const{ return m_provisioningArtifactMetadata; }

    /**
     * <p>The metadata for the provisioning artifact. This is used with AWS Marketplace
     * products.</p>
     */
    inline bool ProvisioningArtifactMetadataHasBeenSet() const { return m_provisioningArtifactMetadataHasBeenSet; }

    /**
     * <p>The metadata for the provisioning artifact. This is used with AWS Marketplace
     * products.</p>
     */
    inline void SetProvisioningArtifactMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_provisioningArtifactMetadataHasBeenSet = true; m_provisioningArtifactMetadata = value; }

    /**
     * <p>The metadata for the provisioning artifact. This is used with AWS Marketplace
     * products.</p>
     */
    inline void SetProvisioningArtifactMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_provisioningArtifactMetadataHasBeenSet = true; m_provisioningArtifactMetadata = std::move(value); }

    /**
     * <p>The metadata for the provisioning artifact. This is used with AWS Marketplace
     * products.</p>
     */
    inline ProvisioningArtifactSummary& WithProvisioningArtifactMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetProvisioningArtifactMetadata(value); return *this;}

    /**
     * <p>The metadata for the provisioning artifact. This is used with AWS Marketplace
     * products.</p>
     */
    inline ProvisioningArtifactSummary& WithProvisioningArtifactMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetProvisioningArtifactMetadata(std::move(value)); return *this;}

    /**
     * <p>The metadata for the provisioning artifact. This is used with AWS Marketplace
     * products.</p>
     */
    inline ProvisioningArtifactSummary& AddProvisioningArtifactMetadata(const Aws::String& key, const Aws::String& value) { m_provisioningArtifactMetadataHasBeenSet = true; m_provisioningArtifactMetadata.emplace(key, value); return *this; }

    /**
     * <p>The metadata for the provisioning artifact. This is used with AWS Marketplace
     * products.</p>
     */
    inline ProvisioningArtifactSummary& AddProvisioningArtifactMetadata(Aws::String&& key, const Aws::String& value) { m_provisioningArtifactMetadataHasBeenSet = true; m_provisioningArtifactMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata for the provisioning artifact. This is used with AWS Marketplace
     * products.</p>
     */
    inline ProvisioningArtifactSummary& AddProvisioningArtifactMetadata(const Aws::String& key, Aws::String&& value) { m_provisioningArtifactMetadataHasBeenSet = true; m_provisioningArtifactMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata for the provisioning artifact. This is used with AWS Marketplace
     * products.</p>
     */
    inline ProvisioningArtifactSummary& AddProvisioningArtifactMetadata(Aws::String&& key, Aws::String&& value) { m_provisioningArtifactMetadataHasBeenSet = true; m_provisioningArtifactMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metadata for the provisioning artifact. This is used with AWS Marketplace
     * products.</p>
     */
    inline ProvisioningArtifactSummary& AddProvisioningArtifactMetadata(const char* key, Aws::String&& value) { m_provisioningArtifactMetadataHasBeenSet = true; m_provisioningArtifactMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata for the provisioning artifact. This is used with AWS Marketplace
     * products.</p>
     */
    inline ProvisioningArtifactSummary& AddProvisioningArtifactMetadata(Aws::String&& key, const char* value) { m_provisioningArtifactMetadataHasBeenSet = true; m_provisioningArtifactMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata for the provisioning artifact. This is used with AWS Marketplace
     * products.</p>
     */
    inline ProvisioningArtifactSummary& AddProvisioningArtifactMetadata(const char* key, const char* value) { m_provisioningArtifactMetadataHasBeenSet = true; m_provisioningArtifactMetadata.emplace(key, value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_provisioningArtifactMetadata;
    bool m_provisioningArtifactMetadataHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
