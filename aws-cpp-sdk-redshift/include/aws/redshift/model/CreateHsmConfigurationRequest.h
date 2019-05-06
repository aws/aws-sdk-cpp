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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateHsmConfigurationMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API CreateHsmConfigurationRequest : public RedshiftRequest
  {
  public:
    CreateHsmConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHsmConfiguration"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier to be assigned to the new Amazon Redshift HSM
     * configuration.</p>
     */
    inline const Aws::String& GetHsmConfigurationIdentifier() const{ return m_hsmConfigurationIdentifier; }

    /**
     * <p>The identifier to be assigned to the new Amazon Redshift HSM
     * configuration.</p>
     */
    inline bool HsmConfigurationIdentifierHasBeenSet() const { return m_hsmConfigurationIdentifierHasBeenSet; }

    /**
     * <p>The identifier to be assigned to the new Amazon Redshift HSM
     * configuration.</p>
     */
    inline void SetHsmConfigurationIdentifier(const Aws::String& value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier = value; }

    /**
     * <p>The identifier to be assigned to the new Amazon Redshift HSM
     * configuration.</p>
     */
    inline void SetHsmConfigurationIdentifier(Aws::String&& value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier = std::move(value); }

    /**
     * <p>The identifier to be assigned to the new Amazon Redshift HSM
     * configuration.</p>
     */
    inline void SetHsmConfigurationIdentifier(const char* value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier.assign(value); }

    /**
     * <p>The identifier to be assigned to the new Amazon Redshift HSM
     * configuration.</p>
     */
    inline CreateHsmConfigurationRequest& WithHsmConfigurationIdentifier(const Aws::String& value) { SetHsmConfigurationIdentifier(value); return *this;}

    /**
     * <p>The identifier to be assigned to the new Amazon Redshift HSM
     * configuration.</p>
     */
    inline CreateHsmConfigurationRequest& WithHsmConfigurationIdentifier(Aws::String&& value) { SetHsmConfigurationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier to be assigned to the new Amazon Redshift HSM
     * configuration.</p>
     */
    inline CreateHsmConfigurationRequest& WithHsmConfigurationIdentifier(const char* value) { SetHsmConfigurationIdentifier(value); return *this;}


    /**
     * <p>A text description of the HSM configuration to be created.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A text description of the HSM configuration to be created.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A text description of the HSM configuration to be created.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A text description of the HSM configuration to be created.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A text description of the HSM configuration to be created.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A text description of the HSM configuration to be created.</p>
     */
    inline CreateHsmConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A text description of the HSM configuration to be created.</p>
     */
    inline CreateHsmConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A text description of the HSM configuration to be created.</p>
     */
    inline CreateHsmConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The IP address that the Amazon Redshift cluster must use to access the
     * HSM.</p>
     */
    inline const Aws::String& GetHsmIpAddress() const{ return m_hsmIpAddress; }

    /**
     * <p>The IP address that the Amazon Redshift cluster must use to access the
     * HSM.</p>
     */
    inline bool HsmIpAddressHasBeenSet() const { return m_hsmIpAddressHasBeenSet; }

    /**
     * <p>The IP address that the Amazon Redshift cluster must use to access the
     * HSM.</p>
     */
    inline void SetHsmIpAddress(const Aws::String& value) { m_hsmIpAddressHasBeenSet = true; m_hsmIpAddress = value; }

    /**
     * <p>The IP address that the Amazon Redshift cluster must use to access the
     * HSM.</p>
     */
    inline void SetHsmIpAddress(Aws::String&& value) { m_hsmIpAddressHasBeenSet = true; m_hsmIpAddress = std::move(value); }

    /**
     * <p>The IP address that the Amazon Redshift cluster must use to access the
     * HSM.</p>
     */
    inline void SetHsmIpAddress(const char* value) { m_hsmIpAddressHasBeenSet = true; m_hsmIpAddress.assign(value); }

    /**
     * <p>The IP address that the Amazon Redshift cluster must use to access the
     * HSM.</p>
     */
    inline CreateHsmConfigurationRequest& WithHsmIpAddress(const Aws::String& value) { SetHsmIpAddress(value); return *this;}

    /**
     * <p>The IP address that the Amazon Redshift cluster must use to access the
     * HSM.</p>
     */
    inline CreateHsmConfigurationRequest& WithHsmIpAddress(Aws::String&& value) { SetHsmIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address that the Amazon Redshift cluster must use to access the
     * HSM.</p>
     */
    inline CreateHsmConfigurationRequest& WithHsmIpAddress(const char* value) { SetHsmIpAddress(value); return *this;}


    /**
     * <p>The name of the partition in the HSM where the Amazon Redshift clusters will
     * store their database encryption keys.</p>
     */
    inline const Aws::String& GetHsmPartitionName() const{ return m_hsmPartitionName; }

    /**
     * <p>The name of the partition in the HSM where the Amazon Redshift clusters will
     * store their database encryption keys.</p>
     */
    inline bool HsmPartitionNameHasBeenSet() const { return m_hsmPartitionNameHasBeenSet; }

    /**
     * <p>The name of the partition in the HSM where the Amazon Redshift clusters will
     * store their database encryption keys.</p>
     */
    inline void SetHsmPartitionName(const Aws::String& value) { m_hsmPartitionNameHasBeenSet = true; m_hsmPartitionName = value; }

    /**
     * <p>The name of the partition in the HSM where the Amazon Redshift clusters will
     * store their database encryption keys.</p>
     */
    inline void SetHsmPartitionName(Aws::String&& value) { m_hsmPartitionNameHasBeenSet = true; m_hsmPartitionName = std::move(value); }

    /**
     * <p>The name of the partition in the HSM where the Amazon Redshift clusters will
     * store their database encryption keys.</p>
     */
    inline void SetHsmPartitionName(const char* value) { m_hsmPartitionNameHasBeenSet = true; m_hsmPartitionName.assign(value); }

    /**
     * <p>The name of the partition in the HSM where the Amazon Redshift clusters will
     * store their database encryption keys.</p>
     */
    inline CreateHsmConfigurationRequest& WithHsmPartitionName(const Aws::String& value) { SetHsmPartitionName(value); return *this;}

    /**
     * <p>The name of the partition in the HSM where the Amazon Redshift clusters will
     * store their database encryption keys.</p>
     */
    inline CreateHsmConfigurationRequest& WithHsmPartitionName(Aws::String&& value) { SetHsmPartitionName(std::move(value)); return *this;}

    /**
     * <p>The name of the partition in the HSM where the Amazon Redshift clusters will
     * store their database encryption keys.</p>
     */
    inline CreateHsmConfigurationRequest& WithHsmPartitionName(const char* value) { SetHsmPartitionName(value); return *this;}


    /**
     * <p>The password required to access the HSM partition.</p>
     */
    inline const Aws::String& GetHsmPartitionPassword() const{ return m_hsmPartitionPassword; }

    /**
     * <p>The password required to access the HSM partition.</p>
     */
    inline bool HsmPartitionPasswordHasBeenSet() const { return m_hsmPartitionPasswordHasBeenSet; }

    /**
     * <p>The password required to access the HSM partition.</p>
     */
    inline void SetHsmPartitionPassword(const Aws::String& value) { m_hsmPartitionPasswordHasBeenSet = true; m_hsmPartitionPassword = value; }

    /**
     * <p>The password required to access the HSM partition.</p>
     */
    inline void SetHsmPartitionPassword(Aws::String&& value) { m_hsmPartitionPasswordHasBeenSet = true; m_hsmPartitionPassword = std::move(value); }

    /**
     * <p>The password required to access the HSM partition.</p>
     */
    inline void SetHsmPartitionPassword(const char* value) { m_hsmPartitionPasswordHasBeenSet = true; m_hsmPartitionPassword.assign(value); }

    /**
     * <p>The password required to access the HSM partition.</p>
     */
    inline CreateHsmConfigurationRequest& WithHsmPartitionPassword(const Aws::String& value) { SetHsmPartitionPassword(value); return *this;}

    /**
     * <p>The password required to access the HSM partition.</p>
     */
    inline CreateHsmConfigurationRequest& WithHsmPartitionPassword(Aws::String&& value) { SetHsmPartitionPassword(std::move(value)); return *this;}

    /**
     * <p>The password required to access the HSM partition.</p>
     */
    inline CreateHsmConfigurationRequest& WithHsmPartitionPassword(const char* value) { SetHsmPartitionPassword(value); return *this;}


    /**
     * <p>The HSMs public certificate file. When using Cloud HSM, the file name is
     * server.pem.</p>
     */
    inline const Aws::String& GetHsmServerPublicCertificate() const{ return m_hsmServerPublicCertificate; }

    /**
     * <p>The HSMs public certificate file. When using Cloud HSM, the file name is
     * server.pem.</p>
     */
    inline bool HsmServerPublicCertificateHasBeenSet() const { return m_hsmServerPublicCertificateHasBeenSet; }

    /**
     * <p>The HSMs public certificate file. When using Cloud HSM, the file name is
     * server.pem.</p>
     */
    inline void SetHsmServerPublicCertificate(const Aws::String& value) { m_hsmServerPublicCertificateHasBeenSet = true; m_hsmServerPublicCertificate = value; }

    /**
     * <p>The HSMs public certificate file. When using Cloud HSM, the file name is
     * server.pem.</p>
     */
    inline void SetHsmServerPublicCertificate(Aws::String&& value) { m_hsmServerPublicCertificateHasBeenSet = true; m_hsmServerPublicCertificate = std::move(value); }

    /**
     * <p>The HSMs public certificate file. When using Cloud HSM, the file name is
     * server.pem.</p>
     */
    inline void SetHsmServerPublicCertificate(const char* value) { m_hsmServerPublicCertificateHasBeenSet = true; m_hsmServerPublicCertificate.assign(value); }

    /**
     * <p>The HSMs public certificate file. When using Cloud HSM, the file name is
     * server.pem.</p>
     */
    inline CreateHsmConfigurationRequest& WithHsmServerPublicCertificate(const Aws::String& value) { SetHsmServerPublicCertificate(value); return *this;}

    /**
     * <p>The HSMs public certificate file. When using Cloud HSM, the file name is
     * server.pem.</p>
     */
    inline CreateHsmConfigurationRequest& WithHsmServerPublicCertificate(Aws::String&& value) { SetHsmServerPublicCertificate(std::move(value)); return *this;}

    /**
     * <p>The HSMs public certificate file. When using Cloud HSM, the file name is
     * server.pem.</p>
     */
    inline CreateHsmConfigurationRequest& WithHsmServerPublicCertificate(const char* value) { SetHsmServerPublicCertificate(value); return *this;}


    /**
     * <p>A list of tag instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateHsmConfigurationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateHsmConfigurationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateHsmConfigurationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateHsmConfigurationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_hsmConfigurationIdentifier;
    bool m_hsmConfigurationIdentifierHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_hsmIpAddress;
    bool m_hsmIpAddressHasBeenSet;

    Aws::String m_hsmPartitionName;
    bool m_hsmPartitionNameHasBeenSet;

    Aws::String m_hsmPartitionPassword;
    bool m_hsmPartitionPasswordHasBeenSet;

    Aws::String m_hsmServerPublicCertificate;
    bool m_hsmServerPublicCertificateHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
