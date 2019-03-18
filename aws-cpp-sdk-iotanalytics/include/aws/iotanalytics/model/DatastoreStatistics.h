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
#include <aws/iotanalytics/model/EstimatedResourceSize.h>
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
   * <p>Statistical information about the data store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatastoreStatistics">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API DatastoreStatistics
  {
  public:
    DatastoreStatistics();
    DatastoreStatistics(Aws::Utils::Json::JsonView jsonValue);
    DatastoreStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The estimated size of the data store.</p>
     */
    inline const EstimatedResourceSize& GetSize() const{ return m_size; }

    /**
     * <p>The estimated size of the data store.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The estimated size of the data store.</p>
     */
    inline void SetSize(const EstimatedResourceSize& value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The estimated size of the data store.</p>
     */
    inline void SetSize(EstimatedResourceSize&& value) { m_sizeHasBeenSet = true; m_size = std::move(value); }

    /**
     * <p>The estimated size of the data store.</p>
     */
    inline DatastoreStatistics& WithSize(const EstimatedResourceSize& value) { SetSize(value); return *this;}

    /**
     * <p>The estimated size of the data store.</p>
     */
    inline DatastoreStatistics& WithSize(EstimatedResourceSize&& value) { SetSize(std::move(value)); return *this;}

  private:

    EstimatedResourceSize m_size;
    bool m_sizeHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
