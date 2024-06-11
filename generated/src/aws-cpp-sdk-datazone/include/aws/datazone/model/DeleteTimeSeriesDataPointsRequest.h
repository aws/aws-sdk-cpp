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
#include <aws/core/utils/UUID.h>

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
  class DeleteTimeSeriesDataPointsRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API DeleteTimeSeriesDataPointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTimeSeriesDataPoints"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
     * This field is automatically populated if not provided.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline DeleteTimeSeriesDataPointsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline DeleteTimeSeriesDataPointsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline DeleteTimeSeriesDataPointsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain that houses the asset for which you want
     * to delete a time series form.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline DeleteTimeSeriesDataPointsRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline DeleteTimeSeriesDataPointsRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline DeleteTimeSeriesDataPointsRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset for which you want to delete a time series form.</p>
     */
    inline const Aws::String& GetEntityIdentifier() const{ return m_entityIdentifier; }
    inline bool EntityIdentifierHasBeenSet() const { return m_entityIdentifierHasBeenSet; }
    inline void SetEntityIdentifier(const Aws::String& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = value; }
    inline void SetEntityIdentifier(Aws::String&& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = std::move(value); }
    inline void SetEntityIdentifier(const char* value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier.assign(value); }
    inline DeleteTimeSeriesDataPointsRequest& WithEntityIdentifier(const Aws::String& value) { SetEntityIdentifier(value); return *this;}
    inline DeleteTimeSeriesDataPointsRequest& WithEntityIdentifier(Aws::String&& value) { SetEntityIdentifier(std::move(value)); return *this;}
    inline DeleteTimeSeriesDataPointsRequest& WithEntityIdentifier(const char* value) { SetEntityIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the asset for which you want to delete a time series form.</p>
     */
    inline const TimeSeriesEntityType& GetEntityType() const{ return m_entityType; }
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
    inline void SetEntityType(const TimeSeriesEntityType& value) { m_entityTypeHasBeenSet = true; m_entityType = value; }
    inline void SetEntityType(TimeSeriesEntityType&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::move(value); }
    inline DeleteTimeSeriesDataPointsRequest& WithEntityType(const TimeSeriesEntityType& value) { SetEntityType(value); return *this;}
    inline DeleteTimeSeriesDataPointsRequest& WithEntityType(TimeSeriesEntityType&& value) { SetEntityType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the time series form that you want to delete.</p>
     */
    inline const Aws::String& GetFormName() const{ return m_formName; }
    inline bool FormNameHasBeenSet() const { return m_formNameHasBeenSet; }
    inline void SetFormName(const Aws::String& value) { m_formNameHasBeenSet = true; m_formName = value; }
    inline void SetFormName(Aws::String&& value) { m_formNameHasBeenSet = true; m_formName = std::move(value); }
    inline void SetFormName(const char* value) { m_formNameHasBeenSet = true; m_formName.assign(value); }
    inline DeleteTimeSeriesDataPointsRequest& WithFormName(const Aws::String& value) { SetFormName(value); return *this;}
    inline DeleteTimeSeriesDataPointsRequest& WithFormName(Aws::String&& value) { SetFormName(std::move(value)); return *this;}
    inline DeleteTimeSeriesDataPointsRequest& WithFormName(const char* value) { SetFormName(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_entityIdentifier;
    bool m_entityIdentifierHasBeenSet = false;

    TimeSeriesEntityType m_entityType;
    bool m_entityTypeHasBeenSet = false;

    Aws::String m_formName;
    bool m_formNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
