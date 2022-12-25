/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/docdb-elastic/model/ClusterSnapshot.h>
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
namespace DocDBElastic
{
namespace Model
{
  class DeleteClusterSnapshotResult
  {
  public:
    AWS_DOCDBELASTIC_API DeleteClusterSnapshotResult();
    AWS_DOCDBELASTIC_API DeleteClusterSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DOCDBELASTIC_API DeleteClusterSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns information about the newly deleted Elastic DocumentDB snapshot.</p>
     */
    inline const ClusterSnapshot& GetSnapshot() const{ return m_snapshot; }

    /**
     * <p>Returns information about the newly deleted Elastic DocumentDB snapshot.</p>
     */
    inline void SetSnapshot(const ClusterSnapshot& value) { m_snapshot = value; }

    /**
     * <p>Returns information about the newly deleted Elastic DocumentDB snapshot.</p>
     */
    inline void SetSnapshot(ClusterSnapshot&& value) { m_snapshot = std::move(value); }

    /**
     * <p>Returns information about the newly deleted Elastic DocumentDB snapshot.</p>
     */
    inline DeleteClusterSnapshotResult& WithSnapshot(const ClusterSnapshot& value) { SetSnapshot(value); return *this;}

    /**
     * <p>Returns information about the newly deleted Elastic DocumentDB snapshot.</p>
     */
    inline DeleteClusterSnapshotResult& WithSnapshot(ClusterSnapshot&& value) { SetSnapshot(std::move(value)); return *this;}

  private:

    ClusterSnapshot m_snapshot;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
