/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The FSx for OpenZFS file system user that is used for authorizing all file
   * access requests that are made using the S3 access point.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/OpenZFSPosixFileSystemUser">AWS
   * API Reference</a></p>
   */
  class OpenZFSPosixFileSystemUser
  {
  public:
    AWS_FSX_API OpenZFSPosixFileSystemUser() = default;
    AWS_FSX_API OpenZFSPosixFileSystemUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API OpenZFSPosixFileSystemUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The UID of the file system user.</p>
     */
    inline long long GetUid() const { return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    inline void SetUid(long long value) { m_uidHasBeenSet = true; m_uid = value; }
    inline OpenZFSPosixFileSystemUser& WithUid(long long value) { SetUid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The GID of the file system user.</p>
     */
    inline long long GetGid() const { return m_gid; }
    inline bool GidHasBeenSet() const { return m_gidHasBeenSet; }
    inline void SetGid(long long value) { m_gidHasBeenSet = true; m_gid = value; }
    inline OpenZFSPosixFileSystemUser& WithGid(long long value) { SetGid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of secondary GIDs for the file system user. </p>
     */
    inline const Aws::Vector<long long>& GetSecondaryGids() const { return m_secondaryGids; }
    inline bool SecondaryGidsHasBeenSet() const { return m_secondaryGidsHasBeenSet; }
    template<typename SecondaryGidsT = Aws::Vector<long long>>
    void SetSecondaryGids(SecondaryGidsT&& value) { m_secondaryGidsHasBeenSet = true; m_secondaryGids = std::forward<SecondaryGidsT>(value); }
    template<typename SecondaryGidsT = Aws::Vector<long long>>
    OpenZFSPosixFileSystemUser& WithSecondaryGids(SecondaryGidsT&& value) { SetSecondaryGids(std::forward<SecondaryGidsT>(value)); return *this;}
    inline OpenZFSPosixFileSystemUser& AddSecondaryGids(long long value) { m_secondaryGidsHasBeenSet = true; m_secondaryGids.push_back(value); return *this; }
    ///@}
  private:

    long long m_uid{0};
    bool m_uidHasBeenSet = false;

    long long m_gid{0};
    bool m_gidHasBeenSet = false;

    Aws::Vector<long long> m_secondaryGids;
    bool m_secondaryGidsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
