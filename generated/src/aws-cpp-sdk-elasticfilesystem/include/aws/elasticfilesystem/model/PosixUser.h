/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
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
namespace EFS
{
namespace Model
{

  /**
   * <p>The full POSIX identity, including the user ID, group ID, and any secondary
   * group IDs, on the access point that is used for all file system operations
   * performed by NFS clients using the access point.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/PosixUser">AWS
   * API Reference</a></p>
   */
  class PosixUser
  {
  public:
    AWS_EFS_API PosixUser() = default;
    AWS_EFS_API PosixUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API PosixUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The POSIX user ID used for all file system operations using this access
     * point.</p>
     */
    inline long long GetUid() const { return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    inline void SetUid(long long value) { m_uidHasBeenSet = true; m_uid = value; }
    inline PosixUser& WithUid(long long value) { SetUid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The POSIX group ID used for all file system operations using this access
     * point.</p>
     */
    inline long long GetGid() const { return m_gid; }
    inline bool GidHasBeenSet() const { return m_gidHasBeenSet; }
    inline void SetGid(long long value) { m_gidHasBeenSet = true; m_gid = value; }
    inline PosixUser& WithGid(long long value) { SetGid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Secondary POSIX group IDs used for all file system operations using this
     * access point.</p>
     */
    inline const Aws::Vector<long long>& GetSecondaryGids() const { return m_secondaryGids; }
    inline bool SecondaryGidsHasBeenSet() const { return m_secondaryGidsHasBeenSet; }
    template<typename SecondaryGidsT = Aws::Vector<long long>>
    void SetSecondaryGids(SecondaryGidsT&& value) { m_secondaryGidsHasBeenSet = true; m_secondaryGids = std::forward<SecondaryGidsT>(value); }
    template<typename SecondaryGidsT = Aws::Vector<long long>>
    PosixUser& WithSecondaryGids(SecondaryGidsT&& value) { SetSecondaryGids(std::forward<SecondaryGidsT>(value)); return *this;}
    inline PosixUser& AddSecondaryGids(long long value) { m_secondaryGidsHasBeenSet = true; m_secondaryGids.push_back(value); return *this; }
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
} // namespace EFS
} // namespace Aws
