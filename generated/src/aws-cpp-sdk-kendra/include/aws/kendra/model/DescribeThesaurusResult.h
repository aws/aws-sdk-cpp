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
    AWS_KENDRA_API DescribeThesaurusResult();
    AWS_KENDRA_API DescribeThesaurusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API DescribeThesaurusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the thesaurus.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the thesaurus.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the thesaurus.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the thesaurus.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the thesaurus.</p>
     */
    inline DescribeThesaurusResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the thesaurus.</p>
     */
    inline DescribeThesaurusResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the thesaurus.</p>
     */
    inline DescribeThesaurusResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The identifier of the index for the thesaurus.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index for the thesaurus.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexId = value; }

    /**
     * <p>The identifier of the index for the thesaurus.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index for the thesaurus.</p>
     */
    inline void SetIndexId(const char* value) { m_indexId.assign(value); }

    /**
     * <p>The identifier of the index for the thesaurus.</p>
     */
    inline DescribeThesaurusResult& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index for the thesaurus.</p>
     */
    inline DescribeThesaurusResult& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index for the thesaurus.</p>
     */
    inline DescribeThesaurusResult& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The thesaurus name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The thesaurus name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The thesaurus name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The thesaurus name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The thesaurus name.</p>
     */
    inline DescribeThesaurusResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The thesaurus name.</p>
     */
    inline DescribeThesaurusResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The thesaurus name.</p>
     */
    inline DescribeThesaurusResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The thesaurus description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The thesaurus description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The thesaurus description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The thesaurus description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The thesaurus description.</p>
     */
    inline DescribeThesaurusResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The thesaurus description.</p>
     */
    inline DescribeThesaurusResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The thesaurus description.</p>
     */
    inline DescribeThesaurusResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The current status of the thesaurus. When the value is <code>ACTIVE</code>,
     * queries are able to use the thesaurus. If the <code>Status</code> field value is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field provides more
     * information. </p> <p>If the status is <code>ACTIVE_BUT_UPDATE_FAILED</code>, it
     * means that Amazon Kendra could not ingest the new thesaurus file. The old
     * thesaurus file is still active. </p>
     */
    inline const ThesaurusStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the thesaurus. When the value is <code>ACTIVE</code>,
     * queries are able to use the thesaurus. If the <code>Status</code> field value is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field provides more
     * information. </p> <p>If the status is <code>ACTIVE_BUT_UPDATE_FAILED</code>, it
     * means that Amazon Kendra could not ingest the new thesaurus file. The old
     * thesaurus file is still active. </p>
     */
    inline void SetStatus(const ThesaurusStatus& value) { m_status = value; }

    /**
     * <p>The current status of the thesaurus. When the value is <code>ACTIVE</code>,
     * queries are able to use the thesaurus. If the <code>Status</code> field value is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field provides more
     * information. </p> <p>If the status is <code>ACTIVE_BUT_UPDATE_FAILED</code>, it
     * means that Amazon Kendra could not ingest the new thesaurus file. The old
     * thesaurus file is still active. </p>
     */
    inline void SetStatus(ThesaurusStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the thesaurus. When the value is <code>ACTIVE</code>,
     * queries are able to use the thesaurus. If the <code>Status</code> field value is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field provides more
     * information. </p> <p>If the status is <code>ACTIVE_BUT_UPDATE_FAILED</code>, it
     * means that Amazon Kendra could not ingest the new thesaurus file. The old
     * thesaurus file is still active. </p>
     */
    inline DescribeThesaurusResult& WithStatus(const ThesaurusStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the thesaurus. When the value is <code>ACTIVE</code>,
     * queries are able to use the thesaurus. If the <code>Status</code> field value is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field provides more
     * information. </p> <p>If the status is <code>ACTIVE_BUT_UPDATE_FAILED</code>, it
     * means that Amazon Kendra could not ingest the new thesaurus file. The old
     * thesaurus file is still active. </p>
     */
    inline DescribeThesaurusResult& WithStatus(ThesaurusStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field provides more information. </p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field provides more information. </p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field provides more information. </p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field provides more information. </p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field provides more information. </p>
     */
    inline DescribeThesaurusResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field provides more information. </p>
     */
    inline DescribeThesaurusResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field provides more information. </p>
     */
    inline DescribeThesaurusResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The Unix datetime that the thesaurus was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix datetime that the thesaurus was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The Unix datetime that the thesaurus was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The Unix datetime that the thesaurus was created.</p>
     */
    inline DescribeThesaurusResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix datetime that the thesaurus was created.</p>
     */
    inline DescribeThesaurusResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Unix datetime that the thesaurus was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The Unix datetime that the thesaurus was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The Unix datetime that the thesaurus was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The Unix datetime that the thesaurus was last updated.</p>
     */
    inline DescribeThesaurusResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The Unix datetime that the thesaurus was last updated.</p>
     */
    inline DescribeThesaurusResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>. </p>
     */
    inline DescribeThesaurusResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>. </p>
     */
    inline DescribeThesaurusResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>. </p>
     */
    inline DescribeThesaurusResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    
    inline const S3Path& GetSourceS3Path() const{ return m_sourceS3Path; }

    
    inline void SetSourceS3Path(const S3Path& value) { m_sourceS3Path = value; }

    
    inline void SetSourceS3Path(S3Path&& value) { m_sourceS3Path = std::move(value); }

    
    inline DescribeThesaurusResult& WithSourceS3Path(const S3Path& value) { SetSourceS3Path(value); return *this;}

    
    inline DescribeThesaurusResult& WithSourceS3Path(S3Path&& value) { SetSourceS3Path(std::move(value)); return *this;}


    /**
     * <p>The size of the thesaurus file in bytes.</p>
     */
    inline long long GetFileSizeBytes() const{ return m_fileSizeBytes; }

    /**
     * <p>The size of the thesaurus file in bytes.</p>
     */
    inline void SetFileSizeBytes(long long value) { m_fileSizeBytes = value; }

    /**
     * <p>The size of the thesaurus file in bytes.</p>
     */
    inline DescribeThesaurusResult& WithFileSizeBytes(long long value) { SetFileSizeBytes(value); return *this;}


    /**
     * <p>The number of unique terms in the thesaurus file. For example, the synonyms
     * <code>a,b,c</code> and <code>a=&gt;d</code>, the term count would be 4. </p>
     */
    inline long long GetTermCount() const{ return m_termCount; }

    /**
     * <p>The number of unique terms in the thesaurus file. For example, the synonyms
     * <code>a,b,c</code> and <code>a=&gt;d</code>, the term count would be 4. </p>
     */
    inline void SetTermCount(long long value) { m_termCount = value; }

    /**
     * <p>The number of unique terms in the thesaurus file. For example, the synonyms
     * <code>a,b,c</code> and <code>a=&gt;d</code>, the term count would be 4. </p>
     */
    inline DescribeThesaurusResult& WithTermCount(long long value) { SetTermCount(value); return *this;}


    /**
     * <p>The number of synonym rules in the thesaurus file.</p>
     */
    inline long long GetSynonymRuleCount() const{ return m_synonymRuleCount; }

    /**
     * <p>The number of synonym rules in the thesaurus file.</p>
     */
    inline void SetSynonymRuleCount(long long value) { m_synonymRuleCount = value; }

    /**
     * <p>The number of synonym rules in the thesaurus file.</p>
     */
    inline DescribeThesaurusResult& WithSynonymRuleCount(long long value) { SetSynonymRuleCount(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_indexId;

    Aws::String m_name;

    Aws::String m_description;

    ThesaurusStatus m_status;

    Aws::String m_errorMessage;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_roleArn;

    S3Path m_sourceS3Path;

    long long m_fileSizeBytes;

    long long m_termCount;

    long long m_synonymRuleCount;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
