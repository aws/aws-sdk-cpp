/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelCardStatus.h>
#include <aws/sagemaker/model/ModelCardSecurityConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
#include <aws/sagemaker/model/ModelCardProcessingStatus.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribeModelCardResult
  {
  public:
    AWS_SAGEMAKER_API DescribeModelCardResult();
    AWS_SAGEMAKER_API DescribeModelCardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeModelCardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the model card.</p>
     */
    inline const Aws::String& GetModelCardArn() const{ return m_modelCardArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model card.</p>
     */
    inline void SetModelCardArn(const Aws::String& value) { m_modelCardArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model card.</p>
     */
    inline void SetModelCardArn(Aws::String&& value) { m_modelCardArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model card.</p>
     */
    inline void SetModelCardArn(const char* value) { m_modelCardArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model card.</p>
     */
    inline DescribeModelCardResult& WithModelCardArn(const Aws::String& value) { SetModelCardArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model card.</p>
     */
    inline DescribeModelCardResult& WithModelCardArn(Aws::String&& value) { SetModelCardArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model card.</p>
     */
    inline DescribeModelCardResult& WithModelCardArn(const char* value) { SetModelCardArn(value); return *this;}


    /**
     * <p>The name of the model card.</p>
     */
    inline const Aws::String& GetModelCardName() const{ return m_modelCardName; }

    /**
     * <p>The name of the model card.</p>
     */
    inline void SetModelCardName(const Aws::String& value) { m_modelCardName = value; }

    /**
     * <p>The name of the model card.</p>
     */
    inline void SetModelCardName(Aws::String&& value) { m_modelCardName = std::move(value); }

    /**
     * <p>The name of the model card.</p>
     */
    inline void SetModelCardName(const char* value) { m_modelCardName.assign(value); }

    /**
     * <p>The name of the model card.</p>
     */
    inline DescribeModelCardResult& WithModelCardName(const Aws::String& value) { SetModelCardName(value); return *this;}

    /**
     * <p>The name of the model card.</p>
     */
    inline DescribeModelCardResult& WithModelCardName(Aws::String&& value) { SetModelCardName(std::move(value)); return *this;}

    /**
     * <p>The name of the model card.</p>
     */
    inline DescribeModelCardResult& WithModelCardName(const char* value) { SetModelCardName(value); return *this;}


    /**
     * <p>The version of the model card.</p>
     */
    inline int GetModelCardVersion() const{ return m_modelCardVersion; }

    /**
     * <p>The version of the model card.</p>
     */
    inline void SetModelCardVersion(int value) { m_modelCardVersion = value; }

    /**
     * <p>The version of the model card.</p>
     */
    inline DescribeModelCardResult& WithModelCardVersion(int value) { SetModelCardVersion(value); return *this;}


    /**
     * <p>The content of the model card.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The content of the model card.</p>
     */
    inline void SetContent(const Aws::String& value) { m_content = value; }

    /**
     * <p>The content of the model card.</p>
     */
    inline void SetContent(Aws::String&& value) { m_content = std::move(value); }

    /**
     * <p>The content of the model card.</p>
     */
    inline void SetContent(const char* value) { m_content.assign(value); }

    /**
     * <p>The content of the model card.</p>
     */
    inline DescribeModelCardResult& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the model card.</p>
     */
    inline DescribeModelCardResult& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of the model card.</p>
     */
    inline DescribeModelCardResult& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The approval status of the model card within your organization. Different
     * organizations might have different criteria for model card review and
     * approval.</p> <ul> <li> <p> <code>Draft</code>: The model card is a work in
     * progress.</p> </li> <li> <p> <code>PendingReview</code>: The model card is
     * pending review.</p> </li> <li> <p> <code>Approved</code>: The model card is
     * approved.</p> </li> <li> <p> <code>Archived</code>: The model card is archived.
     * No more updates should be made to the model card, but it can still be
     * exported.</p> </li> </ul>
     */
    inline const ModelCardStatus& GetModelCardStatus() const{ return m_modelCardStatus; }

    /**
     * <p>The approval status of the model card within your organization. Different
     * organizations might have different criteria for model card review and
     * approval.</p> <ul> <li> <p> <code>Draft</code>: The model card is a work in
     * progress.</p> </li> <li> <p> <code>PendingReview</code>: The model card is
     * pending review.</p> </li> <li> <p> <code>Approved</code>: The model card is
     * approved.</p> </li> <li> <p> <code>Archived</code>: The model card is archived.
     * No more updates should be made to the model card, but it can still be
     * exported.</p> </li> </ul>
     */
    inline void SetModelCardStatus(const ModelCardStatus& value) { m_modelCardStatus = value; }

    /**
     * <p>The approval status of the model card within your organization. Different
     * organizations might have different criteria for model card review and
     * approval.</p> <ul> <li> <p> <code>Draft</code>: The model card is a work in
     * progress.</p> </li> <li> <p> <code>PendingReview</code>: The model card is
     * pending review.</p> </li> <li> <p> <code>Approved</code>: The model card is
     * approved.</p> </li> <li> <p> <code>Archived</code>: The model card is archived.
     * No more updates should be made to the model card, but it can still be
     * exported.</p> </li> </ul>
     */
    inline void SetModelCardStatus(ModelCardStatus&& value) { m_modelCardStatus = std::move(value); }

    /**
     * <p>The approval status of the model card within your organization. Different
     * organizations might have different criteria for model card review and
     * approval.</p> <ul> <li> <p> <code>Draft</code>: The model card is a work in
     * progress.</p> </li> <li> <p> <code>PendingReview</code>: The model card is
     * pending review.</p> </li> <li> <p> <code>Approved</code>: The model card is
     * approved.</p> </li> <li> <p> <code>Archived</code>: The model card is archived.
     * No more updates should be made to the model card, but it can still be
     * exported.</p> </li> </ul>
     */
    inline DescribeModelCardResult& WithModelCardStatus(const ModelCardStatus& value) { SetModelCardStatus(value); return *this;}

    /**
     * <p>The approval status of the model card within your organization. Different
     * organizations might have different criteria for model card review and
     * approval.</p> <ul> <li> <p> <code>Draft</code>: The model card is a work in
     * progress.</p> </li> <li> <p> <code>PendingReview</code>: The model card is
     * pending review.</p> </li> <li> <p> <code>Approved</code>: The model card is
     * approved.</p> </li> <li> <p> <code>Archived</code>: The model card is archived.
     * No more updates should be made to the model card, but it can still be
     * exported.</p> </li> </ul>
     */
    inline DescribeModelCardResult& WithModelCardStatus(ModelCardStatus&& value) { SetModelCardStatus(std::move(value)); return *this;}


    /**
     * <p>The security configuration used to protect model card content.</p>
     */
    inline const ModelCardSecurityConfig& GetSecurityConfig() const{ return m_securityConfig; }

    /**
     * <p>The security configuration used to protect model card content.</p>
     */
    inline void SetSecurityConfig(const ModelCardSecurityConfig& value) { m_securityConfig = value; }

    /**
     * <p>The security configuration used to protect model card content.</p>
     */
    inline void SetSecurityConfig(ModelCardSecurityConfig&& value) { m_securityConfig = std::move(value); }

    /**
     * <p>The security configuration used to protect model card content.</p>
     */
    inline DescribeModelCardResult& WithSecurityConfig(const ModelCardSecurityConfig& value) { SetSecurityConfig(value); return *this;}

    /**
     * <p>The security configuration used to protect model card content.</p>
     */
    inline DescribeModelCardResult& WithSecurityConfig(ModelCardSecurityConfig&& value) { SetSecurityConfig(std::move(value)); return *this;}


    /**
     * <p>The date and time the model card was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time the model card was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The date and time the model card was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The date and time the model card was created.</p>
     */
    inline DescribeModelCardResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time the model card was created.</p>
     */
    inline DescribeModelCardResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }

    
    inline void SetCreatedBy(const UserContext& value) { m_createdBy = value; }

    
    inline void SetCreatedBy(UserContext&& value) { m_createdBy = std::move(value); }

    
    inline DescribeModelCardResult& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}

    
    inline DescribeModelCardResult& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}


    /**
     * <p>The date and time the model card was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time the model card was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The date and time the model card was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time the model card was last modified.</p>
     */
    inline DescribeModelCardResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time the model card was last modified.</p>
     */
    inline DescribeModelCardResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedBy = value; }

    
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedBy = std::move(value); }

    
    inline DescribeModelCardResult& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}

    
    inline DescribeModelCardResult& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}


    /**
     * <p>The processing status of model card deletion. The
     * <code>ModelCardProcessingStatus</code> updates throughout the different deletion
     * steps.</p> <ul> <li> <p> <code>DeletePending</code>: Model card deletion request
     * received.</p> </li> <li> <p> <code>DeleteInProgress</code>: Model card deletion
     * is in progress.</p> </li> <li> <p> <code>ContentDeleted</code>: Deleted model
     * card content.</p> </li> <li> <p> <code>ExportJobsDeleted</code>: Deleted all
     * export jobs associated with the model card.</p> </li> <li> <p>
     * <code>DeleteCompleted</code>: Successfully deleted the model card.</p> </li>
     * <li> <p> <code>DeleteFailed</code>: The model card failed to delete.</p> </li>
     * </ul>
     */
    inline const ModelCardProcessingStatus& GetModelCardProcessingStatus() const{ return m_modelCardProcessingStatus; }

    /**
     * <p>The processing status of model card deletion. The
     * <code>ModelCardProcessingStatus</code> updates throughout the different deletion
     * steps.</p> <ul> <li> <p> <code>DeletePending</code>: Model card deletion request
     * received.</p> </li> <li> <p> <code>DeleteInProgress</code>: Model card deletion
     * is in progress.</p> </li> <li> <p> <code>ContentDeleted</code>: Deleted model
     * card content.</p> </li> <li> <p> <code>ExportJobsDeleted</code>: Deleted all
     * export jobs associated with the model card.</p> </li> <li> <p>
     * <code>DeleteCompleted</code>: Successfully deleted the model card.</p> </li>
     * <li> <p> <code>DeleteFailed</code>: The model card failed to delete.</p> </li>
     * </ul>
     */
    inline void SetModelCardProcessingStatus(const ModelCardProcessingStatus& value) { m_modelCardProcessingStatus = value; }

    /**
     * <p>The processing status of model card deletion. The
     * <code>ModelCardProcessingStatus</code> updates throughout the different deletion
     * steps.</p> <ul> <li> <p> <code>DeletePending</code>: Model card deletion request
     * received.</p> </li> <li> <p> <code>DeleteInProgress</code>: Model card deletion
     * is in progress.</p> </li> <li> <p> <code>ContentDeleted</code>: Deleted model
     * card content.</p> </li> <li> <p> <code>ExportJobsDeleted</code>: Deleted all
     * export jobs associated with the model card.</p> </li> <li> <p>
     * <code>DeleteCompleted</code>: Successfully deleted the model card.</p> </li>
     * <li> <p> <code>DeleteFailed</code>: The model card failed to delete.</p> </li>
     * </ul>
     */
    inline void SetModelCardProcessingStatus(ModelCardProcessingStatus&& value) { m_modelCardProcessingStatus = std::move(value); }

    /**
     * <p>The processing status of model card deletion. The
     * <code>ModelCardProcessingStatus</code> updates throughout the different deletion
     * steps.</p> <ul> <li> <p> <code>DeletePending</code>: Model card deletion request
     * received.</p> </li> <li> <p> <code>DeleteInProgress</code>: Model card deletion
     * is in progress.</p> </li> <li> <p> <code>ContentDeleted</code>: Deleted model
     * card content.</p> </li> <li> <p> <code>ExportJobsDeleted</code>: Deleted all
     * export jobs associated with the model card.</p> </li> <li> <p>
     * <code>DeleteCompleted</code>: Successfully deleted the model card.</p> </li>
     * <li> <p> <code>DeleteFailed</code>: The model card failed to delete.</p> </li>
     * </ul>
     */
    inline DescribeModelCardResult& WithModelCardProcessingStatus(const ModelCardProcessingStatus& value) { SetModelCardProcessingStatus(value); return *this;}

    /**
     * <p>The processing status of model card deletion. The
     * <code>ModelCardProcessingStatus</code> updates throughout the different deletion
     * steps.</p> <ul> <li> <p> <code>DeletePending</code>: Model card deletion request
     * received.</p> </li> <li> <p> <code>DeleteInProgress</code>: Model card deletion
     * is in progress.</p> </li> <li> <p> <code>ContentDeleted</code>: Deleted model
     * card content.</p> </li> <li> <p> <code>ExportJobsDeleted</code>: Deleted all
     * export jobs associated with the model card.</p> </li> <li> <p>
     * <code>DeleteCompleted</code>: Successfully deleted the model card.</p> </li>
     * <li> <p> <code>DeleteFailed</code>: The model card failed to delete.</p> </li>
     * </ul>
     */
    inline DescribeModelCardResult& WithModelCardProcessingStatus(ModelCardProcessingStatus&& value) { SetModelCardProcessingStatus(std::move(value)); return *this;}

  private:

    Aws::String m_modelCardArn;

    Aws::String m_modelCardName;

    int m_modelCardVersion;

    Aws::String m_content;

    ModelCardStatus m_modelCardStatus;

    ModelCardSecurityConfig m_securityConfig;

    Aws::Utils::DateTime m_creationTime;

    UserContext m_createdBy;

    Aws::Utils::DateTime m_lastModifiedTime;

    UserContext m_lastModifiedBy;

    ModelCardProcessingStatus m_modelCardProcessingStatus;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
