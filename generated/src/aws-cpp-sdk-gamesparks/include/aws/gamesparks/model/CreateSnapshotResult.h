/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/gamesparks/model/SnapshotDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateSnapshotResult
  {
  public:
    AWS_GAMESPARKS_API CreateSnapshotResult();
    AWS_GAMESPARKS_API CreateSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API CreateSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateSnapshotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateSnapshotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateSnapshotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SnapshotDetails m_snapshot;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
