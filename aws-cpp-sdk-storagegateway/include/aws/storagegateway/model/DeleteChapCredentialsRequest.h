﻿/*
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
   * <p>A JSON object containing one or more of the following fields:</p> <ul> <li>
   * <p> <a>DeleteChapCredentialsInput$InitiatorName</a> </p> </li> <li> <p>
   * <a>DeleteChapCredentialsInput$TargetARN</a> </p> </li> </ul>
   */
  class AWS_STORAGEGATEWAY_API DeleteChapCredentialsRequest : public StorageGatewayRequest
  {
  public:
    DeleteChapCredentialsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline const Aws::String& GetTargetARN() const{ return m_targetARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline void SetTargetARN(const Aws::String& value) { m_targetARNHasBeenSet = true; m_targetARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline void SetTargetARN(Aws::String&& value) { m_targetARNHasBeenSet = true; m_targetARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline void SetTargetARN(const char* value) { m_targetARNHasBeenSet = true; m_targetARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline DeleteChapCredentialsRequest& WithTargetARN(const Aws::String& value) { SetTargetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline DeleteChapCredentialsRequest& WithTargetARN(Aws::String&& value) { SetTargetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline DeleteChapCredentialsRequest& WithTargetARN(const char* value) { SetTargetARN(value); return *this;}

    /**
     * <p>The iSCSI initiator that connects to the target.</p>
     */
    inline const Aws::String& GetInitiatorName() const{ return m_initiatorName; }

    /**
     * <p>The iSCSI initiator that connects to the target.</p>
     */
    inline void SetInitiatorName(const Aws::String& value) { m_initiatorNameHasBeenSet = true; m_initiatorName = value; }

    /**
     * <p>The iSCSI initiator that connects to the target.</p>
     */
    inline void SetInitiatorName(Aws::String&& value) { m_initiatorNameHasBeenSet = true; m_initiatorName = value; }

    /**
     * <p>The iSCSI initiator that connects to the target.</p>
     */
    inline void SetInitiatorName(const char* value) { m_initiatorNameHasBeenSet = true; m_initiatorName.assign(value); }

    /**
     * <p>The iSCSI initiator that connects to the target.</p>
     */
    inline DeleteChapCredentialsRequest& WithInitiatorName(const Aws::String& value) { SetInitiatorName(value); return *this;}

    /**
     * <p>The iSCSI initiator that connects to the target.</p>
     */
    inline DeleteChapCredentialsRequest& WithInitiatorName(Aws::String&& value) { SetInitiatorName(value); return *this;}

    /**
     * <p>The iSCSI initiator that connects to the target.</p>
     */
    inline DeleteChapCredentialsRequest& WithInitiatorName(const char* value) { SetInitiatorName(value); return *this;}

  private:
    Aws::String m_targetARN;
    bool m_targetARNHasBeenSet;
    Aws::String m_initiatorName;
    bool m_initiatorNameHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
