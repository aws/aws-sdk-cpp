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
   * <p> An entity that defines the scope of audit evidence collected by Audit
   * Manager. An Audit Manager assessment is an implementation of an Audit Manager
   * framework. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/Assessment">AWS
   * API Reference</a></p>
   */
  class Assessment
  {
  public:
    AWS_AUDITMANAGER_API Assessment() = default;
    AWS_AUDITMANAGER_API Assessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Assessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the assessment. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Assessment& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account that's associated with the assessment. </p>
     */
    inline const AWSAccount& GetAwsAccount() const { return m_awsAccount; }
    inline bool AwsAccountHasBeenSet() const { return m_awsAccountHasBeenSet; }
    template<typename AwsAccountT = AWSAccount>
    void SetAwsAccount(AwsAccountT&& value) { m_awsAccountHasBeenSet = true; m_awsAccount = std::forward<AwsAccountT>(value); }
    template<typename AwsAccountT = AWSAccount>
    Assessment& WithAwsAccount(AwsAccountT&& value) { SetAwsAccount(std::forward<AwsAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The metadata for the assessment. </p>
     */
    inline const AssessmentMetadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = AssessmentMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = AssessmentMetadata>
    Assessment& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The framework that the assessment was created from. </p>
     */
    inline const AssessmentFramework& GetFramework() const { return m_framework; }
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }
    template<typename FrameworkT = AssessmentFramework>
    void SetFramework(FrameworkT&& value) { m_frameworkHasBeenSet = true; m_framework = std::forward<FrameworkT>(value); }
    template<typename FrameworkT = AssessmentFramework>
    Assessment& WithFramework(FrameworkT&& value) { SetFramework(std::forward<FrameworkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The tags that are associated with the assessment. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Assessment& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Assessment& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    AWSAccount m_awsAccount;
    bool m_awsAccountHasBeenSet = false;

    AssessmentMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    AssessmentFramework m_framework;
    bool m_frameworkHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
