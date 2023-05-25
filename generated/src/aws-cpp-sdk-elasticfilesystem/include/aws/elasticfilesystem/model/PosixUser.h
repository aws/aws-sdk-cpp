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
    AWS_EFS_API PosixUser();
    AWS_EFS_API PosixUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API PosixUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The POSIX user ID used for all file system operations using this access
     * point.</p>
     */
    inline long long GetUid() const{ return m_uid; }

    /**
     * <p>The POSIX user ID used for all file system operations using this access
     * point.</p>
     */
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }

    /**
     * <p>The POSIX user ID used for all file system operations using this access
     * point.</p>
     */
    inline void SetUid(long long value) { m_uidHasBeenSet = true; m_uid = value; }

    /**
     * <p>The POSIX user ID used for all file system operations using this access
     * point.</p>
     */
    inline PosixUser& WithUid(long long value) { SetUid(value); return *this;}


    /**
     * <p>The POSIX group ID used for all file system operations using this access
     * point.</p>
     */
    inline long long GetGid() const{ return m_gid; }

    /**
     * <p>The POSIX group ID used for all file system operations using this access
     * point.</p>
     */
    inline bool GidHasBeenSet() const { return m_gidHasBeenSet; }

    /**
     * <p>The POSIX group ID used for all file system operations using this access
     * point.</p>
     */
    inline void SetGid(long long value) { m_gidHasBeenSet = true; m_gid = value; }

    /**
     * <p>The POSIX group ID used for all file system operations using this access
     * point.</p>
     */
    inline PosixUser& WithGid(long long value) { SetGid(value); return *this;}


    /**
     * <p>Secondary POSIX group IDs used for all file system operations using this
     * access point.</p>
     */
    inline const Aws::Vector<long long>& GetSecondaryGids() const{ return m_secondaryGids; }

    /**
     * <p>Secondary POSIX group IDs used for all file system operations using this
     * access point.</p>
     */
    inline bool SecondaryGidsHasBeenSet() const { return m_secondaryGidsHasBeenSet; }

    /**
     * <p>Secondary POSIX group IDs used for all file system operations using this
     * access point.</p>
     */
    inline void SetSecondaryGids(const Aws::Vector<long long>& value) { m_secondaryGidsHasBeenSet = true; m_secondaryGids = value; }

    /**
     * <p>Secondary POSIX group IDs used for all file system operations using this
     * access point.</p>
     */
    inline void SetSecondaryGids(Aws::Vector<long long>&& value) { m_secondaryGidsHasBeenSet = true; m_secondaryGids = std::move(value); }

    /**
     * <p>Secondary POSIX group IDs used for all file system operations using this
     * access point.</p>
     */
    inline PosixUser& WithSecondaryGids(const Aws::Vector<long long>& value) { SetSecondaryGids(value); return *this;}

    /**
     * <p>Secondary POSIX group IDs used for all file system operations using this
     * access point.</p>
     */
    inline PosixUser& WithSecondaryGids(Aws::Vector<long long>&& value) { SetSecondaryGids(std::move(value)); return *this;}

    /**
     * <p>Secondary POSIX group IDs used for all file system operations using this
     * access point.</p>
     */
    inline PosixUser& AddSecondaryGids(long long value) { m_secondaryGidsHasBeenSet = true; m_secondaryGids.push_back(value); return *this; }

  private:

    long long m_uid;
    bool m_uidHasBeenSet = false;

    long long m_gid;
    bool m_gidHasBeenSet = false;

    Aws::Vector<long long> m_secondaryGids;
    bool m_secondaryGidsHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
