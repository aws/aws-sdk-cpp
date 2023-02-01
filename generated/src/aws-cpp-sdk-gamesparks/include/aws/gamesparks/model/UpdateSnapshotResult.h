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
  class UpdateSnapshotResult
  {
  public:
    AWS_GAMESPARKS_API UpdateSnapshotResult();
    AWS_GAMESPARKS_API UpdateSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API UpdateSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Properties that provide details of the updated snapshot.</p>
     */
    inline const SnapshotDetails& GetSnapshot() const{ return m_snapshot; }

    /**
     * <p>Properties that provide details of the updated snapshot.</p>
     */
    inline void SetSnapshot(const SnapshotDetails& value) { m_snapshot = value; }

    /**
     * <p>Properties that provide details of the updated snapshot.</p>
     */
    inline void SetSnapshot(SnapshotDetails&& value) { m_snapshot = std::move(value); }

    /**
     * <p>Properties that provide details of the updated snapshot.</p>
     */
    inline UpdateSnapshotResult& WithSnapshot(const SnapshotDetails& value) { SetSnapshot(value); return *this;}

    /**
     * <p>Properties that provide details of the updated snapshot.</p>
     */
    inline UpdateSnapshotResult& WithSnapshot(SnapshotDetails&& value) { SetSnapshot(std::move(value)); return *this;}

  private:

    SnapshotDetails m_snapshot;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
