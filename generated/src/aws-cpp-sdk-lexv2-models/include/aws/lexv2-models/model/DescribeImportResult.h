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
    AWS_LEXMODELSV2_API DescribeImportResult() = default;
    AWS_LEXMODELSV2_API DescribeImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the described import.</p>
     */
    inline const Aws::String& GetImportId() const { return m_importId; }
    template<typename ImportIdT = Aws::String>
    void SetImportId(ImportIdT&& value) { m_importIdHasBeenSet = true; m_importId = std::forward<ImportIdT>(value); }
    template<typename ImportIdT = Aws::String>
    DescribeImportResult& WithImportId(ImportIdT&& value) { SetImportId(std::forward<ImportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specifications of the imported bot, bot locale, or custom vocabulary.</p>
     */
    inline const ImportResourceSpecification& GetResourceSpecification() const { return m_resourceSpecification; }
    template<typename ResourceSpecificationT = ImportResourceSpecification>
    void SetResourceSpecification(ResourceSpecificationT&& value) { m_resourceSpecificationHasBeenSet = true; m_resourceSpecification = std::forward<ResourceSpecificationT>(value); }
    template<typename ResourceSpecificationT = ImportResourceSpecification>
    DescribeImportResult& WithResourceSpecification(ResourceSpecificationT&& value) { SetResourceSpecification(std::forward<ResourceSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier that Amazon Lex assigned to the resource created by the
     * import.</p>
     */
    inline const Aws::String& GetImportedResourceId() const { return m_importedResourceId; }
    template<typename ImportedResourceIdT = Aws::String>
    void SetImportedResourceId(ImportedResourceIdT&& value) { m_importedResourceIdHasBeenSet = true; m_importedResourceId = std::forward<ImportedResourceIdT>(value); }
    template<typename ImportedResourceIdT = Aws::String>
    DescribeImportResult& WithImportedResourceId(ImportedResourceIdT&& value) { SetImportedResourceId(std::forward<ImportedResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the imported resource.</p>
     */
    inline const Aws::String& GetImportedResourceName() const { return m_importedResourceName; }
    template<typename ImportedResourceNameT = Aws::String>
    void SetImportedResourceName(ImportedResourceNameT&& value) { m_importedResourceNameHasBeenSet = true; m_importedResourceName = std::forward<ImportedResourceNameT>(value); }
    template<typename ImportedResourceNameT = Aws::String>
    DescribeImportResult& WithImportedResourceName(ImportedResourceNameT&& value) { SetImportedResourceName(std::forward<ImportedResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strategy used when there was a name conflict between the imported
     * resource and an existing resource. When the merge strategy is
     * <code>FailOnConflict</code> existing resources are not overwritten and the
     * import fails.</p>
     */
    inline MergeStrategy GetMergeStrategy() const { return m_mergeStrategy; }
    inline void SetMergeStrategy(MergeStrategy value) { m_mergeStrategyHasBeenSet = true; m_mergeStrategy = value; }
    inline DescribeImportResult& WithMergeStrategy(MergeStrategy value) { SetMergeStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the import process. When the status is <code>Completed</code>
     * the resource is imported and ready for use.</p>
     */
    inline ImportStatus GetImportStatus() const { return m_importStatus; }
    inline void SetImportStatus(ImportStatus value) { m_importStatusHasBeenSet = true; m_importStatus = value; }
    inline DescribeImportResult& WithImportStatus(ImportStatus value) { SetImportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>importStatus</code> field is <code>Failed</code>, this provides
     * one or more reasons for the failure.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const { return m_failureReasons; }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    void SetFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::forward<FailureReasonsT>(value); }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    DescribeImportResult& WithFailureReasons(FailureReasonsT&& value) { SetFailureReasons(std::forward<FailureReasonsT>(value)); return *this;}
    template<typename FailureReasonsT = Aws::String>
    DescribeImportResult& AddFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.emplace_back(std::forward<FailureReasonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time that the import was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    DescribeImportResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the import was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    DescribeImportResult& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeImportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_importId;
    bool m_importIdHasBeenSet = false;

    ImportResourceSpecification m_resourceSpecification;
    bool m_resourceSpecificationHasBeenSet = false;

    Aws::String m_importedResourceId;
    bool m_importedResourceIdHasBeenSet = false;

    Aws::String m_importedResourceName;
    bool m_importedResourceNameHasBeenSet = false;

    MergeStrategy m_mergeStrategy{MergeStrategy::NOT_SET};
    bool m_mergeStrategyHasBeenSet = false;

    ImportStatus m_importStatus{ImportStatus::NOT_SET};
    bool m_importStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
