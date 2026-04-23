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
#include <aws/core/utils/DateTime.h>
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
   * <p>The estimated size of the resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/EstimatedResourceSize">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API EstimatedResourceSize
  {
  public:
    EstimatedResourceSize();
    EstimatedResourceSize(Aws::Utils::Json::JsonView jsonValue);
    EstimatedResourceSize& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The estimated size of the resource in bytes.</p>
     */
    inline double GetEstimatedSizeInBytes() const{ return m_estimatedSizeInBytes; }

    /**
     * <p>The estimated size of the resource in bytes.</p>
     */
    inline bool EstimatedSizeInBytesHasBeenSet() const { return m_estimatedSizeInBytesHasBeenSet; }

    /**
     * <p>The estimated size of the resource in bytes.</p>
     */
    inline void SetEstimatedSizeInBytes(double value) { m_estimatedSizeInBytesHasBeenSet = true; m_estimatedSizeInBytes = value; }

    /**
     * <p>The estimated size of the resource in bytes.</p>
     */
    inline EstimatedResourceSize& WithEstimatedSizeInBytes(double value) { SetEstimatedSizeInBytes(value); return *this;}


    /**
     * <p>The time when the estimate of the size of the resource was made.</p>
     */
    inline const Aws::Utils::DateTime& GetEstimatedOn() const{ return m_estimatedOn; }

    /**
     * <p>The time when the estimate of the size of the resource was made.</p>
     */
    inline bool EstimatedOnHasBeenSet() const { return m_estimatedOnHasBeenSet; }

    /**
     * <p>The time when the estimate of the size of the resource was made.</p>
     */
    inline void SetEstimatedOn(const Aws::Utils::DateTime& value) { m_estimatedOnHasBeenSet = true; m_estimatedOn = value; }

    /**
     * <p>The time when the estimate of the size of the resource was made.</p>
     */
    inline void SetEstimatedOn(Aws::Utils::DateTime&& value) { m_estimatedOnHasBeenSet = true; m_estimatedOn = std::move(value); }

    /**
     * <p>The time when the estimate of the size of the resource was made.</p>
     */
    inline EstimatedResourceSize& WithEstimatedOn(const Aws::Utils::DateTime& value) { SetEstimatedOn(value); return *this;}

    /**
     * <p>The time when the estimate of the size of the resource was made.</p>
     */
    inline EstimatedResourceSize& WithEstimatedOn(Aws::Utils::DateTime&& value) { SetEstimatedOn(std::move(value)); return *this;}

  private:

    double m_estimatedSizeInBytes;
    bool m_estimatedSizeInBytesHasBeenSet;

    Aws::Utils::DateTime m_estimatedOn;
    bool m_estimatedOnHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
