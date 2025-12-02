/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace FSx {
namespace Model {

/**
 * <p>The FSx for ONTAP UNIX file system user that is used for authorizing all file
 * access requests that are made using the S3 access point.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/OntapUnixFileSystemUser">AWS
 * API Reference</a></p>
 */
class OntapUnixFileSystemUser {
 public:
  AWS_FSX_API OntapUnixFileSystemUser() = default;
  AWS_FSX_API OntapUnixFileSystemUser(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API OntapUnixFileSystemUser& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the UNIX user. The name can be up to 256 characters long.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  OntapUnixFileSystemUser& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
