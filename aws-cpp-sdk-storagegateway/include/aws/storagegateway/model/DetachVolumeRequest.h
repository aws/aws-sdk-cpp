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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>AttachVolumeInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DetachVolumeInput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API DetachVolumeRequest : public StorageGatewayRequest
  {
  public:
    DetachVolumeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetachVolume"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the volume to detach from the gateway.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume to detach from the gateway.</p>
     */
    inline bool VolumeARNHasBeenSet() const { return m_volumeARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume to detach from the gateway.</p>
     */
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume to detach from the gateway.</p>
     */
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume to detach from the gateway.</p>
     */
    inline void SetVolumeARN(const char* value) { m_volumeARNHasBeenSet = true; m_volumeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume to detach from the gateway.</p>
     */
    inline DetachVolumeRequest& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the volume to detach from the gateway.</p>
     */
    inline DetachVolumeRequest& WithVolumeARN(Aws::String&& value) { SetVolumeARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the volume to detach from the gateway.</p>
     */
    inline DetachVolumeRequest& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}


    /**
     * <p>Set to <code>true</code> to forcibly remove the iSCSI connection of the
     * target volume and detach the volume. The default is <code>false</code>. If this
     * value is set to <code>false</code>, you must manually disconnect the iSCSI
     * connection from the target volume.</p>
     */
    inline bool GetForceDetach() const{ return m_forceDetach; }

    /**
     * <p>Set to <code>true</code> to forcibly remove the iSCSI connection of the
     * target volume and detach the volume. The default is <code>false</code>. If this
     * value is set to <code>false</code>, you must manually disconnect the iSCSI
     * connection from the target volume.</p>
     */
    inline bool ForceDetachHasBeenSet() const { return m_forceDetachHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to forcibly remove the iSCSI connection of the
     * target volume and detach the volume. The default is <code>false</code>. If this
     * value is set to <code>false</code>, you must manually disconnect the iSCSI
     * connection from the target volume.</p>
     */
    inline void SetForceDetach(bool value) { m_forceDetachHasBeenSet = true; m_forceDetach = value; }

    /**
     * <p>Set to <code>true</code> to forcibly remove the iSCSI connection of the
     * target volume and detach the volume. The default is <code>false</code>. If this
     * value is set to <code>false</code>, you must manually disconnect the iSCSI
     * connection from the target volume.</p>
     */
    inline DetachVolumeRequest& WithForceDetach(bool value) { SetForceDetach(value); return *this;}

  private:

    Aws::String m_volumeARN;
    bool m_volumeARNHasBeenSet;

    bool m_forceDetach;
    bool m_forceDetachHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
