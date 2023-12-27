/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/MissingAttributeKeyStrategy.h>
#include <aws/kendra/model/ExpandConfiguration.h>
#include <aws/kendra/model/SortingConfiguration.h>
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
   * <p>Specifies how to group results by document attribute value, and how to
   * display them collapsed/expanded under a designated primary document for each
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CollapseConfiguration">AWS
   * API Reference</a></p>
   */
  class CollapseConfiguration
  {
  public:
    AWS_KENDRA_API CollapseConfiguration();
    AWS_KENDRA_API CollapseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API CollapseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The document attribute used to group search results. You can use any
     * attribute that has the <code>Sortable</code> flag set to true. You can also sort
     * by any of the following built-in attributes:"_category","_created_at",
     * "_last_updated_at", "_version", "_view_count".</p>
     */
    inline const Aws::String& GetDocumentAttributeKey() const{ return m_documentAttributeKey; }

    /**
     * <p>The document attribute used to group search results. You can use any
     * attribute that has the <code>Sortable</code> flag set to true. You can also sort
     * by any of the following built-in attributes:"_category","_created_at",
     * "_last_updated_at", "_version", "_view_count".</p>
     */
    inline bool DocumentAttributeKeyHasBeenSet() const { return m_documentAttributeKeyHasBeenSet; }

    /**
     * <p>The document attribute used to group search results. You can use any
     * attribute that has the <code>Sortable</code> flag set to true. You can also sort
     * by any of the following built-in attributes:"_category","_created_at",
     * "_last_updated_at", "_version", "_view_count".</p>
     */
    inline void SetDocumentAttributeKey(const Aws::String& value) { m_documentAttributeKeyHasBeenSet = true; m_documentAttributeKey = value; }

    /**
     * <p>The document attribute used to group search results. You can use any
     * attribute that has the <code>Sortable</code> flag set to true. You can also sort
     * by any of the following built-in attributes:"_category","_created_at",
     * "_last_updated_at", "_version", "_view_count".</p>
     */
    inline void SetDocumentAttributeKey(Aws::String&& value) { m_documentAttributeKeyHasBeenSet = true; m_documentAttributeKey = std::move(value); }

    /**
     * <p>The document attribute used to group search results. You can use any
     * attribute that has the <code>Sortable</code> flag set to true. You can also sort
     * by any of the following built-in attributes:"_category","_created_at",
     * "_last_updated_at", "_version", "_view_count".</p>
     */
    inline void SetDocumentAttributeKey(const char* value) { m_documentAttributeKeyHasBeenSet = true; m_documentAttributeKey.assign(value); }

    /**
     * <p>The document attribute used to group search results. You can use any
     * attribute that has the <code>Sortable</code> flag set to true. You can also sort
     * by any of the following built-in attributes:"_category","_created_at",
     * "_last_updated_at", "_version", "_view_count".</p>
     */
    inline CollapseConfiguration& WithDocumentAttributeKey(const Aws::String& value) { SetDocumentAttributeKey(value); return *this;}

    /**
     * <p>The document attribute used to group search results. You can use any
     * attribute that has the <code>Sortable</code> flag set to true. You can also sort
     * by any of the following built-in attributes:"_category","_created_at",
     * "_last_updated_at", "_version", "_view_count".</p>
     */
    inline CollapseConfiguration& WithDocumentAttributeKey(Aws::String&& value) { SetDocumentAttributeKey(std::move(value)); return *this;}

    /**
     * <p>The document attribute used to group search results. You can use any
     * attribute that has the <code>Sortable</code> flag set to true. You can also sort
     * by any of the following built-in attributes:"_category","_created_at",
     * "_last_updated_at", "_version", "_view_count".</p>
     */
    inline CollapseConfiguration& WithDocumentAttributeKey(const char* value) { SetDocumentAttributeKey(value); return *this;}


    /**
     * <p>A prioritized list of document attributes/fields that determine the primary
     * document among those in a collapsed group.</p>
     */
    inline const Aws::Vector<SortingConfiguration>& GetSortingConfigurations() const{ return m_sortingConfigurations; }

    /**
     * <p>A prioritized list of document attributes/fields that determine the primary
     * document among those in a collapsed group.</p>
     */
    inline bool SortingConfigurationsHasBeenSet() const { return m_sortingConfigurationsHasBeenSet; }

    /**
     * <p>A prioritized list of document attributes/fields that determine the primary
     * document among those in a collapsed group.</p>
     */
    inline void SetSortingConfigurations(const Aws::Vector<SortingConfiguration>& value) { m_sortingConfigurationsHasBeenSet = true; m_sortingConfigurations = value; }

    /**
     * <p>A prioritized list of document attributes/fields that determine the primary
     * document among those in a collapsed group.</p>
     */
    inline void SetSortingConfigurations(Aws::Vector<SortingConfiguration>&& value) { m_sortingConfigurationsHasBeenSet = true; m_sortingConfigurations = std::move(value); }

    /**
     * <p>A prioritized list of document attributes/fields that determine the primary
     * document among those in a collapsed group.</p>
     */
    inline CollapseConfiguration& WithSortingConfigurations(const Aws::Vector<SortingConfiguration>& value) { SetSortingConfigurations(value); return *this;}

    /**
     * <p>A prioritized list of document attributes/fields that determine the primary
     * document among those in a collapsed group.</p>
     */
    inline CollapseConfiguration& WithSortingConfigurations(Aws::Vector<SortingConfiguration>&& value) { SetSortingConfigurations(std::move(value)); return *this;}

    /**
     * <p>A prioritized list of document attributes/fields that determine the primary
     * document among those in a collapsed group.</p>
     */
    inline CollapseConfiguration& AddSortingConfigurations(const SortingConfiguration& value) { m_sortingConfigurationsHasBeenSet = true; m_sortingConfigurations.push_back(value); return *this; }

    /**
     * <p>A prioritized list of document attributes/fields that determine the primary
     * document among those in a collapsed group.</p>
     */
    inline CollapseConfiguration& AddSortingConfigurations(SortingConfiguration&& value) { m_sortingConfigurationsHasBeenSet = true; m_sortingConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the behavior for documents without a value for the collapse
     * attribute.</p> <p>Amazon Kendra offers three customization options:</p> <ul>
     * <li> <p>Choose to <code>COLLAPSE</code> all documents with null or missing
     * values in one group. This is the default configuration.</p> </li> <li> <p>Choose
     * to <code>IGNORE</code> documents with null or missing values. Ignored documents
     * will not appear in query results.</p> </li> <li> <p>Choose to
     * <code>EXPAND</code> each document with a null or missing value into a group of
     * its own.</p> </li> </ul>
     */
    inline const MissingAttributeKeyStrategy& GetMissingAttributeKeyStrategy() const{ return m_missingAttributeKeyStrategy; }

    /**
     * <p>Specifies the behavior for documents without a value for the collapse
     * attribute.</p> <p>Amazon Kendra offers three customization options:</p> <ul>
     * <li> <p>Choose to <code>COLLAPSE</code> all documents with null or missing
     * values in one group. This is the default configuration.</p> </li> <li> <p>Choose
     * to <code>IGNORE</code> documents with null or missing values. Ignored documents
     * will not appear in query results.</p> </li> <li> <p>Choose to
     * <code>EXPAND</code> each document with a null or missing value into a group of
     * its own.</p> </li> </ul>
     */
    inline bool MissingAttributeKeyStrategyHasBeenSet() const { return m_missingAttributeKeyStrategyHasBeenSet; }

    /**
     * <p>Specifies the behavior for documents without a value for the collapse
     * attribute.</p> <p>Amazon Kendra offers three customization options:</p> <ul>
     * <li> <p>Choose to <code>COLLAPSE</code> all documents with null or missing
     * values in one group. This is the default configuration.</p> </li> <li> <p>Choose
     * to <code>IGNORE</code> documents with null or missing values. Ignored documents
     * will not appear in query results.</p> </li> <li> <p>Choose to
     * <code>EXPAND</code> each document with a null or missing value into a group of
     * its own.</p> </li> </ul>
     */
    inline void SetMissingAttributeKeyStrategy(const MissingAttributeKeyStrategy& value) { m_missingAttributeKeyStrategyHasBeenSet = true; m_missingAttributeKeyStrategy = value; }

    /**
     * <p>Specifies the behavior for documents without a value for the collapse
     * attribute.</p> <p>Amazon Kendra offers three customization options:</p> <ul>
     * <li> <p>Choose to <code>COLLAPSE</code> all documents with null or missing
     * values in one group. This is the default configuration.</p> </li> <li> <p>Choose
     * to <code>IGNORE</code> documents with null or missing values. Ignored documents
     * will not appear in query results.</p> </li> <li> <p>Choose to
     * <code>EXPAND</code> each document with a null or missing value into a group of
     * its own.</p> </li> </ul>
     */
    inline void SetMissingAttributeKeyStrategy(MissingAttributeKeyStrategy&& value) { m_missingAttributeKeyStrategyHasBeenSet = true; m_missingAttributeKeyStrategy = std::move(value); }

    /**
     * <p>Specifies the behavior for documents without a value for the collapse
     * attribute.</p> <p>Amazon Kendra offers three customization options:</p> <ul>
     * <li> <p>Choose to <code>COLLAPSE</code> all documents with null or missing
     * values in one group. This is the default configuration.</p> </li> <li> <p>Choose
     * to <code>IGNORE</code> documents with null or missing values. Ignored documents
     * will not appear in query results.</p> </li> <li> <p>Choose to
     * <code>EXPAND</code> each document with a null or missing value into a group of
     * its own.</p> </li> </ul>
     */
    inline CollapseConfiguration& WithMissingAttributeKeyStrategy(const MissingAttributeKeyStrategy& value) { SetMissingAttributeKeyStrategy(value); return *this;}

    /**
     * <p>Specifies the behavior for documents without a value for the collapse
     * attribute.</p> <p>Amazon Kendra offers three customization options:</p> <ul>
     * <li> <p>Choose to <code>COLLAPSE</code> all documents with null or missing
     * values in one group. This is the default configuration.</p> </li> <li> <p>Choose
     * to <code>IGNORE</code> documents with null or missing values. Ignored documents
     * will not appear in query results.</p> </li> <li> <p>Choose to
     * <code>EXPAND</code> each document with a null or missing value into a group of
     * its own.</p> </li> </ul>
     */
    inline CollapseConfiguration& WithMissingAttributeKeyStrategy(MissingAttributeKeyStrategy&& value) { SetMissingAttributeKeyStrategy(std::move(value)); return *this;}


    /**
     * <p>Specifies whether to expand the collapsed results.</p>
     */
    inline bool GetExpand() const{ return m_expand; }

    /**
     * <p>Specifies whether to expand the collapsed results.</p>
     */
    inline bool ExpandHasBeenSet() const { return m_expandHasBeenSet; }

    /**
     * <p>Specifies whether to expand the collapsed results.</p>
     */
    inline void SetExpand(bool value) { m_expandHasBeenSet = true; m_expand = value; }

    /**
     * <p>Specifies whether to expand the collapsed results.</p>
     */
    inline CollapseConfiguration& WithExpand(bool value) { SetExpand(value); return *this;}


    /**
     * <p>Provides configuration information to customize expansion options for a
     * collapsed group.</p>
     */
    inline const ExpandConfiguration& GetExpandConfiguration() const{ return m_expandConfiguration; }

    /**
     * <p>Provides configuration information to customize expansion options for a
     * collapsed group.</p>
     */
    inline bool ExpandConfigurationHasBeenSet() const { return m_expandConfigurationHasBeenSet; }

    /**
     * <p>Provides configuration information to customize expansion options for a
     * collapsed group.</p>
     */
    inline void SetExpandConfiguration(const ExpandConfiguration& value) { m_expandConfigurationHasBeenSet = true; m_expandConfiguration = value; }

    /**
     * <p>Provides configuration information to customize expansion options for a
     * collapsed group.</p>
     */
    inline void SetExpandConfiguration(ExpandConfiguration&& value) { m_expandConfigurationHasBeenSet = true; m_expandConfiguration = std::move(value); }

    /**
     * <p>Provides configuration information to customize expansion options for a
     * collapsed group.</p>
     */
    inline CollapseConfiguration& WithExpandConfiguration(const ExpandConfiguration& value) { SetExpandConfiguration(value); return *this;}

    /**
     * <p>Provides configuration information to customize expansion options for a
     * collapsed group.</p>
     */
    inline CollapseConfiguration& WithExpandConfiguration(ExpandConfiguration&& value) { SetExpandConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_documentAttributeKey;
    bool m_documentAttributeKeyHasBeenSet = false;

    Aws::Vector<SortingConfiguration> m_sortingConfigurations;
    bool m_sortingConfigurationsHasBeenSet = false;

    MissingAttributeKeyStrategy m_missingAttributeKeyStrategy;
    bool m_missingAttributeKeyStrategyHasBeenSet = false;

    bool m_expand;
    bool m_expandHasBeenSet = false;

    ExpandConfiguration m_expandConfiguration;
    bool m_expandConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
