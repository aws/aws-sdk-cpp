﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/gamesparks/model/SnapshotDetails.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameSparks
{
namespace Model
{
  class AWS_GAMESPARKS_API CreateSnapshotResult
  {
  public:
    CreateSnapshotResult();
    CreateSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Properties that provide details of the created snapshot.</p>
     */
    inline const SnapshotDetails& GetSnapshot() const{ return m_snapshot; }

    /**
     * <p>Properties that provide details of the created snapshot.</p>
     */
    inline void SetSnapshot(const SnapshotDetails& value) { m_snapshot = value; }

    /**
     * <p>Properties that provide details of the created snapshot.</p>
     */
    inline void SetSnapshot(SnapshotDetails&& value) { m_snapshot = std::move(value); }

    /**
     * <p>Properties that provide details of the created snapshot.</p>
     */
    inline CreateSnapshotResult& WithSnapshot(const SnapshotDetails& value) { SetSnapshot(value); return *this;}

    /**
     * <p>Properties that provide details of the created snapshot.</p>
     */
    inline CreateSnapshotResult& WithSnapshot(SnapshotDetails&& value) { SetSnapshot(std::move(value)); return *this;}

  private:

    SnapshotDetails m_snapshot;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
