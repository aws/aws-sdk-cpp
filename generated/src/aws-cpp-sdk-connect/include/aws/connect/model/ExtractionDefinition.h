/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ExtractionConfiguration.h>
#include <aws/connect/model/ExtractionDefinitionDisplay.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Information about an extraction definition.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ExtractionDefinition">AWS
 * API Reference</a></p>
 */
class ExtractionDefinition {
 public:
  AWS_CONNECT_API ExtractionDefinition() = default;
  AWS_CONNECT_API ExtractionDefinition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ExtractionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the extraction definition.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ExtractionDefinition& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the extraction definition.</p>
   */
  inline const Aws::String& GetExtractionDefinitionId() const { return m_extractionDefinitionId; }
  inline bool ExtractionDefinitionIdHasBeenSet() const { return m_extractionDefinitionIdHasBeenSet; }
  template <typename ExtractionDefinitionIdT = Aws::String>
  void SetExtractionDefinitionId(ExtractionDefinitionIdT&& value) {
    m_extractionDefinitionIdHasBeenSet = true;
    m_extractionDefinitionId = std::forward<ExtractionDefinitionIdT>(value);
  }
  template <typename ExtractionDefinitionIdT = Aws::String>
  ExtractionDefinition& WithExtractionDefinitionId(ExtractionDefinitionIdT&& value) {
    SetExtractionDefinitionId(std::forward<ExtractionDefinitionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the extraction definition.</p>
   */
  inline const Aws::String& GetExtractionDefinitionArn() const { return m_extractionDefinitionArn; }
  inline bool ExtractionDefinitionArnHasBeenSet() const { return m_extractionDefinitionArnHasBeenSet; }
  template <typename ExtractionDefinitionArnT = Aws::String>
  void SetExtractionDefinitionArn(ExtractionDefinitionArnT&& value) {
    m_extractionDefinitionArnHasBeenSet = true;
    m_extractionDefinitionArn = std::forward<ExtractionDefinitionArnT>(value);
  }
  template <typename ExtractionDefinitionArnT = Aws::String>
  ExtractionDefinition& WithExtractionDefinitionArn(ExtractionDefinitionArnT&& value) {
    SetExtractionDefinitionArn(std::forward<ExtractionDefinitionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that defines how data is extracted.</p>
   */
  inline const ExtractionConfiguration& GetExtractionConfiguration() const { return m_extractionConfiguration; }
  inline bool ExtractionConfigurationHasBeenSet() const { return m_extractionConfigurationHasBeenSet; }
  template <typename ExtractionConfigurationT = ExtractionConfiguration>
  void SetExtractionConfiguration(ExtractionConfigurationT&& value) {
    m_extractionConfigurationHasBeenSet = true;
    m_extractionConfiguration = std::forward<ExtractionConfigurationT>(value);
  }
  template <typename ExtractionConfigurationT = ExtractionConfiguration>
  ExtractionDefinition& WithExtractionConfiguration(ExtractionConfigurationT&& value) {
    SetExtractionConfiguration(std::forward<ExtractionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display settings for the extraction definition.</p>
   */
  inline const ExtractionDefinitionDisplay& GetDisplay() const { return m_display; }
  inline bool DisplayHasBeenSet() const { return m_displayHasBeenSet; }
  template <typename DisplayT = ExtractionDefinitionDisplay>
  void SetDisplay(DisplayT&& value) {
    m_displayHasBeenSet = true;
    m_display = std::forward<DisplayT>(value);
  }
  template <typename DisplayT = ExtractionDefinitionDisplay>
  ExtractionDefinition& WithDisplay(DisplayT&& value) {
    SetDisplay(std::forward<DisplayT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the extraction definition was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
  inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  void SetCreatedTime(CreatedTimeT&& value) {
    m_createdTimeHasBeenSet = true;
    m_createdTime = std::forward<CreatedTimeT>(value);
  }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  ExtractionDefinition& WithCreatedTime(CreatedTimeT&& value) {
    SetCreatedTime(std::forward<CreatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the extraction definition was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  void SetLastUpdatedTime(LastUpdatedTimeT&& value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value);
  }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  ExtractionDefinition& WithLastUpdatedTime(LastUpdatedTimeT&& value) {
    SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the user who last updated the extraction
   * definition.</p>
   */
  inline const Aws::String& GetLastUpdatedBy() const { return m_lastUpdatedBy; }
  inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }
  template <typename LastUpdatedByT = Aws::String>
  void SetLastUpdatedBy(LastUpdatedByT&& value) {
    m_lastUpdatedByHasBeenSet = true;
    m_lastUpdatedBy = std::forward<LastUpdatedByT>(value);
  }
  template <typename LastUpdatedByT = Aws::String>
  ExtractionDefinition& WithLastUpdatedBy(LastUpdatedByT&& value) {
    SetLastUpdatedBy(std::forward<LastUpdatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags used to organize, track, or control access for this resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  ExtractionDefinition& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  ExtractionDefinition& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_extractionDefinitionId;

  Aws::String m_extractionDefinitionArn;

  ExtractionConfiguration m_extractionConfiguration;

  ExtractionDefinitionDisplay m_display;

  Aws::Utils::DateTime m_createdTime{};

  Aws::Utils::DateTime m_lastUpdatedTime{};

  Aws::String m_lastUpdatedBy;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_nameHasBeenSet = false;
  bool m_extractionDefinitionIdHasBeenSet = false;
  bool m_extractionDefinitionArnHasBeenSet = false;
  bool m_extractionConfigurationHasBeenSet = false;
  bool m_displayHasBeenSet = false;
  bool m_createdTimeHasBeenSet = false;
  bool m_lastUpdatedTimeHasBeenSet = false;
  bool m_lastUpdatedByHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
