/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/secretsmanager/model/RotationRulesType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/secretsmanager/model/Tag.h>
#include <aws/secretsmanager/model/ReplicationStatusType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecretsManager
{
namespace Model
{
  class AWS_SECRETSMANAGER_API DescribeSecretResult
  {
  public:
    DescribeSecretResult();
    DescribeSecretResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeSecretResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the secret.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The ARN of the secret.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRN = value; }

    /**
     * <p>The ARN of the secret.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }

    /**
     * <p>The ARN of the secret.</p>
     */
    inline void SetARN(const char* value) { m_aRN.assign(value); }

    /**
     * <p>The ARN of the secret.</p>
     */
    inline DescribeSecretResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The ARN of the secret.</p>
     */
    inline DescribeSecretResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the secret.</p>
     */
    inline DescribeSecretResult& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The user-provided friendly name of the secret.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The user-provided friendly name of the secret.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The user-provided friendly name of the secret.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The user-provided friendly name of the secret.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The user-provided friendly name of the secret.</p>
     */
    inline DescribeSecretResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The user-provided friendly name of the secret.</p>
     */
    inline DescribeSecretResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The user-provided friendly name of the secret.</p>
     */
    inline DescribeSecretResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline DescribeSecretResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline DescribeSecretResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The user-provided description of the secret.</p>
     */
    inline DescribeSecretResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN or alias of the AWS KMS customer master key (CMK) that's used to
     * encrypt the <code>SecretString</code> or <code>SecretBinary</code> fields in
     * each version of the secret. If you don't provide a key, then Secrets Manager
     * defaults to encrypting the secret fields with the default AWS KMS CMK (the one
     * named <code>awssecretsmanager</code>) for this account.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ARN or alias of the AWS KMS customer master key (CMK) that's used to
     * encrypt the <code>SecretString</code> or <code>SecretBinary</code> fields in
     * each version of the secret. If you don't provide a key, then Secrets Manager
     * defaults to encrypting the secret fields with the default AWS KMS CMK (the one
     * named <code>awssecretsmanager</code>) for this account.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p>The ARN or alias of the AWS KMS customer master key (CMK) that's used to
     * encrypt the <code>SecretString</code> or <code>SecretBinary</code> fields in
     * each version of the secret. If you don't provide a key, then Secrets Manager
     * defaults to encrypting the secret fields with the default AWS KMS CMK (the one
     * named <code>awssecretsmanager</code>) for this account.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p>The ARN or alias of the AWS KMS customer master key (CMK) that's used to
     * encrypt the <code>SecretString</code> or <code>SecretBinary</code> fields in
     * each version of the secret. If you don't provide a key, then Secrets Manager
     * defaults to encrypting the secret fields with the default AWS KMS CMK (the one
     * named <code>awssecretsmanager</code>) for this account.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p>The ARN or alias of the AWS KMS customer master key (CMK) that's used to
     * encrypt the <code>SecretString</code> or <code>SecretBinary</code> fields in
     * each version of the secret. If you don't provide a key, then Secrets Manager
     * defaults to encrypting the secret fields with the default AWS KMS CMK (the one
     * named <code>awssecretsmanager</code>) for this account.</p>
     */
    inline DescribeSecretResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ARN or alias of the AWS KMS customer master key (CMK) that's used to
     * encrypt the <code>SecretString</code> or <code>SecretBinary</code> fields in
     * each version of the secret. If you don't provide a key, then Secrets Manager
     * defaults to encrypting the secret fields with the default AWS KMS CMK (the one
     * named <code>awssecretsmanager</code>) for this account.</p>
     */
    inline DescribeSecretResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ARN or alias of the AWS KMS customer master key (CMK) that's used to
     * encrypt the <code>SecretString</code> or <code>SecretBinary</code> fields in
     * each version of the secret. If you don't provide a key, then Secrets Manager
     * defaults to encrypting the secret fields with the default AWS KMS CMK (the one
     * named <code>awssecretsmanager</code>) for this account.</p>
     */
    inline DescribeSecretResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Specifies whether automatic rotation is enabled for this secret.</p> <p>To
     * enable rotation, use <a>RotateSecret</a> with
     * <code>AutomaticallyRotateAfterDays</code> set to a value greater than 0. To
     * disable rotation, use <a>CancelRotateSecret</a>.</p>
     */
    inline bool GetRotationEnabled() const{ return m_rotationEnabled; }

    /**
     * <p>Specifies whether automatic rotation is enabled for this secret.</p> <p>To
     * enable rotation, use <a>RotateSecret</a> with
     * <code>AutomaticallyRotateAfterDays</code> set to a value greater than 0. To
     * disable rotation, use <a>CancelRotateSecret</a>.</p>
     */
    inline void SetRotationEnabled(bool value) { m_rotationEnabled = value; }

    /**
     * <p>Specifies whether automatic rotation is enabled for this secret.</p> <p>To
     * enable rotation, use <a>RotateSecret</a> with
     * <code>AutomaticallyRotateAfterDays</code> set to a value greater than 0. To
     * disable rotation, use <a>CancelRotateSecret</a>.</p>
     */
    inline DescribeSecretResult& WithRotationEnabled(bool value) { SetRotationEnabled(value); return *this;}


    /**
     * <p>The ARN of a Lambda function that's invoked by Secrets Manager to rotate the
     * secret either automatically per the schedule or manually by a call to
     * <code>RotateSecret</code>.</p>
     */
    inline const Aws::String& GetRotationLambdaARN() const{ return m_rotationLambdaARN; }

    /**
     * <p>The ARN of a Lambda function that's invoked by Secrets Manager to rotate the
     * secret either automatically per the schedule or manually by a call to
     * <code>RotateSecret</code>.</p>
     */
    inline void SetRotationLambdaARN(const Aws::String& value) { m_rotationLambdaARN = value; }

    /**
     * <p>The ARN of a Lambda function that's invoked by Secrets Manager to rotate the
     * secret either automatically per the schedule or manually by a call to
     * <code>RotateSecret</code>.</p>
     */
    inline void SetRotationLambdaARN(Aws::String&& value) { m_rotationLambdaARN = std::move(value); }

    /**
     * <p>The ARN of a Lambda function that's invoked by Secrets Manager to rotate the
     * secret either automatically per the schedule or manually by a call to
     * <code>RotateSecret</code>.</p>
     */
    inline void SetRotationLambdaARN(const char* value) { m_rotationLambdaARN.assign(value); }

    /**
     * <p>The ARN of a Lambda function that's invoked by Secrets Manager to rotate the
     * secret either automatically per the schedule or manually by a call to
     * <code>RotateSecret</code>.</p>
     */
    inline DescribeSecretResult& WithRotationLambdaARN(const Aws::String& value) { SetRotationLambdaARN(value); return *this;}

    /**
     * <p>The ARN of a Lambda function that's invoked by Secrets Manager to rotate the
     * secret either automatically per the schedule or manually by a call to
     * <code>RotateSecret</code>.</p>
     */
    inline DescribeSecretResult& WithRotationLambdaARN(Aws::String&& value) { SetRotationLambdaARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of a Lambda function that's invoked by Secrets Manager to rotate the
     * secret either automatically per the schedule or manually by a call to
     * <code>RotateSecret</code>.</p>
     */
    inline DescribeSecretResult& WithRotationLambdaARN(const char* value) { SetRotationLambdaARN(value); return *this;}


    /**
     * <p>A structure with the rotation configuration for this secret.</p>
     */
    inline const RotationRulesType& GetRotationRules() const{ return m_rotationRules; }

    /**
     * <p>A structure with the rotation configuration for this secret.</p>
     */
    inline void SetRotationRules(const RotationRulesType& value) { m_rotationRules = value; }

    /**
     * <p>A structure with the rotation configuration for this secret.</p>
     */
    inline void SetRotationRules(RotationRulesType&& value) { m_rotationRules = std::move(value); }

    /**
     * <p>A structure with the rotation configuration for this secret.</p>
     */
    inline DescribeSecretResult& WithRotationRules(const RotationRulesType& value) { SetRotationRules(value); return *this;}

    /**
     * <p>A structure with the rotation configuration for this secret.</p>
     */
    inline DescribeSecretResult& WithRotationRules(RotationRulesType&& value) { SetRotationRules(std::move(value)); return *this;}


    /**
     * <p>The last date and time that the rotation process for this secret was
     * invoked.</p> <p>The most recent date and time that the Secrets Manager rotation
     * process successfully completed. If the secret doesn't rotate, Secrets Manager
     * returns a null value.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRotatedDate() const{ return m_lastRotatedDate; }

    /**
     * <p>The last date and time that the rotation process for this secret was
     * invoked.</p> <p>The most recent date and time that the Secrets Manager rotation
     * process successfully completed. If the secret doesn't rotate, Secrets Manager
     * returns a null value.</p>
     */
    inline void SetLastRotatedDate(const Aws::Utils::DateTime& value) { m_lastRotatedDate = value; }

    /**
     * <p>The last date and time that the rotation process for this secret was
     * invoked.</p> <p>The most recent date and time that the Secrets Manager rotation
     * process successfully completed. If the secret doesn't rotate, Secrets Manager
     * returns a null value.</p>
     */
    inline void SetLastRotatedDate(Aws::Utils::DateTime&& value) { m_lastRotatedDate = std::move(value); }

    /**
     * <p>The last date and time that the rotation process for this secret was
     * invoked.</p> <p>The most recent date and time that the Secrets Manager rotation
     * process successfully completed. If the secret doesn't rotate, Secrets Manager
     * returns a null value.</p>
     */
    inline DescribeSecretResult& WithLastRotatedDate(const Aws::Utils::DateTime& value) { SetLastRotatedDate(value); return *this;}

    /**
     * <p>The last date and time that the rotation process for this secret was
     * invoked.</p> <p>The most recent date and time that the Secrets Manager rotation
     * process successfully completed. If the secret doesn't rotate, Secrets Manager
     * returns a null value.</p>
     */
    inline DescribeSecretResult& WithLastRotatedDate(Aws::Utils::DateTime&& value) { SetLastRotatedDate(std::move(value)); return *this;}


    /**
     * <p>The last date and time that this secret was modified in any way.</p>
     */
    inline const Aws::Utils::DateTime& GetLastChangedDate() const{ return m_lastChangedDate; }

    /**
     * <p>The last date and time that this secret was modified in any way.</p>
     */
    inline void SetLastChangedDate(const Aws::Utils::DateTime& value) { m_lastChangedDate = value; }

    /**
     * <p>The last date and time that this secret was modified in any way.</p>
     */
    inline void SetLastChangedDate(Aws::Utils::DateTime&& value) { m_lastChangedDate = std::move(value); }

    /**
     * <p>The last date and time that this secret was modified in any way.</p>
     */
    inline DescribeSecretResult& WithLastChangedDate(const Aws::Utils::DateTime& value) { SetLastChangedDate(value); return *this;}

    /**
     * <p>The last date and time that this secret was modified in any way.</p>
     */
    inline DescribeSecretResult& WithLastChangedDate(Aws::Utils::DateTime&& value) { SetLastChangedDate(std::move(value)); return *this;}


    /**
     * <p>The last date that this secret was accessed. This value is truncated to
     * midnight of the date and therefore shows only the date, not the time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessedDate() const{ return m_lastAccessedDate; }

    /**
     * <p>The last date that this secret was accessed. This value is truncated to
     * midnight of the date and therefore shows only the date, not the time.</p>
     */
    inline void SetLastAccessedDate(const Aws::Utils::DateTime& value) { m_lastAccessedDate = value; }

    /**
     * <p>The last date that this secret was accessed. This value is truncated to
     * midnight of the date and therefore shows only the date, not the time.</p>
     */
    inline void SetLastAccessedDate(Aws::Utils::DateTime&& value) { m_lastAccessedDate = std::move(value); }

    /**
     * <p>The last date that this secret was accessed. This value is truncated to
     * midnight of the date and therefore shows only the date, not the time.</p>
     */
    inline DescribeSecretResult& WithLastAccessedDate(const Aws::Utils::DateTime& value) { SetLastAccessedDate(value); return *this;}

    /**
     * <p>The last date that this secret was accessed. This value is truncated to
     * midnight of the date and therefore shows only the date, not the time.</p>
     */
    inline DescribeSecretResult& WithLastAccessedDate(Aws::Utils::DateTime&& value) { SetLastAccessedDate(std::move(value)); return *this;}


    /**
     * <p>This value exists if the secret is scheduled for deletion. Some time after
     * the specified date and time, Secrets Manager deletes the secret and all of its
     * versions.</p> <p>If a secret is scheduled for deletion, then its details,
     * including the encrypted secret information, is not accessible. To cancel a
     * scheduled deletion and restore access, use <a>RestoreSecret</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletedDate() const{ return m_deletedDate; }

    /**
     * <p>This value exists if the secret is scheduled for deletion. Some time after
     * the specified date and time, Secrets Manager deletes the secret and all of its
     * versions.</p> <p>If a secret is scheduled for deletion, then its details,
     * including the encrypted secret information, is not accessible. To cancel a
     * scheduled deletion and restore access, use <a>RestoreSecret</a>.</p>
     */
    inline void SetDeletedDate(const Aws::Utils::DateTime& value) { m_deletedDate = value; }

    /**
     * <p>This value exists if the secret is scheduled for deletion. Some time after
     * the specified date and time, Secrets Manager deletes the secret and all of its
     * versions.</p> <p>If a secret is scheduled for deletion, then its details,
     * including the encrypted secret information, is not accessible. To cancel a
     * scheduled deletion and restore access, use <a>RestoreSecret</a>.</p>
     */
    inline void SetDeletedDate(Aws::Utils::DateTime&& value) { m_deletedDate = std::move(value); }

    /**
     * <p>This value exists if the secret is scheduled for deletion. Some time after
     * the specified date and time, Secrets Manager deletes the secret and all of its
     * versions.</p> <p>If a secret is scheduled for deletion, then its details,
     * including the encrypted secret information, is not accessible. To cancel a
     * scheduled deletion and restore access, use <a>RestoreSecret</a>.</p>
     */
    inline DescribeSecretResult& WithDeletedDate(const Aws::Utils::DateTime& value) { SetDeletedDate(value); return *this;}

    /**
     * <p>This value exists if the secret is scheduled for deletion. Some time after
     * the specified date and time, Secrets Manager deletes the secret and all of its
     * versions.</p> <p>If a secret is scheduled for deletion, then its details,
     * including the encrypted secret information, is not accessible. To cancel a
     * scheduled deletion and restore access, use <a>RestoreSecret</a>.</p>
     */
    inline DescribeSecretResult& WithDeletedDate(Aws::Utils::DateTime&& value) { SetDeletedDate(std::move(value)); return *this;}


    /**
     * <p>The list of user-defined tags that are associated with the secret. To add
     * tags to a secret, use <a>TagResource</a>. To remove tags, use
     * <a>UntagResource</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of user-defined tags that are associated with the secret. To add
     * tags to a secret, use <a>TagResource</a>. To remove tags, use
     * <a>UntagResource</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>The list of user-defined tags that are associated with the secret. To add
     * tags to a secret, use <a>TagResource</a>. To remove tags, use
     * <a>UntagResource</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>The list of user-defined tags that are associated with the secret. To add
     * tags to a secret, use <a>TagResource</a>. To remove tags, use
     * <a>UntagResource</a>.</p>
     */
    inline DescribeSecretResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of user-defined tags that are associated with the secret. To add
     * tags to a secret, use <a>TagResource</a>. To remove tags, use
     * <a>UntagResource</a>.</p>
     */
    inline DescribeSecretResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of user-defined tags that are associated with the secret. To add
     * tags to a secret, use <a>TagResource</a>. To remove tags, use
     * <a>UntagResource</a>.</p>
     */
    inline DescribeSecretResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>The list of user-defined tags that are associated with the secret. To add
     * tags to a secret, use <a>TagResource</a>. To remove tags, use
     * <a>UntagResource</a>.</p>
     */
    inline DescribeSecretResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of all of the currently assigned <code>VersionStage</code> staging
     * labels and the <code>VersionId</code> that each is attached to. Staging labels
     * are used to keep track of the different versions during the rotation
     * process.</p>  <p>A version that does not have any staging labels attached
     * is considered deprecated and subject to deletion. Such versions are not included
     * in this list.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetVersionIdsToStages() const{ return m_versionIdsToStages; }

    /**
     * <p>A list of all of the currently assigned <code>VersionStage</code> staging
     * labels and the <code>VersionId</code> that each is attached to. Staging labels
     * are used to keep track of the different versions during the rotation
     * process.</p>  <p>A version that does not have any staging labels attached
     * is considered deprecated and subject to deletion. Such versions are not included
     * in this list.</p> 
     */
    inline void SetVersionIdsToStages(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_versionIdsToStages = value; }

    /**
     * <p>A list of all of the currently assigned <code>VersionStage</code> staging
     * labels and the <code>VersionId</code> that each is attached to. Staging labels
     * are used to keep track of the different versions during the rotation
     * process.</p>  <p>A version that does not have any staging labels attached
     * is considered deprecated and subject to deletion. Such versions are not included
     * in this list.</p> 
     */
    inline void SetVersionIdsToStages(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_versionIdsToStages = std::move(value); }

    /**
     * <p>A list of all of the currently assigned <code>VersionStage</code> staging
     * labels and the <code>VersionId</code> that each is attached to. Staging labels
     * are used to keep track of the different versions during the rotation
     * process.</p>  <p>A version that does not have any staging labels attached
     * is considered deprecated and subject to deletion. Such versions are not included
     * in this list.</p> 
     */
    inline DescribeSecretResult& WithVersionIdsToStages(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetVersionIdsToStages(value); return *this;}

    /**
     * <p>A list of all of the currently assigned <code>VersionStage</code> staging
     * labels and the <code>VersionId</code> that each is attached to. Staging labels
     * are used to keep track of the different versions during the rotation
     * process.</p>  <p>A version that does not have any staging labels attached
     * is considered deprecated and subject to deletion. Such versions are not included
     * in this list.</p> 
     */
    inline DescribeSecretResult& WithVersionIdsToStages(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetVersionIdsToStages(std::move(value)); return *this;}

    /**
     * <p>A list of all of the currently assigned <code>VersionStage</code> staging
     * labels and the <code>VersionId</code> that each is attached to. Staging labels
     * are used to keep track of the different versions during the rotation
     * process.</p>  <p>A version that does not have any staging labels attached
     * is considered deprecated and subject to deletion. Such versions are not included
     * in this list.</p> 
     */
    inline DescribeSecretResult& AddVersionIdsToStages(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_versionIdsToStages.emplace(key, value); return *this; }

    /**
     * <p>A list of all of the currently assigned <code>VersionStage</code> staging
     * labels and the <code>VersionId</code> that each is attached to. Staging labels
     * are used to keep track of the different versions during the rotation
     * process.</p>  <p>A version that does not have any staging labels attached
     * is considered deprecated and subject to deletion. Such versions are not included
     * in this list.</p> 
     */
    inline DescribeSecretResult& AddVersionIdsToStages(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_versionIdsToStages.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of all of the currently assigned <code>VersionStage</code> staging
     * labels and the <code>VersionId</code> that each is attached to. Staging labels
     * are used to keep track of the different versions during the rotation
     * process.</p>  <p>A version that does not have any staging labels attached
     * is considered deprecated and subject to deletion. Such versions are not included
     * in this list.</p> 
     */
    inline DescribeSecretResult& AddVersionIdsToStages(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_versionIdsToStages.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of all of the currently assigned <code>VersionStage</code> staging
     * labels and the <code>VersionId</code> that each is attached to. Staging labels
     * are used to keep track of the different versions during the rotation
     * process.</p>  <p>A version that does not have any staging labels attached
     * is considered deprecated and subject to deletion. Such versions are not included
     * in this list.</p> 
     */
    inline DescribeSecretResult& AddVersionIdsToStages(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_versionIdsToStages.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of all of the currently assigned <code>VersionStage</code> staging
     * labels and the <code>VersionId</code> that each is attached to. Staging labels
     * are used to keep track of the different versions during the rotation
     * process.</p>  <p>A version that does not have any staging labels attached
     * is considered deprecated and subject to deletion. Such versions are not included
     * in this list.</p> 
     */
    inline DescribeSecretResult& AddVersionIdsToStages(const char* key, Aws::Vector<Aws::String>&& value) { m_versionIdsToStages.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of all of the currently assigned <code>VersionStage</code> staging
     * labels and the <code>VersionId</code> that each is attached to. Staging labels
     * are used to keep track of the different versions during the rotation
     * process.</p>  <p>A version that does not have any staging labels attached
     * is considered deprecated and subject to deletion. Such versions are not included
     * in this list.</p> 
     */
    inline DescribeSecretResult& AddVersionIdsToStages(const char* key, const Aws::Vector<Aws::String>& value) { m_versionIdsToStages.emplace(key, value); return *this; }


    /**
     * <p>Returns the name of the service that created this secret.</p>
     */
    inline const Aws::String& GetOwningService() const{ return m_owningService; }

    /**
     * <p>Returns the name of the service that created this secret.</p>
     */
    inline void SetOwningService(const Aws::String& value) { m_owningService = value; }

    /**
     * <p>Returns the name of the service that created this secret.</p>
     */
    inline void SetOwningService(Aws::String&& value) { m_owningService = std::move(value); }

    /**
     * <p>Returns the name of the service that created this secret.</p>
     */
    inline void SetOwningService(const char* value) { m_owningService.assign(value); }

    /**
     * <p>Returns the name of the service that created this secret.</p>
     */
    inline DescribeSecretResult& WithOwningService(const Aws::String& value) { SetOwningService(value); return *this;}

    /**
     * <p>Returns the name of the service that created this secret.</p>
     */
    inline DescribeSecretResult& WithOwningService(Aws::String&& value) { SetOwningService(std::move(value)); return *this;}

    /**
     * <p>Returns the name of the service that created this secret.</p>
     */
    inline DescribeSecretResult& WithOwningService(const char* value) { SetOwningService(value); return *this;}


    /**
     * <p>The date you created the secret.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date you created the secret.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date you created the secret.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date you created the secret.</p>
     */
    inline DescribeSecretResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date you created the secret.</p>
     */
    inline DescribeSecretResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>Specifies the primary region for secret replication. </p>
     */
    inline const Aws::String& GetPrimaryRegion() const{ return m_primaryRegion; }

    /**
     * <p>Specifies the primary region for secret replication. </p>
     */
    inline void SetPrimaryRegion(const Aws::String& value) { m_primaryRegion = value; }

    /**
     * <p>Specifies the primary region for secret replication. </p>
     */
    inline void SetPrimaryRegion(Aws::String&& value) { m_primaryRegion = std::move(value); }

    /**
     * <p>Specifies the primary region for secret replication. </p>
     */
    inline void SetPrimaryRegion(const char* value) { m_primaryRegion.assign(value); }

    /**
     * <p>Specifies the primary region for secret replication. </p>
     */
    inline DescribeSecretResult& WithPrimaryRegion(const Aws::String& value) { SetPrimaryRegion(value); return *this;}

    /**
     * <p>Specifies the primary region for secret replication. </p>
     */
    inline DescribeSecretResult& WithPrimaryRegion(Aws::String&& value) { SetPrimaryRegion(std::move(value)); return *this;}

    /**
     * <p>Specifies the primary region for secret replication. </p>
     */
    inline DescribeSecretResult& WithPrimaryRegion(const char* value) { SetPrimaryRegion(value); return *this;}


    /**
     * <p>Describes a list of replication status objects as <code>InProgress</code>,
     * <code>Failed</code> or <code>InSync</code>.<code>P</code> </p>
     */
    inline const Aws::Vector<ReplicationStatusType>& GetReplicationStatus() const{ return m_replicationStatus; }

    /**
     * <p>Describes a list of replication status objects as <code>InProgress</code>,
     * <code>Failed</code> or <code>InSync</code>.<code>P</code> </p>
     */
    inline void SetReplicationStatus(const Aws::Vector<ReplicationStatusType>& value) { m_replicationStatus = value; }

    /**
     * <p>Describes a list of replication status objects as <code>InProgress</code>,
     * <code>Failed</code> or <code>InSync</code>.<code>P</code> </p>
     */
    inline void SetReplicationStatus(Aws::Vector<ReplicationStatusType>&& value) { m_replicationStatus = std::move(value); }

    /**
     * <p>Describes a list of replication status objects as <code>InProgress</code>,
     * <code>Failed</code> or <code>InSync</code>.<code>P</code> </p>
     */
    inline DescribeSecretResult& WithReplicationStatus(const Aws::Vector<ReplicationStatusType>& value) { SetReplicationStatus(value); return *this;}

    /**
     * <p>Describes a list of replication status objects as <code>InProgress</code>,
     * <code>Failed</code> or <code>InSync</code>.<code>P</code> </p>
     */
    inline DescribeSecretResult& WithReplicationStatus(Aws::Vector<ReplicationStatusType>&& value) { SetReplicationStatus(std::move(value)); return *this;}

    /**
     * <p>Describes a list of replication status objects as <code>InProgress</code>,
     * <code>Failed</code> or <code>InSync</code>.<code>P</code> </p>
     */
    inline DescribeSecretResult& AddReplicationStatus(const ReplicationStatusType& value) { m_replicationStatus.push_back(value); return *this; }

    /**
     * <p>Describes a list of replication status objects as <code>InProgress</code>,
     * <code>Failed</code> or <code>InSync</code>.<code>P</code> </p>
     */
    inline DescribeSecretResult& AddReplicationStatus(ReplicationStatusType&& value) { m_replicationStatus.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_aRN;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_kmsKeyId;

    bool m_rotationEnabled;

    Aws::String m_rotationLambdaARN;

    RotationRulesType m_rotationRules;

    Aws::Utils::DateTime m_lastRotatedDate;

    Aws::Utils::DateTime m_lastChangedDate;

    Aws::Utils::DateTime m_lastAccessedDate;

    Aws::Utils::DateTime m_deletedDate;

    Aws::Vector<Tag> m_tags;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_versionIdsToStages;

    Aws::String m_owningService;

    Aws::Utils::DateTime m_createdDate;

    Aws::String m_primaryRegion;

    Aws::Vector<ReplicationStatusType> m_replicationStatus;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
