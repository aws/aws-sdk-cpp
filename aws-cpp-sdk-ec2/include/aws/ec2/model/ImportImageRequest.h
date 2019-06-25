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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ClientData.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ImageDiskContainer.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API ImportImageRequest : public EC2Request
  {
  public:
    ImportImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportImage"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> | <code>arm64</code> </p>
     */
    inline const Aws::String& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> | <code>arm64</code> </p>
     */
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> | <code>arm64</code> </p>
     */
    inline void SetArchitecture(const Aws::String& value) { m_architectureHasBeenSet = true; m_architecture = value; }

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> | <code>arm64</code> </p>
     */
    inline void SetArchitecture(Aws::String&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> | <code>arm64</code> </p>
     */
    inline void SetArchitecture(const char* value) { m_architectureHasBeenSet = true; m_architecture.assign(value); }

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> | <code>arm64</code> </p>
     */
    inline ImportImageRequest& WithArchitecture(const Aws::String& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> | <code>arm64</code> </p>
     */
    inline ImportImageRequest& WithArchitecture(Aws::String&& value) { SetArchitecture(std::move(value)); return *this;}

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> | <code>arm64</code> </p>
     */
    inline ImportImageRequest& WithArchitecture(const char* value) { SetArchitecture(value); return *this;}


    /**
     * <p>The client-specific data.</p>
     */
    inline const ClientData& GetClientData() const{ return m_clientData; }

    /**
     * <p>The client-specific data.</p>
     */
    inline bool ClientDataHasBeenSet() const { return m_clientDataHasBeenSet; }

    /**
     * <p>The client-specific data.</p>
     */
    inline void SetClientData(const ClientData& value) { m_clientDataHasBeenSet = true; m_clientData = value; }

    /**
     * <p>The client-specific data.</p>
     */
    inline void SetClientData(ClientData&& value) { m_clientDataHasBeenSet = true; m_clientData = std::move(value); }

    /**
     * <p>The client-specific data.</p>
     */
    inline ImportImageRequest& WithClientData(const ClientData& value) { SetClientData(value); return *this;}

    /**
     * <p>The client-specific data.</p>
     */
    inline ImportImageRequest& WithClientData(ClientData&& value) { SetClientData(std::move(value)); return *this;}


    /**
     * <p>The token to enable idempotency for VM import requests.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The token to enable idempotency for VM import requests.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The token to enable idempotency for VM import requests.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The token to enable idempotency for VM import requests.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The token to enable idempotency for VM import requests.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The token to enable idempotency for VM import requests.</p>
     */
    inline ImportImageRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The token to enable idempotency for VM import requests.</p>
     */
    inline ImportImageRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The token to enable idempotency for VM import requests.</p>
     */
    inline ImportImageRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A description string for the import image task.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description string for the import image task.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description string for the import image task.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description string for the import image task.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description string for the import image task.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description string for the import image task.</p>
     */
    inline ImportImageRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description string for the import image task.</p>
     */
    inline ImportImageRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description string for the import image task.</p>
     */
    inline ImportImageRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Information about the disk containers.</p>
     */
    inline const Aws::Vector<ImageDiskContainer>& GetDiskContainers() const{ return m_diskContainers; }

    /**
     * <p>Information about the disk containers.</p>
     */
    inline bool DiskContainersHasBeenSet() const { return m_diskContainersHasBeenSet; }

    /**
     * <p>Information about the disk containers.</p>
     */
    inline void SetDiskContainers(const Aws::Vector<ImageDiskContainer>& value) { m_diskContainersHasBeenSet = true; m_diskContainers = value; }

    /**
     * <p>Information about the disk containers.</p>
     */
    inline void SetDiskContainers(Aws::Vector<ImageDiskContainer>&& value) { m_diskContainersHasBeenSet = true; m_diskContainers = std::move(value); }

    /**
     * <p>Information about the disk containers.</p>
     */
    inline ImportImageRequest& WithDiskContainers(const Aws::Vector<ImageDiskContainer>& value) { SetDiskContainers(value); return *this;}

    /**
     * <p>Information about the disk containers.</p>
     */
    inline ImportImageRequest& WithDiskContainers(Aws::Vector<ImageDiskContainer>&& value) { SetDiskContainers(std::move(value)); return *this;}

    /**
     * <p>Information about the disk containers.</p>
     */
    inline ImportImageRequest& AddDiskContainers(const ImageDiskContainer& value) { m_diskContainersHasBeenSet = true; m_diskContainers.push_back(value); return *this; }

    /**
     * <p>Information about the disk containers.</p>
     */
    inline ImportImageRequest& AddDiskContainers(ImageDiskContainer&& value) { m_diskContainersHasBeenSet = true; m_diskContainers.push_back(std::move(value)); return *this; }


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ImportImageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Specifies whether the destination AMI of the imported image should be
     * encrypted. The default CMK for EBS is used unless you specify a non-default AWS
     * Key Management Service (AWS KMS) CMK using <code>KmsKeyId</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Specifies whether the destination AMI of the imported image should be
     * encrypted. The default CMK for EBS is used unless you specify a non-default AWS
     * Key Management Service (AWS KMS) CMK using <code>KmsKeyId</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Specifies whether the destination AMI of the imported image should be
     * encrypted. The default CMK for EBS is used unless you specify a non-default AWS
     * Key Management Service (AWS KMS) CMK using <code>KmsKeyId</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Specifies whether the destination AMI of the imported image should be
     * encrypted. The default CMK for EBS is used unless you specify a non-default AWS
     * Key Management Service (AWS KMS) CMK using <code>KmsKeyId</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline ImportImageRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The target hypervisor platform.</p> <p>Valid values: <code>xen</code> </p>
     */
    inline const Aws::String& GetHypervisor() const{ return m_hypervisor; }

    /**
     * <p>The target hypervisor platform.</p> <p>Valid values: <code>xen</code> </p>
     */
    inline bool HypervisorHasBeenSet() const { return m_hypervisorHasBeenSet; }

    /**
     * <p>The target hypervisor platform.</p> <p>Valid values: <code>xen</code> </p>
     */
    inline void SetHypervisor(const Aws::String& value) { m_hypervisorHasBeenSet = true; m_hypervisor = value; }

    /**
     * <p>The target hypervisor platform.</p> <p>Valid values: <code>xen</code> </p>
     */
    inline void SetHypervisor(Aws::String&& value) { m_hypervisorHasBeenSet = true; m_hypervisor = std::move(value); }

    /**
     * <p>The target hypervisor platform.</p> <p>Valid values: <code>xen</code> </p>
     */
    inline void SetHypervisor(const char* value) { m_hypervisorHasBeenSet = true; m_hypervisor.assign(value); }

    /**
     * <p>The target hypervisor platform.</p> <p>Valid values: <code>xen</code> </p>
     */
    inline ImportImageRequest& WithHypervisor(const Aws::String& value) { SetHypervisor(value); return *this;}

    /**
     * <p>The target hypervisor platform.</p> <p>Valid values: <code>xen</code> </p>
     */
    inline ImportImageRequest& WithHypervisor(Aws::String&& value) { SetHypervisor(std::move(value)); return *this;}

    /**
     * <p>The target hypervisor platform.</p> <p>Valid values: <code>xen</code> </p>
     */
    inline ImportImageRequest& WithHypervisor(const char* value) { SetHypervisor(value); return *this;}


    /**
     * <p>An identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use when creating the encrypted AMI. This parameter is only
     * required if you want to use a non-default CMK; if this parameter is not
     * specified, the default CMK for EBS is used. If a <code>KmsKeyId</code> is
     * specified, the <code>Encrypted</code> flag must also be set. </p> <p>The CMK
     * identifier may be provided in any of the following formats: </p> <ul> <li>
     * <p>Key ID</p> </li> <li> <p>Key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> <li> <p>ARN using key ID. The ID ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the Region of the CMK, the AWS account ID of the CMK
     * owner, the <code>key</code> namespace, and then the CMK ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul> <p>AWS parses <code>KmsKeyId</code> asynchronously, meaning that the
     * action you call may appear to complete even though you provided an invalid
     * identifier. This action will eventually report failure. </p> <p>The specified
     * CMK must exist in the Region that the AMI is being copied to.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>An identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use when creating the encrypted AMI. This parameter is only
     * required if you want to use a non-default CMK; if this parameter is not
     * specified, the default CMK for EBS is used. If a <code>KmsKeyId</code> is
     * specified, the <code>Encrypted</code> flag must also be set. </p> <p>The CMK
     * identifier may be provided in any of the following formats: </p> <ul> <li>
     * <p>Key ID</p> </li> <li> <p>Key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> <li> <p>ARN using key ID. The ID ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the Region of the CMK, the AWS account ID of the CMK
     * owner, the <code>key</code> namespace, and then the CMK ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul> <p>AWS parses <code>KmsKeyId</code> asynchronously, meaning that the
     * action you call may appear to complete even though you provided an invalid
     * identifier. This action will eventually report failure. </p> <p>The specified
     * CMK must exist in the Region that the AMI is being copied to.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>An identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use when creating the encrypted AMI. This parameter is only
     * required if you want to use a non-default CMK; if this parameter is not
     * specified, the default CMK for EBS is used. If a <code>KmsKeyId</code> is
     * specified, the <code>Encrypted</code> flag must also be set. </p> <p>The CMK
     * identifier may be provided in any of the following formats: </p> <ul> <li>
     * <p>Key ID</p> </li> <li> <p>Key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> <li> <p>ARN using key ID. The ID ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the Region of the CMK, the AWS account ID of the CMK
     * owner, the <code>key</code> namespace, and then the CMK ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul> <p>AWS parses <code>KmsKeyId</code> asynchronously, meaning that the
     * action you call may appear to complete even though you provided an invalid
     * identifier. This action will eventually report failure. </p> <p>The specified
     * CMK must exist in the Region that the AMI is being copied to.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>An identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use when creating the encrypted AMI. This parameter is only
     * required if you want to use a non-default CMK; if this parameter is not
     * specified, the default CMK for EBS is used. If a <code>KmsKeyId</code> is
     * specified, the <code>Encrypted</code> flag must also be set. </p> <p>The CMK
     * identifier may be provided in any of the following formats: </p> <ul> <li>
     * <p>Key ID</p> </li> <li> <p>Key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> <li> <p>ARN using key ID. The ID ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the Region of the CMK, the AWS account ID of the CMK
     * owner, the <code>key</code> namespace, and then the CMK ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul> <p>AWS parses <code>KmsKeyId</code> asynchronously, meaning that the
     * action you call may appear to complete even though you provided an invalid
     * identifier. This action will eventually report failure. </p> <p>The specified
     * CMK must exist in the Region that the AMI is being copied to.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>An identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use when creating the encrypted AMI. This parameter is only
     * required if you want to use a non-default CMK; if this parameter is not
     * specified, the default CMK for EBS is used. If a <code>KmsKeyId</code> is
     * specified, the <code>Encrypted</code> flag must also be set. </p> <p>The CMK
     * identifier may be provided in any of the following formats: </p> <ul> <li>
     * <p>Key ID</p> </li> <li> <p>Key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> <li> <p>ARN using key ID. The ID ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the Region of the CMK, the AWS account ID of the CMK
     * owner, the <code>key</code> namespace, and then the CMK ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul> <p>AWS parses <code>KmsKeyId</code> asynchronously, meaning that the
     * action you call may appear to complete even though you provided an invalid
     * identifier. This action will eventually report failure. </p> <p>The specified
     * CMK must exist in the Region that the AMI is being copied to.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>An identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use when creating the encrypted AMI. This parameter is only
     * required if you want to use a non-default CMK; if this parameter is not
     * specified, the default CMK for EBS is used. If a <code>KmsKeyId</code> is
     * specified, the <code>Encrypted</code> flag must also be set. </p> <p>The CMK
     * identifier may be provided in any of the following formats: </p> <ul> <li>
     * <p>Key ID</p> </li> <li> <p>Key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> <li> <p>ARN using key ID. The ID ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the Region of the CMK, the AWS account ID of the CMK
     * owner, the <code>key</code> namespace, and then the CMK ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul> <p>AWS parses <code>KmsKeyId</code> asynchronously, meaning that the
     * action you call may appear to complete even though you provided an invalid
     * identifier. This action will eventually report failure. </p> <p>The specified
     * CMK must exist in the Region that the AMI is being copied to.</p>
     */
    inline ImportImageRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>An identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use when creating the encrypted AMI. This parameter is only
     * required if you want to use a non-default CMK; if this parameter is not
     * specified, the default CMK for EBS is used. If a <code>KmsKeyId</code> is
     * specified, the <code>Encrypted</code> flag must also be set. </p> <p>The CMK
     * identifier may be provided in any of the following formats: </p> <ul> <li>
     * <p>Key ID</p> </li> <li> <p>Key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> <li> <p>ARN using key ID. The ID ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the Region of the CMK, the AWS account ID of the CMK
     * owner, the <code>key</code> namespace, and then the CMK ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul> <p>AWS parses <code>KmsKeyId</code> asynchronously, meaning that the
     * action you call may appear to complete even though you provided an invalid
     * identifier. This action will eventually report failure. </p> <p>The specified
     * CMK must exist in the Region that the AMI is being copied to.</p>
     */
    inline ImportImageRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>An identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) to use when creating the encrypted AMI. This parameter is only
     * required if you want to use a non-default CMK; if this parameter is not
     * specified, the default CMK for EBS is used. If a <code>KmsKeyId</code> is
     * specified, the <code>Encrypted</code> flag must also be set. </p> <p>The CMK
     * identifier may be provided in any of the following formats: </p> <ul> <li>
     * <p>Key ID</p> </li> <li> <p>Key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> <li> <p>ARN using key ID. The ID ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the Region of the CMK, the AWS account ID of the CMK
     * owner, the <code>key</code> namespace, and then the CMK ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the CMK, the AWS
     * account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK
     * alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul> <p>AWS parses <code>KmsKeyId</code> asynchronously, meaning that the
     * action you call may appear to complete even though you provided an invalid
     * identifier. This action will eventually report failure. </p> <p>The specified
     * CMK must exist in the Region that the AMI is being copied to.</p>
     */
    inline ImportImageRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The license type to be used for the Amazon Machine Image (AMI) after
     * importing.</p> <p>By default, we detect the source-system operating system (OS)
     * and apply the appropriate license. Specify <code>AWS</code> to replace the
     * source-system license with an AWS license, if appropriate. Specify
     * <code>BYOL</code> to retain the source-system license, if appropriate.</p> <p>To
     * use <code>BYOL</code>, you must have existing licenses with rights to use these
     * licenses in a third party cloud, such as AWS. For more information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-image-import.html#prerequisites-image">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline const Aws::String& GetLicenseType() const{ return m_licenseType; }

    /**
     * <p>The license type to be used for the Amazon Machine Image (AMI) after
     * importing.</p> <p>By default, we detect the source-system operating system (OS)
     * and apply the appropriate license. Specify <code>AWS</code> to replace the
     * source-system license with an AWS license, if appropriate. Specify
     * <code>BYOL</code> to retain the source-system license, if appropriate.</p> <p>To
     * use <code>BYOL</code>, you must have existing licenses with rights to use these
     * licenses in a third party cloud, such as AWS. For more information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-image-import.html#prerequisites-image">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }

    /**
     * <p>The license type to be used for the Amazon Machine Image (AMI) after
     * importing.</p> <p>By default, we detect the source-system operating system (OS)
     * and apply the appropriate license. Specify <code>AWS</code> to replace the
     * source-system license with an AWS license, if appropriate. Specify
     * <code>BYOL</code> to retain the source-system license, if appropriate.</p> <p>To
     * use <code>BYOL</code>, you must have existing licenses with rights to use these
     * licenses in a third party cloud, such as AWS. For more information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-image-import.html#prerequisites-image">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline void SetLicenseType(const Aws::String& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }

    /**
     * <p>The license type to be used for the Amazon Machine Image (AMI) after
     * importing.</p> <p>By default, we detect the source-system operating system (OS)
     * and apply the appropriate license. Specify <code>AWS</code> to replace the
     * source-system license with an AWS license, if appropriate. Specify
     * <code>BYOL</code> to retain the source-system license, if appropriate.</p> <p>To
     * use <code>BYOL</code>, you must have existing licenses with rights to use these
     * licenses in a third party cloud, such as AWS. For more information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-image-import.html#prerequisites-image">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline void SetLicenseType(Aws::String&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }

    /**
     * <p>The license type to be used for the Amazon Machine Image (AMI) after
     * importing.</p> <p>By default, we detect the source-system operating system (OS)
     * and apply the appropriate license. Specify <code>AWS</code> to replace the
     * source-system license with an AWS license, if appropriate. Specify
     * <code>BYOL</code> to retain the source-system license, if appropriate.</p> <p>To
     * use <code>BYOL</code>, you must have existing licenses with rights to use these
     * licenses in a third party cloud, such as AWS. For more information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-image-import.html#prerequisites-image">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline void SetLicenseType(const char* value) { m_licenseTypeHasBeenSet = true; m_licenseType.assign(value); }

    /**
     * <p>The license type to be used for the Amazon Machine Image (AMI) after
     * importing.</p> <p>By default, we detect the source-system operating system (OS)
     * and apply the appropriate license. Specify <code>AWS</code> to replace the
     * source-system license with an AWS license, if appropriate. Specify
     * <code>BYOL</code> to retain the source-system license, if appropriate.</p> <p>To
     * use <code>BYOL</code>, you must have existing licenses with rights to use these
     * licenses in a third party cloud, such as AWS. For more information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-image-import.html#prerequisites-image">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline ImportImageRequest& WithLicenseType(const Aws::String& value) { SetLicenseType(value); return *this;}

    /**
     * <p>The license type to be used for the Amazon Machine Image (AMI) after
     * importing.</p> <p>By default, we detect the source-system operating system (OS)
     * and apply the appropriate license. Specify <code>AWS</code> to replace the
     * source-system license with an AWS license, if appropriate. Specify
     * <code>BYOL</code> to retain the source-system license, if appropriate.</p> <p>To
     * use <code>BYOL</code>, you must have existing licenses with rights to use these
     * licenses in a third party cloud, such as AWS. For more information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-image-import.html#prerequisites-image">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline ImportImageRequest& WithLicenseType(Aws::String&& value) { SetLicenseType(std::move(value)); return *this;}

    /**
     * <p>The license type to be used for the Amazon Machine Image (AMI) after
     * importing.</p> <p>By default, we detect the source-system operating system (OS)
     * and apply the appropriate license. Specify <code>AWS</code> to replace the
     * source-system license with an AWS license, if appropriate. Specify
     * <code>BYOL</code> to retain the source-system license, if appropriate.</p> <p>To
     * use <code>BYOL</code>, you must have existing licenses with rights to use these
     * licenses in a third party cloud, such as AWS. For more information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-image-import.html#prerequisites-image">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline ImportImageRequest& WithLicenseType(const char* value) { SetLicenseType(value); return *this;}


    /**
     * <p>The operating system of the virtual machine.</p> <p>Valid values:
     * <code>Windows</code> | <code>Linux</code> </p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * <p>The operating system of the virtual machine.</p> <p>Valid values:
     * <code>Windows</code> | <code>Linux</code> </p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The operating system of the virtual machine.</p> <p>Valid values:
     * <code>Windows</code> | <code>Linux</code> </p>
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The operating system of the virtual machine.</p> <p>Valid values:
     * <code>Windows</code> | <code>Linux</code> </p>
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The operating system of the virtual machine.</p> <p>Valid values:
     * <code>Windows</code> | <code>Linux</code> </p>
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * <p>The operating system of the virtual machine.</p> <p>Valid values:
     * <code>Windows</code> | <code>Linux</code> </p>
     */
    inline ImportImageRequest& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * <p>The operating system of the virtual machine.</p> <p>Valid values:
     * <code>Windows</code> | <code>Linux</code> </p>
     */
    inline ImportImageRequest& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * <p>The operating system of the virtual machine.</p> <p>Valid values:
     * <code>Windows</code> | <code>Linux</code> </p>
     */
    inline ImportImageRequest& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * <p>The name of the role to use when not using the default role, 'vmimport'.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The name of the role to use when not using the default role, 'vmimport'.</p>
     */
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }

    /**
     * <p>The name of the role to use when not using the default role, 'vmimport'.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The name of the role to use when not using the default role, 'vmimport'.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p>The name of the role to use when not using the default role, 'vmimport'.</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The name of the role to use when not using the default role, 'vmimport'.</p>
     */
    inline ImportImageRequest& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name of the role to use when not using the default role, 'vmimport'.</p>
     */
    inline ImportImageRequest& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the role to use when not using the default role, 'vmimport'.</p>
     */
    inline ImportImageRequest& WithRoleName(const char* value) { SetRoleName(value); return *this;}

  private:

    Aws::String m_architecture;
    bool m_architectureHasBeenSet;

    ClientData m_clientData;
    bool m_clientDataHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<ImageDiskContainer> m_diskContainers;
    bool m_diskContainersHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    bool m_encrypted;
    bool m_encryptedHasBeenSet;

    Aws::String m_hypervisor;
    bool m_hypervisorHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_licenseType;
    bool m_licenseTypeHasBeenSet;

    Aws::String m_platform;
    bool m_platformHasBeenSet;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
