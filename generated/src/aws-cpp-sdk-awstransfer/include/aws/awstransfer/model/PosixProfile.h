﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>The full POSIX identity, including user ID (<code>Uid</code>), group ID
   * (<code>Gid</code>), and any secondary groups IDs (<code>SecondaryGids</code>),
   * that controls your users' access to your Amazon EFS file systems. The POSIX
   * permissions that are set on files and directories in your file system determine
   * the level of access your users get when transferring files into and out of your
   * Amazon EFS file systems.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/PosixProfile">AWS
   * API Reference</a></p>
   */
  class PosixProfile
  {
  public:
    AWS_TRANSFER_API PosixProfile();
    AWS_TRANSFER_API PosixProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API PosixProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The POSIX user ID used for all EFS operations by this user.</p>
     */
    inline long long GetUid() const{ return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    inline void SetUid(long long value) { m_uidHasBeenSet = true; m_uid = value; }
    inline PosixProfile& WithUid(long long value) { SetUid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The POSIX group ID used for all EFS operations by this user.</p>
     */
    inline long long GetGid() const{ return m_gid; }
    inline bool GidHasBeenSet() const { return m_gidHasBeenSet; }
    inline void SetGid(long long value) { m_gidHasBeenSet = true; m_gid = value; }
    inline PosixProfile& WithGid(long long value) { SetGid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secondary POSIX group IDs used for all EFS operations by this user.</p>
     */
    inline const Aws::Vector<long long>& GetSecondaryGids() const{ return m_secondaryGids; }
    inline bool SecondaryGidsHasBeenSet() const { return m_secondaryGidsHasBeenSet; }
    inline void SetSecondaryGids(const Aws::Vector<long long>& value) { m_secondaryGidsHasBeenSet = true; m_secondaryGids = value; }
    inline void SetSecondaryGids(Aws::Vector<long long>&& value) { m_secondaryGidsHasBeenSet = true; m_secondaryGids = std::move(value); }
    inline PosixProfile& WithSecondaryGids(const Aws::Vector<long long>& value) { SetSecondaryGids(value); return *this;}
    inline PosixProfile& WithSecondaryGids(Aws::Vector<long long>&& value) { SetSecondaryGids(std::move(value)); return *this;}
    inline PosixProfile& AddSecondaryGids(long long value) { m_secondaryGidsHasBeenSet = true; m_secondaryGids.push_back(value); return *this; }
    ///@}
  private:

    long long m_uid;
    bool m_uidHasBeenSet = false;

    long long m_gid;
    bool m_gidHasBeenSet = false;

    Aws::Vector<long long> m_secondaryGids;
    bool m_secondaryGidsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
