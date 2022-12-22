/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/ConfluenceSpaceToIndexFieldMapping.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Configuration information for indexing Confluence spaces.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ConfluenceSpaceConfiguration">AWS
   * API Reference</a></p>
   */
  class ConfluenceSpaceConfiguration
  {
  public:
    AWS_KENDRA_API ConfluenceSpaceConfiguration();
    AWS_KENDRA_API ConfluenceSpaceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ConfluenceSpaceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <code>TRUE</code> to index personal spaces. You can add restrictions to
     * items in personal spaces. If personal spaces are indexed, queries without user
     * context information may return restricted items from a personal space in their
     * results. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/user-context-filter.html">Filtering
     * on user context</a>.</p>
     */
    inline bool GetCrawlPersonalSpaces() const{ return m_crawlPersonalSpaces; }

    /**
     * <p> <code>TRUE</code> to index personal spaces. You can add restrictions to
     * items in personal spaces. If personal spaces are indexed, queries without user
     * context information may return restricted items from a personal space in their
     * results. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/user-context-filter.html">Filtering
     * on user context</a>.</p>
     */
    inline bool CrawlPersonalSpacesHasBeenSet() const { return m_crawlPersonalSpacesHasBeenSet; }

    /**
     * <p> <code>TRUE</code> to index personal spaces. You can add restrictions to
     * items in personal spaces. If personal spaces are indexed, queries without user
     * context information may return restricted items from a personal space in their
     * results. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/user-context-filter.html">Filtering
     * on user context</a>.</p>
     */
    inline void SetCrawlPersonalSpaces(bool value) { m_crawlPersonalSpacesHasBeenSet = true; m_crawlPersonalSpaces = value; }

    /**
     * <p> <code>TRUE</code> to index personal spaces. You can add restrictions to
     * items in personal spaces. If personal spaces are indexed, queries without user
     * context information may return restricted items from a personal space in their
     * results. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/user-context-filter.html">Filtering
     * on user context</a>.</p>
     */
    inline ConfluenceSpaceConfiguration& WithCrawlPersonalSpaces(bool value) { SetCrawlPersonalSpaces(value); return *this;}


    /**
     * <p> <code>TRUE</code> to index archived spaces.</p>
     */
    inline bool GetCrawlArchivedSpaces() const{ return m_crawlArchivedSpaces; }

    /**
     * <p> <code>TRUE</code> to index archived spaces.</p>
     */
    inline bool CrawlArchivedSpacesHasBeenSet() const { return m_crawlArchivedSpacesHasBeenSet; }

    /**
     * <p> <code>TRUE</code> to index archived spaces.</p>
     */
    inline void SetCrawlArchivedSpaces(bool value) { m_crawlArchivedSpacesHasBeenSet = true; m_crawlArchivedSpaces = value; }

    /**
     * <p> <code>TRUE</code> to index archived spaces.</p>
     */
    inline ConfluenceSpaceConfiguration& WithCrawlArchivedSpaces(bool value) { SetCrawlArchivedSpaces(value); return *this;}


    /**
     * <p>A list of space keys for Confluence spaces. If you include a key, the blogs,
     * documents, and attachments in the space are indexed. Spaces that aren't in the
     * list aren't indexed. A space in the list must exist. Otherwise, Amazon Kendra
     * logs an error when the data source is synchronized. If a space is in both the
     * <code>IncludeSpaces</code> and the <code>ExcludeSpaces</code> list, the space is
     * excluded.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeSpaces() const{ return m_includeSpaces; }

    /**
     * <p>A list of space keys for Confluence spaces. If you include a key, the blogs,
     * documents, and attachments in the space are indexed. Spaces that aren't in the
     * list aren't indexed. A space in the list must exist. Otherwise, Amazon Kendra
     * logs an error when the data source is synchronized. If a space is in both the
     * <code>IncludeSpaces</code> and the <code>ExcludeSpaces</code> list, the space is
     * excluded.</p>
     */
    inline bool IncludeSpacesHasBeenSet() const { return m_includeSpacesHasBeenSet; }

    /**
     * <p>A list of space keys for Confluence spaces. If you include a key, the blogs,
     * documents, and attachments in the space are indexed. Spaces that aren't in the
     * list aren't indexed. A space in the list must exist. Otherwise, Amazon Kendra
     * logs an error when the data source is synchronized. If a space is in both the
     * <code>IncludeSpaces</code> and the <code>ExcludeSpaces</code> list, the space is
     * excluded.</p>
     */
    inline void SetIncludeSpaces(const Aws::Vector<Aws::String>& value) { m_includeSpacesHasBeenSet = true; m_includeSpaces = value; }

    /**
     * <p>A list of space keys for Confluence spaces. If you include a key, the blogs,
     * documents, and attachments in the space are indexed. Spaces that aren't in the
     * list aren't indexed. A space in the list must exist. Otherwise, Amazon Kendra
     * logs an error when the data source is synchronized. If a space is in both the
     * <code>IncludeSpaces</code> and the <code>ExcludeSpaces</code> list, the space is
     * excluded.</p>
     */
    inline void SetIncludeSpaces(Aws::Vector<Aws::String>&& value) { m_includeSpacesHasBeenSet = true; m_includeSpaces = std::move(value); }

    /**
     * <p>A list of space keys for Confluence spaces. If you include a key, the blogs,
     * documents, and attachments in the space are indexed. Spaces that aren't in the
     * list aren't indexed. A space in the list must exist. Otherwise, Amazon Kendra
     * logs an error when the data source is synchronized. If a space is in both the
     * <code>IncludeSpaces</code> and the <code>ExcludeSpaces</code> list, the space is
     * excluded.</p>
     */
    inline ConfluenceSpaceConfiguration& WithIncludeSpaces(const Aws::Vector<Aws::String>& value) { SetIncludeSpaces(value); return *this;}

    /**
     * <p>A list of space keys for Confluence spaces. If you include a key, the blogs,
     * documents, and attachments in the space are indexed. Spaces that aren't in the
     * list aren't indexed. A space in the list must exist. Otherwise, Amazon Kendra
     * logs an error when the data source is synchronized. If a space is in both the
     * <code>IncludeSpaces</code> and the <code>ExcludeSpaces</code> list, the space is
     * excluded.</p>
     */
    inline ConfluenceSpaceConfiguration& WithIncludeSpaces(Aws::Vector<Aws::String>&& value) { SetIncludeSpaces(std::move(value)); return *this;}

    /**
     * <p>A list of space keys for Confluence spaces. If you include a key, the blogs,
     * documents, and attachments in the space are indexed. Spaces that aren't in the
     * list aren't indexed. A space in the list must exist. Otherwise, Amazon Kendra
     * logs an error when the data source is synchronized. If a space is in both the
     * <code>IncludeSpaces</code> and the <code>ExcludeSpaces</code> list, the space is
     * excluded.</p>
     */
    inline ConfluenceSpaceConfiguration& AddIncludeSpaces(const Aws::String& value) { m_includeSpacesHasBeenSet = true; m_includeSpaces.push_back(value); return *this; }

    /**
     * <p>A list of space keys for Confluence spaces. If you include a key, the blogs,
     * documents, and attachments in the space are indexed. Spaces that aren't in the
     * list aren't indexed. A space in the list must exist. Otherwise, Amazon Kendra
     * logs an error when the data source is synchronized. If a space is in both the
     * <code>IncludeSpaces</code> and the <code>ExcludeSpaces</code> list, the space is
     * excluded.</p>
     */
    inline ConfluenceSpaceConfiguration& AddIncludeSpaces(Aws::String&& value) { m_includeSpacesHasBeenSet = true; m_includeSpaces.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of space keys for Confluence spaces. If you include a key, the blogs,
     * documents, and attachments in the space are indexed. Spaces that aren't in the
     * list aren't indexed. A space in the list must exist. Otherwise, Amazon Kendra
     * logs an error when the data source is synchronized. If a space is in both the
     * <code>IncludeSpaces</code> and the <code>ExcludeSpaces</code> list, the space is
     * excluded.</p>
     */
    inline ConfluenceSpaceConfiguration& AddIncludeSpaces(const char* value) { m_includeSpacesHasBeenSet = true; m_includeSpaces.push_back(value); return *this; }


    /**
     * <p>A list of space keys of Confluence spaces. If you include a key, the blogs,
     * documents, and attachments in the space are not indexed. If a space is in both
     * the <code>ExcludeSpaces</code> and the <code>IncludeSpaces</code> list, the
     * space is excluded.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeSpaces() const{ return m_excludeSpaces; }

    /**
     * <p>A list of space keys of Confluence spaces. If you include a key, the blogs,
     * documents, and attachments in the space are not indexed. If a space is in both
     * the <code>ExcludeSpaces</code> and the <code>IncludeSpaces</code> list, the
     * space is excluded.</p>
     */
    inline bool ExcludeSpacesHasBeenSet() const { return m_excludeSpacesHasBeenSet; }

    /**
     * <p>A list of space keys of Confluence spaces. If you include a key, the blogs,
     * documents, and attachments in the space are not indexed. If a space is in both
     * the <code>ExcludeSpaces</code> and the <code>IncludeSpaces</code> list, the
     * space is excluded.</p>
     */
    inline void SetExcludeSpaces(const Aws::Vector<Aws::String>& value) { m_excludeSpacesHasBeenSet = true; m_excludeSpaces = value; }

    /**
     * <p>A list of space keys of Confluence spaces. If you include a key, the blogs,
     * documents, and attachments in the space are not indexed. If a space is in both
     * the <code>ExcludeSpaces</code> and the <code>IncludeSpaces</code> list, the
     * space is excluded.</p>
     */
    inline void SetExcludeSpaces(Aws::Vector<Aws::String>&& value) { m_excludeSpacesHasBeenSet = true; m_excludeSpaces = std::move(value); }

    /**
     * <p>A list of space keys of Confluence spaces. If you include a key, the blogs,
     * documents, and attachments in the space are not indexed. If a space is in both
     * the <code>ExcludeSpaces</code> and the <code>IncludeSpaces</code> list, the
     * space is excluded.</p>
     */
    inline ConfluenceSpaceConfiguration& WithExcludeSpaces(const Aws::Vector<Aws::String>& value) { SetExcludeSpaces(value); return *this;}

    /**
     * <p>A list of space keys of Confluence spaces. If you include a key, the blogs,
     * documents, and attachments in the space are not indexed. If a space is in both
     * the <code>ExcludeSpaces</code> and the <code>IncludeSpaces</code> list, the
     * space is excluded.</p>
     */
    inline ConfluenceSpaceConfiguration& WithExcludeSpaces(Aws::Vector<Aws::String>&& value) { SetExcludeSpaces(std::move(value)); return *this;}

    /**
     * <p>A list of space keys of Confluence spaces. If you include a key, the blogs,
     * documents, and attachments in the space are not indexed. If a space is in both
     * the <code>ExcludeSpaces</code> and the <code>IncludeSpaces</code> list, the
     * space is excluded.</p>
     */
    inline ConfluenceSpaceConfiguration& AddExcludeSpaces(const Aws::String& value) { m_excludeSpacesHasBeenSet = true; m_excludeSpaces.push_back(value); return *this; }

    /**
     * <p>A list of space keys of Confluence spaces. If you include a key, the blogs,
     * documents, and attachments in the space are not indexed. If a space is in both
     * the <code>ExcludeSpaces</code> and the <code>IncludeSpaces</code> list, the
     * space is excluded.</p>
     */
    inline ConfluenceSpaceConfiguration& AddExcludeSpaces(Aws::String&& value) { m_excludeSpacesHasBeenSet = true; m_excludeSpaces.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of space keys of Confluence spaces. If you include a key, the blogs,
     * documents, and attachments in the space are not indexed. If a space is in both
     * the <code>ExcludeSpaces</code> and the <code>IncludeSpaces</code> list, the
     * space is excluded.</p>
     */
    inline ConfluenceSpaceConfiguration& AddExcludeSpaces(const char* value) { m_excludeSpacesHasBeenSet = true; m_excludeSpaces.push_back(value); return *this; }


    /**
     * <p>Maps attributes or field names of Confluence spaces to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>SpaceFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline const Aws::Vector<ConfluenceSpaceToIndexFieldMapping>& GetSpaceFieldMappings() const{ return m_spaceFieldMappings; }

    /**
     * <p>Maps attributes or field names of Confluence spaces to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>SpaceFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline bool SpaceFieldMappingsHasBeenSet() const { return m_spaceFieldMappingsHasBeenSet; }

    /**
     * <p>Maps attributes or field names of Confluence spaces to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>SpaceFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline void SetSpaceFieldMappings(const Aws::Vector<ConfluenceSpaceToIndexFieldMapping>& value) { m_spaceFieldMappingsHasBeenSet = true; m_spaceFieldMappings = value; }

    /**
     * <p>Maps attributes or field names of Confluence spaces to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>SpaceFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline void SetSpaceFieldMappings(Aws::Vector<ConfluenceSpaceToIndexFieldMapping>&& value) { m_spaceFieldMappingsHasBeenSet = true; m_spaceFieldMappings = std::move(value); }

    /**
     * <p>Maps attributes or field names of Confluence spaces to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>SpaceFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline ConfluenceSpaceConfiguration& WithSpaceFieldMappings(const Aws::Vector<ConfluenceSpaceToIndexFieldMapping>& value) { SetSpaceFieldMappings(value); return *this;}

    /**
     * <p>Maps attributes or field names of Confluence spaces to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>SpaceFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline ConfluenceSpaceConfiguration& WithSpaceFieldMappings(Aws::Vector<ConfluenceSpaceToIndexFieldMapping>&& value) { SetSpaceFieldMappings(std::move(value)); return *this;}

    /**
     * <p>Maps attributes or field names of Confluence spaces to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>SpaceFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline ConfluenceSpaceConfiguration& AddSpaceFieldMappings(const ConfluenceSpaceToIndexFieldMapping& value) { m_spaceFieldMappingsHasBeenSet = true; m_spaceFieldMappings.push_back(value); return *this; }

    /**
     * <p>Maps attributes or field names of Confluence spaces to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>SpaceFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline ConfluenceSpaceConfiguration& AddSpaceFieldMappings(ConfluenceSpaceToIndexFieldMapping&& value) { m_spaceFieldMappingsHasBeenSet = true; m_spaceFieldMappings.push_back(std::move(value)); return *this; }

  private:

    bool m_crawlPersonalSpaces;
    bool m_crawlPersonalSpacesHasBeenSet = false;

    bool m_crawlArchivedSpaces;
    bool m_crawlArchivedSpacesHasBeenSet = false;

    Aws::Vector<Aws::String> m_includeSpaces;
    bool m_includeSpacesHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeSpaces;
    bool m_excludeSpacesHasBeenSet = false;

    Aws::Vector<ConfluenceSpaceToIndexFieldMapping> m_spaceFieldMappings;
    bool m_spaceFieldMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
