/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/FileUseCaseType.h>
#include <aws/connect/model/CreatedByInfo.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Connect
{
namespace Model
{

  /**
   */
  class StartAttachedFileUploadRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API StartAttachedFileUploadRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAttachedFileUpload"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;

    AWS_CONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline StartAttachedFileUploadRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline StartAttachedFileUploadRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline StartAttachedFileUploadRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The unique identifier of the Connect instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The unique identifier of the Connect instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The unique identifier of the Connect instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The unique identifier of the Connect instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The unique identifier of the Connect instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The unique identifier of the Connect instance.</p>
     */
    inline StartAttachedFileUploadRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The unique identifier of the Connect instance.</p>
     */
    inline StartAttachedFileUploadRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Connect instance.</p>
     */
    inline StartAttachedFileUploadRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>A case-sensitive name of the attached file being uploaded.</p>
     */
    inline const Aws::String& GetFileName() const{ return m_fileName; }

    /**
     * <p>A case-sensitive name of the attached file being uploaded.</p>
     */
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }

    /**
     * <p>A case-sensitive name of the attached file being uploaded.</p>
     */
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }

    /**
     * <p>A case-sensitive name of the attached file being uploaded.</p>
     */
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = std::move(value); }

    /**
     * <p>A case-sensitive name of the attached file being uploaded.</p>
     */
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }

    /**
     * <p>A case-sensitive name of the attached file being uploaded.</p>
     */
    inline StartAttachedFileUploadRequest& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}

    /**
     * <p>A case-sensitive name of the attached file being uploaded.</p>
     */
    inline StartAttachedFileUploadRequest& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}

    /**
     * <p>A case-sensitive name of the attached file being uploaded.</p>
     */
    inline StartAttachedFileUploadRequest& WithFileName(const char* value) { SetFileName(value); return *this;}


    /**
     * <p>The size of the attached file in bytes.</p>
     */
    inline long long GetFileSizeInBytes() const{ return m_fileSizeInBytes; }

    /**
     * <p>The size of the attached file in bytes.</p>
     */
    inline bool FileSizeInBytesHasBeenSet() const { return m_fileSizeInBytesHasBeenSet; }

    /**
     * <p>The size of the attached file in bytes.</p>
     */
    inline void SetFileSizeInBytes(long long value) { m_fileSizeInBytesHasBeenSet = true; m_fileSizeInBytes = value; }

    /**
     * <p>The size of the attached file in bytes.</p>
     */
    inline StartAttachedFileUploadRequest& WithFileSizeInBytes(long long value) { SetFileSizeInBytes(value); return *this;}


    /**
     * <p>Optional override for the expiry of the pre-signed S3 URL in seconds.</p>
     */
    inline int GetUrlExpiryInSeconds() const{ return m_urlExpiryInSeconds; }

    /**
     * <p>Optional override for the expiry of the pre-signed S3 URL in seconds.</p>
     */
    inline bool UrlExpiryInSecondsHasBeenSet() const { return m_urlExpiryInSecondsHasBeenSet; }

    /**
     * <p>Optional override for the expiry of the pre-signed S3 URL in seconds.</p>
     */
    inline void SetUrlExpiryInSeconds(int value) { m_urlExpiryInSecondsHasBeenSet = true; m_urlExpiryInSeconds = value; }

    /**
     * <p>Optional override for the expiry of the pre-signed S3 URL in seconds.</p>
     */
    inline StartAttachedFileUploadRequest& WithUrlExpiryInSeconds(int value) { SetUrlExpiryInSeconds(value); return *this;}


    /**
     * <p>The use case for the file.</p>
     */
    inline const FileUseCaseType& GetFileUseCaseType() const{ return m_fileUseCaseType; }

    /**
     * <p>The use case for the file.</p>
     */
    inline bool FileUseCaseTypeHasBeenSet() const { return m_fileUseCaseTypeHasBeenSet; }

    /**
     * <p>The use case for the file.</p>
     */
    inline void SetFileUseCaseType(const FileUseCaseType& value) { m_fileUseCaseTypeHasBeenSet = true; m_fileUseCaseType = value; }

    /**
     * <p>The use case for the file.</p>
     */
    inline void SetFileUseCaseType(FileUseCaseType&& value) { m_fileUseCaseTypeHasBeenSet = true; m_fileUseCaseType = std::move(value); }

    /**
     * <p>The use case for the file.</p>
     */
    inline StartAttachedFileUploadRequest& WithFileUseCaseType(const FileUseCaseType& value) { SetFileUseCaseType(value); return *this;}

    /**
     * <p>The use case for the file.</p>
     */
    inline StartAttachedFileUploadRequest& WithFileUseCaseType(FileUseCaseType&& value) { SetFileUseCaseType(std::move(value)); return *this;}


    /**
     * <p>The resource to which the attached file is (being) uploaded to. <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_CreateCase.html">Cases</a>
     * are the only current supported resource.</p>  <p>This value must be a
     * valid ARN.</p> 
     */
    inline const Aws::String& GetAssociatedResourceArn() const{ return m_associatedResourceArn; }

    /**
     * <p>The resource to which the attached file is (being) uploaded to. <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_CreateCase.html">Cases</a>
     * are the only current supported resource.</p>  <p>This value must be a
     * valid ARN.</p> 
     */
    inline bool AssociatedResourceArnHasBeenSet() const { return m_associatedResourceArnHasBeenSet; }

    /**
     * <p>The resource to which the attached file is (being) uploaded to. <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_CreateCase.html">Cases</a>
     * are the only current supported resource.</p>  <p>This value must be a
     * valid ARN.</p> 
     */
    inline void SetAssociatedResourceArn(const Aws::String& value) { m_associatedResourceArnHasBeenSet = true; m_associatedResourceArn = value; }

    /**
     * <p>The resource to which the attached file is (being) uploaded to. <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_CreateCase.html">Cases</a>
     * are the only current supported resource.</p>  <p>This value must be a
     * valid ARN.</p> 
     */
    inline void SetAssociatedResourceArn(Aws::String&& value) { m_associatedResourceArnHasBeenSet = true; m_associatedResourceArn = std::move(value); }

    /**
     * <p>The resource to which the attached file is (being) uploaded to. <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_CreateCase.html">Cases</a>
     * are the only current supported resource.</p>  <p>This value must be a
     * valid ARN.</p> 
     */
    inline void SetAssociatedResourceArn(const char* value) { m_associatedResourceArnHasBeenSet = true; m_associatedResourceArn.assign(value); }

    /**
     * <p>The resource to which the attached file is (being) uploaded to. <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_CreateCase.html">Cases</a>
     * are the only current supported resource.</p>  <p>This value must be a
     * valid ARN.</p> 
     */
    inline StartAttachedFileUploadRequest& WithAssociatedResourceArn(const Aws::String& value) { SetAssociatedResourceArn(value); return *this;}

    /**
     * <p>The resource to which the attached file is (being) uploaded to. <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_CreateCase.html">Cases</a>
     * are the only current supported resource.</p>  <p>This value must be a
     * valid ARN.</p> 
     */
    inline StartAttachedFileUploadRequest& WithAssociatedResourceArn(Aws::String&& value) { SetAssociatedResourceArn(std::move(value)); return *this;}

    /**
     * <p>The resource to which the attached file is (being) uploaded to. <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_CreateCase.html">Cases</a>
     * are the only current supported resource.</p>  <p>This value must be a
     * valid ARN.</p> 
     */
    inline StartAttachedFileUploadRequest& WithAssociatedResourceArn(const char* value) { SetAssociatedResourceArn(value); return *this;}


    /**
     * <p>Represents the identity that created the file.</p>
     */
    inline const CreatedByInfo& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>Represents the identity that created the file.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>Represents the identity that created the file.</p>
     */
    inline void SetCreatedBy(const CreatedByInfo& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>Represents the identity that created the file.</p>
     */
    inline void SetCreatedBy(CreatedByInfo&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>Represents the identity that created the file.</p>
     */
    inline StartAttachedFileUploadRequest& WithCreatedBy(const CreatedByInfo& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>Represents the identity that created the file.</p>
     */
    inline StartAttachedFileUploadRequest& WithCreatedBy(CreatedByInfo&& value) { SetCreatedBy(std::move(value)); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, <code>{ "Tags": {"key1":"value1", "key2":"value2"} }</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, <code>{ "Tags": {"key1":"value1", "key2":"value2"} }</code>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, <code>{ "Tags": {"key1":"value1", "key2":"value2"} }</code>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, <code>{ "Tags": {"key1":"value1", "key2":"value2"} }</code>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, <code>{ "Tags": {"key1":"value1", "key2":"value2"} }</code>.</p>
     */
    inline StartAttachedFileUploadRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, <code>{ "Tags": {"key1":"value1", "key2":"value2"} }</code>.</p>
     */
    inline StartAttachedFileUploadRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, <code>{ "Tags": {"key1":"value1", "key2":"value2"} }</code>.</p>
     */
    inline StartAttachedFileUploadRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, <code>{ "Tags": {"key1":"value1", "key2":"value2"} }</code>.</p>
     */
    inline StartAttachedFileUploadRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, <code>{ "Tags": {"key1":"value1", "key2":"value2"} }</code>.</p>
     */
    inline StartAttachedFileUploadRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, <code>{ "Tags": {"key1":"value1", "key2":"value2"} }</code>.</p>
     */
    inline StartAttachedFileUploadRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, <code>{ "Tags": {"key1":"value1", "key2":"value2"} }</code>.</p>
     */
    inline StartAttachedFileUploadRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, <code>{ "Tags": {"key1":"value1", "key2":"value2"} }</code>.</p>
     */
    inline StartAttachedFileUploadRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, <code>{ "Tags": {"key1":"value1", "key2":"value2"} }</code>.</p>
     */
    inline StartAttachedFileUploadRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    long long m_fileSizeInBytes;
    bool m_fileSizeInBytesHasBeenSet = false;

    int m_urlExpiryInSeconds;
    bool m_urlExpiryInSecondsHasBeenSet = false;

    FileUseCaseType m_fileUseCaseType;
    bool m_fileUseCaseTypeHasBeenSet = false;

    Aws::String m_associatedResourceArn;
    bool m_associatedResourceArnHasBeenSet = false;

    CreatedByInfo m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
