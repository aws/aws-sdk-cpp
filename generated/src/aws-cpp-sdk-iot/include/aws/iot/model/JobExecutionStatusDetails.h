/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Details of the job execution status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/JobExecutionStatusDetails">AWS
   * API Reference</a></p>
   */
  class JobExecutionStatusDetails
  {
  public:
    AWS_IOT_API JobExecutionStatusDetails() = default;
    AWS_IOT_API JobExecutionStatusDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API JobExecutionStatusDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job execution status.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDetailsMap() const { return m_detailsMap; }
    inline bool DetailsMapHasBeenSet() const { return m_detailsMapHasBeenSet; }
    template<typename DetailsMapT = Aws::Map<Aws::String, Aws::String>>
    void SetDetailsMap(DetailsMapT&& value) { m_detailsMapHasBeenSet = true; m_detailsMap = std::forward<DetailsMapT>(value); }
    template<typename DetailsMapT = Aws::Map<Aws::String, Aws::String>>
    JobExecutionStatusDetails& WithDetailsMap(DetailsMapT&& value) { SetDetailsMap(std::forward<DetailsMapT>(value)); return *this;}
    template<typename DetailsMapKeyT = Aws::String, typename DetailsMapValueT = Aws::String>
    JobExecutionStatusDetails& AddDetailsMap(DetailsMapKeyT&& key, DetailsMapValueT&& value) {
      m_detailsMapHasBeenSet = true; m_detailsMap.emplace(std::forward<DetailsMapKeyT>(key), std::forward<DetailsMapValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_detailsMap;
    bool m_detailsMapHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
