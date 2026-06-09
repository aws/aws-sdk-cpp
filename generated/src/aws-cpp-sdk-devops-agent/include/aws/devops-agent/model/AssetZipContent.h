/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

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
 * <p>A zip file containing asset files</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/AssetZipContent">AWS
 * API Reference</a></p>
 */
class AssetZipContent {
 public:
  AWS_DEVOPSAGENT_API AssetZipContent() = default;
  AWS_DEVOPSAGENT_API AssetZipContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API AssetZipContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The zip file bytes</p>
   */
  inline const Aws::Utils::ByteBuffer& GetZipFile() const { return m_zipFile; }
  inline bool ZipFileHasBeenSet() const { return m_zipFileHasBeenSet; }
  template <typename ZipFileT = Aws::Utils::ByteBuffer>
  void SetZipFile(ZipFileT&& value) {
    m_zipFileHasBeenSet = true;
    m_zipFile = std::forward<ZipFileT>(value);
  }
  template <typename ZipFileT = Aws::Utils::ByteBuffer>
  AssetZipContent& WithZipFile(ZipFileT&& value) {
    SetZipFile(std::forward<ZipFileT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::ByteBuffer m_zipFile{};
  bool m_zipFileHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
