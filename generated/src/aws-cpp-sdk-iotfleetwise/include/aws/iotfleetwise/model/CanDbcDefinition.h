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


    /**
     * <p>Contains information about a network interface.</p>
     */
    inline const Aws::String& GetNetworkInterface() const{ return m_networkInterface; }

    /**
     * <p>Contains information about a network interface.</p>
     */
    inline bool NetworkInterfaceHasBeenSet() const { return m_networkInterfaceHasBeenSet; }

    /**
     * <p>Contains information about a network interface.</p>
     */
    inline void SetNetworkInterface(const Aws::String& value) { m_networkInterfaceHasBeenSet = true; m_networkInterface = value; }

    /**
     * <p>Contains information about a network interface.</p>
     */
    inline void SetNetworkInterface(Aws::String&& value) { m_networkInterfaceHasBeenSet = true; m_networkInterface = std::move(value); }

    /**
     * <p>Contains information about a network interface.</p>
     */
    inline void SetNetworkInterface(const char* value) { m_networkInterfaceHasBeenSet = true; m_networkInterface.assign(value); }

    /**
     * <p>Contains information about a network interface.</p>
     */
    inline CanDbcDefinition& WithNetworkInterface(const Aws::String& value) { SetNetworkInterface(value); return *this;}

    /**
     * <p>Contains information about a network interface.</p>
     */
    inline CanDbcDefinition& WithNetworkInterface(Aws::String&& value) { SetNetworkInterface(std::move(value)); return *this;}

    /**
     * <p>Contains information about a network interface.</p>
     */
    inline CanDbcDefinition& WithNetworkInterface(const char* value) { SetNetworkInterface(value); return *this;}


    /**
     * <p>A list of DBC files. You can upload only one DBC file for each network
     * interface and specify up to five (inclusive) files in the list.</p>
     */
    inline const Aws::Vector<Aws::Utils::ByteBuffer>& GetCanDbcFiles() const{ return m_canDbcFiles; }

    /**
     * <p>A list of DBC files. You can upload only one DBC file for each network
     * interface and specify up to five (inclusive) files in the list.</p>
     */
    inline bool CanDbcFilesHasBeenSet() const { return m_canDbcFilesHasBeenSet; }

    /**
     * <p>A list of DBC files. You can upload only one DBC file for each network
     * interface and specify up to five (inclusive) files in the list.</p>
     */
    inline void SetCanDbcFiles(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { m_canDbcFilesHasBeenSet = true; m_canDbcFiles = value; }

    /**
     * <p>A list of DBC files. You can upload only one DBC file for each network
     * interface and specify up to five (inclusive) files in the list.</p>
     */
    inline void SetCanDbcFiles(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { m_canDbcFilesHasBeenSet = true; m_canDbcFiles = std::move(value); }

    /**
     * <p>A list of DBC files. You can upload only one DBC file for each network
     * interface and specify up to five (inclusive) files in the list.</p>
     */
    inline CanDbcDefinition& WithCanDbcFiles(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { SetCanDbcFiles(value); return *this;}

    /**
     * <p>A list of DBC files. You can upload only one DBC file for each network
     * interface and specify up to five (inclusive) files in the list.</p>
     */
    inline CanDbcDefinition& WithCanDbcFiles(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { SetCanDbcFiles(std::move(value)); return *this;}

    /**
     * <p>A list of DBC files. You can upload only one DBC file for each network
     * interface and specify up to five (inclusive) files in the list.</p>
     */
    inline CanDbcDefinition& AddCanDbcFiles(const Aws::Utils::ByteBuffer& value) { m_canDbcFilesHasBeenSet = true; m_canDbcFiles.push_back(value); return *this; }

    /**
     * <p>A list of DBC files. You can upload only one DBC file for each network
     * interface and specify up to five (inclusive) files in the list.</p>
     */
    inline CanDbcDefinition& AddCanDbcFiles(Aws::Utils::ByteBuffer&& value) { m_canDbcFilesHasBeenSet = true; m_canDbcFiles.push_back(std::move(value)); return *this; }


    /**
     * <p>Pairs every signal specified in your vehicle model with a signal decoder.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSignalsMap() const{ return m_signalsMap; }

    /**
     * <p>Pairs every signal specified in your vehicle model with a signal decoder.</p>
     */
    inline bool SignalsMapHasBeenSet() const { return m_signalsMapHasBeenSet; }

    /**
     * <p>Pairs every signal specified in your vehicle model with a signal decoder.</p>
     */
    inline void SetSignalsMap(const Aws::Map<Aws::String, Aws::String>& value) { m_signalsMapHasBeenSet = true; m_signalsMap = value; }

    /**
     * <p>Pairs every signal specified in your vehicle model with a signal decoder.</p>
     */
    inline void SetSignalsMap(Aws::Map<Aws::String, Aws::String>&& value) { m_signalsMapHasBeenSet = true; m_signalsMap = std::move(value); }

    /**
     * <p>Pairs every signal specified in your vehicle model with a signal decoder.</p>
     */
    inline CanDbcDefinition& WithSignalsMap(const Aws::Map<Aws::String, Aws::String>& value) { SetSignalsMap(value); return *this;}

    /**
     * <p>Pairs every signal specified in your vehicle model with a signal decoder.</p>
     */
    inline CanDbcDefinition& WithSignalsMap(Aws::Map<Aws::String, Aws::String>&& value) { SetSignalsMap(std::move(value)); return *this;}

    /**
     * <p>Pairs every signal specified in your vehicle model with a signal decoder.</p>
     */
    inline CanDbcDefinition& AddSignalsMap(const Aws::String& key, const Aws::String& value) { m_signalsMapHasBeenSet = true; m_signalsMap.emplace(key, value); return *this; }

    /**
     * <p>Pairs every signal specified in your vehicle model with a signal decoder.</p>
     */
    inline CanDbcDefinition& AddSignalsMap(Aws::String&& key, const Aws::String& value) { m_signalsMapHasBeenSet = true; m_signalsMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Pairs every signal specified in your vehicle model with a signal decoder.</p>
     */
    inline CanDbcDefinition& AddSignalsMap(const Aws::String& key, Aws::String&& value) { m_signalsMapHasBeenSet = true; m_signalsMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Pairs every signal specified in your vehicle model with a signal decoder.</p>
     */
    inline CanDbcDefinition& AddSignalsMap(Aws::String&& key, Aws::String&& value) { m_signalsMapHasBeenSet = true; m_signalsMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Pairs every signal specified in your vehicle model with a signal decoder.</p>
     */
    inline CanDbcDefinition& AddSignalsMap(const char* key, Aws::String&& value) { m_signalsMapHasBeenSet = true; m_signalsMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Pairs every signal specified in your vehicle model with a signal decoder.</p>
     */
    inline CanDbcDefinition& AddSignalsMap(Aws::String&& key, const char* value) { m_signalsMapHasBeenSet = true; m_signalsMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Pairs every signal specified in your vehicle model with a signal decoder.</p>
     */
    inline CanDbcDefinition& AddSignalsMap(const char* key, const char* value) { m_signalsMapHasBeenSet = true; m_signalsMap.emplace(key, value); return *this; }

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
