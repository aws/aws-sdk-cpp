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
    AWS_MACHINELEARNING_API RealtimeEndpointInfo();
    AWS_MACHINELEARNING_API RealtimeEndpointInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API RealtimeEndpointInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The maximum processing rate for the real-time endpoint for
     * <code>MLModel</code>, measured in incoming requests per second.</p>
     */
    inline int GetPeakRequestsPerSecond() const{ return m_peakRequestsPerSecond; }

    /**
     * <p> The maximum processing rate for the real-time endpoint for
     * <code>MLModel</code>, measured in incoming requests per second.</p>
     */
    inline bool PeakRequestsPerSecondHasBeenSet() const { return m_peakRequestsPerSecondHasBeenSet; }

    /**
     * <p> The maximum processing rate for the real-time endpoint for
     * <code>MLModel</code>, measured in incoming requests per second.</p>
     */
    inline void SetPeakRequestsPerSecond(int value) { m_peakRequestsPerSecondHasBeenSet = true; m_peakRequestsPerSecond = value; }

    /**
     * <p> The maximum processing rate for the real-time endpoint for
     * <code>MLModel</code>, measured in incoming requests per second.</p>
     */
    inline RealtimeEndpointInfo& WithPeakRequestsPerSecond(int value) { SetPeakRequestsPerSecond(value); return *this;}


    /**
     * <p>The time that the request to create the real-time endpoint for the
     * <code>MLModel</code> was received. The time is expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time that the request to create the real-time endpoint for the
     * <code>MLModel</code> was received. The time is expressed in epoch time.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time that the request to create the real-time endpoint for the
     * <code>MLModel</code> was received. The time is expressed in epoch time.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time that the request to create the real-time endpoint for the
     * <code>MLModel</code> was received. The time is expressed in epoch time.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time that the request to create the real-time endpoint for the
     * <code>MLModel</code> was received. The time is expressed in epoch time.</p>
     */
    inline RealtimeEndpointInfo& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time that the request to create the real-time endpoint for the
     * <code>MLModel</code> was received. The time is expressed in epoch time.</p>
     */
    inline RealtimeEndpointInfo& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The URI that specifies where to send real-time prediction requests for the
     * <code>MLModel</code>.</p> <p> <b>Note:</b> The application must wait until the
     * real-time endpoint is ready before using this URI.</p>
     */
    inline const Aws::String& GetEndpointUrl() const{ return m_endpointUrl; }

    /**
     * <p>The URI that specifies where to send real-time prediction requests for the
     * <code>MLModel</code>.</p> <p> <b>Note:</b> The application must wait until the
     * real-time endpoint is ready before using this URI.</p>
     */
    inline bool EndpointUrlHasBeenSet() const { return m_endpointUrlHasBeenSet; }

    /**
     * <p>The URI that specifies where to send real-time prediction requests for the
     * <code>MLModel</code>.</p> <p> <b>Note:</b> The application must wait until the
     * real-time endpoint is ready before using this URI.</p>
     */
    inline void SetEndpointUrl(const Aws::String& value) { m_endpointUrlHasBeenSet = true; m_endpointUrl = value; }

    /**
     * <p>The URI that specifies where to send real-time prediction requests for the
     * <code>MLModel</code>.</p> <p> <b>Note:</b> The application must wait until the
     * real-time endpoint is ready before using this URI.</p>
     */
    inline void SetEndpointUrl(Aws::String&& value) { m_endpointUrlHasBeenSet = true; m_endpointUrl = std::move(value); }

    /**
     * <p>The URI that specifies where to send real-time prediction requests for the
     * <code>MLModel</code>.</p> <p> <b>Note:</b> The application must wait until the
     * real-time endpoint is ready before using this URI.</p>
     */
    inline void SetEndpointUrl(const char* value) { m_endpointUrlHasBeenSet = true; m_endpointUrl.assign(value); }

    /**
     * <p>The URI that specifies where to send real-time prediction requests for the
     * <code>MLModel</code>.</p> <p> <b>Note:</b> The application must wait until the
     * real-time endpoint is ready before using this URI.</p>
     */
    inline RealtimeEndpointInfo& WithEndpointUrl(const Aws::String& value) { SetEndpointUrl(value); return *this;}

    /**
     * <p>The URI that specifies where to send real-time prediction requests for the
     * <code>MLModel</code>.</p> <p> <b>Note:</b> The application must wait until the
     * real-time endpoint is ready before using this URI.</p>
     */
    inline RealtimeEndpointInfo& WithEndpointUrl(Aws::String&& value) { SetEndpointUrl(std::move(value)); return *this;}

    /**
     * <p>The URI that specifies where to send real-time prediction requests for the
     * <code>MLModel</code>.</p> <p> <b>Note:</b> The application must wait until the
     * real-time endpoint is ready before using this URI.</p>
     */
    inline RealtimeEndpointInfo& WithEndpointUrl(const char* value) { SetEndpointUrl(value); return *this;}


    /**
     * <p> The current status of the real-time endpoint for the <code>MLModel</code>.
     * This element can have one of the following values: </p> <ul> <li> <p>
     * <code>NONE</code> - Endpoint does not exist or was previously deleted.</p> </li>
     * <li> <p> <code>READY</code> - Endpoint is ready to be used for real-time
     * predictions.</p> </li> <li> <p> <code>UPDATING</code> - Updating/creating the
     * endpoint. </p> </li> </ul>
     */
    inline const RealtimeEndpointStatus& GetEndpointStatus() const{ return m_endpointStatus; }

    /**
     * <p> The current status of the real-time endpoint for the <code>MLModel</code>.
     * This element can have one of the following values: </p> <ul> <li> <p>
     * <code>NONE</code> - Endpoint does not exist or was previously deleted.</p> </li>
     * <li> <p> <code>READY</code> - Endpoint is ready to be used for real-time
     * predictions.</p> </li> <li> <p> <code>UPDATING</code> - Updating/creating the
     * endpoint. </p> </li> </ul>
     */
    inline bool EndpointStatusHasBeenSet() const { return m_endpointStatusHasBeenSet; }

    /**
     * <p> The current status of the real-time endpoint for the <code>MLModel</code>.
     * This element can have one of the following values: </p> <ul> <li> <p>
     * <code>NONE</code> - Endpoint does not exist or was previously deleted.</p> </li>
     * <li> <p> <code>READY</code> - Endpoint is ready to be used for real-time
     * predictions.</p> </li> <li> <p> <code>UPDATING</code> - Updating/creating the
     * endpoint. </p> </li> </ul>
     */
    inline void SetEndpointStatus(const RealtimeEndpointStatus& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = value; }

    /**
     * <p> The current status of the real-time endpoint for the <code>MLModel</code>.
     * This element can have one of the following values: </p> <ul> <li> <p>
     * <code>NONE</code> - Endpoint does not exist or was previously deleted.</p> </li>
     * <li> <p> <code>READY</code> - Endpoint is ready to be used for real-time
     * predictions.</p> </li> <li> <p> <code>UPDATING</code> - Updating/creating the
     * endpoint. </p> </li> </ul>
     */
    inline void SetEndpointStatus(RealtimeEndpointStatus&& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = std::move(value); }

    /**
     * <p> The current status of the real-time endpoint for the <code>MLModel</code>.
     * This element can have one of the following values: </p> <ul> <li> <p>
     * <code>NONE</code> - Endpoint does not exist or was previously deleted.</p> </li>
     * <li> <p> <code>READY</code> - Endpoint is ready to be used for real-time
     * predictions.</p> </li> <li> <p> <code>UPDATING</code> - Updating/creating the
     * endpoint. </p> </li> </ul>
     */
    inline RealtimeEndpointInfo& WithEndpointStatus(const RealtimeEndpointStatus& value) { SetEndpointStatus(value); return *this;}

    /**
     * <p> The current status of the real-time endpoint for the <code>MLModel</code>.
     * This element can have one of the following values: </p> <ul> <li> <p>
     * <code>NONE</code> - Endpoint does not exist or was previously deleted.</p> </li>
     * <li> <p> <code>READY</code> - Endpoint is ready to be used for real-time
     * predictions.</p> </li> <li> <p> <code>UPDATING</code> - Updating/creating the
     * endpoint. </p> </li> </ul>
     */
    inline RealtimeEndpointInfo& WithEndpointStatus(RealtimeEndpointStatus&& value) { SetEndpointStatus(std::move(value)); return *this;}

  private:

    int m_peakRequestsPerSecond;
    bool m_peakRequestsPerSecondHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_endpointUrl;
    bool m_endpointUrlHasBeenSet = false;

    RealtimeEndpointStatus m_endpointStatus;
    bool m_endpointStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
