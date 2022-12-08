/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ClientData.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/BootModeValues.h>
#include <aws/ec2/model/ImageDiskContainer.h>
#include <aws/ec2/model/ImportImageLicenseConfigurationRequest.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ImportImageRequest : public EC2Request
  {
  public:
    AWS_EC2_API ImportImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportImage"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> </p>
     */
    inline const Aws::String& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> </p>
     */
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> </p>
     */
    inline void SetArchitecture(const Aws::String& value) { m_architectureHasBeenSet = true; m_architecture = value; }

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> </p>
     */
    inline void SetArchitecture(Aws::String&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> </p>
     */
    inline void SetArchitecture(const char* value) { m_architectureHasBeenSet = true; m_architecture.assign(value); }

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> </p>
     */
    inline ImportImageRequest& WithArchitecture(const Aws::String& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> </p>
     */
    inline ImportImageRequest& WithArchitecture(Aws::String&& value) { SetArchitecture(std::move(value)); return *this;}

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> </p>
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
     * encrypted. The default KMS key for EBS is used unless you specify a non-default
     * KMS key using <code>KmsKeyId</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Specifies whether the destination AMI of the imported image should be
     * encrypted. The default KMS key for EBS is used unless you specify a non-default
     * KMS key using <code>KmsKeyId</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Specifies whether the destination AMI of the imported image should be
     * encrypted. The default KMS key for EBS is used unless you specify a non-default
     * KMS key using <code>KmsKeyId</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Specifies whether the destination AMI of the imported image should be
     * encrypted. The default KMS key for EBS is used unless you specify a non-default
     * KMS key using <code>KmsKeyId</code>. For more information, see <a
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
     * <p>An identifier for the symmetric KMS key to use when creating the encrypted
     * AMI. This parameter is only required if you want to use a non-default KMS key;
     * if this parameter is not specified, the default KMS key for EBS is used. If a
     * <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must also be
     * set. </p> <p>The KMS key identifier may be provided in any of the following
     * formats: </p> <ul> <li> <p>Key ID</p> </li> <li> <p>Key alias. The alias ARN
     * contains the <code>arn:aws:kms</code> namespace, followed by the Region of the
     * key, the Amazon Web Services account ID of the key owner, the <code>alias</code>
     * namespace, and then the key alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> <li> <p>ARN using key ID. The ID ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the Region of the key, the Amazon Web Services account ID
     * of the key owner, the <code>key</code> namespace, and then the key ID. For
     * example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the key, the
     * Amazon Web Services account ID of the key owner, the <code>alias</code>
     * namespace, and then the key alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul> <p>Amazon Web Services parses <code>KmsKeyId</code> asynchronously,
     * meaning that the action you call may appear to complete even though you provided
     * an invalid identifier. This action will eventually report failure. </p> <p>The
     * specified KMS key must exist in the Region that the AMI is being copied to.</p>
     * <p>Amazon EBS does not support asymmetric KMS keys.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>An identifier for the symmetric KMS key to use when creating the encrypted
     * AMI. This parameter is only required if you want to use a non-default KMS key;
     * if this parameter is not specified, the default KMS key for EBS is used. If a
     * <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must also be
     * set. </p> <p>The KMS key identifier may be provided in any of the following
     * formats: </p> <ul> <li> <p>Key ID</p> </li> <li> <p>Key alias. The alias ARN
     * contains the <code>arn:aws:kms</code> namespace, followed by the Region of the
     * key, the Amazon Web Services account ID of the key owner, the <code>alias</code>
     * namespace, and then the key alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> <li> <p>ARN using key ID. The ID ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the Region of the key, the Amazon Web Services account ID
     * of the key owner, the <code>key</code> namespace, and then the key ID. For
     * example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the key, the
     * Amazon Web Services account ID of the key owner, the <code>alias</code>
     * namespace, and then the key alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul> <p>Amazon Web Services parses <code>KmsKeyId</code> asynchronously,
     * meaning that the action you call may appear to complete even though you provided
     * an invalid identifier. This action will eventually report failure. </p> <p>The
     * specified KMS key must exist in the Region that the AMI is being copied to.</p>
     * <p>Amazon EBS does not support asymmetric KMS keys.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>An identifier for the symmetric KMS key to use when creating the encrypted
     * AMI. This parameter is only required if you want to use a non-default KMS key;
     * if this parameter is not specified, the default KMS key for EBS is used. If a
     * <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must also be
     * set. </p> <p>The KMS key identifier may be provided in any of the following
     * formats: </p> <ul> <li> <p>Key ID</p> </li> <li> <p>Key alias. The alias ARN
     * contains the <code>arn:aws:kms</code> namespace, followed by the Region of the
     * key, the Amazon Web Services account ID of the key owner, the <code>alias</code>
     * namespace, and then the key alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> <li> <p>ARN using key ID. The ID ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the Region of the key, the Amazon Web Services account ID
     * of the key owner, the <code>key</code> namespace, and then the key ID. For
     * example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the key, the
     * Amazon Web Services account ID of the key owner, the <code>alias</code>
     * namespace, and then the key alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul> <p>Amazon Web Services parses <code>KmsKeyId</code> asynchronously,
     * meaning that the action you call may appear to complete even though you provided
     * an invalid identifier. This action will eventually report failure. </p> <p>The
     * specified KMS key must exist in the Region that the AMI is being copied to.</p>
     * <p>Amazon EBS does not support asymmetric KMS keys.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>An identifier for the symmetric KMS key to use when creating the encrypted
     * AMI. This parameter is only required if you want to use a non-default KMS key;
     * if this parameter is not specified, the default KMS key for EBS is used. If a
     * <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must also be
     * set. </p> <p>The KMS key identifier may be provided in any of the following
     * formats: </p> <ul> <li> <p>Key ID</p> </li> <li> <p>Key alias. The alias ARN
     * contains the <code>arn:aws:kms</code> namespace, followed by the Region of the
     * key, the Amazon Web Services account ID of the key owner, the <code>alias</code>
     * namespace, and then the key alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> <li> <p>ARN using key ID. The ID ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the Region of the key, the Amazon Web Services account ID
     * of the key owner, the <code>key</code> namespace, and then the key ID. For
     * example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the key, the
     * Amazon Web Services account ID of the key owner, the <code>alias</code>
     * namespace, and then the key alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul> <p>Amazon Web Services parses <code>KmsKeyId</code> asynchronously,
     * meaning that the action you call may appear to complete even though you provided
     * an invalid identifier. This action will eventually report failure. </p> <p>The
     * specified KMS key must exist in the Region that the AMI is being copied to.</p>
     * <p>Amazon EBS does not support asymmetric KMS keys.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>An identifier for the symmetric KMS key to use when creating the encrypted
     * AMI. This parameter is only required if you want to use a non-default KMS key;
     * if this parameter is not specified, the default KMS key for EBS is used. If a
     * <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must also be
     * set. </p> <p>The KMS key identifier may be provided in any of the following
     * formats: </p> <ul> <li> <p>Key ID</p> </li> <li> <p>Key alias. The alias ARN
     * contains the <code>arn:aws:kms</code> namespace, followed by the Region of the
     * key, the Amazon Web Services account ID of the key owner, the <code>alias</code>
     * namespace, and then the key alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> <li> <p>ARN using key ID. The ID ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the Region of the key, the Amazon Web Services account ID
     * of the key owner, the <code>key</code> namespace, and then the key ID. For
     * example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the key, the
     * Amazon Web Services account ID of the key owner, the <code>alias</code>
     * namespace, and then the key alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul> <p>Amazon Web Services parses <code>KmsKeyId</code> asynchronously,
     * meaning that the action you call may appear to complete even though you provided
     * an invalid identifier. This action will eventually report failure. </p> <p>The
     * specified KMS key must exist in the Region that the AMI is being copied to.</p>
     * <p>Amazon EBS does not support asymmetric KMS keys.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>An identifier for the symmetric KMS key to use when creating the encrypted
     * AMI. This parameter is only required if you want to use a non-default KMS key;
     * if this parameter is not specified, the default KMS key for EBS is used. If a
     * <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must also be
     * set. </p> <p>The KMS key identifier may be provided in any of the following
     * formats: </p> <ul> <li> <p>Key ID</p> </li> <li> <p>Key alias. The alias ARN
     * contains the <code>arn:aws:kms</code> namespace, followed by the Region of the
     * key, the Amazon Web Services account ID of the key owner, the <code>alias</code>
     * namespace, and then the key alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> <li> <p>ARN using key ID. The ID ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the Region of the key, the Amazon Web Services account ID
     * of the key owner, the <code>key</code> namespace, and then the key ID. For
     * example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the key, the
     * Amazon Web Services account ID of the key owner, the <code>alias</code>
     * namespace, and then the key alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul> <p>Amazon Web Services parses <code>KmsKeyId</code> asynchronously,
     * meaning that the action you call may appear to complete even though you provided
     * an invalid identifier. This action will eventually report failure. </p> <p>The
     * specified KMS key must exist in the Region that the AMI is being copied to.</p>
     * <p>Amazon EBS does not support asymmetric KMS keys.</p>
     */
    inline ImportImageRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>An identifier for the symmetric KMS key to use when creating the encrypted
     * AMI. This parameter is only required if you want to use a non-default KMS key;
     * if this parameter is not specified, the default KMS key for EBS is used. If a
     * <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must also be
     * set. </p> <p>The KMS key identifier may be provided in any of the following
     * formats: </p> <ul> <li> <p>Key ID</p> </li> <li> <p>Key alias. The alias ARN
     * contains the <code>arn:aws:kms</code> namespace, followed by the Region of the
     * key, the Amazon Web Services account ID of the key owner, the <code>alias</code>
     * namespace, and then the key alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> <li> <p>ARN using key ID. The ID ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the Region of the key, the Amazon Web Services account ID
     * of the key owner, the <code>key</code> namespace, and then the key ID. For
     * example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the key, the
     * Amazon Web Services account ID of the key owner, the <code>alias</code>
     * namespace, and then the key alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul> <p>Amazon Web Services parses <code>KmsKeyId</code> asynchronously,
     * meaning that the action you call may appear to complete even though you provided
     * an invalid identifier. This action will eventually report failure. </p> <p>The
     * specified KMS key must exist in the Region that the AMI is being copied to.</p>
     * <p>Amazon EBS does not support asymmetric KMS keys.</p>
     */
    inline ImportImageRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>An identifier for the symmetric KMS key to use when creating the encrypted
     * AMI. This parameter is only required if you want to use a non-default KMS key;
     * if this parameter is not specified, the default KMS key for EBS is used. If a
     * <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must also be
     * set. </p> <p>The KMS key identifier may be provided in any of the following
     * formats: </p> <ul> <li> <p>Key ID</p> </li> <li> <p>Key alias. The alias ARN
     * contains the <code>arn:aws:kms</code> namespace, followed by the Region of the
     * key, the Amazon Web Services account ID of the key owner, the <code>alias</code>
     * namespace, and then the key alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>.</p>
     * </li> <li> <p>ARN using key ID. The ID ARN contains the <code>arn:aws:kms</code>
     * namespace, followed by the Region of the key, the Amazon Web Services account ID
     * of the key owner, the <code>key</code> namespace, and then the key ID. For
     * example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the key, the
     * Amazon Web Services account ID of the key owner, the <code>alias</code>
     * namespace, and then the key alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul> <p>Amazon Web Services parses <code>KmsKeyId</code> asynchronously,
     * meaning that the action you call may appear to complete even though you provided
     * an invalid identifier. This action will eventually report failure. </p> <p>The
     * specified KMS key must exist in the Region that the AMI is being copied to.</p>
     * <p>Amazon EBS does not support asymmetric KMS keys.</p>
     */
    inline ImportImageRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The license type to be used for the Amazon Machine Image (AMI) after
     * importing.</p> <p>Specify <code>AWS</code> to replace the source-system license
     * with an Amazon Web Services license or <code>BYOL</code> to retain the
     * source-system license. Leaving this parameter undefined is the same as choosing
     * <code>AWS</code> when importing a Windows Server operating system, and the same
     * as choosing <code>BYOL</code> when importing a Windows client operating system
     * (such as Windows 10) or a Linux operating system.</p> <p>To use
     * <code>BYOL</code>, you must have existing licenses with rights to use these
     * licenses in a third party cloud, such as Amazon Web Services. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-image-import.html#prerequisites-image">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline const Aws::String& GetLicenseType() const{ return m_licenseType; }

    /**
     * <p>The license type to be used for the Amazon Machine Image (AMI) after
     * importing.</p> <p>Specify <code>AWS</code> to replace the source-system license
     * with an Amazon Web Services license or <code>BYOL</code> to retain the
     * source-system license. Leaving this parameter undefined is the same as choosing
     * <code>AWS</code> when importing a Windows Server operating system, and the same
     * as choosing <code>BYOL</code> when importing a Windows client operating system
     * (such as Windows 10) or a Linux operating system.</p> <p>To use
     * <code>BYOL</code>, you must have existing licenses with rights to use these
     * licenses in a third party cloud, such as Amazon Web Services. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-image-import.html#prerequisites-image">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }

    /**
     * <p>The license type to be used for the Amazon Machine Image (AMI) after
     * importing.</p> <p>Specify <code>AWS</code> to replace the source-system license
     * with an Amazon Web Services license or <code>BYOL</code> to retain the
     * source-system license. Leaving this parameter undefined is the same as choosing
     * <code>AWS</code> when importing a Windows Server operating system, and the same
     * as choosing <code>BYOL</code> when importing a Windows client operating system
     * (such as Windows 10) or a Linux operating system.</p> <p>To use
     * <code>BYOL</code>, you must have existing licenses with rights to use these
     * licenses in a third party cloud, such as Amazon Web Services. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-image-import.html#prerequisites-image">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline void SetLicenseType(const Aws::String& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }

    /**
     * <p>The license type to be used for the Amazon Machine Image (AMI) after
     * importing.</p> <p>Specify <code>AWS</code> to replace the source-system license
     * with an Amazon Web Services license or <code>BYOL</code> to retain the
     * source-system license. Leaving this parameter undefined is the same as choosing
     * <code>AWS</code> when importing a Windows Server operating system, and the same
     * as choosing <code>BYOL</code> when importing a Windows client operating system
     * (such as Windows 10) or a Linux operating system.</p> <p>To use
     * <code>BYOL</code>, you must have existing licenses with rights to use these
     * licenses in a third party cloud, such as Amazon Web Services. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-image-import.html#prerequisites-image">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline void SetLicenseType(Aws::String&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }

    /**
     * <p>The license type to be used for the Amazon Machine Image (AMI) after
     * importing.</p> <p>Specify <code>AWS</code> to replace the source-system license
     * with an Amazon Web Services license or <code>BYOL</code> to retain the
     * source-system license. Leaving this parameter undefined is the same as choosing
     * <code>AWS</code> when importing a Windows Server operating system, and the same
     * as choosing <code>BYOL</code> when importing a Windows client operating system
     * (such as Windows 10) or a Linux operating system.</p> <p>To use
     * <code>BYOL</code>, you must have existing licenses with rights to use these
     * licenses in a third party cloud, such as Amazon Web Services. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-image-import.html#prerequisites-image">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline void SetLicenseType(const char* value) { m_licenseTypeHasBeenSet = true; m_licenseType.assign(value); }

    /**
     * <p>The license type to be used for the Amazon Machine Image (AMI) after
     * importing.</p> <p>Specify <code>AWS</code> to replace the source-system license
     * with an Amazon Web Services license or <code>BYOL</code> to retain the
     * source-system license. Leaving this parameter undefined is the same as choosing
     * <code>AWS</code> when importing a Windows Server operating system, and the same
     * as choosing <code>BYOL</code> when importing a Windows client operating system
     * (such as Windows 10) or a Linux operating system.</p> <p>To use
     * <code>BYOL</code>, you must have existing licenses with rights to use these
     * licenses in a third party cloud, such as Amazon Web Services. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-image-import.html#prerequisites-image">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline ImportImageRequest& WithLicenseType(const Aws::String& value) { SetLicenseType(value); return *this;}

    /**
     * <p>The license type to be used for the Amazon Machine Image (AMI) after
     * importing.</p> <p>Specify <code>AWS</code> to replace the source-system license
     * with an Amazon Web Services license or <code>BYOL</code> to retain the
     * source-system license. Leaving this parameter undefined is the same as choosing
     * <code>AWS</code> when importing a Windows Server operating system, and the same
     * as choosing <code>BYOL</code> when importing a Windows client operating system
     * (such as Windows 10) or a Linux operating system.</p> <p>To use
     * <code>BYOL</code>, you must have existing licenses with rights to use these
     * licenses in a third party cloud, such as Amazon Web Services. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-image-import.html#prerequisites-image">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline ImportImageRequest& WithLicenseType(Aws::String&& value) { SetLicenseType(std::move(value)); return *this;}

    /**
     * <p>The license type to be used for the Amazon Machine Image (AMI) after
     * importing.</p> <p>Specify <code>AWS</code> to replace the source-system license
     * with an Amazon Web Services license or <code>BYOL</code> to retain the
     * source-system license. Leaving this parameter undefined is the same as choosing
     * <code>AWS</code> when importing a Windows Server operating system, and the same
     * as choosing <code>BYOL</code> when importing a Windows client operating system
     * (such as Windows 10) or a Linux operating system.</p> <p>To use
     * <code>BYOL</code>, you must have existing licenses with rights to use these
     * licenses in a third party cloud, such as Amazon Web Services. For more
     * information, see <a
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


    /**
     * <p>The ARNs of the license configurations.</p>
     */
    inline const Aws::Vector<ImportImageLicenseConfigurationRequest>& GetLicenseSpecifications() const{ return m_licenseSpecifications; }

    /**
     * <p>The ARNs of the license configurations.</p>
     */
    inline bool LicenseSpecificationsHasBeenSet() const { return m_licenseSpecificationsHasBeenSet; }

    /**
     * <p>The ARNs of the license configurations.</p>
     */
    inline void SetLicenseSpecifications(const Aws::Vector<ImportImageLicenseConfigurationRequest>& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications = value; }

    /**
     * <p>The ARNs of the license configurations.</p>
     */
    inline void SetLicenseSpecifications(Aws::Vector<ImportImageLicenseConfigurationRequest>&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications = std::move(value); }

    /**
     * <p>The ARNs of the license configurations.</p>
     */
    inline ImportImageRequest& WithLicenseSpecifications(const Aws::Vector<ImportImageLicenseConfigurationRequest>& value) { SetLicenseSpecifications(value); return *this;}

    /**
     * <p>The ARNs of the license configurations.</p>
     */
    inline ImportImageRequest& WithLicenseSpecifications(Aws::Vector<ImportImageLicenseConfigurationRequest>&& value) { SetLicenseSpecifications(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the license configurations.</p>
     */
    inline ImportImageRequest& AddLicenseSpecifications(const ImportImageLicenseConfigurationRequest& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications.push_back(value); return *this; }

    /**
     * <p>The ARNs of the license configurations.</p>
     */
    inline ImportImageRequest& AddLicenseSpecifications(ImportImageLicenseConfigurationRequest&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>The tags to apply to the import image task during creation.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the import image task during creation.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the import image task during creation.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the import image task during creation.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the import image task during creation.</p>
     */
    inline ImportImageRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the import image task during creation.</p>
     */
    inline ImportImageRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the import image task during creation.</p>
     */
    inline ImportImageRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the import image task during creation.</p>
     */
    inline ImportImageRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>The usage operation value. For more information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmie_prereqs.html#prerequisites">Licensing
     * options</a> in the <i>VM Import/Export User Guide</i>.</p>
     */
    inline const Aws::String& GetUsageOperation() const{ return m_usageOperation; }

    /**
     * <p>The usage operation value. For more information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmie_prereqs.html#prerequisites">Licensing
     * options</a> in the <i>VM Import/Export User Guide</i>.</p>
     */
    inline bool UsageOperationHasBeenSet() const { return m_usageOperationHasBeenSet; }

    /**
     * <p>The usage operation value. For more information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmie_prereqs.html#prerequisites">Licensing
     * options</a> in the <i>VM Import/Export User Guide</i>.</p>
     */
    inline void SetUsageOperation(const Aws::String& value) { m_usageOperationHasBeenSet = true; m_usageOperation = value; }

    /**
     * <p>The usage operation value. For more information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmie_prereqs.html#prerequisites">Licensing
     * options</a> in the <i>VM Import/Export User Guide</i>.</p>
     */
    inline void SetUsageOperation(Aws::String&& value) { m_usageOperationHasBeenSet = true; m_usageOperation = std::move(value); }

    /**
     * <p>The usage operation value. For more information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmie_prereqs.html#prerequisites">Licensing
     * options</a> in the <i>VM Import/Export User Guide</i>.</p>
     */
    inline void SetUsageOperation(const char* value) { m_usageOperationHasBeenSet = true; m_usageOperation.assign(value); }

    /**
     * <p>The usage operation value. For more information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmie_prereqs.html#prerequisites">Licensing
     * options</a> in the <i>VM Import/Export User Guide</i>.</p>
     */
    inline ImportImageRequest& WithUsageOperation(const Aws::String& value) { SetUsageOperation(value); return *this;}

    /**
     * <p>The usage operation value. For more information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmie_prereqs.html#prerequisites">Licensing
     * options</a> in the <i>VM Import/Export User Guide</i>.</p>
     */
    inline ImportImageRequest& WithUsageOperation(Aws::String&& value) { SetUsageOperation(std::move(value)); return *this;}

    /**
     * <p>The usage operation value. For more information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmie_prereqs.html#prerequisites">Licensing
     * options</a> in the <i>VM Import/Export User Guide</i>.</p>
     */
    inline ImportImageRequest& WithUsageOperation(const char* value) { SetUsageOperation(value); return *this;}


    /**
     * <p>The boot mode of the virtual machine.</p>
     */
    inline const BootModeValues& GetBootMode() const{ return m_bootMode; }

    /**
     * <p>The boot mode of the virtual machine.</p>
     */
    inline bool BootModeHasBeenSet() const { return m_bootModeHasBeenSet; }

    /**
     * <p>The boot mode of the virtual machine.</p>
     */
    inline void SetBootMode(const BootModeValues& value) { m_bootModeHasBeenSet = true; m_bootMode = value; }

    /**
     * <p>The boot mode of the virtual machine.</p>
     */
    inline void SetBootMode(BootModeValues&& value) { m_bootModeHasBeenSet = true; m_bootMode = std::move(value); }

    /**
     * <p>The boot mode of the virtual machine.</p>
     */
    inline ImportImageRequest& WithBootMode(const BootModeValues& value) { SetBootMode(value); return *this;}

    /**
     * <p>The boot mode of the virtual machine.</p>
     */
    inline ImportImageRequest& WithBootMode(BootModeValues&& value) { SetBootMode(std::move(value)); return *this;}

  private:

    Aws::String m_architecture;
    bool m_architectureHasBeenSet = false;

    ClientData m_clientData;
    bool m_clientDataHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<ImageDiskContainer> m_diskContainers;
    bool m_diskContainersHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    Aws::String m_hypervisor;
    bool m_hypervisorHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_licenseType;
    bool m_licenseTypeHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;

    Aws::Vector<ImportImageLicenseConfigurationRequest> m_licenseSpecifications;
    bool m_licenseSpecificationsHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_usageOperation;
    bool m_usageOperationHasBeenSet = false;

    BootModeValues m_bootMode;
    bool m_bootModeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
