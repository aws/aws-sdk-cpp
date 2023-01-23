/**
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
  class GetSnapshotResult
  {
  public:
    AWS_GAMESPARKS_API GetSnapshotResult();
    AWS_GAMESPARKS_API GetSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API GetSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Properties that provide details of the snapshot.</p>
     */
    inline const SnapshotDetails& GetSnapshot() const{ return m_snapshot; }

    /**
     * <p>Properties that provide details of the snapshot.</p>
     */
    inline void SetSnapshot(const SnapshotDetails& value) { m_snapshot = value; }

    /**
     * <p>Properties that provide details of the snapshot.</p>
     */
    inline void SetSnapshot(SnapshotDetails&& value) { m_snapshot = std::move(value); }

    /**
     * <p>Properties that provide details of the snapshot.</p>
     */
    inline GetSnapshotResult& WithSnapshot(const SnapshotDetails& value) { SetSnapshot(value); return *this;}

    /**
     * <p>Properties that provide details of the snapshot.</p>
     */
    inline GetSnapshotResult& WithSnapshot(SnapshotDetails&& value) { SetSnapshot(std::move(value)); return *this;}

  private:

    SnapshotDetails m_snapshot;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
