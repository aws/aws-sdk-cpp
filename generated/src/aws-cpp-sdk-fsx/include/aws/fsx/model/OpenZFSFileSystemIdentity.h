/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/OpenZFSFileSystemUserType.h>
#include <aws/fsx/model/OpenZFSPosixFileSystemUser.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>Specifies the file system user identity that will be used for authorizing all
   * file access requests that are made using the S3 access point.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/OpenZFSFileSystemIdentity">AWS
   * API Reference</a></p>
   */
  class OpenZFSFileSystemIdentity
  {
  public:
    AWS_FSX_API OpenZFSFileSystemIdentity() = default;
    AWS_FSX_API OpenZFSFileSystemIdentity(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API OpenZFSFileSystemIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the FSx for OpenZFS user identity type, accepts only
     * <code>POSIX</code>.</p>
     */
    inline OpenZFSFileSystemUserType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(OpenZFSFileSystemUserType value) { m_typeHasBeenSet = true; m_type = value; }
    inline OpenZFSFileSystemIdentity& WithType(OpenZFSFileSystemUserType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the UID and GIDs of the file system POSIX user.</p>
     */
    inline const OpenZFSPosixFileSystemUser& GetPosixUser() const { return m_posixUser; }
    inline bool PosixUserHasBeenSet() const { return m_posixUserHasBeenSet; }
    template<typename PosixUserT = OpenZFSPosixFileSystemUser>
    void SetPosixUser(PosixUserT&& value) { m_posixUserHasBeenSet = true; m_posixUser = std::forward<PosixUserT>(value); }
    template<typename PosixUserT = OpenZFSPosixFileSystemUser>
    OpenZFSFileSystemIdentity& WithPosixUser(PosixUserT&& value) { SetPosixUser(std::forward<PosixUserT>(value)); return *this;}
    ///@}
  private:

    OpenZFSFileSystemUserType m_type{OpenZFSFileSystemUserType::NOT_SET};
    bool m_typeHasBeenSet = false;

    OpenZFSPosixFileSystemUser m_posixUser;
    bool m_posixUserHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
