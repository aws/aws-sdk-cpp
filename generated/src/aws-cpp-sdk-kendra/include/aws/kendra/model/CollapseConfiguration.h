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
    AWS_KENDRA_API CollapseConfiguration() = default;
    AWS_KENDRA_API CollapseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API CollapseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The document attribute used to group search results. You can use any
     * attribute that has the <code>Sortable</code> flag set to true. You can also sort
     * by any of the following built-in attributes:"_category","_created_at",
     * "_last_updated_at", "_version", "_view_count".</p>
     */
    inline const Aws::String& GetDocumentAttributeKey() const { return m_documentAttributeKey; }
    inline bool DocumentAttributeKeyHasBeenSet() const { return m_documentAttributeKeyHasBeenSet; }
    template<typename DocumentAttributeKeyT = Aws::String>
    void SetDocumentAttributeKey(DocumentAttributeKeyT&& value) { m_documentAttributeKeyHasBeenSet = true; m_documentAttributeKey = std::forward<DocumentAttributeKeyT>(value); }
    template<typename DocumentAttributeKeyT = Aws::String>
    CollapseConfiguration& WithDocumentAttributeKey(DocumentAttributeKeyT&& value) { SetDocumentAttributeKey(std::forward<DocumentAttributeKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A prioritized list of document attributes/fields that determine the primary
     * document among those in a collapsed group.</p>
     */
    inline const Aws::Vector<SortingConfiguration>& GetSortingConfigurations() const { return m_sortingConfigurations; }
    inline bool SortingConfigurationsHasBeenSet() const { return m_sortingConfigurationsHasBeenSet; }
    template<typename SortingConfigurationsT = Aws::Vector<SortingConfiguration>>
    void SetSortingConfigurations(SortingConfigurationsT&& value) { m_sortingConfigurationsHasBeenSet = true; m_sortingConfigurations = std::forward<SortingConfigurationsT>(value); }
    template<typename SortingConfigurationsT = Aws::Vector<SortingConfiguration>>
    CollapseConfiguration& WithSortingConfigurations(SortingConfigurationsT&& value) { SetSortingConfigurations(std::forward<SortingConfigurationsT>(value)); return *this;}
    template<typename SortingConfigurationsT = SortingConfiguration>
    CollapseConfiguration& AddSortingConfigurations(SortingConfigurationsT&& value) { m_sortingConfigurationsHasBeenSet = true; m_sortingConfigurations.emplace_back(std::forward<SortingConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
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
    inline MissingAttributeKeyStrategy GetMissingAttributeKeyStrategy() const { return m_missingAttributeKeyStrategy; }
    inline bool MissingAttributeKeyStrategyHasBeenSet() const { return m_missingAttributeKeyStrategyHasBeenSet; }
    inline void SetMissingAttributeKeyStrategy(MissingAttributeKeyStrategy value) { m_missingAttributeKeyStrategyHasBeenSet = true; m_missingAttributeKeyStrategy = value; }
    inline CollapseConfiguration& WithMissingAttributeKeyStrategy(MissingAttributeKeyStrategy value) { SetMissingAttributeKeyStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to expand the collapsed results.</p>
     */
    inline bool GetExpand() const { return m_expand; }
    inline bool ExpandHasBeenSet() const { return m_expandHasBeenSet; }
    inline void SetExpand(bool value) { m_expandHasBeenSet = true; m_expand = value; }
    inline CollapseConfiguration& WithExpand(bool value) { SetExpand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides configuration information to customize expansion options for a
     * collapsed group.</p>
     */
    inline const ExpandConfiguration& GetExpandConfiguration() const { return m_expandConfiguration; }
    inline bool ExpandConfigurationHasBeenSet() const { return m_expandConfigurationHasBeenSet; }
    template<typename ExpandConfigurationT = ExpandConfiguration>
    void SetExpandConfiguration(ExpandConfigurationT&& value) { m_expandConfigurationHasBeenSet = true; m_expandConfiguration = std::forward<ExpandConfigurationT>(value); }
    template<typename ExpandConfigurationT = ExpandConfiguration>
    CollapseConfiguration& WithExpandConfiguration(ExpandConfigurationT&& value) { SetExpandConfiguration(std::forward<ExpandConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_documentAttributeKey;
    bool m_documentAttributeKeyHasBeenSet = false;

    Aws::Vector<SortingConfiguration> m_sortingConfigurations;
    bool m_sortingConfigurationsHasBeenSet = false;

    MissingAttributeKeyStrategy m_missingAttributeKeyStrategy{MissingAttributeKeyStrategy::NOT_SET};
    bool m_missingAttributeKeyStrategyHasBeenSet = false;

    bool m_expand{false};
    bool m_expandHasBeenSet = false;

    ExpandConfiguration m_expandConfiguration;
    bool m_expandConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
