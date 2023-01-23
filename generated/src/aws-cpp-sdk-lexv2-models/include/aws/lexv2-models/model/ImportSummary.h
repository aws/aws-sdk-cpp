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
    AWS_LEXMODELSV2_API ImportSummary();
    AWS_LEXMODELSV2_API ImportSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ImportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier that Amazon Lex assigned to the import.</p>
     */
    inline const Aws::String& GetImportId() const{ return m_importId; }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the import.</p>
     */
    inline bool ImportIdHasBeenSet() const { return m_importIdHasBeenSet; }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the import.</p>
     */
    inline void SetImportId(const Aws::String& value) { m_importIdHasBeenSet = true; m_importId = value; }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the import.</p>
     */
    inline void SetImportId(Aws::String&& value) { m_importIdHasBeenSet = true; m_importId = std::move(value); }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the import.</p>
     */
    inline void SetImportId(const char* value) { m_importIdHasBeenSet = true; m_importId.assign(value); }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the import.</p>
     */
    inline ImportSummary& WithImportId(const Aws::String& value) { SetImportId(value); return *this;}

    /**
     * <p>The unique identifier that Amazon Lex assigned to the import.</p>
     */
    inline ImportSummary& WithImportId(Aws::String&& value) { SetImportId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier that Amazon Lex assigned to the import.</p>
     */
    inline ImportSummary& WithImportId(const char* value) { SetImportId(value); return *this;}


    /**
     * <p>The unique identifier that Amazon Lex assigned to the imported resource.</p>
     */
    inline const Aws::String& GetImportedResourceId() const{ return m_importedResourceId; }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the imported resource.</p>
     */
    inline bool ImportedResourceIdHasBeenSet() const { return m_importedResourceIdHasBeenSet; }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the imported resource.</p>
     */
    inline void SetImportedResourceId(const Aws::String& value) { m_importedResourceIdHasBeenSet = true; m_importedResourceId = value; }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the imported resource.</p>
     */
    inline void SetImportedResourceId(Aws::String&& value) { m_importedResourceIdHasBeenSet = true; m_importedResourceId = std::move(value); }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the imported resource.</p>
     */
    inline void SetImportedResourceId(const char* value) { m_importedResourceIdHasBeenSet = true; m_importedResourceId.assign(value); }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the imported resource.</p>
     */
    inline ImportSummary& WithImportedResourceId(const Aws::String& value) { SetImportedResourceId(value); return *this;}

    /**
     * <p>The unique identifier that Amazon Lex assigned to the imported resource.</p>
     */
    inline ImportSummary& WithImportedResourceId(Aws::String&& value) { SetImportedResourceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier that Amazon Lex assigned to the imported resource.</p>
     */
    inline ImportSummary& WithImportedResourceId(const char* value) { SetImportedResourceId(value); return *this;}


    /**
     * <p>The name that you gave the imported resource.</p>
     */
    inline const Aws::String& GetImportedResourceName() const{ return m_importedResourceName; }

    /**
     * <p>The name that you gave the imported resource.</p>
     */
    inline bool ImportedResourceNameHasBeenSet() const { return m_importedResourceNameHasBeenSet; }

    /**
     * <p>The name that you gave the imported resource.</p>
     */
    inline void SetImportedResourceName(const Aws::String& value) { m_importedResourceNameHasBeenSet = true; m_importedResourceName = value; }

    /**
     * <p>The name that you gave the imported resource.</p>
     */
    inline void SetImportedResourceName(Aws::String&& value) { m_importedResourceNameHasBeenSet = true; m_importedResourceName = std::move(value); }

    /**
     * <p>The name that you gave the imported resource.</p>
     */
    inline void SetImportedResourceName(const char* value) { m_importedResourceNameHasBeenSet = true; m_importedResourceName.assign(value); }

    /**
     * <p>The name that you gave the imported resource.</p>
     */
    inline ImportSummary& WithImportedResourceName(const Aws::String& value) { SetImportedResourceName(value); return *this;}

    /**
     * <p>The name that you gave the imported resource.</p>
     */
    inline ImportSummary& WithImportedResourceName(Aws::String&& value) { SetImportedResourceName(std::move(value)); return *this;}

    /**
     * <p>The name that you gave the imported resource.</p>
     */
    inline ImportSummary& WithImportedResourceName(const char* value) { SetImportedResourceName(value); return *this;}


    /**
     * <p>The status of the resource. When the status is <code>Completed</code> the
     * resource is ready to build.</p>
     */
    inline const ImportStatus& GetImportStatus() const{ return m_importStatus; }

    /**
     * <p>The status of the resource. When the status is <code>Completed</code> the
     * resource is ready to build.</p>
     */
    inline bool ImportStatusHasBeenSet() const { return m_importStatusHasBeenSet; }

    /**
     * <p>The status of the resource. When the status is <code>Completed</code> the
     * resource is ready to build.</p>
     */
    inline void SetImportStatus(const ImportStatus& value) { m_importStatusHasBeenSet = true; m_importStatus = value; }

    /**
     * <p>The status of the resource. When the status is <code>Completed</code> the
     * resource is ready to build.</p>
     */
    inline void SetImportStatus(ImportStatus&& value) { m_importStatusHasBeenSet = true; m_importStatus = std::move(value); }

    /**
     * <p>The status of the resource. When the status is <code>Completed</code> the
     * resource is ready to build.</p>
     */
    inline ImportSummary& WithImportStatus(const ImportStatus& value) { SetImportStatus(value); return *this;}

    /**
     * <p>The status of the resource. When the status is <code>Completed</code> the
     * resource is ready to build.</p>
     */
    inline ImportSummary& WithImportStatus(ImportStatus&& value) { SetImportStatus(std::move(value)); return *this;}


    /**
     * <p>The strategy used to merge existing bot or bot locale definitions with the
     * imported definition.</p>
     */
    inline const MergeStrategy& GetMergeStrategy() const{ return m_mergeStrategy; }

    /**
     * <p>The strategy used to merge existing bot or bot locale definitions with the
     * imported definition.</p>
     */
    inline bool MergeStrategyHasBeenSet() const { return m_mergeStrategyHasBeenSet; }

    /**
     * <p>The strategy used to merge existing bot or bot locale definitions with the
     * imported definition.</p>
     */
    inline void SetMergeStrategy(const MergeStrategy& value) { m_mergeStrategyHasBeenSet = true; m_mergeStrategy = value; }

    /**
     * <p>The strategy used to merge existing bot or bot locale definitions with the
     * imported definition.</p>
     */
    inline void SetMergeStrategy(MergeStrategy&& value) { m_mergeStrategyHasBeenSet = true; m_mergeStrategy = std::move(value); }

    /**
     * <p>The strategy used to merge existing bot or bot locale definitions with the
     * imported definition.</p>
     */
    inline ImportSummary& WithMergeStrategy(const MergeStrategy& value) { SetMergeStrategy(value); return *this;}

    /**
     * <p>The strategy used to merge existing bot or bot locale definitions with the
     * imported definition.</p>
     */
    inline ImportSummary& WithMergeStrategy(MergeStrategy&& value) { SetMergeStrategy(std::move(value)); return *this;}


    /**
     * <p>The date and time that the import was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time that the import was created.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the import was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date and time that the import was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time that the import was created.</p>
     */
    inline ImportSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time that the import was created.</p>
     */
    inline ImportSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the import was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time that the import was last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the import was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time that the import was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time that the import was last updated.</p>
     */
    inline ImportSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time that the import was last updated.</p>
     */
    inline ImportSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}


    /**
     * <p>The type of resource that was imported.</p>
     */
    inline const ImportResourceType& GetImportedResourceType() const{ return m_importedResourceType; }

    /**
     * <p>The type of resource that was imported.</p>
     */
    inline bool ImportedResourceTypeHasBeenSet() const { return m_importedResourceTypeHasBeenSet; }

    /**
     * <p>The type of resource that was imported.</p>
     */
    inline void SetImportedResourceType(const ImportResourceType& value) { m_importedResourceTypeHasBeenSet = true; m_importedResourceType = value; }

    /**
     * <p>The type of resource that was imported.</p>
     */
    inline void SetImportedResourceType(ImportResourceType&& value) { m_importedResourceTypeHasBeenSet = true; m_importedResourceType = std::move(value); }

    /**
     * <p>The type of resource that was imported.</p>
     */
    inline ImportSummary& WithImportedResourceType(const ImportResourceType& value) { SetImportedResourceType(value); return *this;}

    /**
     * <p>The type of resource that was imported.</p>
     */
    inline ImportSummary& WithImportedResourceType(ImportResourceType&& value) { SetImportedResourceType(std::move(value)); return *this;}

  private:

    Aws::String m_importId;
    bool m_importIdHasBeenSet = false;

    Aws::String m_importedResourceId;
    bool m_importedResourceIdHasBeenSet = false;

    Aws::String m_importedResourceName;
    bool m_importedResourceNameHasBeenSet = false;

    ImportStatus m_importStatus;
    bool m_importStatusHasBeenSet = false;

    MergeStrategy m_mergeStrategy;
    bool m_mergeStrategyHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    ImportResourceType m_importedResourceType;
    bool m_importedResourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
