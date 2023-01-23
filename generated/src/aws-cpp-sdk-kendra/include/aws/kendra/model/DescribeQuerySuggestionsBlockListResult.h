/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/QuerySuggestionsBlockListStatus.h>
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
  class DescribeQuerySuggestionsBlockListResult
  {
  public:
    AWS_KENDRA_API DescribeQuerySuggestionsBlockListResult();
    AWS_KENDRA_API DescribeQuerySuggestionsBlockListResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API DescribeQuerySuggestionsBlockListResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the index for the block list.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index for the block list.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexId = value; }

    /**
     * <p>The identifier of the index for the block list.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index for the block list.</p>
     */
    inline void SetIndexId(const char* value) { m_indexId.assign(value); }

    /**
     * <p>The identifier of the index for the block list.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index for the block list.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index for the block list.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The identifier of the block list.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the block list.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the block list.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the block list.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the block list.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the block list.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the block list.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the block list.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the block list.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the block list.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the block list.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the block list.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the block list.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the block list.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description for the block list.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the block list.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description for the block list.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description for the block list.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description for the block list.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the block list.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the block list.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The current status of the block list. When the value is <code>ACTIVE</code>,
     * the block list is ready for use.</p>
     */
    inline const QuerySuggestionsBlockListStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the block list. When the value is <code>ACTIVE</code>,
     * the block list is ready for use.</p>
     */
    inline void SetStatus(const QuerySuggestionsBlockListStatus& value) { m_status = value; }

    /**
     * <p>The current status of the block list. When the value is <code>ACTIVE</code>,
     * the block list is ready for use.</p>
     */
    inline void SetStatus(QuerySuggestionsBlockListStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the block list. When the value is <code>ACTIVE</code>,
     * the block list is ready for use.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithStatus(const QuerySuggestionsBlockListStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the block list. When the value is <code>ACTIVE</code>,
     * the block list is ready for use.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithStatus(QuerySuggestionsBlockListStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The error message containing details if there are issues processing the block
     * list.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message containing details if there are issues processing the block
     * list.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * <p>The error message containing details if there are issues processing the block
     * list.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * <p>The error message containing details if there are issues processing the block
     * list.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * <p>The error message containing details if there are issues processing the block
     * list.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message containing details if there are issues processing the block
     * list.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message containing details if there are issues processing the block
     * list.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The date-time a block list for query suggestions was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date-time a block list for query suggestions was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date-time a block list for query suggestions was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date-time a block list for query suggestions was created.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date-time a block list for query suggestions was created.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The date-time a block list for query suggestions was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date-time a block list for query suggestions was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The date-time a block list for query suggestions was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The date-time a block list for query suggestions was last updated.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date-time a block list for query suggestions was last updated.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>Shows the current S3 path to your block list text file in your S3 bucket.</p>
     * <p>Each block word or phrase should be on a separate line in a text file.</p>
     * <p>For information on the current quota limits for block lists, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
     * Amazon Kendra</a>.</p>
     */
    inline const S3Path& GetSourceS3Path() const{ return m_sourceS3Path; }

    /**
     * <p>Shows the current S3 path to your block list text file in your S3 bucket.</p>
     * <p>Each block word or phrase should be on a separate line in a text file.</p>
     * <p>For information on the current quota limits for block lists, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
     * Amazon Kendra</a>.</p>
     */
    inline void SetSourceS3Path(const S3Path& value) { m_sourceS3Path = value; }

    /**
     * <p>Shows the current S3 path to your block list text file in your S3 bucket.</p>
     * <p>Each block word or phrase should be on a separate line in a text file.</p>
     * <p>For information on the current quota limits for block lists, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
     * Amazon Kendra</a>.</p>
     */
    inline void SetSourceS3Path(S3Path&& value) { m_sourceS3Path = std::move(value); }

    /**
     * <p>Shows the current S3 path to your block list text file in your S3 bucket.</p>
     * <p>Each block word or phrase should be on a separate line in a text file.</p>
     * <p>For information on the current quota limits for block lists, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
     * Amazon Kendra</a>.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithSourceS3Path(const S3Path& value) { SetSourceS3Path(value); return *this;}

    /**
     * <p>Shows the current S3 path to your block list text file in your S3 bucket.</p>
     * <p>Each block word or phrase should be on a separate line in a text file.</p>
     * <p>For information on the current quota limits for block lists, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
     * Amazon Kendra</a>.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithSourceS3Path(S3Path&& value) { SetSourceS3Path(std::move(value)); return *this;}


    /**
     * <p>The current number of valid, non-empty words or phrases in the block list
     * text file.</p>
     */
    inline int GetItemCount() const{ return m_itemCount; }

    /**
     * <p>The current number of valid, non-empty words or phrases in the block list
     * text file.</p>
     */
    inline void SetItemCount(int value) { m_itemCount = value; }

    /**
     * <p>The current number of valid, non-empty words or phrases in the block list
     * text file.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithItemCount(int value) { SetItemCount(value); return *this;}


    /**
     * <p>The current size of the block list text file in S3.</p>
     */
    inline long long GetFileSizeBytes() const{ return m_fileSizeBytes; }

    /**
     * <p>The current size of the block list text file in S3.</p>
     */
    inline void SetFileSizeBytes(long long value) { m_fileSizeBytes = value; }

    /**
     * <p>The current size of the block list text file in S3.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithFileSizeBytes(long long value) { SetFileSizeBytes(value); return *this;}


    /**
     * <p>The IAM (Identity and Access Management) role used by Amazon Kendra to access
     * the block list text file in S3.</p> <p>The role needs S3 read permissions to
     * your file in S3 and needs to give STS (Security Token Service) assume role
     * permissions to Amazon Kendra.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM (Identity and Access Management) role used by Amazon Kendra to access
     * the block list text file in S3.</p> <p>The role needs S3 read permissions to
     * your file in S3 and needs to give STS (Security Token Service) assume role
     * permissions to Amazon Kendra.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The IAM (Identity and Access Management) role used by Amazon Kendra to access
     * the block list text file in S3.</p> <p>The role needs S3 read permissions to
     * your file in S3 and needs to give STS (Security Token Service) assume role
     * permissions to Amazon Kendra.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The IAM (Identity and Access Management) role used by Amazon Kendra to access
     * the block list text file in S3.</p> <p>The role needs S3 read permissions to
     * your file in S3 and needs to give STS (Security Token Service) assume role
     * permissions to Amazon Kendra.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The IAM (Identity and Access Management) role used by Amazon Kendra to access
     * the block list text file in S3.</p> <p>The role needs S3 read permissions to
     * your file in S3 and needs to give STS (Security Token Service) assume role
     * permissions to Amazon Kendra.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM (Identity and Access Management) role used by Amazon Kendra to access
     * the block list text file in S3.</p> <p>The role needs S3 read permissions to
     * your file in S3 and needs to give STS (Security Token Service) assume role
     * permissions to Amazon Kendra.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM (Identity and Access Management) role used by Amazon Kendra to access
     * the block list text file in S3.</p> <p>The role needs S3 read permissions to
     * your file in S3 and needs to give STS (Security Token Service) assume role
     * permissions to Amazon Kendra.</p>
     */
    inline DescribeQuerySuggestionsBlockListResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_indexId;

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_description;

    QuerySuggestionsBlockListStatus m_status;

    Aws::String m_errorMessage;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    S3Path m_sourceS3Path;

    int m_itemCount;

    long long m_fileSizeBytes;

    Aws::String m_roleArn;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
