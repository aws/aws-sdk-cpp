/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/MountSource.h>
#include <aws/iotsitewise/model/MountStorageType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Attaches a data source to the container filesystem for a task at a
 * customer-supplied relative path under the service-owned mount
 * root.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Mount">AWS
 * API Reference</a></p>
 */
class Mount {
 public:
  AWS_IOTSITEWISE_API Mount() = default;
  AWS_IOTSITEWISE_API Mount(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Mount& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A unique name for the mount within the task.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Mount& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The relative path under the service-owned mount root where this mount is
   * attached inside the container.</p>
   */
  inline const Aws::String& GetRelativePath() const { return m_relativePath; }
  inline bool RelativePathHasBeenSet() const { return m_relativePathHasBeenSet; }
  template <typename RelativePathT = Aws::String>
  void SetRelativePath(RelativePathT&& value) {
    m_relativePathHasBeenSet = true;
    m_relativePath = std::forward<RelativePathT>(value);
  }
  template <typename RelativePathT = Aws::String>
  Mount& WithRelativePath(RelativePathT&& value) {
    SetRelativePath(std::forward<RelativePathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data source for the mount.</p>
   */
  inline const MountSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = MountSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = MountSource>
  Mount& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of storage used for the mount.</p>
   */
  inline MountStorageType GetStorageType() const { return m_storageType; }
  inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
  inline void SetStorageType(MountStorageType value) {
    m_storageTypeHasBeenSet = true;
    m_storageType = value;
  }
  inline Mount& WithStorageType(MountStorageType value) {
    SetStorageType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_relativePath;

  MountSource m_source;

  MountStorageType m_storageType{MountStorageType::NOT_SET};
  bool m_nameHasBeenSet = false;
  bool m_relativePathHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_storageTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
