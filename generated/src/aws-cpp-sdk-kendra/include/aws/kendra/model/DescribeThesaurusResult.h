/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/ThesaurusStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kendra/model/S3Path.h>
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
namespace kendra
{
namespace Model
{
  class DescribeThesaurusResult
  {
  public:
    AWS_KENDRA_API DescribeThesaurusResult() = default;
    AWS_KENDRA_API DescribeThesaurusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API DescribeThesaurusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the thesaurus.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DescribeThesaurusResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the index for the thesaurus.</p>
     */
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    DescribeThesaurusResult& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thesaurus name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeThesaurusResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thesaurus description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeThesaurusResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the thesaurus. When the value is <code>ACTIVE</code>,
     * queries are able to use the thesaurus. If the <code>Status</code> field value is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field provides more
     * information. </p> <p>If the status is <code>ACTIVE_BUT_UPDATE_FAILED</code>, it
     * means that Amazon Kendra could not ingest the new thesaurus file. The old
     * thesaurus file is still active. </p>
     */
    inline ThesaurusStatus GetStatus() const { return m_status; }
    inline void SetStatus(ThesaurusStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeThesaurusResult& WithStatus(ThesaurusStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field provides more information. </p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    DescribeThesaurusResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the thesaurus was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DescribeThesaurusResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the thesaurus was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    DescribeThesaurusResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>. </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeThesaurusResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3Path& GetSourceS3Path() const { return m_sourceS3Path; }
    template<typename SourceS3PathT = S3Path>
    void SetSourceS3Path(SourceS3PathT&& value) { m_sourceS3PathHasBeenSet = true; m_sourceS3Path = std::forward<SourceS3PathT>(value); }
    template<typename SourceS3PathT = S3Path>
    DescribeThesaurusResult& WithSourceS3Path(SourceS3PathT&& value) { SetSourceS3Path(std::forward<SourceS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the thesaurus file in bytes.</p>
     */
    inline long long GetFileSizeBytes() const { return m_fileSizeBytes; }
    inline void SetFileSizeBytes(long long value) { m_fileSizeBytesHasBeenSet = true; m_fileSizeBytes = value; }
    inline DescribeThesaurusResult& WithFileSizeBytes(long long value) { SetFileSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of unique terms in the thesaurus file. For example, the synonyms
     * <code>a,b,c</code> and <code>a=&gt;d</code>, the term count would be 4. </p>
     */
    inline long long GetTermCount() const { return m_termCount; }
    inline void SetTermCount(long long value) { m_termCountHasBeenSet = true; m_termCount = value; }
    inline DescribeThesaurusResult& WithTermCount(long long value) { SetTermCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of synonym rules in the thesaurus file.</p>
     */
    inline long long GetSynonymRuleCount() const { return m_synonymRuleCount; }
    inline void SetSynonymRuleCount(long long value) { m_synonymRuleCountHasBeenSet = true; m_synonymRuleCount = value; }
    inline DescribeThesaurusResult& WithSynonymRuleCount(long long value) { SetSynonymRuleCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeThesaurusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ThesaurusStatus m_status{ThesaurusStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    S3Path m_sourceS3Path;
    bool m_sourceS3PathHasBeenSet = false;

    long long m_fileSizeBytes{0};
    bool m_fileSizeBytesHasBeenSet = false;

    long long m_termCount{0};
    bool m_termCountHasBeenSet = false;

    long long m_synonymRuleCount{0};
    bool m_synonymRuleCountHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
