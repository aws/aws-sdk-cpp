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
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>A JSON object containing the <a>DeleteVolumeInput$VolumeARN</a> to
   * delete.</p>
   */
  class AWS_STORAGEGATEWAY_API DeleteVolumeRequest : public StorageGatewayRequest
  {
  public:
    DeleteVolumeRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline void SetVolumeARN(const char* value) { m_volumeARNHasBeenSet = true; m_volumeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline DeleteVolumeRequest& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline DeleteVolumeRequest& WithVolumeARN(Aws::String&& value) { SetVolumeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline DeleteVolumeRequest& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}

  private:
    Aws::String m_volumeARN;
    bool m_volumeARNHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
