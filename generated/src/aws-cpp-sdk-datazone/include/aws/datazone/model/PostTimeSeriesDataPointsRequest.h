﻿/**
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
    AWS_DATAZONE_API PostTimeSeriesDataPointsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PostTimeSeriesDataPoints"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    PostTimeSeriesDataPointsRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which you want to post time series
     * data points.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    PostTimeSeriesDataPointsRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset for which you want to post time series data points.</p>
     */
    inline const Aws::String& GetEntityIdentifier() const { return m_entityIdentifier; }
    inline bool EntityIdentifierHasBeenSet() const { return m_entityIdentifierHasBeenSet; }
    template<typename EntityIdentifierT = Aws::String>
    void SetEntityIdentifier(EntityIdentifierT&& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = std::forward<EntityIdentifierT>(value); }
    template<typename EntityIdentifierT = Aws::String>
    PostTimeSeriesDataPointsRequest& WithEntityIdentifier(EntityIdentifierT&& value) { SetEntityIdentifier(std::forward<EntityIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the asset for which you want to post data points.</p>
     */
    inline TimeSeriesEntityType GetEntityType() const { return m_entityType; }
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
    inline void SetEntityType(TimeSeriesEntityType value) { m_entityTypeHasBeenSet = true; m_entityType = value; }
    inline PostTimeSeriesDataPointsRequest& WithEntityType(TimeSeriesEntityType value) { SetEntityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forms that contain the data points that you want to post.</p>
     */
    inline const Aws::Vector<TimeSeriesDataPointFormInput>& GetForms() const { return m_forms; }
    inline bool FormsHasBeenSet() const { return m_formsHasBeenSet; }
    template<typename FormsT = Aws::Vector<TimeSeriesDataPointFormInput>>
    void SetForms(FormsT&& value) { m_formsHasBeenSet = true; m_forms = std::forward<FormsT>(value); }
    template<typename FormsT = Aws::Vector<TimeSeriesDataPointFormInput>>
    PostTimeSeriesDataPointsRequest& WithForms(FormsT&& value) { SetForms(std::forward<FormsT>(value)); return *this;}
    template<typename FormsT = TimeSeriesDataPointFormInput>
    PostTimeSeriesDataPointsRequest& AddForms(FormsT&& value) { m_formsHasBeenSet = true; m_forms.emplace_back(std::forward<FormsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_entityIdentifier;
    bool m_entityIdentifierHasBeenSet = false;

    TimeSeriesEntityType m_entityType{TimeSeriesEntityType::NOT_SET};
    bool m_entityTypeHasBeenSet = false;

    Aws::Vector<TimeSeriesDataPointFormInput> m_forms;
    bool m_formsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
