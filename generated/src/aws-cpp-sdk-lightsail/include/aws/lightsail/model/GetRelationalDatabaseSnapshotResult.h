/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/RelationalDatabaseSnapshot.h>
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
namespace Lightsail
{
namespace Model
{
  class GetRelationalDatabaseSnapshotResult
  {
  public:
    AWS_LIGHTSAIL_API GetRelationalDatabaseSnapshotResult() = default;
    AWS_LIGHTSAIL_API GetRelationalDatabaseSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetRelationalDatabaseSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object describing the specified database snapshot.</p>
     */
    inline const RelationalDatabaseSnapshot& GetRelationalDatabaseSnapshot() const { return m_relationalDatabaseSnapshot; }
    template<typename RelationalDatabaseSnapshotT = RelationalDatabaseSnapshot>
    void SetRelationalDatabaseSnapshot(RelationalDatabaseSnapshotT&& value) { m_relationalDatabaseSnapshotHasBeenSet = true; m_relationalDatabaseSnapshot = std::forward<RelationalDatabaseSnapshotT>(value); }
    template<typename RelationalDatabaseSnapshotT = RelationalDatabaseSnapshot>
    GetRelationalDatabaseSnapshotResult& WithRelationalDatabaseSnapshot(RelationalDatabaseSnapshotT&& value) { SetRelationalDatabaseSnapshot(std::forward<RelationalDatabaseSnapshotT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRelationalDatabaseSnapshotResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RelationalDatabaseSnapshot m_relationalDatabaseSnapshot;
    bool m_relationalDatabaseSnapshotHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
