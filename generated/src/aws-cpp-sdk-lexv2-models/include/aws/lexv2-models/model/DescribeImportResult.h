/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/ImportResourceSpecification.h>
#include <aws/lexv2-models/model/MergeStrategy.h>
#include <aws/lexv2-models/model/ImportStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace LexModelsV2
{
namespace Model
{
  class DescribeImportResult
  {
  public:
    AWS_LEXMODELSV2_API DescribeImportResult();
    AWS_LEXMODELSV2_API DescribeImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the described import.</p>
     */
    inline const Aws::String& GetImportId() const{ return m_importId; }
    inline void SetImportId(const Aws::String& value) { m_importId = value; }
    inline void SetImportId(Aws::String&& value) { m_importId = std::move(value); }
    inline void SetImportId(const char* value) { m_importId.assign(value); }
    inline DescribeImportResult& WithImportId(const Aws::String& value) { SetImportId(value); return *this;}
    inline DescribeImportResult& WithImportId(Aws::String&& value) { SetImportId(std::move(value)); return *this;}
    inline DescribeImportResult& WithImportId(const char* value) { SetImportId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specifications of the imported bot, bot locale, or custom vocabulary.</p>
     */
    inline const ImportResourceSpecification& GetResourceSpecification() const{ return m_resourceSpecification; }
    inline void SetResourceSpecification(const ImportResourceSpecification& value) { m_resourceSpecification = value; }
    inline void SetResourceSpecification(ImportResourceSpecification&& value) { m_resourceSpecification = std::move(value); }
    inline DescribeImportResult& WithResourceSpecification(const ImportResourceSpecification& value) { SetResourceSpecification(value); return *this;}
    inline DescribeImportResult& WithResourceSpecification(ImportResourceSpecification&& value) { SetResourceSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier that Amazon Lex assigned to the resource created by the
     * import.</p>
     */
    inline const Aws::String& GetImportedResourceId() const{ return m_importedResourceId; }
    inline void SetImportedResourceId(const Aws::String& value) { m_importedResourceId = value; }
    inline void SetImportedResourceId(Aws::String&& value) { m_importedResourceId = std::move(value); }
    inline void SetImportedResourceId(const char* value) { m_importedResourceId.assign(value); }
    inline DescribeImportResult& WithImportedResourceId(const Aws::String& value) { SetImportedResourceId(value); return *this;}
    inline DescribeImportResult& WithImportedResourceId(Aws::String&& value) { SetImportedResourceId(std::move(value)); return *this;}
    inline DescribeImportResult& WithImportedResourceId(const char* value) { SetImportedResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the imported resource.</p>
     */
    inline const Aws::String& GetImportedResourceName() const{ return m_importedResourceName; }
    inline void SetImportedResourceName(const Aws::String& value) { m_importedResourceName = value; }
    inline void SetImportedResourceName(Aws::String&& value) { m_importedResourceName = std::move(value); }
    inline void SetImportedResourceName(const char* value) { m_importedResourceName.assign(value); }
    inline DescribeImportResult& WithImportedResourceName(const Aws::String& value) { SetImportedResourceName(value); return *this;}
    inline DescribeImportResult& WithImportedResourceName(Aws::String&& value) { SetImportedResourceName(std::move(value)); return *this;}
    inline DescribeImportResult& WithImportedResourceName(const char* value) { SetImportedResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strategy used when there was a name conflict between the imported
     * resource and an existing resource. When the merge strategy is
     * <code>FailOnConflict</code> existing resources are not overwritten and the
     * import fails.</p>
     */
    inline const MergeStrategy& GetMergeStrategy() const{ return m_mergeStrategy; }
    inline void SetMergeStrategy(const MergeStrategy& value) { m_mergeStrategy = value; }
    inline void SetMergeStrategy(MergeStrategy&& value) { m_mergeStrategy = std::move(value); }
    inline DescribeImportResult& WithMergeStrategy(const MergeStrategy& value) { SetMergeStrategy(value); return *this;}
    inline DescribeImportResult& WithMergeStrategy(MergeStrategy&& value) { SetMergeStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the import process. When the status is <code>Completed</code>
     * the resource is imported and ready for use.</p>
     */
    inline const ImportStatus& GetImportStatus() const{ return m_importStatus; }
    inline void SetImportStatus(const ImportStatus& value) { m_importStatus = value; }
    inline void SetImportStatus(ImportStatus&& value) { m_importStatus = std::move(value); }
    inline DescribeImportResult& WithImportStatus(const ImportStatus& value) { SetImportStatus(value); return *this;}
    inline DescribeImportResult& WithImportStatus(ImportStatus&& value) { SetImportStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>importStatus</code> field is <code>Failed</code>, this provides
     * one or more reasons for the failure.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasons = value; }
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasons = std::move(value); }
    inline DescribeImportResult& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}
    inline DescribeImportResult& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}
    inline DescribeImportResult& AddFailureReasons(const Aws::String& value) { m_failureReasons.push_back(value); return *this; }
    inline DescribeImportResult& AddFailureReasons(Aws::String&& value) { m_failureReasons.push_back(std::move(value)); return *this; }
    inline DescribeImportResult& AddFailureReasons(const char* value) { m_failureReasons.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time that the import was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline DescribeImportResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline DescribeImportResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the import was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }
    inline DescribeImportResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline DescribeImportResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeImportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeImportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeImportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_importId;

    ImportResourceSpecification m_resourceSpecification;

    Aws::String m_importedResourceId;

    Aws::String m_importedResourceName;

    MergeStrategy m_mergeStrategy;

    ImportStatus m_importStatus;

    Aws::Vector<Aws::String> m_failureReasons;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_lastUpdatedDateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
