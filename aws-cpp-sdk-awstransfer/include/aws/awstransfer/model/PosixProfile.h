/**
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

  class AWS_TRANSFER_API PosixProfile
  {
  public:
    PosixProfile();
    PosixProfile(Aws::Utils::Json::JsonView jsonValue);
    PosixProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline long long GetUid() const{ return m_uid; }

    
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }

    
    inline void SetUid(long long value) { m_uidHasBeenSet = true; m_uid = value; }

    
    inline PosixProfile& WithUid(long long value) { SetUid(value); return *this;}


    
    inline long long GetGid() const{ return m_gid; }

    
    inline bool GidHasBeenSet() const { return m_gidHasBeenSet; }

    
    inline void SetGid(long long value) { m_gidHasBeenSet = true; m_gid = value; }

    
    inline PosixProfile& WithGid(long long value) { SetGid(value); return *this;}


    
    inline const Aws::Vector<long long>& GetSecondaryGids() const{ return m_secondaryGids; }

    
    inline bool SecondaryGidsHasBeenSet() const { return m_secondaryGidsHasBeenSet; }

    
    inline void SetSecondaryGids(const Aws::Vector<long long>& value) { m_secondaryGidsHasBeenSet = true; m_secondaryGids = value; }

    
    inline void SetSecondaryGids(Aws::Vector<long long>&& value) { m_secondaryGidsHasBeenSet = true; m_secondaryGids = std::move(value); }

    
    inline PosixProfile& WithSecondaryGids(const Aws::Vector<long long>& value) { SetSecondaryGids(value); return *this;}

    
    inline PosixProfile& WithSecondaryGids(Aws::Vector<long long>&& value) { SetSecondaryGids(std::move(value)); return *this;}

    
    inline PosixProfile& AddSecondaryGids(long long value) { m_secondaryGidsHasBeenSet = true; m_secondaryGids.push_back(value); return *this; }

  private:

    long long m_uid;
    bool m_uidHasBeenSet;

    long long m_gid;
    bool m_gidHasBeenSet;

    Aws::Vector<long long> m_secondaryGids;
    bool m_secondaryGidsHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
