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
   * <p>Configuration of blog settings for the Confluence data source. Blogs are
   * always indexed unless filtered from the index by the
   * <code>ExclusionPatterns</code> or <code>InclusionPatterns</code> fields in the
   * <code>ConfluenceConfiguration</code> object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ConfluenceBlogConfiguration">AWS
   * API Reference</a></p>
   */
  class ConfluenceBlogConfiguration
  {
  public:
    AWS_KENDRA_API ConfluenceBlogConfiguration();
    AWS_KENDRA_API ConfluenceBlogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ConfluenceBlogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Maps attributes or field names of Confluence blogs to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>BlogFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline const Aws::Vector<ConfluenceBlogToIndexFieldMapping>& GetBlogFieldMappings() const{ return m_blogFieldMappings; }

    /**
     * <p>Maps attributes or field names of Confluence blogs to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>BlogFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline bool BlogFieldMappingsHasBeenSet() const { return m_blogFieldMappingsHasBeenSet; }

    /**
     * <p>Maps attributes or field names of Confluence blogs to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>BlogFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline void SetBlogFieldMappings(const Aws::Vector<ConfluenceBlogToIndexFieldMapping>& value) { m_blogFieldMappingsHasBeenSet = true; m_blogFieldMappings = value; }

    /**
     * <p>Maps attributes or field names of Confluence blogs to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>BlogFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline void SetBlogFieldMappings(Aws::Vector<ConfluenceBlogToIndexFieldMapping>&& value) { m_blogFieldMappingsHasBeenSet = true; m_blogFieldMappings = std::move(value); }

    /**
     * <p>Maps attributes or field names of Confluence blogs to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>BlogFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline ConfluenceBlogConfiguration& WithBlogFieldMappings(const Aws::Vector<ConfluenceBlogToIndexFieldMapping>& value) { SetBlogFieldMappings(value); return *this;}

    /**
     * <p>Maps attributes or field names of Confluence blogs to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>BlogFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline ConfluenceBlogConfiguration& WithBlogFieldMappings(Aws::Vector<ConfluenceBlogToIndexFieldMapping>&& value) { SetBlogFieldMappings(std::move(value)); return *this;}

    /**
     * <p>Maps attributes or field names of Confluence blogs to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>BlogFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline ConfluenceBlogConfiguration& AddBlogFieldMappings(const ConfluenceBlogToIndexFieldMapping& value) { m_blogFieldMappingsHasBeenSet = true; m_blogFieldMappings.push_back(value); return *this; }

    /**
     * <p>Maps attributes or field names of Confluence blogs to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>BlogFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline ConfluenceBlogConfiguration& AddBlogFieldMappings(ConfluenceBlogToIndexFieldMapping&& value) { m_blogFieldMappingsHasBeenSet = true; m_blogFieldMappings.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ConfluenceBlogToIndexFieldMapping> m_blogFieldMappings;
    bool m_blogFieldMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
