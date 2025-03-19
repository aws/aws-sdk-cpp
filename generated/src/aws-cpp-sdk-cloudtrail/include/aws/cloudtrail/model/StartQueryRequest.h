/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class StartQueryRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API StartQueryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartQuery"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The SQL code of your query.</p>
     */
    inline const Aws::String& GetQueryStatement() const { return m_queryStatement; }
    inline bool QueryStatementHasBeenSet() const { return m_queryStatementHasBeenSet; }
    template<typename QueryStatementT = Aws::String>
    void SetQueryStatement(QueryStatementT&& value) { m_queryStatementHasBeenSet = true; m_queryStatement = std::forward<QueryStatementT>(value); }
    template<typename QueryStatementT = Aws::String>
    StartQueryRequest& WithQueryStatement(QueryStatementT&& value) { SetQueryStatement(std::forward<QueryStatementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The URI for the S3 bucket where CloudTrail delivers the query results. </p>
     */
    inline const Aws::String& GetDeliveryS3Uri() const { return m_deliveryS3Uri; }
    inline bool DeliveryS3UriHasBeenSet() const { return m_deliveryS3UriHasBeenSet; }
    template<typename DeliveryS3UriT = Aws::String>
    void SetDeliveryS3Uri(DeliveryS3UriT&& value) { m_deliveryS3UriHasBeenSet = true; m_deliveryS3Uri = std::forward<DeliveryS3UriT>(value); }
    template<typename DeliveryS3UriT = Aws::String>
    StartQueryRequest& WithDeliveryS3Uri(DeliveryS3UriT&& value) { SetDeliveryS3Uri(std::forward<DeliveryS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The alias that identifies a query template. </p>
     */
    inline const Aws::String& GetQueryAlias() const { return m_queryAlias; }
    inline bool QueryAliasHasBeenSet() const { return m_queryAliasHasBeenSet; }
    template<typename QueryAliasT = Aws::String>
    void SetQueryAlias(QueryAliasT&& value) { m_queryAliasHasBeenSet = true; m_queryAlias = std::forward<QueryAliasT>(value); }
    template<typename QueryAliasT = Aws::String>
    StartQueryRequest& WithQueryAlias(QueryAliasT&& value) { SetQueryAlias(std::forward<QueryAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The query parameters for the specified <code>QueryAlias</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetQueryParameters() const { return m_queryParameters; }
    inline bool QueryParametersHasBeenSet() const { return m_queryParametersHasBeenSet; }
    template<typename QueryParametersT = Aws::Vector<Aws::String>>
    void SetQueryParameters(QueryParametersT&& value) { m_queryParametersHasBeenSet = true; m_queryParameters = std::forward<QueryParametersT>(value); }
    template<typename QueryParametersT = Aws::Vector<Aws::String>>
    StartQueryRequest& WithQueryParameters(QueryParametersT&& value) { SetQueryParameters(std::forward<QueryParametersT>(value)); return *this;}
    template<typename QueryParametersT = Aws::String>
    StartQueryRequest& AddQueryParameters(QueryParametersT&& value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace_back(std::forward<QueryParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The account ID of the event data store owner. </p>
     */
    inline const Aws::String& GetEventDataStoreOwnerAccountId() const { return m_eventDataStoreOwnerAccountId; }
    inline bool EventDataStoreOwnerAccountIdHasBeenSet() const { return m_eventDataStoreOwnerAccountIdHasBeenSet; }
    template<typename EventDataStoreOwnerAccountIdT = Aws::String>
    void SetEventDataStoreOwnerAccountId(EventDataStoreOwnerAccountIdT&& value) { m_eventDataStoreOwnerAccountIdHasBeenSet = true; m_eventDataStoreOwnerAccountId = std::forward<EventDataStoreOwnerAccountIdT>(value); }
    template<typename EventDataStoreOwnerAccountIdT = Aws::String>
    StartQueryRequest& WithEventDataStoreOwnerAccountId(EventDataStoreOwnerAccountIdT&& value) { SetEventDataStoreOwnerAccountId(std::forward<EventDataStoreOwnerAccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queryStatement;
    bool m_queryStatementHasBeenSet = false;

    Aws::String m_deliveryS3Uri;
    bool m_deliveryS3UriHasBeenSet = false;

    Aws::String m_queryAlias;
    bool m_queryAliasHasBeenSet = false;

    Aws::Vector<Aws::String> m_queryParameters;
    bool m_queryParametersHasBeenSet = false;

    Aws::String m_eventDataStoreOwnerAccountId;
    bool m_eventDataStoreOwnerAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
