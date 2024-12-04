/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kendra/model/S3Path.h>
#include <aws/kendra/model/FaqStatus.h>
#include <aws/kendra/model/FaqFileFormat.h>
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
  class DescribeFaqResult
  {
  public:
    AWS_KENDRA_API DescribeFaqResult();
    AWS_KENDRA_API DescribeFaqResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API DescribeFaqResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the FAQ.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline DescribeFaqResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DescribeFaqResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DescribeFaqResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the index for the FAQ.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }
    inline void SetIndexId(const Aws::String& value) { m_indexId = value; }
    inline void SetIndexId(Aws::String&& value) { m_indexId = std::move(value); }
    inline void SetIndexId(const char* value) { m_indexId.assign(value); }
    inline DescribeFaqResult& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}
    inline DescribeFaqResult& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}
    inline DescribeFaqResult& WithIndexId(const char* value) { SetIndexId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that you gave the FAQ when it was created.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeFaqResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeFaqResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeFaqResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the FAQ that you provided when it was created.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeFaqResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeFaqResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeFaqResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the FAQ was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline DescribeFaqResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DescribeFaqResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the FAQ was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline DescribeFaqResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline DescribeFaqResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3Path& GetS3Path() const{ return m_s3Path; }
    inline void SetS3Path(const S3Path& value) { m_s3Path = value; }
    inline void SetS3Path(S3Path&& value) { m_s3Path = std::move(value); }
    inline DescribeFaqResult& WithS3Path(const S3Path& value) { SetS3Path(value); return *this;}
    inline DescribeFaqResult& WithS3Path(S3Path&& value) { SetS3Path(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the FAQ. It is ready to use when the status is
     * <code>ACTIVE</code>.</p>
     */
    inline const FaqStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const FaqStatus& value) { m_status = value; }
    inline void SetStatus(FaqStatus&& value) { m_status = std::move(value); }
    inline DescribeFaqResult& WithStatus(const FaqStatus& value) { SetStatus(value); return *this;}
    inline DescribeFaqResult& WithStatus(FaqStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that provides access to the S3
     * bucket containing the FAQ file.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeFaqResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeFaqResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeFaqResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>Status</code> field is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains the reason why the FAQ failed.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline DescribeFaqResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline DescribeFaqResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline DescribeFaqResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file format used for the FAQ file.</p>
     */
    inline const FaqFileFormat& GetFileFormat() const{ return m_fileFormat; }
    inline void SetFileFormat(const FaqFileFormat& value) { m_fileFormat = value; }
    inline void SetFileFormat(FaqFileFormat&& value) { m_fileFormat = std::move(value); }
    inline DescribeFaqResult& WithFileFormat(const FaqFileFormat& value) { SetFileFormat(value); return *this;}
    inline DescribeFaqResult& WithFileFormat(FaqFileFormat&& value) { SetFileFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code for a language. This shows a supported language for the FAQ
     * document. English is supported by default. For more information on supported
     * languages, including their codes, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-adding-languages.html">Adding
     * documents in languages other than English</a>.</p>
     */
    inline const Aws::String& GetLanguageCode() const{ return m_languageCode; }
    inline void SetLanguageCode(const Aws::String& value) { m_languageCode = value; }
    inline void SetLanguageCode(Aws::String&& value) { m_languageCode = std::move(value); }
    inline void SetLanguageCode(const char* value) { m_languageCode.assign(value); }
    inline DescribeFaqResult& WithLanguageCode(const Aws::String& value) { SetLanguageCode(value); return *this;}
    inline DescribeFaqResult& WithLanguageCode(Aws::String&& value) { SetLanguageCode(std::move(value)); return *this;}
    inline DescribeFaqResult& WithLanguageCode(const char* value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeFaqResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeFaqResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeFaqResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_indexId;

    Aws::String m_name;

    Aws::String m_description;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    S3Path m_s3Path;

    FaqStatus m_status;

    Aws::String m_roleArn;

    Aws::String m_errorMessage;

    FaqFileFormat m_fileFormat;

    Aws::String m_languageCode;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
