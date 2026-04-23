/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/DocumentStatusType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/workdocs/model/DocumentThumbnailType.h>
#include <aws/workdocs/model/DocumentSourceType.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes a version of a document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DocumentVersionMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_WORKDOCS_API DocumentVersionMetadata
  {
  public:
    DocumentVersionMetadata();
    DocumentVersionMetadata(Aws::Utils::Json::JsonView jsonValue);
    DocumentVersionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the version.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the version.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the version.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the version.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the version.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the version.</p>
     */
    inline DocumentVersionMetadata& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the version.</p>
     */
    inline DocumentVersionMetadata& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the version.</p>
     */
    inline DocumentVersionMetadata& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the version.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the version.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the version.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the version.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the version.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the version.</p>
     */
    inline DocumentVersionMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the version.</p>
     */
    inline DocumentVersionMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the version.</p>
     */
    inline DocumentVersionMetadata& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The content type of the document.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The content type of the document.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The content type of the document.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The content type of the document.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The content type of the document.</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The content type of the document.</p>
     */
    inline DocumentVersionMetadata& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The content type of the document.</p>
     */
    inline DocumentVersionMetadata& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The content type of the document.</p>
     */
    inline DocumentVersionMetadata& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>The size of the document, in bytes.</p>
     */
    inline long long GetSize() const{ return m_size; }

    /**
     * <p>The size of the document, in bytes.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size of the document, in bytes.</p>
     */
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of the document, in bytes.</p>
     */
    inline DocumentVersionMetadata& WithSize(long long value) { SetSize(value); return *this;}


    /**
     * <p>The signature of the document.</p>
     */
    inline const Aws::String& GetSignature() const{ return m_signature; }

    /**
     * <p>The signature of the document.</p>
     */
    inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }

    /**
     * <p>The signature of the document.</p>
     */
    inline void SetSignature(const Aws::String& value) { m_signatureHasBeenSet = true; m_signature = value; }

    /**
     * <p>The signature of the document.</p>
     */
    inline void SetSignature(Aws::String&& value) { m_signatureHasBeenSet = true; m_signature = std::move(value); }

    /**
     * <p>The signature of the document.</p>
     */
    inline void SetSignature(const char* value) { m_signatureHasBeenSet = true; m_signature.assign(value); }

    /**
     * <p>The signature of the document.</p>
     */
    inline DocumentVersionMetadata& WithSignature(const Aws::String& value) { SetSignature(value); return *this;}

    /**
     * <p>The signature of the document.</p>
     */
    inline DocumentVersionMetadata& WithSignature(Aws::String&& value) { SetSignature(std::move(value)); return *this;}

    /**
     * <p>The signature of the document.</p>
     */
    inline DocumentVersionMetadata& WithSignature(const char* value) { SetSignature(value); return *this;}


    /**
     * <p>The status of the document.</p>
     */
    inline const DocumentStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the document.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the document.</p>
     */
    inline void SetStatus(const DocumentStatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the document.</p>
     */
    inline void SetStatus(DocumentStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the document.</p>
     */
    inline DocumentVersionMetadata& WithStatus(const DocumentStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the document.</p>
     */
    inline DocumentVersionMetadata& WithStatus(DocumentStatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the document was first uploaded.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The timestamp when the document was first uploaded.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The timestamp when the document was first uploaded.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The timestamp when the document was first uploaded.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The timestamp when the document was first uploaded.</p>
     */
    inline DocumentVersionMetadata& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The timestamp when the document was first uploaded.</p>
     */
    inline DocumentVersionMetadata& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the document was last uploaded.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTimestamp() const{ return m_modifiedTimestamp; }

    /**
     * <p>The timestamp when the document was last uploaded.</p>
     */
    inline bool ModifiedTimestampHasBeenSet() const { return m_modifiedTimestampHasBeenSet; }

    /**
     * <p>The timestamp when the document was last uploaded.</p>
     */
    inline void SetModifiedTimestamp(const Aws::Utils::DateTime& value) { m_modifiedTimestampHasBeenSet = true; m_modifiedTimestamp = value; }

    /**
     * <p>The timestamp when the document was last uploaded.</p>
     */
    inline void SetModifiedTimestamp(Aws::Utils::DateTime&& value) { m_modifiedTimestampHasBeenSet = true; m_modifiedTimestamp = std::move(value); }

    /**
     * <p>The timestamp when the document was last uploaded.</p>
     */
    inline DocumentVersionMetadata& WithModifiedTimestamp(const Aws::Utils::DateTime& value) { SetModifiedTimestamp(value); return *this;}

    /**
     * <p>The timestamp when the document was last uploaded.</p>
     */
    inline DocumentVersionMetadata& WithModifiedTimestamp(Aws::Utils::DateTime&& value) { SetModifiedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the content of the document was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetContentCreatedTimestamp() const{ return m_contentCreatedTimestamp; }

    /**
     * <p>The timestamp when the content of the document was originally created.</p>
     */
    inline bool ContentCreatedTimestampHasBeenSet() const { return m_contentCreatedTimestampHasBeenSet; }

    /**
     * <p>The timestamp when the content of the document was originally created.</p>
     */
    inline void SetContentCreatedTimestamp(const Aws::Utils::DateTime& value) { m_contentCreatedTimestampHasBeenSet = true; m_contentCreatedTimestamp = value; }

    /**
     * <p>The timestamp when the content of the document was originally created.</p>
     */
    inline void SetContentCreatedTimestamp(Aws::Utils::DateTime&& value) { m_contentCreatedTimestampHasBeenSet = true; m_contentCreatedTimestamp = std::move(value); }

    /**
     * <p>The timestamp when the content of the document was originally created.</p>
     */
    inline DocumentVersionMetadata& WithContentCreatedTimestamp(const Aws::Utils::DateTime& value) { SetContentCreatedTimestamp(value); return *this;}

    /**
     * <p>The timestamp when the content of the document was originally created.</p>
     */
    inline DocumentVersionMetadata& WithContentCreatedTimestamp(Aws::Utils::DateTime&& value) { SetContentCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the content of the document was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetContentModifiedTimestamp() const{ return m_contentModifiedTimestamp; }

    /**
     * <p>The timestamp when the content of the document was modified.</p>
     */
    inline bool ContentModifiedTimestampHasBeenSet() const { return m_contentModifiedTimestampHasBeenSet; }

    /**
     * <p>The timestamp when the content of the document was modified.</p>
     */
    inline void SetContentModifiedTimestamp(const Aws::Utils::DateTime& value) { m_contentModifiedTimestampHasBeenSet = true; m_contentModifiedTimestamp = value; }

    /**
     * <p>The timestamp when the content of the document was modified.</p>
     */
    inline void SetContentModifiedTimestamp(Aws::Utils::DateTime&& value) { m_contentModifiedTimestampHasBeenSet = true; m_contentModifiedTimestamp = std::move(value); }

    /**
     * <p>The timestamp when the content of the document was modified.</p>
     */
    inline DocumentVersionMetadata& WithContentModifiedTimestamp(const Aws::Utils::DateTime& value) { SetContentModifiedTimestamp(value); return *this;}

    /**
     * <p>The timestamp when the content of the document was modified.</p>
     */
    inline DocumentVersionMetadata& WithContentModifiedTimestamp(Aws::Utils::DateTime&& value) { SetContentModifiedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The ID of the creator.</p>
     */
    inline const Aws::String& GetCreatorId() const{ return m_creatorId; }

    /**
     * <p>The ID of the creator.</p>
     */
    inline bool CreatorIdHasBeenSet() const { return m_creatorIdHasBeenSet; }

    /**
     * <p>The ID of the creator.</p>
     */
    inline void SetCreatorId(const Aws::String& value) { m_creatorIdHasBeenSet = true; m_creatorId = value; }

    /**
     * <p>The ID of the creator.</p>
     */
    inline void SetCreatorId(Aws::String&& value) { m_creatorIdHasBeenSet = true; m_creatorId = std::move(value); }

    /**
     * <p>The ID of the creator.</p>
     */
    inline void SetCreatorId(const char* value) { m_creatorIdHasBeenSet = true; m_creatorId.assign(value); }

    /**
     * <p>The ID of the creator.</p>
     */
    inline DocumentVersionMetadata& WithCreatorId(const Aws::String& value) { SetCreatorId(value); return *this;}

    /**
     * <p>The ID of the creator.</p>
     */
    inline DocumentVersionMetadata& WithCreatorId(Aws::String&& value) { SetCreatorId(std::move(value)); return *this;}

    /**
     * <p>The ID of the creator.</p>
     */
    inline DocumentVersionMetadata& WithCreatorId(const char* value) { SetCreatorId(value); return *this;}


    /**
     * <p>The thumbnail of the document.</p>
     */
    inline const Aws::Map<DocumentThumbnailType, Aws::String>& GetThumbnail() const{ return m_thumbnail; }

    /**
     * <p>The thumbnail of the document.</p>
     */
    inline bool ThumbnailHasBeenSet() const { return m_thumbnailHasBeenSet; }

    /**
     * <p>The thumbnail of the document.</p>
     */
    inline void SetThumbnail(const Aws::Map<DocumentThumbnailType, Aws::String>& value) { m_thumbnailHasBeenSet = true; m_thumbnail = value; }

    /**
     * <p>The thumbnail of the document.</p>
     */
    inline void SetThumbnail(Aws::Map<DocumentThumbnailType, Aws::String>&& value) { m_thumbnailHasBeenSet = true; m_thumbnail = std::move(value); }

    /**
     * <p>The thumbnail of the document.</p>
     */
    inline DocumentVersionMetadata& WithThumbnail(const Aws::Map<DocumentThumbnailType, Aws::String>& value) { SetThumbnail(value); return *this;}

    /**
     * <p>The thumbnail of the document.</p>
     */
    inline DocumentVersionMetadata& WithThumbnail(Aws::Map<DocumentThumbnailType, Aws::String>&& value) { SetThumbnail(std::move(value)); return *this;}

    /**
     * <p>The thumbnail of the document.</p>
     */
    inline DocumentVersionMetadata& AddThumbnail(const DocumentThumbnailType& key, const Aws::String& value) { m_thumbnailHasBeenSet = true; m_thumbnail.emplace(key, value); return *this; }

    /**
     * <p>The thumbnail of the document.</p>
     */
    inline DocumentVersionMetadata& AddThumbnail(DocumentThumbnailType&& key, const Aws::String& value) { m_thumbnailHasBeenSet = true; m_thumbnail.emplace(std::move(key), value); return *this; }

    /**
     * <p>The thumbnail of the document.</p>
     */
    inline DocumentVersionMetadata& AddThumbnail(const DocumentThumbnailType& key, Aws::String&& value) { m_thumbnailHasBeenSet = true; m_thumbnail.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The thumbnail of the document.</p>
     */
    inline DocumentVersionMetadata& AddThumbnail(DocumentThumbnailType&& key, Aws::String&& value) { m_thumbnailHasBeenSet = true; m_thumbnail.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The thumbnail of the document.</p>
     */
    inline DocumentVersionMetadata& AddThumbnail(DocumentThumbnailType&& key, const char* value) { m_thumbnailHasBeenSet = true; m_thumbnail.emplace(std::move(key), value); return *this; }

    /**
     * <p>The thumbnail of the document.</p>
     */
    inline DocumentVersionMetadata& AddThumbnail(const DocumentThumbnailType& key, const char* value) { m_thumbnailHasBeenSet = true; m_thumbnail.emplace(key, value); return *this; }


    /**
     * <p>The source of the document.</p>
     */
    inline const Aws::Map<DocumentSourceType, Aws::String>& GetSource() const{ return m_source; }

    /**
     * <p>The source of the document.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source of the document.</p>
     */
    inline void SetSource(const Aws::Map<DocumentSourceType, Aws::String>& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source of the document.</p>
     */
    inline void SetSource(Aws::Map<DocumentSourceType, Aws::String>&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source of the document.</p>
     */
    inline DocumentVersionMetadata& WithSource(const Aws::Map<DocumentSourceType, Aws::String>& value) { SetSource(value); return *this;}

    /**
     * <p>The source of the document.</p>
     */
    inline DocumentVersionMetadata& WithSource(Aws::Map<DocumentSourceType, Aws::String>&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The source of the document.</p>
     */
    inline DocumentVersionMetadata& AddSource(const DocumentSourceType& key, const Aws::String& value) { m_sourceHasBeenSet = true; m_source.emplace(key, value); return *this; }

    /**
     * <p>The source of the document.</p>
     */
    inline DocumentVersionMetadata& AddSource(DocumentSourceType&& key, const Aws::String& value) { m_sourceHasBeenSet = true; m_source.emplace(std::move(key), value); return *this; }

    /**
     * <p>The source of the document.</p>
     */
    inline DocumentVersionMetadata& AddSource(const DocumentSourceType& key, Aws::String&& value) { m_sourceHasBeenSet = true; m_source.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The source of the document.</p>
     */
    inline DocumentVersionMetadata& AddSource(DocumentSourceType&& key, Aws::String&& value) { m_sourceHasBeenSet = true; m_source.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The source of the document.</p>
     */
    inline DocumentVersionMetadata& AddSource(DocumentSourceType&& key, const char* value) { m_sourceHasBeenSet = true; m_source.emplace(std::move(key), value); return *this; }

    /**
     * <p>The source of the document.</p>
     */
    inline DocumentVersionMetadata& AddSource(const DocumentSourceType& key, const char* value) { m_sourceHasBeenSet = true; m_source.emplace(key, value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet;

    long long m_size;
    bool m_sizeHasBeenSet;

    Aws::String m_signature;
    bool m_signatureHasBeenSet;

    DocumentStatusType m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet;

    Aws::Utils::DateTime m_modifiedTimestamp;
    bool m_modifiedTimestampHasBeenSet;

    Aws::Utils::DateTime m_contentCreatedTimestamp;
    bool m_contentCreatedTimestampHasBeenSet;

    Aws::Utils::DateTime m_contentModifiedTimestamp;
    bool m_contentModifiedTimestampHasBeenSet;

    Aws::String m_creatorId;
    bool m_creatorIdHasBeenSet;

    Aws::Map<DocumentThumbnailType, Aws::String> m_thumbnail;
    bool m_thumbnailHasBeenSet;

    Aws::Map<DocumentSourceType, Aws::String> m_source;
    bool m_sourceHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
