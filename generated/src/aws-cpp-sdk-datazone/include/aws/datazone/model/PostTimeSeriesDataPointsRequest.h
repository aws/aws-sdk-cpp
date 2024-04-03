/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/TimeSeriesEntityType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/TimeSeriesDataPointFormInput.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class PostTimeSeriesDataPointsRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API PostTimeSeriesDataPointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PostTimeSeriesDataPoints"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline PostTimeSeriesDataPointsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline PostTimeSeriesDataPointsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline PostTimeSeriesDataPointsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain in which you want to post time series
     * data points.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The ID of the Amazon DataZone domain in which you want to post time series
     * data points.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The ID of the Amazon DataZone domain in which you want to post time series
     * data points.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which you want to post time series
     * data points.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which you want to post time series
     * data points.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which you want to post time series
     * data points.</p>
     */
    inline PostTimeSeriesDataPointsRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which you want to post time series
     * data points.</p>
     */
    inline PostTimeSeriesDataPointsRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which you want to post time series
     * data points.</p>
     */
    inline PostTimeSeriesDataPointsRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The ID of the asset for which you want to post time series data points.</p>
     */
    inline const Aws::String& GetEntityIdentifier() const{ return m_entityIdentifier; }

    /**
     * <p>The ID of the asset for which you want to post time series data points.</p>
     */
    inline bool EntityIdentifierHasBeenSet() const { return m_entityIdentifierHasBeenSet; }

    /**
     * <p>The ID of the asset for which you want to post time series data points.</p>
     */
    inline void SetEntityIdentifier(const Aws::String& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = value; }

    /**
     * <p>The ID of the asset for which you want to post time series data points.</p>
     */
    inline void SetEntityIdentifier(Aws::String&& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = std::move(value); }

    /**
     * <p>The ID of the asset for which you want to post time series data points.</p>
     */
    inline void SetEntityIdentifier(const char* value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier.assign(value); }

    /**
     * <p>The ID of the asset for which you want to post time series data points.</p>
     */
    inline PostTimeSeriesDataPointsRequest& WithEntityIdentifier(const Aws::String& value) { SetEntityIdentifier(value); return *this;}

    /**
     * <p>The ID of the asset for which you want to post time series data points.</p>
     */
    inline PostTimeSeriesDataPointsRequest& WithEntityIdentifier(Aws::String&& value) { SetEntityIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset for which you want to post time series data points.</p>
     */
    inline PostTimeSeriesDataPointsRequest& WithEntityIdentifier(const char* value) { SetEntityIdentifier(value); return *this;}


    /**
     * <p>The type of the asset for which you want to post data points.</p>
     */
    inline const TimeSeriesEntityType& GetEntityType() const{ return m_entityType; }

    /**
     * <p>The type of the asset for which you want to post data points.</p>
     */
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }

    /**
     * <p>The type of the asset for which you want to post data points.</p>
     */
    inline void SetEntityType(const TimeSeriesEntityType& value) { m_entityTypeHasBeenSet = true; m_entityType = value; }

    /**
     * <p>The type of the asset for which you want to post data points.</p>
     */
    inline void SetEntityType(TimeSeriesEntityType&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::move(value); }

    /**
     * <p>The type of the asset for which you want to post data points.</p>
     */
    inline PostTimeSeriesDataPointsRequest& WithEntityType(const TimeSeriesEntityType& value) { SetEntityType(value); return *this;}

    /**
     * <p>The type of the asset for which you want to post data points.</p>
     */
    inline PostTimeSeriesDataPointsRequest& WithEntityType(TimeSeriesEntityType&& value) { SetEntityType(std::move(value)); return *this;}


    /**
     * <p>The forms that contain the data points that you want to post.</p>
     */
    inline const Aws::Vector<TimeSeriesDataPointFormInput>& GetForms() const{ return m_forms; }

    /**
     * <p>The forms that contain the data points that you want to post.</p>
     */
    inline bool FormsHasBeenSet() const { return m_formsHasBeenSet; }

    /**
     * <p>The forms that contain the data points that you want to post.</p>
     */
    inline void SetForms(const Aws::Vector<TimeSeriesDataPointFormInput>& value) { m_formsHasBeenSet = true; m_forms = value; }

    /**
     * <p>The forms that contain the data points that you want to post.</p>
     */
    inline void SetForms(Aws::Vector<TimeSeriesDataPointFormInput>&& value) { m_formsHasBeenSet = true; m_forms = std::move(value); }

    /**
     * <p>The forms that contain the data points that you want to post.</p>
     */
    inline PostTimeSeriesDataPointsRequest& WithForms(const Aws::Vector<TimeSeriesDataPointFormInput>& value) { SetForms(value); return *this;}

    /**
     * <p>The forms that contain the data points that you want to post.</p>
     */
    inline PostTimeSeriesDataPointsRequest& WithForms(Aws::Vector<TimeSeriesDataPointFormInput>&& value) { SetForms(std::move(value)); return *this;}

    /**
     * <p>The forms that contain the data points that you want to post.</p>
     */
    inline PostTimeSeriesDataPointsRequest& AddForms(const TimeSeriesDataPointFormInput& value) { m_formsHasBeenSet = true; m_forms.push_back(value); return *this; }

    /**
     * <p>The forms that contain the data points that you want to post.</p>
     */
    inline PostTimeSeriesDataPointsRequest& AddForms(TimeSeriesDataPointFormInput&& value) { m_formsHasBeenSet = true; m_forms.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_entityIdentifier;
    bool m_entityIdentifierHasBeenSet = false;

    TimeSeriesEntityType m_entityType;
    bool m_entityTypeHasBeenSet = false;

    Aws::Vector<TimeSeriesDataPointFormInput> m_forms;
    bool m_formsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
