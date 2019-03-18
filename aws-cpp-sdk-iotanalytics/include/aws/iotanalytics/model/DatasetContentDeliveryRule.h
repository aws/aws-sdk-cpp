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
   * <p>When data set contents are created they are delivered to destination
   * specified here.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatasetContentDeliveryRule">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API DatasetContentDeliveryRule
  {
  public:
    DatasetContentDeliveryRule();
    DatasetContentDeliveryRule(Aws::Utils::Json::JsonView jsonValue);
    DatasetContentDeliveryRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data set content delivery rules entry.</p>
     */
    inline const Aws::String& GetEntryName() const{ return m_entryName; }

    /**
     * <p>The name of the data set content delivery rules entry.</p>
     */
    inline bool EntryNameHasBeenSet() const { return m_entryNameHasBeenSet; }

    /**
     * <p>The name of the data set content delivery rules entry.</p>
     */
    inline void SetEntryName(const Aws::String& value) { m_entryNameHasBeenSet = true; m_entryName = value; }

    /**
     * <p>The name of the data set content delivery rules entry.</p>
     */
    inline void SetEntryName(Aws::String&& value) { m_entryNameHasBeenSet = true; m_entryName = std::move(value); }

    /**
     * <p>The name of the data set content delivery rules entry.</p>
     */
    inline void SetEntryName(const char* value) { m_entryNameHasBeenSet = true; m_entryName.assign(value); }

    /**
     * <p>The name of the data set content delivery rules entry.</p>
     */
    inline DatasetContentDeliveryRule& WithEntryName(const Aws::String& value) { SetEntryName(value); return *this;}

    /**
     * <p>The name of the data set content delivery rules entry.</p>
     */
    inline DatasetContentDeliveryRule& WithEntryName(Aws::String&& value) { SetEntryName(std::move(value)); return *this;}

    /**
     * <p>The name of the data set content delivery rules entry.</p>
     */
    inline DatasetContentDeliveryRule& WithEntryName(const char* value) { SetEntryName(value); return *this;}


    /**
     * <p>The destination to which data set contents are delivered.</p>
     */
    inline const DatasetContentDeliveryDestination& GetDestination() const{ return m_destination; }

    /**
     * <p>The destination to which data set contents are delivered.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The destination to which data set contents are delivered.</p>
     */
    inline void SetDestination(const DatasetContentDeliveryDestination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The destination to which data set contents are delivered.</p>
     */
    inline void SetDestination(DatasetContentDeliveryDestination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The destination to which data set contents are delivered.</p>
     */
    inline DatasetContentDeliveryRule& WithDestination(const DatasetContentDeliveryDestination& value) { SetDestination(value); return *this;}

    /**
     * <p>The destination to which data set contents are delivered.</p>
     */
    inline DatasetContentDeliveryRule& WithDestination(DatasetContentDeliveryDestination&& value) { SetDestination(std::move(value)); return *this;}

  private:

    Aws::String m_entryName;
    bool m_entryNameHasBeenSet;

    DatasetContentDeliveryDestination m_destination;
    bool m_destinationHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
