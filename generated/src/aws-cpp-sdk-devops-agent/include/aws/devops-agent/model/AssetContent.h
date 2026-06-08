/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/AssetFileContent.h>
#include <aws/devops-agent/model/AssetZipContent.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Content for an asset, either a single file or a zip bundle</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/AssetContent">AWS
 * API Reference</a></p>
 */
class AssetContent {
 public:
  AWS_DEVOPSAGENT_API AssetContent() = default;
  AWS_DEVOPSAGENT_API AssetContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API AssetContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A single file with path and content</p>
   */
  inline const AssetFileContent& GetFile() const { return m_file; }
  inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }
  template <typename FileT = AssetFileContent>
  void SetFile(FileT&& value) {
    m_fileHasBeenSet = true;
    m_file = std::forward<FileT>(value);
  }
  template <typename FileT = AssetFileContent>
  AssetContent& WithFile(FileT&& value) {
    SetFile(std::forward<FileT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A zip file containing multiple files</p>
   */
  inline const AssetZipContent& GetZip() const { return m_zip; }
  inline bool ZipHasBeenSet() const { return m_zipHasBeenSet; }
  template <typename ZipT = AssetZipContent>
  void SetZip(ZipT&& value) {
    m_zipHasBeenSet = true;
    m_zip = std::forward<ZipT>(value);
  }
  template <typename ZipT = AssetZipContent>
  AssetContent& WithZip(ZipT&& value) {
    SetZip(std::forward<ZipT>(value));
    return *this;
  }
  ///@}
 private:
  AssetFileContent m_file;

  AssetZipContent m_zip;
  bool m_fileHasBeenSet = false;
  bool m_zipHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
