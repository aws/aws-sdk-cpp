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


    /**
     * <p>The unique identifier of the described import.</p>
     */
    inline const Aws::String& GetImportId() const{ return m_importId; }

    /**
     * <p>The unique identifier of the described import.</p>
     */
    inline void SetImportId(const Aws::String& value) { m_importId = value; }

    /**
     * <p>The unique identifier of the described import.</p>
     */
    inline void SetImportId(Aws::String&& value) { m_importId = std::move(value); }

    /**
     * <p>The unique identifier of the described import.</p>
     */
    inline void SetImportId(const char* value) { m_importId.assign(value); }

    /**
     * <p>The unique identifier of the described import.</p>
     */
    inline DescribeImportResult& WithImportId(const Aws::String& value) { SetImportId(value); return *this;}

    /**
     * <p>The unique identifier of the described import.</p>
     */
    inline DescribeImportResult& WithImportId(Aws::String&& value) { SetImportId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the described import.</p>
     */
    inline DescribeImportResult& WithImportId(const char* value) { SetImportId(value); return *this;}


    /**
     * <p>The specifications of the imported bot, bot locale, or custom vocabulary.</p>
     */
    inline const ImportResourceSpecification& GetResourceSpecification() const{ return m_resourceSpecification; }

    /**
     * <p>The specifications of the imported bot, bot locale, or custom vocabulary.</p>
     */
    inline void SetResourceSpecification(const ImportResourceSpecification& value) { m_resourceSpecification = value; }

    /**
     * <p>The specifications of the imported bot, bot locale, or custom vocabulary.</p>
     */
    inline void SetResourceSpecification(ImportResourceSpecification&& value) { m_resourceSpecification = std::move(value); }

    /**
     * <p>The specifications of the imported bot, bot locale, or custom vocabulary.</p>
     */
    inline DescribeImportResult& WithResourceSpecification(const ImportResourceSpecification& value) { SetResourceSpecification(value); return *this;}

    /**
     * <p>The specifications of the imported bot, bot locale, or custom vocabulary.</p>
     */
    inline DescribeImportResult& WithResourceSpecification(ImportResourceSpecification&& value) { SetResourceSpecification(std::move(value)); return *this;}


    /**
     * <p>The unique identifier that Amazon Lex assigned to the resource created by the
     * import.</p>
     */
    inline const Aws::String& GetImportedResourceId() const{ return m_importedResourceId; }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the resource created by the
     * import.</p>
     */
    inline void SetImportedResourceId(const Aws::String& value) { m_importedResourceId = value; }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the resource created by the
     * import.</p>
     */
    inline void SetImportedResourceId(Aws::String&& value) { m_importedResourceId = std::move(value); }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the resource created by the
     * import.</p>
     */
    inline void SetImportedResourceId(const char* value) { m_importedResourceId.assign(value); }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the resource created by the
     * import.</p>
     */
    inline DescribeImportResult& WithImportedResourceId(const Aws::String& value) { SetImportedResourceId(value); return *this;}

    /**
     * <p>The unique identifier that Amazon Lex assigned to the resource created by the
     * import.</p>
     */
    inline DescribeImportResult& WithImportedResourceId(Aws::String&& value) { SetImportedResourceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier that Amazon Lex assigned to the resource created by the
     * import.</p>
     */
    inline DescribeImportResult& WithImportedResourceId(const char* value) { SetImportedResourceId(value); return *this;}


    /**
     * <p>The name of the imported resource.</p>
     */
    inline const Aws::String& GetImportedResourceName() const{ return m_importedResourceName; }

    /**
     * <p>The name of the imported resource.</p>
     */
    inline void SetImportedResourceName(const Aws::String& value) { m_importedResourceName = value; }

    /**
     * <p>The name of the imported resource.</p>
     */
    inline void SetImportedResourceName(Aws::String&& value) { m_importedResourceName = std::move(value); }

    /**
     * <p>The name of the imported resource.</p>
     */
    inline void SetImportedResourceName(const char* value) { m_importedResourceName.assign(value); }

    /**
     * <p>The name of the imported resource.</p>
     */
    inline DescribeImportResult& WithImportedResourceName(const Aws::String& value) { SetImportedResourceName(value); return *this;}

    /**
     * <p>The name of the imported resource.</p>
     */
    inline DescribeImportResult& WithImportedResourceName(Aws::String&& value) { SetImportedResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the imported resource.</p>
     */
    inline DescribeImportResult& WithImportedResourceName(const char* value) { SetImportedResourceName(value); return *this;}


    /**
     * <p>The strategy used when there was a name conflict between the imported
     * resource and an existing resource. When the merge strategy is
     * <code>FailOnConflict</code> existing resources are not overwritten and the
     * import fails.</p>
     */
    inline const MergeStrategy& GetMergeStrategy() const{ return m_mergeStrategy; }

    /**
     * <p>The strategy used when there was a name conflict between the imported
     * resource and an existing resource. When the merge strategy is
     * <code>FailOnConflict</code> existing resources are not overwritten and the
     * import fails.</p>
     */
    inline void SetMergeStrategy(const MergeStrategy& value) { m_mergeStrategy = value; }

    /**
     * <p>The strategy used when there was a name conflict between the imported
     * resource and an existing resource. When the merge strategy is
     * <code>FailOnConflict</code> existing resources are not overwritten and the
     * import fails.</p>
     */
    inline void SetMergeStrategy(MergeStrategy&& value) { m_mergeStrategy = std::move(value); }

    /**
     * <p>The strategy used when there was a name conflict between the imported
     * resource and an existing resource. When the merge strategy is
     * <code>FailOnConflict</code> existing resources are not overwritten and the
     * import fails.</p>
     */
    inline DescribeImportResult& WithMergeStrategy(const MergeStrategy& value) { SetMergeStrategy(value); return *this;}

    /**
     * <p>The strategy used when there was a name conflict between the imported
     * resource and an existing resource. When the merge strategy is
     * <code>FailOnConflict</code> existing resources are not overwritten and the
     * import fails.</p>
     */
    inline DescribeImportResult& WithMergeStrategy(MergeStrategy&& value) { SetMergeStrategy(std::move(value)); return *this;}


    /**
     * <p>The status of the import process. When the status is <code>Completed</code>
     * the resource is imported and ready for use.</p>
     */
    inline const ImportStatus& GetImportStatus() const{ return m_importStatus; }

    /**
     * <p>The status of the import process. When the status is <code>Completed</code>
     * the resource is imported and ready for use.</p>
     */
    inline void SetImportStatus(const ImportStatus& value) { m_importStatus = value; }

    /**
     * <p>The status of the import process. When the status is <code>Completed</code>
     * the resource is imported and ready for use.</p>
     */
    inline void SetImportStatus(ImportStatus&& value) { m_importStatus = std::move(value); }

    /**
     * <p>The status of the import process. When the status is <code>Completed</code>
     * the resource is imported and ready for use.</p>
     */
    inline DescribeImportResult& WithImportStatus(const ImportStatus& value) { SetImportStatus(value); return *this;}

    /**
     * <p>The status of the import process. When the status is <code>Completed</code>
     * the resource is imported and ready for use.</p>
     */
    inline DescribeImportResult& WithImportStatus(ImportStatus&& value) { SetImportStatus(std::move(value)); return *this;}


    /**
     * <p>If the <code>importStatus</code> field is <code>Failed</code>, this provides
     * one or more reasons for the failure.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }

    /**
     * <p>If the <code>importStatus</code> field is <code>Failed</code>, this provides
     * one or more reasons for the failure.</p>
     */
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasons = value; }

    /**
     * <p>If the <code>importStatus</code> field is <code>Failed</code>, this provides
     * one or more reasons for the failure.</p>
     */
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasons = std::move(value); }

    /**
     * <p>If the <code>importStatus</code> field is <code>Failed</code>, this provides
     * one or more reasons for the failure.</p>
     */
    inline DescribeImportResult& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}

    /**
     * <p>If the <code>importStatus</code> field is <code>Failed</code>, this provides
     * one or more reasons for the failure.</p>
     */
    inline DescribeImportResult& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}

    /**
     * <p>If the <code>importStatus</code> field is <code>Failed</code>, this provides
     * one or more reasons for the failure.</p>
     */
    inline DescribeImportResult& AddFailureReasons(const Aws::String& value) { m_failureReasons.push_back(value); return *this; }

    /**
     * <p>If the <code>importStatus</code> field is <code>Failed</code>, this provides
     * one or more reasons for the failure.</p>
     */
    inline DescribeImportResult& AddFailureReasons(Aws::String&& value) { m_failureReasons.push_back(std::move(value)); return *this; }

    /**
     * <p>If the <code>importStatus</code> field is <code>Failed</code>, this provides
     * one or more reasons for the failure.</p>
     */
    inline DescribeImportResult& AddFailureReasons(const char* value) { m_failureReasons.push_back(value); return *this; }


    /**
     * <p>The date and time that the import was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time that the import was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>The date and time that the import was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time that the import was created.</p>
     */
    inline DescribeImportResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time that the import was created.</p>
     */
    inline DescribeImportResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the import was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time that the import was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time that the import was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time that the import was last updated.</p>
     */
    inline DescribeImportResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time that the import was last updated.</p>
     */
    inline DescribeImportResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
