/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/NetworkInterfaceFailureReason.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>A reason a vehicle network interface isn't valid.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/InvalidNetworkInterface">AWS
   * API Reference</a></p>
   */
  class InvalidNetworkInterface
  {
  public:
    AWS_IOTFLEETWISE_API InvalidNetworkInterface();
    AWS_IOTFLEETWISE_API InvalidNetworkInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API InvalidNetworkInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the interface that isn't valid.</p>
     */
    inline const Aws::String& GetInterfaceId() const{ return m_interfaceId; }

    /**
     * <p>The ID of the interface that isn't valid.</p>
     */
    inline bool InterfaceIdHasBeenSet() const { return m_interfaceIdHasBeenSet; }

    /**
     * <p>The ID of the interface that isn't valid.</p>
     */
    inline void SetInterfaceId(const Aws::String& value) { m_interfaceIdHasBeenSet = true; m_interfaceId = value; }

    /**
     * <p>The ID of the interface that isn't valid.</p>
     */
    inline void SetInterfaceId(Aws::String&& value) { m_interfaceIdHasBeenSet = true; m_interfaceId = std::move(value); }

    /**
     * <p>The ID of the interface that isn't valid.</p>
     */
    inline void SetInterfaceId(const char* value) { m_interfaceIdHasBeenSet = true; m_interfaceId.assign(value); }

    /**
     * <p>The ID of the interface that isn't valid.</p>
     */
    inline InvalidNetworkInterface& WithInterfaceId(const Aws::String& value) { SetInterfaceId(value); return *this;}

    /**
     * <p>The ID of the interface that isn't valid.</p>
     */
    inline InvalidNetworkInterface& WithInterfaceId(Aws::String&& value) { SetInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the interface that isn't valid.</p>
     */
    inline InvalidNetworkInterface& WithInterfaceId(const char* value) { SetInterfaceId(value); return *this;}


    /**
     * <p>A message about why the interface isn't valid. </p>
     */
    inline const NetworkInterfaceFailureReason& GetReason() const{ return m_reason; }

    /**
     * <p>A message about why the interface isn't valid. </p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>A message about why the interface isn't valid. </p>
     */
    inline void SetReason(const NetworkInterfaceFailureReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A message about why the interface isn't valid. </p>
     */
    inline void SetReason(NetworkInterfaceFailureReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>A message about why the interface isn't valid. </p>
     */
    inline InvalidNetworkInterface& WithReason(const NetworkInterfaceFailureReason& value) { SetReason(value); return *this;}

    /**
     * <p>A message about why the interface isn't valid. </p>
     */
    inline InvalidNetworkInterface& WithReason(NetworkInterfaceFailureReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::String m_interfaceId;
    bool m_interfaceIdHasBeenSet = false;

    NetworkInterfaceFailureReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
