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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/ChannelType.h>
#include <aws/pinpoint/model/EndpointDemographic.h>
#include <aws/pinpoint/model/EndpointLocation.h>
#include <aws/pinpoint/model/EndpointUser.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * Endpoint response<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EndpointResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API EndpointResponse
  {
  public:
    EndpointResponse();
    EndpointResponse(Aws::Utils::Json::JsonView jsonValue);
    EndpointResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The address of the endpoint as provided by your push provider. For example, the
     * DeviceToken or RegistrationId.
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * The address of the endpoint as provided by your push provider. For example, the
     * DeviceToken or RegistrationId.
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * The address of the endpoint as provided by your push provider. For example, the
     * DeviceToken or RegistrationId.
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * The address of the endpoint as provided by your push provider. For example, the
     * DeviceToken or RegistrationId.
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * The address of the endpoint as provided by your push provider. For example, the
     * DeviceToken or RegistrationId.
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * The address of the endpoint as provided by your push provider. For example, the
     * DeviceToken or RegistrationId.
     */
    inline EndpointResponse& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * The address of the endpoint as provided by your push provider. For example, the
     * DeviceToken or RegistrationId.
     */
    inline EndpointResponse& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * The address of the endpoint as provided by your push provider. For example, the
     * DeviceToken or RegistrationId.
     */
    inline EndpointResponse& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * The ID of the application that is associated with the endpoint.
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * The ID of the application that is associated with the endpoint.
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * The ID of the application that is associated with the endpoint.
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * The ID of the application that is associated with the endpoint.
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * The ID of the application that is associated with the endpoint.
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * The ID of the application that is associated with the endpoint.
     */
    inline EndpointResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The ID of the application that is associated with the endpoint.
     */
    inline EndpointResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The ID of the application that is associated with the endpoint.
     */
    inline EndpointResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * Custom attributes that describe the endpoint by associating a name with an array
     * of values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAttributes() const{ return m_attributes; }

    /**
     * Custom attributes that describe the endpoint by associating a name with an array
     * of values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * Custom attributes that describe the endpoint by associating a name with an array
     * of values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * Custom attributes that describe the endpoint by associating a name with an array
     * of values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * Custom attributes that describe the endpoint by associating a name with an array
     * of values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline EndpointResponse& WithAttributes(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetAttributes(value); return *this;}

    /**
     * Custom attributes that describe the endpoint by associating a name with an array
     * of values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline EndpointResponse& WithAttributes(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * Custom attributes that describe the endpoint by associating a name with an array
     * of values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline EndpointResponse& AddAttributes(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * Custom attributes that describe the endpoint by associating a name with an array
     * of values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline EndpointResponse& AddAttributes(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * Custom attributes that describe the endpoint by associating a name with an array
     * of values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline EndpointResponse& AddAttributes(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * Custom attributes that describe the endpoint by associating a name with an array
     * of values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline EndpointResponse& AddAttributes(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Custom attributes that describe the endpoint by associating a name with an array
     * of values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline EndpointResponse& AddAttributes(const char* key, Aws::Vector<Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * Custom attributes that describe the endpoint by associating a name with an array
     * of values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline EndpointResponse& AddAttributes(const char* key, const Aws::Vector<Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * The channel type.

Valid values: GCM | APNS | APNS_SANDBOX | APNS_VOIP |
     * APNS_VOIP_SANDBOX | ADM | SMS | EMAIL | BAIDU
     */
    inline const ChannelType& GetChannelType() const{ return m_channelType; }

    /**
     * The channel type.

Valid values: GCM | APNS | APNS_SANDBOX | APNS_VOIP |
     * APNS_VOIP_SANDBOX | ADM | SMS | EMAIL | BAIDU
     */
    inline bool ChannelTypeHasBeenSet() const { return m_channelTypeHasBeenSet; }

    /**
     * The channel type.

Valid values: GCM | APNS | APNS_SANDBOX | APNS_VOIP |
     * APNS_VOIP_SANDBOX | ADM | SMS | EMAIL | BAIDU
     */
    inline void SetChannelType(const ChannelType& value) { m_channelTypeHasBeenSet = true; m_channelType = value; }

    /**
     * The channel type.

Valid values: GCM | APNS | APNS_SANDBOX | APNS_VOIP |
     * APNS_VOIP_SANDBOX | ADM | SMS | EMAIL | BAIDU
     */
    inline void SetChannelType(ChannelType&& value) { m_channelTypeHasBeenSet = true; m_channelType = std::move(value); }

    /**
     * The channel type.

Valid values: GCM | APNS | APNS_SANDBOX | APNS_VOIP |
     * APNS_VOIP_SANDBOX | ADM | SMS | EMAIL | BAIDU
     */
    inline EndpointResponse& WithChannelType(const ChannelType& value) { SetChannelType(value); return *this;}

    /**
     * The channel type.

Valid values: GCM | APNS | APNS_SANDBOX | APNS_VOIP |
     * APNS_VOIP_SANDBOX | ADM | SMS | EMAIL | BAIDU
     */
    inline EndpointResponse& WithChannelType(ChannelType&& value) { SetChannelType(std::move(value)); return *this;}


    /**
     * A number from 0-99 that represents the cohort the endpoint is assigned to.
     * Endpoints are grouped into cohorts randomly, and each cohort contains
     * approximately 1 percent of the endpoints for an app. Amazon Pinpoint assigns
     * cohorts to the holdout or treatment allocations for a campaign.
     */
    inline const Aws::String& GetCohortId() const{ return m_cohortId; }

    /**
     * A number from 0-99 that represents the cohort the endpoint is assigned to.
     * Endpoints are grouped into cohorts randomly, and each cohort contains
     * approximately 1 percent of the endpoints for an app. Amazon Pinpoint assigns
     * cohorts to the holdout or treatment allocations for a campaign.
     */
    inline bool CohortIdHasBeenSet() const { return m_cohortIdHasBeenSet; }

    /**
     * A number from 0-99 that represents the cohort the endpoint is assigned to.
     * Endpoints are grouped into cohorts randomly, and each cohort contains
     * approximately 1 percent of the endpoints for an app. Amazon Pinpoint assigns
     * cohorts to the holdout or treatment allocations for a campaign.
     */
    inline void SetCohortId(const Aws::String& value) { m_cohortIdHasBeenSet = true; m_cohortId = value; }

    /**
     * A number from 0-99 that represents the cohort the endpoint is assigned to.
     * Endpoints are grouped into cohorts randomly, and each cohort contains
     * approximately 1 percent of the endpoints for an app. Amazon Pinpoint assigns
     * cohorts to the holdout or treatment allocations for a campaign.
     */
    inline void SetCohortId(Aws::String&& value) { m_cohortIdHasBeenSet = true; m_cohortId = std::move(value); }

    /**
     * A number from 0-99 that represents the cohort the endpoint is assigned to.
     * Endpoints are grouped into cohorts randomly, and each cohort contains
     * approximately 1 percent of the endpoints for an app. Amazon Pinpoint assigns
     * cohorts to the holdout or treatment allocations for a campaign.
     */
    inline void SetCohortId(const char* value) { m_cohortIdHasBeenSet = true; m_cohortId.assign(value); }

    /**
     * A number from 0-99 that represents the cohort the endpoint is assigned to.
     * Endpoints are grouped into cohorts randomly, and each cohort contains
     * approximately 1 percent of the endpoints for an app. Amazon Pinpoint assigns
     * cohorts to the holdout or treatment allocations for a campaign.
     */
    inline EndpointResponse& WithCohortId(const Aws::String& value) { SetCohortId(value); return *this;}

    /**
     * A number from 0-99 that represents the cohort the endpoint is assigned to.
     * Endpoints are grouped into cohorts randomly, and each cohort contains
     * approximately 1 percent of the endpoints for an app. Amazon Pinpoint assigns
     * cohorts to the holdout or treatment allocations for a campaign.
     */
    inline EndpointResponse& WithCohortId(Aws::String&& value) { SetCohortId(std::move(value)); return *this;}

    /**
     * A number from 0-99 that represents the cohort the endpoint is assigned to.
     * Endpoints are grouped into cohorts randomly, and each cohort contains
     * approximately 1 percent of the endpoints for an app. Amazon Pinpoint assigns
     * cohorts to the holdout or treatment allocations for a campaign.
     */
    inline EndpointResponse& WithCohortId(const char* value) { SetCohortId(value); return *this;}


    /**
     * The date and time when the endpoint was created, shown in ISO 8601 format.
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * The date and time when the endpoint was created, shown in ISO 8601 format.
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * The date and time when the endpoint was created, shown in ISO 8601 format.
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * The date and time when the endpoint was created, shown in ISO 8601 format.
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * The date and time when the endpoint was created, shown in ISO 8601 format.
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * The date and time when the endpoint was created, shown in ISO 8601 format.
     */
    inline EndpointResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * The date and time when the endpoint was created, shown in ISO 8601 format.
     */
    inline EndpointResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * The date and time when the endpoint was created, shown in ISO 8601 format.
     */
    inline EndpointResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


    /**
     * The endpoint demographic attributes.
     */
    inline const EndpointDemographic& GetDemographic() const{ return m_demographic; }

    /**
     * The endpoint demographic attributes.
     */
    inline bool DemographicHasBeenSet() const { return m_demographicHasBeenSet; }

    /**
     * The endpoint demographic attributes.
     */
    inline void SetDemographic(const EndpointDemographic& value) { m_demographicHasBeenSet = true; m_demographic = value; }

    /**
     * The endpoint demographic attributes.
     */
    inline void SetDemographic(EndpointDemographic&& value) { m_demographicHasBeenSet = true; m_demographic = std::move(value); }

    /**
     * The endpoint demographic attributes.
     */
    inline EndpointResponse& WithDemographic(const EndpointDemographic& value) { SetDemographic(value); return *this;}

    /**
     * The endpoint demographic attributes.
     */
    inline EndpointResponse& WithDemographic(EndpointDemographic&& value) { SetDemographic(std::move(value)); return *this;}


    /**
     * The date and time when the endpoint was last updated, shown in ISO 8601 format.
     */
    inline const Aws::String& GetEffectiveDate() const{ return m_effectiveDate; }

    /**
     * The date and time when the endpoint was last updated, shown in ISO 8601 format.
     */
    inline bool EffectiveDateHasBeenSet() const { return m_effectiveDateHasBeenSet; }

    /**
     * The date and time when the endpoint was last updated, shown in ISO 8601 format.
     */
    inline void SetEffectiveDate(const Aws::String& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = value; }

    /**
     * The date and time when the endpoint was last updated, shown in ISO 8601 format.
     */
    inline void SetEffectiveDate(Aws::String&& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = std::move(value); }

    /**
     * The date and time when the endpoint was last updated, shown in ISO 8601 format.
     */
    inline void SetEffectiveDate(const char* value) { m_effectiveDateHasBeenSet = true; m_effectiveDate.assign(value); }

    /**
     * The date and time when the endpoint was last updated, shown in ISO 8601 format.
     */
    inline EndpointResponse& WithEffectiveDate(const Aws::String& value) { SetEffectiveDate(value); return *this;}

    /**
     * The date and time when the endpoint was last updated, shown in ISO 8601 format.
     */
    inline EndpointResponse& WithEffectiveDate(Aws::String&& value) { SetEffectiveDate(std::move(value)); return *this;}

    /**
     * The date and time when the endpoint was last updated, shown in ISO 8601 format.
     */
    inline EndpointResponse& WithEffectiveDate(const char* value) { SetEffectiveDate(value); return *this;}


    /**
     * Unused.
     */
    inline const Aws::String& GetEndpointStatus() const{ return m_endpointStatus; }

    /**
     * Unused.
     */
    inline bool EndpointStatusHasBeenSet() const { return m_endpointStatusHasBeenSet; }

    /**
     * Unused.
     */
    inline void SetEndpointStatus(const Aws::String& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = value; }

    /**
     * Unused.
     */
    inline void SetEndpointStatus(Aws::String&& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = std::move(value); }

    /**
     * Unused.
     */
    inline void SetEndpointStatus(const char* value) { m_endpointStatusHasBeenSet = true; m_endpointStatus.assign(value); }

    /**
     * Unused.
     */
    inline EndpointResponse& WithEndpointStatus(const Aws::String& value) { SetEndpointStatus(value); return *this;}

    /**
     * Unused.
     */
    inline EndpointResponse& WithEndpointStatus(Aws::String&& value) { SetEndpointStatus(std::move(value)); return *this;}

    /**
     * Unused.
     */
    inline EndpointResponse& WithEndpointStatus(const char* value) { SetEndpointStatus(value); return *this;}


    /**
     * The unique ID that you assigned to the endpoint. The ID should be a globally
     * unique identifier (GUID) to ensure that it doesn't conflict with other endpoint
     * IDs associated with the application.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The unique ID that you assigned to the endpoint. The ID should be a globally
     * unique identifier (GUID) to ensure that it doesn't conflict with other endpoint
     * IDs associated with the application.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The unique ID that you assigned to the endpoint. The ID should be a globally
     * unique identifier (GUID) to ensure that it doesn't conflict with other endpoint
     * IDs associated with the application.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The unique ID that you assigned to the endpoint. The ID should be a globally
     * unique identifier (GUID) to ensure that it doesn't conflict with other endpoint
     * IDs associated with the application.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The unique ID that you assigned to the endpoint. The ID should be a globally
     * unique identifier (GUID) to ensure that it doesn't conflict with other endpoint
     * IDs associated with the application.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The unique ID that you assigned to the endpoint. The ID should be a globally
     * unique identifier (GUID) to ensure that it doesn't conflict with other endpoint
     * IDs associated with the application.
     */
    inline EndpointResponse& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The unique ID that you assigned to the endpoint. The ID should be a globally
     * unique identifier (GUID) to ensure that it doesn't conflict with other endpoint
     * IDs associated with the application.
     */
    inline EndpointResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The unique ID that you assigned to the endpoint. The ID should be a globally
     * unique identifier (GUID) to ensure that it doesn't conflict with other endpoint
     * IDs associated with the application.
     */
    inline EndpointResponse& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The endpoint location attributes.
     */
    inline const EndpointLocation& GetLocation() const{ return m_location; }

    /**
     * The endpoint location attributes.
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * The endpoint location attributes.
     */
    inline void SetLocation(const EndpointLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * The endpoint location attributes.
     */
    inline void SetLocation(EndpointLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * The endpoint location attributes.
     */
    inline EndpointResponse& WithLocation(const EndpointLocation& value) { SetLocation(value); return *this;}

    /**
     * The endpoint location attributes.
     */
    inline EndpointResponse& WithLocation(EndpointLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * Custom metrics that your app reports to Amazon Pinpoint.
     */
    inline const Aws::Map<Aws::String, double>& GetMetrics() const{ return m_metrics; }

    /**
     * Custom metrics that your app reports to Amazon Pinpoint.
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * Custom metrics that your app reports to Amazon Pinpoint.
     */
    inline void SetMetrics(const Aws::Map<Aws::String, double>& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * Custom metrics that your app reports to Amazon Pinpoint.
     */
    inline void SetMetrics(Aws::Map<Aws::String, double>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * Custom metrics that your app reports to Amazon Pinpoint.
     */
    inline EndpointResponse& WithMetrics(const Aws::Map<Aws::String, double>& value) { SetMetrics(value); return *this;}

    /**
     * Custom metrics that your app reports to Amazon Pinpoint.
     */
    inline EndpointResponse& WithMetrics(Aws::Map<Aws::String, double>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * Custom metrics that your app reports to Amazon Pinpoint.
     */
    inline EndpointResponse& AddMetrics(const Aws::String& key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }

    /**
     * Custom metrics that your app reports to Amazon Pinpoint.
     */
    inline EndpointResponse& AddMetrics(Aws::String&& key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), value); return *this; }

    /**
     * Custom metrics that your app reports to Amazon Pinpoint.
     */
    inline EndpointResponse& AddMetrics(const char* key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }


    /**
     * Indicates whether a user has opted out of receiving messages with one of the
     * following values:

ALL - User has opted out of all messages.

NONE - Users has
     * not opted out and receives all messages.
     */
    inline const Aws::String& GetOptOut() const{ return m_optOut; }

    /**
     * Indicates whether a user has opted out of receiving messages with one of the
     * following values:

ALL - User has opted out of all messages.

NONE - Users has
     * not opted out and receives all messages.
     */
    inline bool OptOutHasBeenSet() const { return m_optOutHasBeenSet; }

    /**
     * Indicates whether a user has opted out of receiving messages with one of the
     * following values:

ALL - User has opted out of all messages.

NONE - Users has
     * not opted out and receives all messages.
     */
    inline void SetOptOut(const Aws::String& value) { m_optOutHasBeenSet = true; m_optOut = value; }

    /**
     * Indicates whether a user has opted out of receiving messages with one of the
     * following values:

ALL - User has opted out of all messages.

NONE - Users has
     * not opted out and receives all messages.
     */
    inline void SetOptOut(Aws::String&& value) { m_optOutHasBeenSet = true; m_optOut = std::move(value); }

    /**
     * Indicates whether a user has opted out of receiving messages with one of the
     * following values:

ALL - User has opted out of all messages.

NONE - Users has
     * not opted out and receives all messages.
     */
    inline void SetOptOut(const char* value) { m_optOutHasBeenSet = true; m_optOut.assign(value); }

    /**
     * Indicates whether a user has opted out of receiving messages with one of the
     * following values:

ALL - User has opted out of all messages.

NONE - Users has
     * not opted out and receives all messages.
     */
    inline EndpointResponse& WithOptOut(const Aws::String& value) { SetOptOut(value); return *this;}

    /**
     * Indicates whether a user has opted out of receiving messages with one of the
     * following values:

ALL - User has opted out of all messages.

NONE - Users has
     * not opted out and receives all messages.
     */
    inline EndpointResponse& WithOptOut(Aws::String&& value) { SetOptOut(std::move(value)); return *this;}

    /**
     * Indicates whether a user has opted out of receiving messages with one of the
     * following values:

ALL - User has opted out of all messages.

NONE - Users has
     * not opted out and receives all messages.
     */
    inline EndpointResponse& WithOptOut(const char* value) { SetOptOut(value); return *this;}


    /**
     * The unique ID for the most recent request to update the endpoint.
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * The unique ID for the most recent request to update the endpoint.
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * The unique ID for the most recent request to update the endpoint.
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * The unique ID for the most recent request to update the endpoint.
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * The unique ID for the most recent request to update the endpoint.
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * The unique ID for the most recent request to update the endpoint.
     */
    inline EndpointResponse& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * The unique ID for the most recent request to update the endpoint.
     */
    inline EndpointResponse& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * The unique ID for the most recent request to update the endpoint.
     */
    inline EndpointResponse& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * Custom user-specific attributes that your app reports to Amazon Pinpoint.
     */
    inline const EndpointUser& GetUser() const{ return m_user; }

    /**
     * Custom user-specific attributes that your app reports to Amazon Pinpoint.
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * Custom user-specific attributes that your app reports to Amazon Pinpoint.
     */
    inline void SetUser(const EndpointUser& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * Custom user-specific attributes that your app reports to Amazon Pinpoint.
     */
    inline void SetUser(EndpointUser&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * Custom user-specific attributes that your app reports to Amazon Pinpoint.
     */
    inline EndpointResponse& WithUser(const EndpointUser& value) { SetUser(value); return *this;}

    /**
     * Custom user-specific attributes that your app reports to Amazon Pinpoint.
     */
    inline EndpointResponse& WithUser(EndpointUser&& value) { SetUser(std::move(value)); return *this;}

  private:

    Aws::String m_address;
    bool m_addressHasBeenSet;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_attributes;
    bool m_attributesHasBeenSet;

    ChannelType m_channelType;
    bool m_channelTypeHasBeenSet;

    Aws::String m_cohortId;
    bool m_cohortIdHasBeenSet;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet;

    EndpointDemographic m_demographic;
    bool m_demographicHasBeenSet;

    Aws::String m_effectiveDate;
    bool m_effectiveDateHasBeenSet;

    Aws::String m_endpointStatus;
    bool m_endpointStatusHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    EndpointLocation m_location;
    bool m_locationHasBeenSet;

    Aws::Map<Aws::String, double> m_metrics;
    bool m_metricsHasBeenSet;

    Aws::String m_optOut;
    bool m_optOutHasBeenSet;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet;

    EndpointUser m_user;
    bool m_userHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
