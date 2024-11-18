/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/DataFormat.h>
#include <utility>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class CreateSegmentSnapshotRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API CreateSegmentSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSegmentSnapshot"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline CreateSegmentSnapshotRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline CreateSegmentSnapshotRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline CreateSegmentSnapshotRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the segment definition used in this snapshot request.</p>
     */
    inline const Aws::String& GetSegmentDefinitionName() const{ return m_segmentDefinitionName; }
    inline bool SegmentDefinitionNameHasBeenSet() const { return m_segmentDefinitionNameHasBeenSet; }
    inline void SetSegmentDefinitionName(const Aws::String& value) { m_segmentDefinitionNameHasBeenSet = true; m_segmentDefinitionName = value; }
    inline void SetSegmentDefinitionName(Aws::String&& value) { m_segmentDefinitionNameHasBeenSet = true; m_segmentDefinitionName = std::move(value); }
    inline void SetSegmentDefinitionName(const char* value) { m_segmentDefinitionNameHasBeenSet = true; m_segmentDefinitionName.assign(value); }
    inline CreateSegmentSnapshotRequest& WithSegmentDefinitionName(const Aws::String& value) { SetSegmentDefinitionName(value); return *this;}
    inline CreateSegmentSnapshotRequest& WithSegmentDefinitionName(Aws::String&& value) { SetSegmentDefinitionName(std::move(value)); return *this;}
    inline CreateSegmentSnapshotRequest& WithSegmentDefinitionName(const char* value) { SetSegmentDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format in which the segment will be exported.</p>
     */
    inline const DataFormat& GetDataFormat() const{ return m_dataFormat; }
    inline bool DataFormatHasBeenSet() const { return m_dataFormatHasBeenSet; }
    inline void SetDataFormat(const DataFormat& value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }
    inline void SetDataFormat(DataFormat&& value) { m_dataFormatHasBeenSet = true; m_dataFormat = std::move(value); }
    inline CreateSegmentSnapshotRequest& WithDataFormat(const DataFormat& value) { SetDataFormat(value); return *this;}
    inline CreateSegmentSnapshotRequest& WithDataFormat(DataFormat&& value) { SetDataFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt the exported
     * segment.</p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }
    inline void SetEncryptionKey(const char* value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey.assign(value); }
    inline CreateSegmentSnapshotRequest& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}
    inline CreateSegmentSnapshotRequest& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}
    inline CreateSegmentSnapshotRequest& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that allows Customer Profiles
     * service principal to assume the role for conducting KMS and S3 operations.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateSegmentSnapshotRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateSegmentSnapshotRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateSegmentSnapshotRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination to which the segment will be exported. This field must be
     * provided if the request is not submitted from the Amazon Connect Admin
     * Website.</p>
     */
    inline const Aws::String& GetDestinationUri() const{ return m_destinationUri; }
    inline bool DestinationUriHasBeenSet() const { return m_destinationUriHasBeenSet; }
    inline void SetDestinationUri(const Aws::String& value) { m_destinationUriHasBeenSet = true; m_destinationUri = value; }
    inline void SetDestinationUri(Aws::String&& value) { m_destinationUriHasBeenSet = true; m_destinationUri = std::move(value); }
    inline void SetDestinationUri(const char* value) { m_destinationUriHasBeenSet = true; m_destinationUri.assign(value); }
    inline CreateSegmentSnapshotRequest& WithDestinationUri(const Aws::String& value) { SetDestinationUri(value); return *this;}
    inline CreateSegmentSnapshotRequest& WithDestinationUri(Aws::String&& value) { SetDestinationUri(std::move(value)); return *this;}
    inline CreateSegmentSnapshotRequest& WithDestinationUri(const char* value) { SetDestinationUri(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_segmentDefinitionName;
    bool m_segmentDefinitionNameHasBeenSet = false;

    DataFormat m_dataFormat;
    bool m_dataFormatHasBeenSet = false;

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_destinationUri;
    bool m_destinationUriHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
