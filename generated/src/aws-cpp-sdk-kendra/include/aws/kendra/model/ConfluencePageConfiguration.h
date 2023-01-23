/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/ConfluencePageToIndexFieldMapping.h>
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
   * <p>Configuration of the page settings for the Confluence data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ConfluencePageConfiguration">AWS
   * API Reference</a></p>
   */
  class ConfluencePageConfiguration
  {
  public:
    AWS_KENDRA_API ConfluencePageConfiguration();
    AWS_KENDRA_API ConfluencePageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ConfluencePageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Maps attributes or field names of Confluence pages to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>PageFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline const Aws::Vector<ConfluencePageToIndexFieldMapping>& GetPageFieldMappings() const{ return m_pageFieldMappings; }

    /**
     * <p>Maps attributes or field names of Confluence pages to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>PageFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline bool PageFieldMappingsHasBeenSet() const { return m_pageFieldMappingsHasBeenSet; }

    /**
     * <p>Maps attributes or field names of Confluence pages to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>PageFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline void SetPageFieldMappings(const Aws::Vector<ConfluencePageToIndexFieldMapping>& value) { m_pageFieldMappingsHasBeenSet = true; m_pageFieldMappings = value; }

    /**
     * <p>Maps attributes or field names of Confluence pages to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>PageFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline void SetPageFieldMappings(Aws::Vector<ConfluencePageToIndexFieldMapping>&& value) { m_pageFieldMappingsHasBeenSet = true; m_pageFieldMappings = std::move(value); }

    /**
     * <p>Maps attributes or field names of Confluence pages to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>PageFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline ConfluencePageConfiguration& WithPageFieldMappings(const Aws::Vector<ConfluencePageToIndexFieldMapping>& value) { SetPageFieldMappings(value); return *this;}

    /**
     * <p>Maps attributes or field names of Confluence pages to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>PageFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline ConfluencePageConfiguration& WithPageFieldMappings(Aws::Vector<ConfluencePageToIndexFieldMapping>&& value) { SetPageFieldMappings(std::move(value)); return *this;}

    /**
     * <p>Maps attributes or field names of Confluence pages to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>PageFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline ConfluencePageConfiguration& AddPageFieldMappings(const ConfluencePageToIndexFieldMapping& value) { m_pageFieldMappingsHasBeenSet = true; m_pageFieldMappings.push_back(value); return *this; }

    /**
     * <p>Maps attributes or field names of Confluence pages to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>PageFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline ConfluencePageConfiguration& AddPageFieldMappings(ConfluencePageToIndexFieldMapping&& value) { m_pageFieldMappingsHasBeenSet = true; m_pageFieldMappings.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ConfluencePageToIndexFieldMapping> m_pageFieldMappings;
    bool m_pageFieldMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
