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


    ///@{
    /**
     * <p>The unique name of the interface.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CanInterface& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CanInterface& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CanInterface& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the communication protocol for the interface.</p>
     */
    inline const Aws::String& GetProtocolName() const{ return m_protocolName; }
    inline bool ProtocolNameHasBeenSet() const { return m_protocolNameHasBeenSet; }
    inline void SetProtocolName(const Aws::String& value) { m_protocolNameHasBeenSet = true; m_protocolName = value; }
    inline void SetProtocolName(Aws::String&& value) { m_protocolNameHasBeenSet = true; m_protocolName = std::move(value); }
    inline void SetProtocolName(const char* value) { m_protocolNameHasBeenSet = true; m_protocolName.assign(value); }
    inline CanInterface& WithProtocolName(const Aws::String& value) { SetProtocolName(value); return *this;}
    inline CanInterface& WithProtocolName(Aws::String&& value) { SetProtocolName(std::move(value)); return *this;}
    inline CanInterface& WithProtocolName(const char* value) { SetProtocolName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the communication protocol for the interface.</p>
     */
    inline const Aws::String& GetProtocolVersion() const{ return m_protocolVersion; }
    inline bool ProtocolVersionHasBeenSet() const { return m_protocolVersionHasBeenSet; }
    inline void SetProtocolVersion(const Aws::String& value) { m_protocolVersionHasBeenSet = true; m_protocolVersion = value; }
    inline void SetProtocolVersion(Aws::String&& value) { m_protocolVersionHasBeenSet = true; m_protocolVersion = std::move(value); }
    inline void SetProtocolVersion(const char* value) { m_protocolVersionHasBeenSet = true; m_protocolVersion.assign(value); }
    inline CanInterface& WithProtocolVersion(const Aws::String& value) { SetProtocolVersion(value); return *this;}
    inline CanInterface& WithProtocolVersion(Aws::String&& value) { SetProtocolVersion(std::move(value)); return *this;}
    inline CanInterface& WithProtocolVersion(const char* value) { SetProtocolVersion(value); return *this;}
    ///@}
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
