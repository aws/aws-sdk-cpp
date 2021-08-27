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
   * <p>Specifies the page settings for the Confluence data source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ConfluencePageConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API ConfluencePageConfiguration
  {
  public:
    ConfluencePageConfiguration();
    ConfluencePageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ConfluencePageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines how page metadata fields should be mapped to index fields. Before you
     * can map a field, you must first create an index field with a matching type using
     * the console or the <code>UpdateIndex</code> operation.</p> <p>If you specify the
     * <code>PageFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline const Aws::Vector<ConfluencePageToIndexFieldMapping>& GetPageFieldMappings() const{ return m_pageFieldMappings; }

    /**
     * <p>Defines how page metadata fields should be mapped to index fields. Before you
     * can map a field, you must first create an index field with a matching type using
     * the console or the <code>UpdateIndex</code> operation.</p> <p>If you specify the
     * <code>PageFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline bool PageFieldMappingsHasBeenSet() const { return m_pageFieldMappingsHasBeenSet; }

    /**
     * <p>Defines how page metadata fields should be mapped to index fields. Before you
     * can map a field, you must first create an index field with a matching type using
     * the console or the <code>UpdateIndex</code> operation.</p> <p>If you specify the
     * <code>PageFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline void SetPageFieldMappings(const Aws::Vector<ConfluencePageToIndexFieldMapping>& value) { m_pageFieldMappingsHasBeenSet = true; m_pageFieldMappings = value; }

    /**
     * <p>Defines how page metadata fields should be mapped to index fields. Before you
     * can map a field, you must first create an index field with a matching type using
     * the console or the <code>UpdateIndex</code> operation.</p> <p>If you specify the
     * <code>PageFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline void SetPageFieldMappings(Aws::Vector<ConfluencePageToIndexFieldMapping>&& value) { m_pageFieldMappingsHasBeenSet = true; m_pageFieldMappings = std::move(value); }

    /**
     * <p>Defines how page metadata fields should be mapped to index fields. Before you
     * can map a field, you must first create an index field with a matching type using
     * the console or the <code>UpdateIndex</code> operation.</p> <p>If you specify the
     * <code>PageFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline ConfluencePageConfiguration& WithPageFieldMappings(const Aws::Vector<ConfluencePageToIndexFieldMapping>& value) { SetPageFieldMappings(value); return *this;}

    /**
     * <p>Defines how page metadata fields should be mapped to index fields. Before you
     * can map a field, you must first create an index field with a matching type using
     * the console or the <code>UpdateIndex</code> operation.</p> <p>If you specify the
     * <code>PageFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline ConfluencePageConfiguration& WithPageFieldMappings(Aws::Vector<ConfluencePageToIndexFieldMapping>&& value) { SetPageFieldMappings(std::move(value)); return *this;}

    /**
     * <p>Defines how page metadata fields should be mapped to index fields. Before you
     * can map a field, you must first create an index field with a matching type using
     * the console or the <code>UpdateIndex</code> operation.</p> <p>If you specify the
     * <code>PageFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline ConfluencePageConfiguration& AddPageFieldMappings(const ConfluencePageToIndexFieldMapping& value) { m_pageFieldMappingsHasBeenSet = true; m_pageFieldMappings.push_back(value); return *this; }

    /**
     * <p>Defines how page metadata fields should be mapped to index fields. Before you
     * can map a field, you must first create an index field with a matching type using
     * the console or the <code>UpdateIndex</code> operation.</p> <p>If you specify the
     * <code>PageFieldMappings</code> parameter, you must specify at least one field
     * mapping.</p>
     */
    inline ConfluencePageConfiguration& AddPageFieldMappings(ConfluencePageToIndexFieldMapping&& value) { m_pageFieldMappingsHasBeenSet = true; m_pageFieldMappings.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ConfluencePageToIndexFieldMapping> m_pageFieldMappings;
    bool m_pageFieldMappingsHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
