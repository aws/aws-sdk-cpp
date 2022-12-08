/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReferenceImportJobItemStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>An genome reference source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ImportReferenceSourceItem">AWS
   * API Reference</a></p>
   */
  class ImportReferenceSourceItem
  {
  public:
    AWS_OMICS_API ImportReferenceSourceItem();
    AWS_OMICS_API ImportReferenceSourceItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ImportReferenceSourceItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The source's description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The source's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The source's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The source's description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The source's description.</p>
     */
    inline ImportReferenceSourceItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The source's description.</p>
     */
    inline ImportReferenceSourceItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The source's description.</p>
     */
    inline ImportReferenceSourceItem& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The source's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The source's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The source's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The source's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The source's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The source's name.</p>
     */
    inline ImportReferenceSourceItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The source's name.</p>
     */
    inline ImportReferenceSourceItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The source's name.</p>
     */
    inline ImportReferenceSourceItem& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline const Aws::String& GetSourceFile() const{ return m_sourceFile; }

    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline bool SourceFileHasBeenSet() const { return m_sourceFileHasBeenSet; }

    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline void SetSourceFile(const Aws::String& value) { m_sourceFileHasBeenSet = true; m_sourceFile = value; }

    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline void SetSourceFile(Aws::String&& value) { m_sourceFileHasBeenSet = true; m_sourceFile = std::move(value); }

    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline void SetSourceFile(const char* value) { m_sourceFileHasBeenSet = true; m_sourceFile.assign(value); }

    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline ImportReferenceSourceItem& WithSourceFile(const Aws::String& value) { SetSourceFile(value); return *this;}

    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline ImportReferenceSourceItem& WithSourceFile(Aws::String&& value) { SetSourceFile(std::move(value)); return *this;}

    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline ImportReferenceSourceItem& WithSourceFile(const char* value) { SetSourceFile(value); return *this;}


    /**
     * <p>The source's status.</p>
     */
    inline const ReferenceImportJobItemStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The source's status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The source's status.</p>
     */
    inline void SetStatus(const ReferenceImportJobItemStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The source's status.</p>
     */
    inline void SetStatus(ReferenceImportJobItemStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The source's status.</p>
     */
    inline ImportReferenceSourceItem& WithStatus(const ReferenceImportJobItemStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The source's status.</p>
     */
    inline ImportReferenceSourceItem& WithStatus(ReferenceImportJobItemStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The source's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The source's status message.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The source's status message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The source's status message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The source's status message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The source's status message.</p>
     */
    inline ImportReferenceSourceItem& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The source's status message.</p>
     */
    inline ImportReferenceSourceItem& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The source's status message.</p>
     */
    inline ImportReferenceSourceItem& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The source's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The source's tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The source's tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The source's tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The source's tags.</p>
     */
    inline ImportReferenceSourceItem& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The source's tags.</p>
     */
    inline ImportReferenceSourceItem& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The source's tags.</p>
     */
    inline ImportReferenceSourceItem& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The source's tags.</p>
     */
    inline ImportReferenceSourceItem& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The source's tags.</p>
     */
    inline ImportReferenceSourceItem& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The source's tags.</p>
     */
    inline ImportReferenceSourceItem& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The source's tags.</p>
     */
    inline ImportReferenceSourceItem& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The source's tags.</p>
     */
    inline ImportReferenceSourceItem& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The source's tags.</p>
     */
    inline ImportReferenceSourceItem& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_sourceFile;
    bool m_sourceFileHasBeenSet = false;

    ReferenceImportJobItemStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
