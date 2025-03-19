/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/DatasetContentDeliveryDestination.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>When dataset contents are created, they are delivered to destination
   * specified here.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatasetContentDeliveryRule">AWS
   * API Reference</a></p>
   */
  class DatasetContentDeliveryRule
  {
  public:
    AWS_IOTANALYTICS_API DatasetContentDeliveryRule() = default;
    AWS_IOTANALYTICS_API DatasetContentDeliveryRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatasetContentDeliveryRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the dataset content delivery rules entry.</p>
     */
    inline const Aws::String& GetEntryName() const { return m_entryName; }
    inline bool EntryNameHasBeenSet() const { return m_entryNameHasBeenSet; }
    template<typename EntryNameT = Aws::String>
    void SetEntryName(EntryNameT&& value) { m_entryNameHasBeenSet = true; m_entryName = std::forward<EntryNameT>(value); }
    template<typename EntryNameT = Aws::String>
    DatasetContentDeliveryRule& WithEntryName(EntryNameT&& value) { SetEntryName(std::forward<EntryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination to which dataset contents are delivered.</p>
     */
    inline const DatasetContentDeliveryDestination& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = DatasetContentDeliveryDestination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = DatasetContentDeliveryDestination>
    DatasetContentDeliveryRule& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_entryName;
    bool m_entryNameHasBeenSet = false;

    DatasetContentDeliveryDestination m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
