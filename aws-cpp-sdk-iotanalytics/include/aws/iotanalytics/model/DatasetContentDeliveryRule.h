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

  class AWS_IOTANALYTICS_API DatasetContentDeliveryRule
  {
  public:
    DatasetContentDeliveryRule();
    DatasetContentDeliveryRule(Aws::Utils::Json::JsonView jsonValue);
    DatasetContentDeliveryRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetEntryName() const{ return m_entryName; }

    
    inline void SetEntryName(const Aws::String& value) { m_entryNameHasBeenSet = true; m_entryName = value; }

    
    inline void SetEntryName(Aws::String&& value) { m_entryNameHasBeenSet = true; m_entryName = std::move(value); }

    
    inline void SetEntryName(const char* value) { m_entryNameHasBeenSet = true; m_entryName.assign(value); }

    
    inline DatasetContentDeliveryRule& WithEntryName(const Aws::String& value) { SetEntryName(value); return *this;}

    
    inline DatasetContentDeliveryRule& WithEntryName(Aws::String&& value) { SetEntryName(std::move(value)); return *this;}

    
    inline DatasetContentDeliveryRule& WithEntryName(const char* value) { SetEntryName(value); return *this;}


    
    inline const DatasetContentDeliveryDestination& GetDestination() const{ return m_destination; }

    
    inline void SetDestination(const DatasetContentDeliveryDestination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    
    inline void SetDestination(DatasetContentDeliveryDestination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    
    inline DatasetContentDeliveryRule& WithDestination(const DatasetContentDeliveryDestination& value) { SetDestination(value); return *this;}

    
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
