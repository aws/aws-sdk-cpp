/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class EstimatedResourceSize
  {
  public:
    AWS_IOTANALYTICS_API EstimatedResourceSize();
    AWS_IOTANALYTICS_API EstimatedResourceSize(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API EstimatedResourceSize& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The estimated size of the resource, in bytes.</p>
     */
    inline double GetEstimatedSizeInBytes() const{ return m_estimatedSizeInBytes; }

    /**
     * <p>The estimated size of the resource, in bytes.</p>
     */
    inline bool EstimatedSizeInBytesHasBeenSet() const { return m_estimatedSizeInBytesHasBeenSet; }

    /**
     * <p>The estimated size of the resource, in bytes.</p>
     */
    inline void SetEstimatedSizeInBytes(double value) { m_estimatedSizeInBytesHasBeenSet = true; m_estimatedSizeInBytes = value; }

    /**
     * <p>The estimated size of the resource, in bytes.</p>
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
    bool m_estimatedSizeInBytesHasBeenSet = false;

    Aws::Utils::DateTime m_estimatedOn;
    bool m_estimatedOnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
