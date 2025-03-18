/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/ImportStatus.h>
#include <aws/lexv2-models/model/MergeStrategy.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/ImportResourceType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Provides summary information about an import in an import list.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ImportSummary">AWS
   * API Reference</a></p>
   */
  class ImportSummary
  {
  public:
    AWS_LEXMODELSV2_API ImportSummary() = default;
    AWS_LEXMODELSV2_API ImportSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ImportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier that Amazon Lex assigned to the import.</p>
     */
    inline const Aws::String& GetImportId() const { return m_importId; }
    inline bool ImportIdHasBeenSet() const { return m_importIdHasBeenSet; }
    template<typename ImportIdT = Aws::String>
    void SetImportId(ImportIdT&& value) { m_importIdHasBeenSet = true; m_importId = std::forward<ImportIdT>(value); }
    template<typename ImportIdT = Aws::String>
    ImportSummary& WithImportId(ImportIdT&& value) { SetImportId(std::forward<ImportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier that Amazon Lex assigned to the imported resource.</p>
     */
    inline const Aws::String& GetImportedResourceId() const { return m_importedResourceId; }
    inline bool ImportedResourceIdHasBeenSet() const { return m_importedResourceIdHasBeenSet; }
    template<typename ImportedResourceIdT = Aws::String>
    void SetImportedResourceId(ImportedResourceIdT&& value) { m_importedResourceIdHasBeenSet = true; m_importedResourceId = std::forward<ImportedResourceIdT>(value); }
    template<typename ImportedResourceIdT = Aws::String>
    ImportSummary& WithImportedResourceId(ImportedResourceIdT&& value) { SetImportedResourceId(std::forward<ImportedResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that you gave the imported resource.</p>
     */
    inline const Aws::String& GetImportedResourceName() const { return m_importedResourceName; }
    inline bool ImportedResourceNameHasBeenSet() const { return m_importedResourceNameHasBeenSet; }
    template<typename ImportedResourceNameT = Aws::String>
    void SetImportedResourceName(ImportedResourceNameT&& value) { m_importedResourceNameHasBeenSet = true; m_importedResourceName = std::forward<ImportedResourceNameT>(value); }
    template<typename ImportedResourceNameT = Aws::String>
    ImportSummary& WithImportedResourceName(ImportedResourceNameT&& value) { SetImportedResourceName(std::forward<ImportedResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the resource. When the status is <code>Completed</code> the
     * resource is ready to build.</p>
     */
    inline ImportStatus GetImportStatus() const { return m_importStatus; }
    inline bool ImportStatusHasBeenSet() const { return m_importStatusHasBeenSet; }
    inline void SetImportStatus(ImportStatus value) { m_importStatusHasBeenSet = true; m_importStatus = value; }
    inline ImportSummary& WithImportStatus(ImportStatus value) { SetImportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strategy used to merge existing bot or bot locale definitions with the
     * imported definition.</p>
     */
    inline MergeStrategy GetMergeStrategy() const { return m_mergeStrategy; }
    inline bool MergeStrategyHasBeenSet() const { return m_mergeStrategyHasBeenSet; }
    inline void SetMergeStrategy(MergeStrategy value) { m_mergeStrategyHasBeenSet = true; m_mergeStrategy = value; }
    inline ImportSummary& WithMergeStrategy(MergeStrategy value) { SetMergeStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the import was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    ImportSummary& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the import was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    ImportSummary& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource that was imported.</p>
     */
    inline ImportResourceType GetImportedResourceType() const { return m_importedResourceType; }
    inline bool ImportedResourceTypeHasBeenSet() const { return m_importedResourceTypeHasBeenSet; }
    inline void SetImportedResourceType(ImportResourceType value) { m_importedResourceTypeHasBeenSet = true; m_importedResourceType = value; }
    inline ImportSummary& WithImportedResourceType(ImportResourceType value) { SetImportedResourceType(value); return *this;}
    ///@}
  private:

    Aws::String m_importId;
    bool m_importIdHasBeenSet = false;

    Aws::String m_importedResourceId;
    bool m_importedResourceIdHasBeenSet = false;

    Aws::String m_importedResourceName;
    bool m_importedResourceNameHasBeenSet = false;

    ImportStatus m_importStatus{ImportStatus::NOT_SET};
    bool m_importStatusHasBeenSet = false;

    MergeStrategy m_mergeStrategy{MergeStrategy::NOT_SET};
    bool m_mergeStrategyHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    ImportResourceType m_importedResourceType{ImportResourceType::NOT_SET};
    bool m_importedResourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
