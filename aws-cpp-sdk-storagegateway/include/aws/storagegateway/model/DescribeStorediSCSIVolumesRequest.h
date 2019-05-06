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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>A JSON object containing a list of
   * <a>DescribeStorediSCSIVolumesInput$VolumeARNs</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeStorediSCSIVolumesInput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API DescribeStorediSCSIVolumesRequest : public StorageGatewayRequest
  {
  public:
    DescribeStorediSCSIVolumesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStorediSCSIVolumes"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of strings where each string represents the Amazon Resource Name
     * (ARN) of a stored volume. All of the specified stored volumes must from the same
     * gateway. Use <a>ListVolumes</a> to get volume ARNs for a gateway.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVolumeARNs() const{ return m_volumeARNs; }

    /**
     * <p>An array of strings where each string represents the Amazon Resource Name
     * (ARN) of a stored volume. All of the specified stored volumes must from the same
     * gateway. Use <a>ListVolumes</a> to get volume ARNs for a gateway.</p>
     */
    inline bool VolumeARNsHasBeenSet() const { return m_volumeARNsHasBeenSet; }

    /**
     * <p>An array of strings where each string represents the Amazon Resource Name
     * (ARN) of a stored volume. All of the specified stored volumes must from the same
     * gateway. Use <a>ListVolumes</a> to get volume ARNs for a gateway.</p>
     */
    inline void SetVolumeARNs(const Aws::Vector<Aws::String>& value) { m_volumeARNsHasBeenSet = true; m_volumeARNs = value; }

    /**
     * <p>An array of strings where each string represents the Amazon Resource Name
     * (ARN) of a stored volume. All of the specified stored volumes must from the same
     * gateway. Use <a>ListVolumes</a> to get volume ARNs for a gateway.</p>
     */
    inline void SetVolumeARNs(Aws::Vector<Aws::String>&& value) { m_volumeARNsHasBeenSet = true; m_volumeARNs = std::move(value); }

    /**
     * <p>An array of strings where each string represents the Amazon Resource Name
     * (ARN) of a stored volume. All of the specified stored volumes must from the same
     * gateway. Use <a>ListVolumes</a> to get volume ARNs for a gateway.</p>
     */
    inline DescribeStorediSCSIVolumesRequest& WithVolumeARNs(const Aws::Vector<Aws::String>& value) { SetVolumeARNs(value); return *this;}

    /**
     * <p>An array of strings where each string represents the Amazon Resource Name
     * (ARN) of a stored volume. All of the specified stored volumes must from the same
     * gateway. Use <a>ListVolumes</a> to get volume ARNs for a gateway.</p>
     */
    inline DescribeStorediSCSIVolumesRequest& WithVolumeARNs(Aws::Vector<Aws::String>&& value) { SetVolumeARNs(std::move(value)); return *this;}

    /**
     * <p>An array of strings where each string represents the Amazon Resource Name
     * (ARN) of a stored volume. All of the specified stored volumes must from the same
     * gateway. Use <a>ListVolumes</a> to get volume ARNs for a gateway.</p>
     */
    inline DescribeStorediSCSIVolumesRequest& AddVolumeARNs(const Aws::String& value) { m_volumeARNsHasBeenSet = true; m_volumeARNs.push_back(value); return *this; }

    /**
     * <p>An array of strings where each string represents the Amazon Resource Name
     * (ARN) of a stored volume. All of the specified stored volumes must from the same
     * gateway. Use <a>ListVolumes</a> to get volume ARNs for a gateway.</p>
     */
    inline DescribeStorediSCSIVolumesRequest& AddVolumeARNs(Aws::String&& value) { m_volumeARNsHasBeenSet = true; m_volumeARNs.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings where each string represents the Amazon Resource Name
     * (ARN) of a stored volume. All of the specified stored volumes must from the same
     * gateway. Use <a>ListVolumes</a> to get volume ARNs for a gateway.</p>
     */
    inline DescribeStorediSCSIVolumesRequest& AddVolumeARNs(const char* value) { m_volumeARNsHasBeenSet = true; m_volumeARNs.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_volumeARNs;
    bool m_volumeARNsHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
