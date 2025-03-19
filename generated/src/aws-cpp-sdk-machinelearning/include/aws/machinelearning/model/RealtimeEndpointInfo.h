/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/machinelearning/model/RealtimeEndpointStatus.h>
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
namespace MachineLearning
{
namespace Model
{

  /**
   * <p> Describes the real-time endpoint information for an
   * <code>MLModel</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/RealtimeEndpointInfo">AWS
   * API Reference</a></p>
   */
  class RealtimeEndpointInfo
  {
  public:
    AWS_MACHINELEARNING_API RealtimeEndpointInfo() = default;
    AWS_MACHINELEARNING_API RealtimeEndpointInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API RealtimeEndpointInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The maximum processing rate for the real-time endpoint for
     * <code>MLModel</code>, measured in incoming requests per second.</p>
     */
    inline int GetPeakRequestsPerSecond() const { return m_peakRequestsPerSecond; }
    inline bool PeakRequestsPerSecondHasBeenSet() const { return m_peakRequestsPerSecondHasBeenSet; }
    inline void SetPeakRequestsPerSecond(int value) { m_peakRequestsPerSecondHasBeenSet = true; m_peakRequestsPerSecond = value; }
    inline RealtimeEndpointInfo& WithPeakRequestsPerSecond(int value) { SetPeakRequestsPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the request to create the real-time endpoint for the
     * <code>MLModel</code> was received. The time is expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    RealtimeEndpointInfo& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI that specifies where to send real-time prediction requests for the
     * <code>MLModel</code>.</p> <p> <b>Note:</b> The application must wait until the
     * real-time endpoint is ready before using this URI.</p>
     */
    inline const Aws::String& GetEndpointUrl() const { return m_endpointUrl; }
    inline bool EndpointUrlHasBeenSet() const { return m_endpointUrlHasBeenSet; }
    template<typename EndpointUrlT = Aws::String>
    void SetEndpointUrl(EndpointUrlT&& value) { m_endpointUrlHasBeenSet = true; m_endpointUrl = std::forward<EndpointUrlT>(value); }
    template<typename EndpointUrlT = Aws::String>
    RealtimeEndpointInfo& WithEndpointUrl(EndpointUrlT&& value) { SetEndpointUrl(std::forward<EndpointUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the real-time endpoint for the <code>MLModel</code>.
     * This element can have one of the following values: </p> <ul> <li> <p>
     * <code>NONE</code> - Endpoint does not exist or was previously deleted.</p> </li>
     * <li> <p> <code>READY</code> - Endpoint is ready to be used for real-time
     * predictions.</p> </li> <li> <p> <code>UPDATING</code> - Updating/creating the
     * endpoint. </p> </li> </ul>
     */
    inline RealtimeEndpointStatus GetEndpointStatus() const { return m_endpointStatus; }
    inline bool EndpointStatusHasBeenSet() const { return m_endpointStatusHasBeenSet; }
    inline void SetEndpointStatus(RealtimeEndpointStatus value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = value; }
    inline RealtimeEndpointInfo& WithEndpointStatus(RealtimeEndpointStatus value) { SetEndpointStatus(value); return *this;}
    ///@}
  private:

    int m_peakRequestsPerSecond{0};
    bool m_peakRequestsPerSecondHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_endpointUrl;
    bool m_endpointUrlHasBeenSet = false;

    RealtimeEndpointStatus m_endpointStatus{RealtimeEndpointStatus::NOT_SET};
    bool m_endpointStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
