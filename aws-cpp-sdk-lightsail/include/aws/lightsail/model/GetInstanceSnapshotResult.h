/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_LIGHTSAIL_API GetInstanceSnapshotResult
  {
  public:
    GetInstanceSnapshotResult();
    GetInstanceSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetInstanceSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
