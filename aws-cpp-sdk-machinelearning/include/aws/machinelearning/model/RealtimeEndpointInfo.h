/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/machinelearning/model/RealtimeEndpointStatus.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MachineLearning
{
namespace Model
{

  /**
   * <p> Describes the real-time endpoint information for an
   * <code>MLModel</code>.</p>
   */
  class AWS_MACHINELEARNING_API RealtimeEndpointInfo
  {
  public:
    RealtimeEndpointInfo();
    RealtimeEndpointInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    RealtimeEndpointInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p> The maximum processing rate for the real-time endpoint for
     * <code>MLModel</code>, measured in incoming requests per second.</p>
     */
    inline int GetPeakRequestsPerSecond() const{ return m_peakRequestsPerSecond; }

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
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time that the request to create the real-time endpoint for the
     * <code>MLModel</code> was received. The time is expressed in epoch time.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time that the request to create the real-time endpoint for the
     * <code>MLModel</code> was received. The time is expressed in epoch time.</p>
     */
    inline RealtimeEndpointInfo& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time that the request to create the real-time endpoint for the
     * <code>MLModel</code> was received. The time is expressed in epoch time.</p>
     */
    inline RealtimeEndpointInfo& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The URI that specifies where to send real-time prediction requests for the
     * <code>MLModel</code>.</p> <note><title>Note</title> <p>The application must wait
     * until the real-time endpoint is ready before using this URI.</p> </note>
     */
    inline const Aws::String& GetEndpointUrl() const{ return m_endpointUrl; }

    /**
     * <p>The URI that specifies where to send real-time prediction requests for the
     * <code>MLModel</code>.</p> <note><title>Note</title> <p>The application must wait
     * until the real-time endpoint is ready before using this URI.</p> </note>
     */
    inline void SetEndpointUrl(const Aws::String& value) { m_endpointUrlHasBeenSet = true; m_endpointUrl = value; }

    /**
     * <p>The URI that specifies where to send real-time prediction requests for the
     * <code>MLModel</code>.</p> <note><title>Note</title> <p>The application must wait
     * until the real-time endpoint is ready before using this URI.</p> </note>
     */
    inline void SetEndpointUrl(Aws::String&& value) { m_endpointUrlHasBeenSet = true; m_endpointUrl = value; }

    /**
     * <p>The URI that specifies where to send real-time prediction requests for the
     * <code>MLModel</code>.</p> <note><title>Note</title> <p>The application must wait
     * until the real-time endpoint is ready before using this URI.</p> </note>
     */
    inline void SetEndpointUrl(const char* value) { m_endpointUrlHasBeenSet = true; m_endpointUrl.assign(value); }

    /**
     * <p>The URI that specifies where to send real-time prediction requests for the
     * <code>MLModel</code>.</p> <note><title>Note</title> <p>The application must wait
     * until the real-time endpoint is ready before using this URI.</p> </note>
     */
    inline RealtimeEndpointInfo& WithEndpointUrl(const Aws::String& value) { SetEndpointUrl(value); return *this;}

    /**
     * <p>The URI that specifies where to send real-time prediction requests for the
     * <code>MLModel</code>.</p> <note><title>Note</title> <p>The application must wait
     * until the real-time endpoint is ready before using this URI.</p> </note>
     */
    inline RealtimeEndpointInfo& WithEndpointUrl(Aws::String&& value) { SetEndpointUrl(value); return *this;}

    /**
     * <p>The URI that specifies where to send real-time prediction requests for the
     * <code>MLModel</code>.</p> <note><title>Note</title> <p>The application must wait
     * until the real-time endpoint is ready before using this URI.</p> </note>
     */
    inline RealtimeEndpointInfo& WithEndpointUrl(const char* value) { SetEndpointUrl(value); return *this;}

    /**
     * <p> The current status of the real-time endpoint for the <code>MLModel</code>.
     * This element can have one of the following values: </p> <ul> <li>
     * <code>NONE</code> - Endpoint does not exist or was previously deleted.</li> <li>
     * <code>READY</code> - Endpoint is ready to be used for real-time
     * predictions.</li> <li> <code>UPDATING</code> - Updating/creating the endpoint.
     * </li> </ul>
     */
    inline const RealtimeEndpointStatus& GetEndpointStatus() const{ return m_endpointStatus; }

    /**
     * <p> The current status of the real-time endpoint for the <code>MLModel</code>.
     * This element can have one of the following values: </p> <ul> <li>
     * <code>NONE</code> - Endpoint does not exist or was previously deleted.</li> <li>
     * <code>READY</code> - Endpoint is ready to be used for real-time
     * predictions.</li> <li> <code>UPDATING</code> - Updating/creating the endpoint.
     * </li> </ul>
     */
    inline void SetEndpointStatus(const RealtimeEndpointStatus& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = value; }

    /**
     * <p> The current status of the real-time endpoint for the <code>MLModel</code>.
     * This element can have one of the following values: </p> <ul> <li>
     * <code>NONE</code> - Endpoint does not exist or was previously deleted.</li> <li>
     * <code>READY</code> - Endpoint is ready to be used for real-time
     * predictions.</li> <li> <code>UPDATING</code> - Updating/creating the endpoint.
     * </li> </ul>
     */
    inline void SetEndpointStatus(RealtimeEndpointStatus&& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = value; }

    /**
     * <p> The current status of the real-time endpoint for the <code>MLModel</code>.
     * This element can have one of the following values: </p> <ul> <li>
     * <code>NONE</code> - Endpoint does not exist or was previously deleted.</li> <li>
     * <code>READY</code> - Endpoint is ready to be used for real-time
     * predictions.</li> <li> <code>UPDATING</code> - Updating/creating the endpoint.
     * </li> </ul>
     */
    inline RealtimeEndpointInfo& WithEndpointStatus(const RealtimeEndpointStatus& value) { SetEndpointStatus(value); return *this;}

    /**
     * <p> The current status of the real-time endpoint for the <code>MLModel</code>.
     * This element can have one of the following values: </p> <ul> <li>
     * <code>NONE</code> - Endpoint does not exist or was previously deleted.</li> <li>
     * <code>READY</code> - Endpoint is ready to be used for real-time
     * predictions.</li> <li> <code>UPDATING</code> - Updating/creating the endpoint.
     * </li> </ul>
     */
    inline RealtimeEndpointInfo& WithEndpointStatus(RealtimeEndpointStatus&& value) { SetEndpointStatus(value); return *this;}

  private:
    int m_peakRequestsPerSecond;
    bool m_peakRequestsPerSecondHasBeenSet;
    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;
    Aws::String m_endpointUrl;
    bool m_endpointUrlHasBeenSet;
    RealtimeEndpointStatus m_endpointStatus;
    bool m_endpointStatusHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
