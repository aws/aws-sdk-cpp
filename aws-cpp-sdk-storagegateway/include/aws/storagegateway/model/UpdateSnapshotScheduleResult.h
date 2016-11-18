/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>A JSON object containing the of the updated storage volume.</p>
   */
  class AWS_STORAGEGATEWAY_API UpdateSnapshotScheduleResult
  {
  public:
    UpdateSnapshotScheduleResult();
    UpdateSnapshotScheduleResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateSnapshotScheduleResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p/>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

    /**
     * <p/>
     */
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARN = value; }

    /**
     * <p/>
     */
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARN = value; }

    /**
     * <p/>
     */
    inline void SetVolumeARN(const char* value) { m_volumeARN.assign(value); }

    /**
     * <p/>
     */
    inline UpdateSnapshotScheduleResult& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    /**
     * <p/>
     */
    inline UpdateSnapshotScheduleResult& WithVolumeARN(Aws::String&& value) { SetVolumeARN(value); return *this;}

    /**
     * <p/>
     */
    inline UpdateSnapshotScheduleResult& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}

  private:
    Aws::String m_volumeARN;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
