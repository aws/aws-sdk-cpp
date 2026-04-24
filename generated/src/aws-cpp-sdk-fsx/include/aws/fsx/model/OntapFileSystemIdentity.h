/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/OntapFileSystemUserType.h>
#include <aws/fsx/model/OntapUnixFileSystemUser.h>
#include <aws/fsx/model/OntapWindowsFileSystemUser.h>

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
 * <p>Specifies the file system user identity that will be used for authorizing all
 * file access requests that are made using the S3 access point. The identity can
 * be either a UNIX user or a Windows user.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/OntapFileSystemIdentity">AWS
 * API Reference</a></p>
 */
class OntapFileSystemIdentity {
 public:
  AWS_FSX_API OntapFileSystemIdentity() = default;
  AWS_FSX_API OntapFileSystemIdentity(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API OntapFileSystemIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the FSx for ONTAP user identity type. Valid values are
   * <code>UNIX</code> and <code>WINDOWS</code>.</p>
   */
  inline OntapFileSystemUserType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(OntapFileSystemUserType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline OntapFileSystemIdentity& WithType(OntapFileSystemUserType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the UNIX user identity for file system operations.</p>
   */
  inline const OntapUnixFileSystemUser& GetUnixUser() const { return m_unixUser; }
  inline bool UnixUserHasBeenSet() const { return m_unixUserHasBeenSet; }
  template <typename UnixUserT = OntapUnixFileSystemUser>
  void SetUnixUser(UnixUserT&& value) {
    m_unixUserHasBeenSet = true;
    m_unixUser = std::forward<UnixUserT>(value);
  }
  template <typename UnixUserT = OntapUnixFileSystemUser>
  OntapFileSystemIdentity& WithUnixUser(UnixUserT&& value) {
    SetUnixUser(std::forward<UnixUserT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the Windows user identity for file system operations.</p>
   */
  inline const OntapWindowsFileSystemUser& GetWindowsUser() const { return m_windowsUser; }
  inline bool WindowsUserHasBeenSet() const { return m_windowsUserHasBeenSet; }
  template <typename WindowsUserT = OntapWindowsFileSystemUser>
  void SetWindowsUser(WindowsUserT&& value) {
    m_windowsUserHasBeenSet = true;
    m_windowsUser = std::forward<WindowsUserT>(value);
  }
  template <typename WindowsUserT = OntapWindowsFileSystemUser>
  OntapFileSystemIdentity& WithWindowsUser(WindowsUserT&& value) {
    SetWindowsUser(std::forward<WindowsUserT>(value));
    return *this;
  }
  ///@}
 private:
  OntapFileSystemUserType m_type{OntapFileSystemUserType::NOT_SET};

  OntapUnixFileSystemUser m_unixUser;

  OntapWindowsFileSystemUser m_windowsUser;
  bool m_typeHasBeenSet = false;
  bool m_unixUserHasBeenSet = false;
  bool m_windowsUserHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
