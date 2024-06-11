/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/Array.h>
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
   * <p>Configurations used to create a decoder manifest.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/CanDbcDefinition">AWS
   * API Reference</a></p>
   */
  class CanDbcDefinition
  {
  public:
    AWS_IOTFLEETWISE_API CanDbcDefinition();
    AWS_IOTFLEETWISE_API CanDbcDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API CanDbcDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about a network interface.</p>
     */
    inline const Aws::String& GetNetworkInterface() const{ return m_networkInterface; }
    inline bool NetworkInterfaceHasBeenSet() const { return m_networkInterfaceHasBeenSet; }
    inline void SetNetworkInterface(const Aws::String& value) { m_networkInterfaceHasBeenSet = true; m_networkInterface = value; }
    inline void SetNetworkInterface(Aws::String&& value) { m_networkInterfaceHasBeenSet = true; m_networkInterface = std::move(value); }
    inline void SetNetworkInterface(const char* value) { m_networkInterfaceHasBeenSet = true; m_networkInterface.assign(value); }
    inline CanDbcDefinition& WithNetworkInterface(const Aws::String& value) { SetNetworkInterface(value); return *this;}
    inline CanDbcDefinition& WithNetworkInterface(Aws::String&& value) { SetNetworkInterface(std::move(value)); return *this;}
    inline CanDbcDefinition& WithNetworkInterface(const char* value) { SetNetworkInterface(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of DBC files. You can upload only one DBC file for each network
     * interface and specify up to five (inclusive) files in the list. The DBC file can
     * be a maximum size of 200 MB.</p>
     */
    inline const Aws::Vector<Aws::Utils::ByteBuffer>& GetCanDbcFiles() const{ return m_canDbcFiles; }
    inline bool CanDbcFilesHasBeenSet() const { return m_canDbcFilesHasBeenSet; }
    inline void SetCanDbcFiles(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { m_canDbcFilesHasBeenSet = true; m_canDbcFiles = value; }
    inline void SetCanDbcFiles(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { m_canDbcFilesHasBeenSet = true; m_canDbcFiles = std::move(value); }
    inline CanDbcDefinition& WithCanDbcFiles(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { SetCanDbcFiles(value); return *this;}
    inline CanDbcDefinition& WithCanDbcFiles(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { SetCanDbcFiles(std::move(value)); return *this;}
    inline CanDbcDefinition& AddCanDbcFiles(const Aws::Utils::ByteBuffer& value) { m_canDbcFilesHasBeenSet = true; m_canDbcFiles.push_back(value); return *this; }
    inline CanDbcDefinition& AddCanDbcFiles(Aws::Utils::ByteBuffer&& value) { m_canDbcFilesHasBeenSet = true; m_canDbcFiles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pairs every signal specified in your vehicle model with a signal decoder.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSignalsMap() const{ return m_signalsMap; }
    inline bool SignalsMapHasBeenSet() const { return m_signalsMapHasBeenSet; }
    inline void SetSignalsMap(const Aws::Map<Aws::String, Aws::String>& value) { m_signalsMapHasBeenSet = true; m_signalsMap = value; }
    inline void SetSignalsMap(Aws::Map<Aws::String, Aws::String>&& value) { m_signalsMapHasBeenSet = true; m_signalsMap = std::move(value); }
    inline CanDbcDefinition& WithSignalsMap(const Aws::Map<Aws::String, Aws::String>& value) { SetSignalsMap(value); return *this;}
    inline CanDbcDefinition& WithSignalsMap(Aws::Map<Aws::String, Aws::String>&& value) { SetSignalsMap(std::move(value)); return *this;}
    inline CanDbcDefinition& AddSignalsMap(const Aws::String& key, const Aws::String& value) { m_signalsMapHasBeenSet = true; m_signalsMap.emplace(key, value); return *this; }
    inline CanDbcDefinition& AddSignalsMap(Aws::String&& key, const Aws::String& value) { m_signalsMapHasBeenSet = true; m_signalsMap.emplace(std::move(key), value); return *this; }
    inline CanDbcDefinition& AddSignalsMap(const Aws::String& key, Aws::String&& value) { m_signalsMapHasBeenSet = true; m_signalsMap.emplace(key, std::move(value)); return *this; }
    inline CanDbcDefinition& AddSignalsMap(Aws::String&& key, Aws::String&& value) { m_signalsMapHasBeenSet = true; m_signalsMap.emplace(std::move(key), std::move(value)); return *this; }
    inline CanDbcDefinition& AddSignalsMap(const char* key, Aws::String&& value) { m_signalsMapHasBeenSet = true; m_signalsMap.emplace(key, std::move(value)); return *this; }
    inline CanDbcDefinition& AddSignalsMap(Aws::String&& key, const char* value) { m_signalsMapHasBeenSet = true; m_signalsMap.emplace(std::move(key), value); return *this; }
    inline CanDbcDefinition& AddSignalsMap(const char* key, const char* value) { m_signalsMapHasBeenSet = true; m_signalsMap.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_networkInterface;
    bool m_networkInterfaceHasBeenSet = false;

    Aws::Vector<Aws::Utils::ByteBuffer> m_canDbcFiles;
    bool m_canDbcFilesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_signalsMap;
    bool m_signalsMapHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
