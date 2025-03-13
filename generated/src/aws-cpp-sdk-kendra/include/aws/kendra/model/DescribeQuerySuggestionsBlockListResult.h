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
    AWS_KENDRA_API DescribeQuerySuggestionsBlockListResult() = default;
    AWS_KENDRA_API DescribeQuerySuggestionsBlockListResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API DescribeQuerySuggestionsBlockListResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the index for the block list.</p>
     */
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    DescribeQuerySuggestionsBlockListResult& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the block list.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DescribeQuerySuggestionsBlockListResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the block list.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeQuerySuggestionsBlockListResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the block list.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeQuerySuggestionsBlockListResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the block list. When the value is <code>ACTIVE</code>,
     * the block list is ready for use.</p>
     */
    inline QuerySuggestionsBlockListStatus GetStatus() const { return m_status; }
    inline void SetStatus(QuerySuggestionsBlockListStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeQuerySuggestionsBlockListResult& WithStatus(QuerySuggestionsBlockListStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message containing details if there are issues processing the block
     * list.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    DescribeQuerySuggestionsBlockListResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when a block list for query suggestions was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DescribeQuerySuggestionsBlockListResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when a block list for query suggestions was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    DescribeQuerySuggestionsBlockListResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the current S3 path to your block list text file in your S3 bucket.</p>
     * <p>Each block word or phrase should be on a separate line in a text file.</p>
     * <p>For information on the current quota limits for block lists, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
     * Amazon Kendra</a>.</p>
     */
    inline const S3Path& GetSourceS3Path() const { return m_sourceS3Path; }
    template<typename SourceS3PathT = S3Path>
    void SetSourceS3Path(SourceS3PathT&& value) { m_sourceS3PathHasBeenSet = true; m_sourceS3Path = std::forward<SourceS3PathT>(value); }
    template<typename SourceS3PathT = S3Path>
    DescribeQuerySuggestionsBlockListResult& WithSourceS3Path(SourceS3PathT&& value) { SetSourceS3Path(std::forward<SourceS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current number of valid, non-empty words or phrases in the block list
     * text file.</p>
     */
    inline int GetItemCount() const { return m_itemCount; }
    inline void SetItemCount(int value) { m_itemCountHasBeenSet = true; m_itemCount = value; }
    inline DescribeQuerySuggestionsBlockListResult& WithItemCount(int value) { SetItemCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current size of the block list text file in S3.</p>
     */
    inline long long GetFileSizeBytes() const { return m_fileSizeBytes; }
    inline void SetFileSizeBytes(long long value) { m_fileSizeBytesHasBeenSet = true; m_fileSizeBytes = value; }
    inline DescribeQuerySuggestionsBlockListResult& WithFileSizeBytes(long long value) { SetFileSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM (Identity and Access Management) role used by Amazon Kendra to access
     * the block list text file in S3.</p> <p>The role needs S3 read permissions to
     * your file in S3 and needs to give STS (Security Token Service) assume role
     * permissions to Amazon Kendra.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeQuerySuggestionsBlockListResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeQuerySuggestionsBlockListResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    QuerySuggestionsBlockListStatus m_status{QuerySuggestionsBlockListStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    S3Path m_sourceS3Path;
    bool m_sourceS3PathHasBeenSet = false;

    int m_itemCount{0};
    bool m_itemCountHasBeenSet = false;

    long long m_fileSizeBytes{0};
    bool m_fileSizeBytesHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
