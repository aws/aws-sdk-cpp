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
#include <aws/lightsail/model/DiskSnapshot.h>
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
  class AWS_LIGHTSAIL_API GetDiskSnapshotResult
  {
  public:
    GetDiskSnapshotResult();
    GetDiskSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDiskSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object containing information about the disk snapshot.</p>
     */
    inline const DiskSnapshot& GetDiskSnapshot() const{ return m_diskSnapshot; }

    /**
     * <p>An object containing information about the disk snapshot.</p>
     */
    inline void SetDiskSnapshot(const DiskSnapshot& value) { m_diskSnapshot = value; }

    /**
     * <p>An object containing information about the disk snapshot.</p>
     */
    inline void SetDiskSnapshot(DiskSnapshot&& value) { m_diskSnapshot = std::move(value); }

    /**
     * <p>An object containing information about the disk snapshot.</p>
     */
    inline GetDiskSnapshotResult& WithDiskSnapshot(const DiskSnapshot& value) { SetDiskSnapshot(value); return *this;}

    /**
     * <p>An object containing information about the disk snapshot.</p>
     */
    inline GetDiskSnapshotResult& WithDiskSnapshot(DiskSnapshot&& value) { SetDiskSnapshot(std::move(value)); return *this;}

  private:

    DiskSnapshot m_diskSnapshot;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
