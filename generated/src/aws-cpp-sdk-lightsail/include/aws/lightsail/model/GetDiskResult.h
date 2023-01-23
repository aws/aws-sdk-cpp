/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetDiskResult
  {
  public:
    AWS_LIGHTSAIL_API GetDiskResult();
    AWS_LIGHTSAIL_API GetDiskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetDiskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
