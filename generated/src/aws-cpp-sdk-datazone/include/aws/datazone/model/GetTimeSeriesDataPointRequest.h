/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/TimeSeriesEntityType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DataZone
{
namespace Model
{

  /**
   */
  class GetTimeSeriesDataPointRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API GetTimeSeriesDataPointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTimeSeriesDataPoint"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the Amazon DataZone domain that houses the asset for which you want
     * to get the data point.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The ID of the Amazon DataZone domain that houses the asset for which you want
     * to get the data point.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The ID of the Amazon DataZone domain that houses the asset for which you want
     * to get the data point.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The ID of the Amazon DataZone domain that houses the asset for which you want
     * to get the data point.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain that houses the asset for which you want
     * to get the data point.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain that houses the asset for which you want
     * to get the data point.</p>
     */
    inline GetTimeSeriesDataPointRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain that houses the asset for which you want
     * to get the data point.</p>
     */
    inline GetTimeSeriesDataPointRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain that houses the asset for which you want
     * to get the data point.</p>
     */
    inline GetTimeSeriesDataPointRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The ID of the asset for which you want to get the data point.</p>
     */
    inline const Aws::String& GetEntityIdentifier() const{ return m_entityIdentifier; }

    /**
     * <p>The ID of the asset for which you want to get the data point.</p>
     */
    inline bool EntityIdentifierHasBeenSet() const { return m_entityIdentifierHasBeenSet; }

    /**
     * <p>The ID of the asset for which you want to get the data point.</p>
     */
    inline void SetEntityIdentifier(const Aws::String& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = value; }

    /**
     * <p>The ID of the asset for which you want to get the data point.</p>
     */
    inline void SetEntityIdentifier(Aws::String&& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = std::move(value); }

    /**
     * <p>The ID of the asset for which you want to get the data point.</p>
     */
    inline void SetEntityIdentifier(const char* value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier.assign(value); }

    /**
     * <p>The ID of the asset for which you want to get the data point.</p>
     */
    inline GetTimeSeriesDataPointRequest& WithEntityIdentifier(const Aws::String& value) { SetEntityIdentifier(value); return *this;}

    /**
     * <p>The ID of the asset for which you want to get the data point.</p>
     */
    inline GetTimeSeriesDataPointRequest& WithEntityIdentifier(Aws::String&& value) { SetEntityIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset for which you want to get the data point.</p>
     */
    inline GetTimeSeriesDataPointRequest& WithEntityIdentifier(const char* value) { SetEntityIdentifier(value); return *this;}


    /**
     * <p>The type of the asset for which you want to get the data point.</p>
     */
    inline const TimeSeriesEntityType& GetEntityType() const{ return m_entityType; }

    /**
     * <p>The type of the asset for which you want to get the data point.</p>
     */
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }

    /**
     * <p>The type of the asset for which you want to get the data point.</p>
     */
    inline void SetEntityType(const TimeSeriesEntityType& value) { m_entityTypeHasBeenSet = true; m_entityType = value; }

    /**
     * <p>The type of the asset for which you want to get the data point.</p>
     */
    inline void SetEntityType(TimeSeriesEntityType&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::move(value); }

    /**
     * <p>The type of the asset for which you want to get the data point.</p>
     */
    inline GetTimeSeriesDataPointRequest& WithEntityType(const TimeSeriesEntityType& value) { SetEntityType(value); return *this;}

    /**
     * <p>The type of the asset for which you want to get the data point.</p>
     */
    inline GetTimeSeriesDataPointRequest& WithEntityType(TimeSeriesEntityType&& value) { SetEntityType(std::move(value)); return *this;}


    /**
     * <p>The name of the time series form that houses the data point that you want to
     * get.</p>
     */
    inline const Aws::String& GetFormName() const{ return m_formName; }

    /**
     * <p>The name of the time series form that houses the data point that you want to
     * get.</p>
     */
    inline bool FormNameHasBeenSet() const { return m_formNameHasBeenSet; }

    /**
     * <p>The name of the time series form that houses the data point that you want to
     * get.</p>
     */
    inline void SetFormName(const Aws::String& value) { m_formNameHasBeenSet = true; m_formName = value; }

    /**
     * <p>The name of the time series form that houses the data point that you want to
     * get.</p>
     */
    inline void SetFormName(Aws::String&& value) { m_formNameHasBeenSet = true; m_formName = std::move(value); }

    /**
     * <p>The name of the time series form that houses the data point that you want to
     * get.</p>
     */
    inline void SetFormName(const char* value) { m_formNameHasBeenSet = true; m_formName.assign(value); }

    /**
     * <p>The name of the time series form that houses the data point that you want to
     * get.</p>
     */
    inline GetTimeSeriesDataPointRequest& WithFormName(const Aws::String& value) { SetFormName(value); return *this;}

    /**
     * <p>The name of the time series form that houses the data point that you want to
     * get.</p>
     */
    inline GetTimeSeriesDataPointRequest& WithFormName(Aws::String&& value) { SetFormName(std::move(value)); return *this;}

    /**
     * <p>The name of the time series form that houses the data point that you want to
     * get.</p>
     */
    inline GetTimeSeriesDataPointRequest& WithFormName(const char* value) { SetFormName(value); return *this;}


    /**
     * <p>The ID of the data point that you want to get.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The ID of the data point that you want to get.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The ID of the data point that you want to get.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The ID of the data point that you want to get.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The ID of the data point that you want to get.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The ID of the data point that you want to get.</p>
     */
    inline GetTimeSeriesDataPointRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The ID of the data point that you want to get.</p>
     */
    inline GetTimeSeriesDataPointRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the data point that you want to get.</p>
     */
    inline GetTimeSeriesDataPointRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}

  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_entityIdentifier;
    bool m_entityIdentifierHasBeenSet = false;

    TimeSeriesEntityType m_entityType;
    bool m_entityTypeHasBeenSet = false;

    Aws::String m_formName;
    bool m_formNameHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
