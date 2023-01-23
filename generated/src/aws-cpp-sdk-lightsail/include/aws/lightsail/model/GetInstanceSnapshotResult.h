/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/InstanceSnapshot.h>
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
  class GetInstanceSnapshotResult
  {
  public:
    AWS_LIGHTSAIL_API GetInstanceSnapshotResult();
    AWS_LIGHTSAIL_API GetInstanceSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetInstanceSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of key-value pairs containing information about the results of your
     * get instance snapshot request.</p>
     */
    inline const InstanceSnapshot& GetInstanceSnapshot() const{ return m_instanceSnapshot; }

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * get instance snapshot request.</p>
     */
    inline void SetInstanceSnapshot(const InstanceSnapshot& value) { m_instanceSnapshot = value; }

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * get instance snapshot request.</p>
     */
    inline void SetInstanceSnapshot(InstanceSnapshot&& value) { m_instanceSnapshot = std::move(value); }

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * get instance snapshot request.</p>
     */
    inline GetInstanceSnapshotResult& WithInstanceSnapshot(const InstanceSnapshot& value) { SetInstanceSnapshot(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * get instance snapshot request.</p>
     */
    inline GetInstanceSnapshotResult& WithInstanceSnapshot(InstanceSnapshot&& value) { SetInstanceSnapshot(std::move(value)); return *this;}

  private:

    InstanceSnapshot m_instanceSnapshot;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
