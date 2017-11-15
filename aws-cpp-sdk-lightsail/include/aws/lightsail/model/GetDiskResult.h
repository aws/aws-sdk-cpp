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
#include <aws/lightsail/model/Disk.h>
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
  class AWS_LIGHTSAIL_API GetDiskResult
  {
  public:
    GetDiskResult();
    GetDiskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDiskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object containing information about the disk.</p>
     */
    inline const Disk& GetDisk() const{ return m_disk; }

    /**
     * <p>An object containing information about the disk.</p>
     */
    inline void SetDisk(const Disk& value) { m_disk = value; }

    /**
     * <p>An object containing information about the disk.</p>
     */
    inline void SetDisk(Disk&& value) { m_disk = std::move(value); }

    /**
     * <p>An object containing information about the disk.</p>
     */
    inline GetDiskResult& WithDisk(const Disk& value) { SetDisk(value); return *this;}

    /**
     * <p>An object containing information about the disk.</p>
     */
    inline GetDiskResult& WithDisk(Disk&& value) { SetDisk(std::move(value)); return *this;}

  private:

    Disk m_disk;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
