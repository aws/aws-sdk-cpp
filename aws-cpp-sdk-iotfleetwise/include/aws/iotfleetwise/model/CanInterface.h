/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>A single controller area network (CAN) device interface.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/CanInterface">AWS
   * API Reference</a></p>
   */
  class CanInterface
  {
  public:
    AWS_IOTFLEETWISE_API CanInterface();
    AWS_IOTFLEETWISE_API CanInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API CanInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique name of the interface.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The unique name of the interface.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The unique name of the interface.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The unique name of the interface.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The unique name of the interface.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The unique name of the interface.</p>
     */
    inline CanInterface& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The unique name of the interface.</p>
     */
    inline CanInterface& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the interface.</p>
     */
    inline CanInterface& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the communication protocol for the interface.</p>
     */
    inline const Aws::String& GetProtocolName() const{ return m_protocolName; }

    /**
     * <p>The name of the communication protocol for the interface.</p>
     */
    inline bool ProtocolNameHasBeenSet() const { return m_protocolNameHasBeenSet; }

    /**
     * <p>The name of the communication protocol for the interface.</p>
     */
    inline void SetProtocolName(const Aws::String& value) { m_protocolNameHasBeenSet = true; m_protocolName = value; }

    /**
     * <p>The name of the communication protocol for the interface.</p>
     */
    inline void SetProtocolName(Aws::String&& value) { m_protocolNameHasBeenSet = true; m_protocolName = std::move(value); }

    /**
     * <p>The name of the communication protocol for the interface.</p>
     */
    inline void SetProtocolName(const char* value) { m_protocolNameHasBeenSet = true; m_protocolName.assign(value); }

    /**
     * <p>The name of the communication protocol for the interface.</p>
     */
    inline CanInterface& WithProtocolName(const Aws::String& value) { SetProtocolName(value); return *this;}

    /**
     * <p>The name of the communication protocol for the interface.</p>
     */
    inline CanInterface& WithProtocolName(Aws::String&& value) { SetProtocolName(std::move(value)); return *this;}

    /**
     * <p>The name of the communication protocol for the interface.</p>
     */
    inline CanInterface& WithProtocolName(const char* value) { SetProtocolName(value); return *this;}


    /**
     * <p>The version of the communication protocol for the interface.</p>
     */
    inline const Aws::String& GetProtocolVersion() const{ return m_protocolVersion; }

    /**
     * <p>The version of the communication protocol for the interface.</p>
     */
    inline bool ProtocolVersionHasBeenSet() const { return m_protocolVersionHasBeenSet; }

    /**
     * <p>The version of the communication protocol for the interface.</p>
     */
    inline void SetProtocolVersion(const Aws::String& value) { m_protocolVersionHasBeenSet = true; m_protocolVersion = value; }

    /**
     * <p>The version of the communication protocol for the interface.</p>
     */
    inline void SetProtocolVersion(Aws::String&& value) { m_protocolVersionHasBeenSet = true; m_protocolVersion = std::move(value); }

    /**
     * <p>The version of the communication protocol for the interface.</p>
     */
    inline void SetProtocolVersion(const char* value) { m_protocolVersionHasBeenSet = true; m_protocolVersion.assign(value); }

    /**
     * <p>The version of the communication protocol for the interface.</p>
     */
    inline CanInterface& WithProtocolVersion(const Aws::String& value) { SetProtocolVersion(value); return *this;}

    /**
     * <p>The version of the communication protocol for the interface.</p>
     */
    inline CanInterface& WithProtocolVersion(Aws::String&& value) { SetProtocolVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the communication protocol for the interface.</p>
     */
    inline CanInterface& WithProtocolVersion(const char* value) { SetProtocolVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_protocolName;
    bool m_protocolNameHasBeenSet = false;

    Aws::String m_protocolVersion;
    bool m_protocolVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
