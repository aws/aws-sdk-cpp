/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wisdom/model/ContentStatus.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>Summary information about the content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/ContentSummary">AWS
   * API Reference</a></p>
   */
  class ContentSummary
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API ContentSummary();
    AWS_CONNECTWISDOMSERVICE_API ContentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API ContentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the content.</p>
     */
    inline const Aws::String& GetContentArn() const{ return m_contentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the content.</p>
     */
    inline bool ContentArnHasBeenSet() const { return m_contentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the content.</p>
     */
    inline void SetContentArn(const Aws::String& value) { m_contentArnHasBeenSet = true; m_contentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the content.</p>
     */
    inline void SetContentArn(Aws::String&& value) { m_contentArnHasBeenSet = true; m_contentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the content.</p>
     */
    inline void SetContentArn(const char* value) { m_contentArnHasBeenSet = true; m_contentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the content.</p>
     */
    inline ContentSummary& WithContentArn(const Aws::String& value) { SetContentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the content.</p>
     */
    inline ContentSummary& WithContentArn(Aws::String&& value) { SetContentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the content.</p>
     */
    inline ContentSummary& WithContentArn(const char* value) { SetContentArn(value); return *this;}


    /**
     * <p>The identifier of the content.</p>
     */
    inline const Aws::String& GetContentId() const{ return m_contentId; }

    /**
     * <p>The identifier of the content.</p>
     */
    inline bool ContentIdHasBeenSet() const { return m_contentIdHasBeenSet; }

    /**
     * <p>The identifier of the content.</p>
     */
    inline void SetContentId(const Aws::String& value) { m_contentIdHasBeenSet = true; m_contentId = value; }

    /**
     * <p>The identifier of the content.</p>
     */
    inline void SetContentId(Aws::String&& value) { m_contentIdHasBeenSet = true; m_contentId = std::move(value); }

    /**
     * <p>The identifier of the content.</p>
     */
    inline void SetContentId(const char* value) { m_contentIdHasBeenSet = true; m_contentId.assign(value); }

    /**
     * <p>The identifier of the content.</p>
     */
    inline ContentSummary& WithContentId(const Aws::String& value) { SetContentId(value); return *this;}

    /**
     * <p>The identifier of the content.</p>
     */
    inline ContentSummary& WithContentId(Aws::String&& value) { SetContentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the content.</p>
     */
    inline ContentSummary& WithContentId(const char* value) { SetContentId(value); return *this;}


    /**
     * <p>The media type of the content.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The media type of the content.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The media type of the content.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The media type of the content.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The media type of the content.</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The media type of the content.</p>
     */
    inline ContentSummary& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The media type of the content.</p>
     */
    inline ContentSummary& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The media type of the content.</p>
     */
    inline ContentSummary& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseArn() const{ return m_knowledgeBaseArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseArn(const Aws::String& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseArn(Aws::String&& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseArn(const char* value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline ContentSummary& WithKnowledgeBaseArn(const Aws::String& value) { SetKnowledgeBaseArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline ContentSummary& WithKnowledgeBaseArn(Aws::String&& value) { SetKnowledgeBaseArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline ContentSummary& WithKnowledgeBaseArn(const char* value) { SetKnowledgeBaseArn(value); return *this;}


    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline ContentSummary& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline ContentSummary& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline ContentSummary& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    /**
     * <p>A key/value map to store attributes without affecting tagging or
     * recommendations. For example, when synchronizing data between an external system
     * and Wisdom, you can store an external version identifier as metadata to utilize
     * for determining drift.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }

    /**
     * <p>A key/value map to store attributes without affecting tagging or
     * recommendations. For example, when synchronizing data between an external system
     * and Wisdom, you can store an external version identifier as metadata to utilize
     * for determining drift.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>A key/value map to store attributes without affecting tagging or
     * recommendations. For example, when synchronizing data between an external system
     * and Wisdom, you can store an external version identifier as metadata to utilize
     * for determining drift.</p>
     */
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>A key/value map to store attributes without affecting tagging or
     * recommendations. For example, when synchronizing data between an external system
     * and Wisdom, you can store an external version identifier as metadata to utilize
     * for determining drift.</p>
     */
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>A key/value map to store attributes without affecting tagging or
     * recommendations. For example, when synchronizing data between an external system
     * and Wisdom, you can store an external version identifier as metadata to utilize
     * for determining drift.</p>
     */
    inline ContentSummary& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}

    /**
     * <p>A key/value map to store attributes without affecting tagging or
     * recommendations. For example, when synchronizing data between an external system
     * and Wisdom, you can store an external version identifier as metadata to utilize
     * for determining drift.</p>
     */
    inline ContentSummary& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>A key/value map to store attributes without affecting tagging or
     * recommendations. For example, when synchronizing data between an external system
     * and Wisdom, you can store an external version identifier as metadata to utilize
     * for determining drift.</p>
     */
    inline ContentSummary& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }

    /**
     * <p>A key/value map to store attributes without affecting tagging or
     * recommendations. For example, when synchronizing data between an external system
     * and Wisdom, you can store an external version identifier as metadata to utilize
     * for determining drift.</p>
     */
    inline ContentSummary& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key/value map to store attributes without affecting tagging or
     * recommendations. For example, when synchronizing data between an external system
     * and Wisdom, you can store an external version identifier as metadata to utilize
     * for determining drift.</p>
     */
    inline ContentSummary& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key/value map to store attributes without affecting tagging or
     * recommendations. For example, when synchronizing data between an external system
     * and Wisdom, you can store an external version identifier as metadata to utilize
     * for determining drift.</p>
     */
    inline ContentSummary& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key/value map to store attributes without affecting tagging or
     * recommendations. For example, when synchronizing data between an external system
     * and Wisdom, you can store an external version identifier as metadata to utilize
     * for determining drift.</p>
     */
    inline ContentSummary& AddMetadata(const char* key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key/value map to store attributes without affecting tagging or
     * recommendations. For example, when synchronizing data between an external system
     * and Wisdom, you can store an external version identifier as metadata to utilize
     * for determining drift.</p>
     */
    inline ContentSummary& AddMetadata(Aws::String&& key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key/value map to store attributes without affecting tagging or
     * recommendations. For example, when synchronizing data between an external system
     * and Wisdom, you can store an external version identifier as metadata to utilize
     * for determining drift.</p>
     */
    inline ContentSummary& AddMetadata(const char* key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }


    /**
     * <p>The name of the content.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the content.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the content.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the content.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the content.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the content.</p>
     */
    inline ContentSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the content.</p>
     */
    inline ContentSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the content.</p>
     */
    inline ContentSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of the revision of the content.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The identifier of the revision of the content.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The identifier of the revision of the content.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The identifier of the revision of the content.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The identifier of the revision of the content.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The identifier of the revision of the content.</p>
     */
    inline ContentSummary& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The identifier of the revision of the content.</p>
     */
    inline ContentSummary& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the revision of the content.</p>
     */
    inline ContentSummary& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>The status of the content.</p>
     */
    inline const ContentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the content.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the content.</p>
     */
    inline void SetStatus(const ContentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the content.</p>
     */
    inline void SetStatus(ContentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the content.</p>
     */
    inline ContentSummary& WithStatus(const ContentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the content.</p>
     */
    inline ContentSummary& WithStatus(ContentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline ContentSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline ContentSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline ContentSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline ContentSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline ContentSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline ContentSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline ContentSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline ContentSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline ContentSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The title of the content.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the content.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the content.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the content.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the content.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the content.</p>
     */
    inline ContentSummary& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the content.</p>
     */
    inline ContentSummary& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the content.</p>
     */
    inline ContentSummary& WithTitle(const char* value) { SetTitle(value); return *this;}

  private:

    Aws::String m_contentArn;
    bool m_contentArnHasBeenSet = false;

    Aws::String m_contentId;
    bool m_contentIdHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_knowledgeBaseArn;
    bool m_knowledgeBaseArnHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    ContentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
