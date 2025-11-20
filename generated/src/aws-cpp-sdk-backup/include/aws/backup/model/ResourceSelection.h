/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Backup {
namespace Model {

/**
 * <p>This contains metadata about resource selection for tiering
 * configurations.</p> <p>You can specify up to 5 different resource selections per
 * tiering configuration. Data moved to lower-cost tier remains there until
 * deletion (one-way transition).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ResourceSelection">AWS
 * API Reference</a></p>
 */
class ResourceSelection {
 public:
  AWS_BACKUP_API ResourceSelection() = default;
  AWS_BACKUP_API ResourceSelection(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API ResourceSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An array of strings that either contains ARNs of the associated resources or
   * contains a wildcard <code>*</code> to specify all resources. You can specify up
   * to 100 specific resources per tiering configuration.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResources() const { return m_resources; }
  inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
  template <typename ResourcesT = Aws::Vector<Aws::String>>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = Aws::Vector<Aws::String>>
  ResourceSelection& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  template <typename ResourcesT = Aws::String>
  ResourceSelection& AddResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources.emplace_back(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of days after creation within a backup vault that an object can
   * transition to the low cost warm storage tier. Must be a positive integer between
   * 60 and 36500 days.</p>
   */
  inline int GetTieringDownSettingsInDays() const { return m_tieringDownSettingsInDays; }
  inline bool TieringDownSettingsInDaysHasBeenSet() const { return m_tieringDownSettingsInDaysHasBeenSet; }
  inline void SetTieringDownSettingsInDays(int value) {
    m_tieringDownSettingsInDaysHasBeenSet = true;
    m_tieringDownSettingsInDays = value;
  }
  inline ResourceSelection& WithTieringDownSettingsInDays(int value) {
    SetTieringDownSettingsInDays(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of Amazon Web Services resource; for example, <code>S3</code> for
   * Amazon S3. For tiering configurations, this is currently limited to
   * <code>S3</code>.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  ResourceSelection& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_resources;
  bool m_resourcesHasBeenSet = false;

  int m_tieringDownSettingsInDays{0};
  bool m_tieringDownSettingsInDaysHasBeenSet = false;

  Aws::String m_resourceType;
  bool m_resourceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
