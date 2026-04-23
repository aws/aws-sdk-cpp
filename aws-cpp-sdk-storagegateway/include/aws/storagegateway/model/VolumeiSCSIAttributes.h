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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Lists iSCSI information about a volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/VolumeiSCSIAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API VolumeiSCSIAttributes
  {
  public:
    VolumeiSCSIAttributes();
    VolumeiSCSIAttributes(Aws::Utils::Json::JsonView jsonValue);
    VolumeiSCSIAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the volume target.</p>
     */
    inline const Aws::String& GetTargetARN() const{ return m_targetARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume target.</p>
     */
    inline bool TargetARNHasBeenSet() const { return m_targetARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume target.</p>
     */
    inline void SetTargetARN(const Aws::String& value) { m_targetARNHasBeenSet = true; m_targetARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume target.</p>
     */
    inline void SetTargetARN(Aws::String&& value) { m_targetARNHasBeenSet = true; m_targetARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume target.</p>
     */
    inline void SetTargetARN(const char* value) { m_targetARNHasBeenSet = true; m_targetARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume target.</p>
     */
    inline VolumeiSCSIAttributes& WithTargetARN(const Aws::String& value) { SetTargetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the volume target.</p>
     */
    inline VolumeiSCSIAttributes& WithTargetARN(Aws::String&& value) { SetTargetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the volume target.</p>
     */
    inline VolumeiSCSIAttributes& WithTargetARN(const char* value) { SetTargetARN(value); return *this;}


    /**
     * <p>The network interface identifier.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The network interface identifier.</p>
     */
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }

    /**
     * <p>The network interface identifier.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The network interface identifier.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p>The network interface identifier.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The network interface identifier.</p>
     */
    inline VolumeiSCSIAttributes& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The network interface identifier.</p>
     */
    inline VolumeiSCSIAttributes& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The network interface identifier.</p>
     */
    inline VolumeiSCSIAttributes& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>The port used to communicate with iSCSI targets.</p>
     */
    inline int GetNetworkInterfacePort() const{ return m_networkInterfacePort; }

    /**
     * <p>The port used to communicate with iSCSI targets.</p>
     */
    inline bool NetworkInterfacePortHasBeenSet() const { return m_networkInterfacePortHasBeenSet; }

    /**
     * <p>The port used to communicate with iSCSI targets.</p>
     */
    inline void SetNetworkInterfacePort(int value) { m_networkInterfacePortHasBeenSet = true; m_networkInterfacePort = value; }

    /**
     * <p>The port used to communicate with iSCSI targets.</p>
     */
    inline VolumeiSCSIAttributes& WithNetworkInterfacePort(int value) { SetNetworkInterfacePort(value); return *this;}


    /**
     * <p>The logical disk number.</p>
     */
    inline int GetLunNumber() const{ return m_lunNumber; }

    /**
     * <p>The logical disk number.</p>
     */
    inline bool LunNumberHasBeenSet() const { return m_lunNumberHasBeenSet; }

    /**
     * <p>The logical disk number.</p>
     */
    inline void SetLunNumber(int value) { m_lunNumberHasBeenSet = true; m_lunNumber = value; }

    /**
     * <p>The logical disk number.</p>
     */
    inline VolumeiSCSIAttributes& WithLunNumber(int value) { SetLunNumber(value); return *this;}


    /**
     * <p>Indicates whether mutual CHAP is enabled for the iSCSI target.</p>
     */
    inline bool GetChapEnabled() const{ return m_chapEnabled; }

    /**
     * <p>Indicates whether mutual CHAP is enabled for the iSCSI target.</p>
     */
    inline bool ChapEnabledHasBeenSet() const { return m_chapEnabledHasBeenSet; }

    /**
     * <p>Indicates whether mutual CHAP is enabled for the iSCSI target.</p>
     */
    inline void SetChapEnabled(bool value) { m_chapEnabledHasBeenSet = true; m_chapEnabled = value; }

    /**
     * <p>Indicates whether mutual CHAP is enabled for the iSCSI target.</p>
     */
    inline VolumeiSCSIAttributes& WithChapEnabled(bool value) { SetChapEnabled(value); return *this;}

  private:

    Aws::String m_targetARN;
    bool m_targetARNHasBeenSet;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;

    int m_networkInterfacePort;
    bool m_networkInterfacePortHasBeenSet;

    int m_lunNumber;
    bool m_lunNumberHasBeenSet;

    bool m_chapEnabled;
    bool m_chapEnabledHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
