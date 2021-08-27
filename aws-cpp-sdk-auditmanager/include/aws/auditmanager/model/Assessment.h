/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/AWSAccount.h>
#include <aws/auditmanager/model/AssessmentMetadata.h>
#include <aws/auditmanager/model/AssessmentFramework.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> An entity that defines the scope of audit evidence collected by AWS Audit
   * Manager. An AWS Audit Manager assessment is an implementation of an AWS Audit
   * Manager framework. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/Assessment">AWS
   * API Reference</a></p>
   */
  class AWS_AUDITMANAGER_API Assessment
  {
  public:
    Assessment();
    Assessment(Aws::Utils::Json::JsonView jsonValue);
    Assessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) of the assessment. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the assessment. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the assessment. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the assessment. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the assessment. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the assessment. </p>
     */
    inline Assessment& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the assessment. </p>
     */
    inline Assessment& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the assessment. </p>
     */
    inline Assessment& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The AWS account associated with the assessment. </p>
     */
    inline const AWSAccount& GetAwsAccount() const{ return m_awsAccount; }

    /**
     * <p> The AWS account associated with the assessment. </p>
     */
    inline bool AwsAccountHasBeenSet() const { return m_awsAccountHasBeenSet; }

    /**
     * <p> The AWS account associated with the assessment. </p>
     */
    inline void SetAwsAccount(const AWSAccount& value) { m_awsAccountHasBeenSet = true; m_awsAccount = value; }

    /**
     * <p> The AWS account associated with the assessment. </p>
     */
    inline void SetAwsAccount(AWSAccount&& value) { m_awsAccountHasBeenSet = true; m_awsAccount = std::move(value); }

    /**
     * <p> The AWS account associated with the assessment. </p>
     */
    inline Assessment& WithAwsAccount(const AWSAccount& value) { SetAwsAccount(value); return *this;}

    /**
     * <p> The AWS account associated with the assessment. </p>
     */
    inline Assessment& WithAwsAccount(AWSAccount&& value) { SetAwsAccount(std::move(value)); return *this;}


    /**
     * <p> The metadata for the specified assessment. </p>
     */
    inline const AssessmentMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p> The metadata for the specified assessment. </p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p> The metadata for the specified assessment. </p>
     */
    inline void SetMetadata(const AssessmentMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p> The metadata for the specified assessment. </p>
     */
    inline void SetMetadata(AssessmentMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p> The metadata for the specified assessment. </p>
     */
    inline Assessment& WithMetadata(const AssessmentMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p> The metadata for the specified assessment. </p>
     */
    inline Assessment& WithMetadata(AssessmentMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p> The framework from which the assessment was created. </p>
     */
    inline const AssessmentFramework& GetFramework() const{ return m_framework; }

    /**
     * <p> The framework from which the assessment was created. </p>
     */
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }

    /**
     * <p> The framework from which the assessment was created. </p>
     */
    inline void SetFramework(const AssessmentFramework& value) { m_frameworkHasBeenSet = true; m_framework = value; }

    /**
     * <p> The framework from which the assessment was created. </p>
     */
    inline void SetFramework(AssessmentFramework&& value) { m_frameworkHasBeenSet = true; m_framework = std::move(value); }

    /**
     * <p> The framework from which the assessment was created. </p>
     */
    inline Assessment& WithFramework(const AssessmentFramework& value) { SetFramework(value); return *this;}

    /**
     * <p> The framework from which the assessment was created. </p>
     */
    inline Assessment& WithFramework(AssessmentFramework&& value) { SetFramework(std::move(value)); return *this;}


    /**
     * <p> The tags associated with the assessment. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> The tags associated with the assessment. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> The tags associated with the assessment. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> The tags associated with the assessment. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> The tags associated with the assessment. </p>
     */
    inline Assessment& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> The tags associated with the assessment. </p>
     */
    inline Assessment& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The tags associated with the assessment. </p>
     */
    inline Assessment& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> The tags associated with the assessment. </p>
     */
    inline Assessment& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags associated with the assessment. </p>
     */
    inline Assessment& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags associated with the assessment. </p>
     */
    inline Assessment& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The tags associated with the assessment. </p>
     */
    inline Assessment& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags associated with the assessment. </p>
     */
    inline Assessment& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags associated with the assessment. </p>
     */
    inline Assessment& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    AWSAccount m_awsAccount;
    bool m_awsAccountHasBeenSet;

    AssessmentMetadata m_metadata;
    bool m_metadataHasBeenSet;

    AssessmentFramework m_framework;
    bool m_frameworkHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
