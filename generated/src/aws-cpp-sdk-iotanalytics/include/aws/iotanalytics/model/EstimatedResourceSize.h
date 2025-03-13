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
    AWS_IOTANALYTICS_API EstimatedResourceSize() = default;
    AWS_IOTANALYTICS_API EstimatedResourceSize(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API EstimatedResourceSize& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The estimated size of the resource, in bytes.</p>
     */
    inline double GetEstimatedSizeInBytes() const { return m_estimatedSizeInBytes; }
    inline bool EstimatedSizeInBytesHasBeenSet() const { return m_estimatedSizeInBytesHasBeenSet; }
    inline void SetEstimatedSizeInBytes(double value) { m_estimatedSizeInBytesHasBeenSet = true; m_estimatedSizeInBytes = value; }
    inline EstimatedResourceSize& WithEstimatedSizeInBytes(double value) { SetEstimatedSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the estimate of the size of the resource was made.</p>
     */
    inline const Aws::Utils::DateTime& GetEstimatedOn() const { return m_estimatedOn; }
    inline bool EstimatedOnHasBeenSet() const { return m_estimatedOnHasBeenSet; }
    template<typename EstimatedOnT = Aws::Utils::DateTime>
    void SetEstimatedOn(EstimatedOnT&& value) { m_estimatedOnHasBeenSet = true; m_estimatedOn = std::forward<EstimatedOnT>(value); }
    template<typename EstimatedOnT = Aws::Utils::DateTime>
    EstimatedResourceSize& WithEstimatedOn(EstimatedOnT&& value) { SetEstimatedOn(std::forward<EstimatedOnT>(value)); return *this;}
    ///@}
  private:

    double m_estimatedSizeInBytes{0.0};
    bool m_estimatedSizeInBytesHasBeenSet = false;

    Aws::Utils::DateTime m_estimatedOn{};
    bool m_estimatedOnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
