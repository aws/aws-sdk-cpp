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
  class StartImportResult
  {
  public:
    AWS_LEXMODELSV2_API StartImportResult() = default;
    AWS_LEXMODELSV2_API StartImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API StartImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the import.</p>
     */
    inline const Aws::String& GetImportId() const { return m_importId; }
    template<typename ImportIdT = Aws::String>
    void SetImportId(ImportIdT&& value) { m_importIdHasBeenSet = true; m_importId = std::forward<ImportIdT>(value); }
    template<typename ImportIdT = Aws::String>
    StartImportResult& WithImportId(ImportIdT&& value) { SetImportId(std::forward<ImportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters used when importing the resource.</p>
     */
    inline const ImportResourceSpecification& GetResourceSpecification() const { return m_resourceSpecification; }
    template<typename ResourceSpecificationT = ImportResourceSpecification>
    void SetResourceSpecification(ResourceSpecificationT&& value) { m_resourceSpecificationHasBeenSet = true; m_resourceSpecification = std::forward<ResourceSpecificationT>(value); }
    template<typename ResourceSpecificationT = ImportResourceSpecification>
    StartImportResult& WithResourceSpecification(ResourceSpecificationT&& value) { SetResourceSpecification(std::forward<ResourceSpecificationT>(value)); return *this;}
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
    inline StartImportResult& WithMergeStrategy(MergeStrategy value) { SetMergeStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the import. When the status is <code>Complete</code>
     * the bot, bot alias, or custom vocabulary is ready to use.</p>
     */
    inline ImportStatus GetImportStatus() const { return m_importStatus; }
    inline void SetImportStatus(ImportStatus value) { m_importStatusHasBeenSet = true; m_importStatus = value; }
    inline StartImportResult& WithImportStatus(ImportStatus value) { SetImportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the import request was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    StartImportResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartImportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_importId;
    bool m_importIdHasBeenSet = false;

    ImportResourceSpecification m_resourceSpecification;
    bool m_resourceSpecificationHasBeenSet = false;

    MergeStrategy m_mergeStrategy{MergeStrategy::NOT_SET};
    bool m_mergeStrategyHasBeenSet = false;

    ImportStatus m_importStatus{ImportStatus::NOT_SET};
    bool m_importStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
