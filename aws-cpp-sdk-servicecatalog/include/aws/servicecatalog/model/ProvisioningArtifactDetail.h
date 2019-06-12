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
#include <aws/servicecatalog/model/ProvisioningArtifactType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/servicecatalog/model/ProvisioningArtifactGuidance.h>
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
   * <p>Information about a provisioning artifact (also known as a version) for a
   * product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisioningArtifactDetail">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API ProvisioningArtifactDetail
  {
  public:
    ProvisioningArtifactDetail();
    ProvisioningArtifactDetail(Aws::Utils::Json::JsonView jsonValue);
    ProvisioningArtifactDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ProvisioningArtifactDetail& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline ProvisioningArtifactDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline ProvisioningArtifactDetail& WithId(const char* value) { SetId(value); return *this;}


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
    inline ProvisioningArtifactDetail& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the provisioning artifact.</p>
     */
    inline ProvisioningArtifactDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the provisioning artifact.</p>
     */
    inline ProvisioningArtifactDetail& WithName(const char* value) { SetName(value); return *this;}


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
    inline ProvisioningArtifactDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the provisioning artifact.</p>
     */
    inline ProvisioningArtifactDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the provisioning artifact.</p>
     */
    inline ProvisioningArtifactDetail& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of provisioning artifact.</p> <ul> <li> <p>
     * <code>CLOUD_FORMATION_TEMPLATE</code> - AWS CloudFormation template</p> </li>
     * <li> <p> <code>MARKETPLACE_AMI</code> - AWS Marketplace AMI</p> </li> <li> <p>
     * <code>MARKETPLACE_CAR</code> - AWS Marketplace Clusters and AWS Resources</p>
     * </li> </ul>
     */
    inline const ProvisioningArtifactType& GetType() const{ return m_type; }

    /**
     * <p>The type of provisioning artifact.</p> <ul> <li> <p>
     * <code>CLOUD_FORMATION_TEMPLATE</code> - AWS CloudFormation template</p> </li>
     * <li> <p> <code>MARKETPLACE_AMI</code> - AWS Marketplace AMI</p> </li> <li> <p>
     * <code>MARKETPLACE_CAR</code> - AWS Marketplace Clusters and AWS Resources</p>
     * </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of provisioning artifact.</p> <ul> <li> <p>
     * <code>CLOUD_FORMATION_TEMPLATE</code> - AWS CloudFormation template</p> </li>
     * <li> <p> <code>MARKETPLACE_AMI</code> - AWS Marketplace AMI</p> </li> <li> <p>
     * <code>MARKETPLACE_CAR</code> - AWS Marketplace Clusters and AWS Resources</p>
     * </li> </ul>
     */
    inline void SetType(const ProvisioningArtifactType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of provisioning artifact.</p> <ul> <li> <p>
     * <code>CLOUD_FORMATION_TEMPLATE</code> - AWS CloudFormation template</p> </li>
     * <li> <p> <code>MARKETPLACE_AMI</code> - AWS Marketplace AMI</p> </li> <li> <p>
     * <code>MARKETPLACE_CAR</code> - AWS Marketplace Clusters and AWS Resources</p>
     * </li> </ul>
     */
    inline void SetType(ProvisioningArtifactType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of provisioning artifact.</p> <ul> <li> <p>
     * <code>CLOUD_FORMATION_TEMPLATE</code> - AWS CloudFormation template</p> </li>
     * <li> <p> <code>MARKETPLACE_AMI</code> - AWS Marketplace AMI</p> </li> <li> <p>
     * <code>MARKETPLACE_CAR</code> - AWS Marketplace Clusters and AWS Resources</p>
     * </li> </ul>
     */
    inline ProvisioningArtifactDetail& WithType(const ProvisioningArtifactType& value) { SetType(value); return *this;}

    /**
     * <p>The type of provisioning artifact.</p> <ul> <li> <p>
     * <code>CLOUD_FORMATION_TEMPLATE</code> - AWS CloudFormation template</p> </li>
     * <li> <p> <code>MARKETPLACE_AMI</code> - AWS Marketplace AMI</p> </li> <li> <p>
     * <code>MARKETPLACE_CAR</code> - AWS Marketplace Clusters and AWS Resources</p>
     * </li> </ul>
     */
    inline ProvisioningArtifactDetail& WithType(ProvisioningArtifactType&& value) { SetType(std::move(value)); return *this;}


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
    inline ProvisioningArtifactDetail& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline ProvisioningArtifactDetail& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the product version is active.</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>Indicates whether the product version is active.</p>
     */
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }

    /**
     * <p>Indicates whether the product version is active.</p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p>Indicates whether the product version is active.</p>
     */
    inline ProvisioningArtifactDetail& WithActive(bool value) { SetActive(value); return *this;}


    /**
     * <p>Information set by the administrator to provide guidance to end users about
     * which provisioning artifacts to use.</p>
     */
    inline const ProvisioningArtifactGuidance& GetGuidance() const{ return m_guidance; }

    /**
     * <p>Information set by the administrator to provide guidance to end users about
     * which provisioning artifacts to use.</p>
     */
    inline bool GuidanceHasBeenSet() const { return m_guidanceHasBeenSet; }

    /**
     * <p>Information set by the administrator to provide guidance to end users about
     * which provisioning artifacts to use.</p>
     */
    inline void SetGuidance(const ProvisioningArtifactGuidance& value) { m_guidanceHasBeenSet = true; m_guidance = value; }

    /**
     * <p>Information set by the administrator to provide guidance to end users about
     * which provisioning artifacts to use.</p>
     */
    inline void SetGuidance(ProvisioningArtifactGuidance&& value) { m_guidanceHasBeenSet = true; m_guidance = std::move(value); }

    /**
     * <p>Information set by the administrator to provide guidance to end users about
     * which provisioning artifacts to use.</p>
     */
    inline ProvisioningArtifactDetail& WithGuidance(const ProvisioningArtifactGuidance& value) { SetGuidance(value); return *this;}

    /**
     * <p>Information set by the administrator to provide guidance to end users about
     * which provisioning artifacts to use.</p>
     */
    inline ProvisioningArtifactDetail& WithGuidance(ProvisioningArtifactGuidance&& value) { SetGuidance(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    ProvisioningArtifactType m_type;
    bool m_typeHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;

    bool m_active;
    bool m_activeHasBeenSet;

    ProvisioningArtifactGuidance m_guidance;
    bool m_guidanceHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
