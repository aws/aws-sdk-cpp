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
    AWS_KENDRA_API ConfluenceBlogConfiguration() = default;
    AWS_KENDRA_API ConfluenceBlogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ConfluenceBlogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline const Aws::Vector<ConfluenceBlogToIndexFieldMapping>& GetBlogFieldMappings() const { return m_blogFieldMappings; }
    inline bool BlogFieldMappingsHasBeenSet() const { return m_blogFieldMappingsHasBeenSet; }
    template<typename BlogFieldMappingsT = Aws::Vector<ConfluenceBlogToIndexFieldMapping>>
    void SetBlogFieldMappings(BlogFieldMappingsT&& value) { m_blogFieldMappingsHasBeenSet = true; m_blogFieldMappings = std::forward<BlogFieldMappingsT>(value); }
    template<typename BlogFieldMappingsT = Aws::Vector<ConfluenceBlogToIndexFieldMapping>>
    ConfluenceBlogConfiguration& WithBlogFieldMappings(BlogFieldMappingsT&& value) { SetBlogFieldMappings(std::forward<BlogFieldMappingsT>(value)); return *this;}
    template<typename BlogFieldMappingsT = ConfluenceBlogToIndexFieldMapping>
    ConfluenceBlogConfiguration& AddBlogFieldMappings(BlogFieldMappingsT&& value) { m_blogFieldMappingsHasBeenSet = true; m_blogFieldMappings.emplace_back(std::forward<BlogFieldMappingsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ConfluenceBlogToIndexFieldMapping> m_blogFieldMappings;
    bool m_blogFieldMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
