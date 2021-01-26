/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/ConfluenceBlogToIndexFieldMapping.h>
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
   * <p>Specifies the blog settings for the Confluence data source. Blogs are always
   * indexed unless filtered from the index by the <code>ExclusionPatterns</code> or
   * <code>InclusionPatterns</code> fields in the data type.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ConfluenceBlogConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API ConfluenceBlogConfiguration
  {
  public:
    ConfluenceBlogConfiguration();
    ConfluenceBlogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ConfluenceBlogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines how blog metadata fields should be mapped to index fields. Before you
     * can map a field, you must first create an index field with a matching type using
     * the console or the <code>UpdateIndex</code> operation.</p> <p>If you specify the
     * <code>BlogFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline const Aws::Vector<ConfluenceBlogToIndexFieldMapping>& GetBlogFieldMappings() const{ return m_blogFieldMappings; }

    /**
     * <p>Defines how blog metadata fields should be mapped to index fields. Before you
     * can map a field, you must first create an index field with a matching type using
     * the console or the <code>UpdateIndex</code> operation.</p> <p>If you specify the
     * <code>BlogFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline bool BlogFieldMappingsHasBeenSet() const { return m_blogFieldMappingsHasBeenSet; }

    /**
     * <p>Defines how blog metadata fields should be mapped to index fields. Before you
     * can map a field, you must first create an index field with a matching type using
     * the console or the <code>UpdateIndex</code> operation.</p> <p>If you specify the
     * <code>BlogFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline void SetBlogFieldMappings(const Aws::Vector<ConfluenceBlogToIndexFieldMapping>& value) { m_blogFieldMappingsHasBeenSet = true; m_blogFieldMappings = value; }

    /**
     * <p>Defines how blog metadata fields should be mapped to index fields. Before you
     * can map a field, you must first create an index field with a matching type using
     * the console or the <code>UpdateIndex</code> operation.</p> <p>If you specify the
     * <code>BlogFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline void SetBlogFieldMappings(Aws::Vector<ConfluenceBlogToIndexFieldMapping>&& value) { m_blogFieldMappingsHasBeenSet = true; m_blogFieldMappings = std::move(value); }

    /**
     * <p>Defines how blog metadata fields should be mapped to index fields. Before you
     * can map a field, you must first create an index field with a matching type using
     * the console or the <code>UpdateIndex</code> operation.</p> <p>If you specify the
     * <code>BlogFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline ConfluenceBlogConfiguration& WithBlogFieldMappings(const Aws::Vector<ConfluenceBlogToIndexFieldMapping>& value) { SetBlogFieldMappings(value); return *this;}

    /**
     * <p>Defines how blog metadata fields should be mapped to index fields. Before you
     * can map a field, you must first create an index field with a matching type using
     * the console or the <code>UpdateIndex</code> operation.</p> <p>If you specify the
     * <code>BlogFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline ConfluenceBlogConfiguration& WithBlogFieldMappings(Aws::Vector<ConfluenceBlogToIndexFieldMapping>&& value) { SetBlogFieldMappings(std::move(value)); return *this;}

    /**
     * <p>Defines how blog metadata fields should be mapped to index fields. Before you
     * can map a field, you must first create an index field with a matching type using
     * the console or the <code>UpdateIndex</code> operation.</p> <p>If you specify the
     * <code>BlogFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline ConfluenceBlogConfiguration& AddBlogFieldMappings(const ConfluenceBlogToIndexFieldMapping& value) { m_blogFieldMappingsHasBeenSet = true; m_blogFieldMappings.push_back(value); return *this; }

    /**
     * <p>Defines how blog metadata fields should be mapped to index fields. Before you
     * can map a field, you must first create an index field with a matching type using
     * the console or the <code>UpdateIndex</code> operation.</p> <p>If you specify the
     * <code>BlogFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline ConfluenceBlogConfiguration& AddBlogFieldMappings(ConfluenceBlogToIndexFieldMapping&& value) { m_blogFieldMappingsHasBeenSet = true; m_blogFieldMappings.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ConfluenceBlogToIndexFieldMapping> m_blogFieldMappings;
    bool m_blogFieldMappingsHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
