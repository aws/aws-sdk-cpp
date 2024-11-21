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
    AWS_CLOUDTRAIL_API StartQueryRequest();

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
    inline const Aws::String& GetQueryStatement() const{ return m_queryStatement; }
    inline bool QueryStatementHasBeenSet() const { return m_queryStatementHasBeenSet; }
    inline void SetQueryStatement(const Aws::String& value) { m_queryStatementHasBeenSet = true; m_queryStatement = value; }
    inline void SetQueryStatement(Aws::String&& value) { m_queryStatementHasBeenSet = true; m_queryStatement = std::move(value); }
    inline void SetQueryStatement(const char* value) { m_queryStatementHasBeenSet = true; m_queryStatement.assign(value); }
    inline StartQueryRequest& WithQueryStatement(const Aws::String& value) { SetQueryStatement(value); return *this;}
    inline StartQueryRequest& WithQueryStatement(Aws::String&& value) { SetQueryStatement(std::move(value)); return *this;}
    inline StartQueryRequest& WithQueryStatement(const char* value) { SetQueryStatement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The URI for the S3 bucket where CloudTrail delivers the query results. </p>
     */
    inline const Aws::String& GetDeliveryS3Uri() const{ return m_deliveryS3Uri; }
    inline bool DeliveryS3UriHasBeenSet() const { return m_deliveryS3UriHasBeenSet; }
    inline void SetDeliveryS3Uri(const Aws::String& value) { m_deliveryS3UriHasBeenSet = true; m_deliveryS3Uri = value; }
    inline void SetDeliveryS3Uri(Aws::String&& value) { m_deliveryS3UriHasBeenSet = true; m_deliveryS3Uri = std::move(value); }
    inline void SetDeliveryS3Uri(const char* value) { m_deliveryS3UriHasBeenSet = true; m_deliveryS3Uri.assign(value); }
    inline StartQueryRequest& WithDeliveryS3Uri(const Aws::String& value) { SetDeliveryS3Uri(value); return *this;}
    inline StartQueryRequest& WithDeliveryS3Uri(Aws::String&& value) { SetDeliveryS3Uri(std::move(value)); return *this;}
    inline StartQueryRequest& WithDeliveryS3Uri(const char* value) { SetDeliveryS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The alias that identifies a query template. </p>
     */
    inline const Aws::String& GetQueryAlias() const{ return m_queryAlias; }
    inline bool QueryAliasHasBeenSet() const { return m_queryAliasHasBeenSet; }
    inline void SetQueryAlias(const Aws::String& value) { m_queryAliasHasBeenSet = true; m_queryAlias = value; }
    inline void SetQueryAlias(Aws::String&& value) { m_queryAliasHasBeenSet = true; m_queryAlias = std::move(value); }
    inline void SetQueryAlias(const char* value) { m_queryAliasHasBeenSet = true; m_queryAlias.assign(value); }
    inline StartQueryRequest& WithQueryAlias(const Aws::String& value) { SetQueryAlias(value); return *this;}
    inline StartQueryRequest& WithQueryAlias(Aws::String&& value) { SetQueryAlias(std::move(value)); return *this;}
    inline StartQueryRequest& WithQueryAlias(const char* value) { SetQueryAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The query parameters for the specified <code>QueryAlias</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetQueryParameters() const{ return m_queryParameters; }
    inline bool QueryParametersHasBeenSet() const { return m_queryParametersHasBeenSet; }
    inline void SetQueryParameters(const Aws::Vector<Aws::String>& value) { m_queryParametersHasBeenSet = true; m_queryParameters = value; }
    inline void SetQueryParameters(Aws::Vector<Aws::String>&& value) { m_queryParametersHasBeenSet = true; m_queryParameters = std::move(value); }
    inline StartQueryRequest& WithQueryParameters(const Aws::Vector<Aws::String>& value) { SetQueryParameters(value); return *this;}
    inline StartQueryRequest& WithQueryParameters(Aws::Vector<Aws::String>&& value) { SetQueryParameters(std::move(value)); return *this;}
    inline StartQueryRequest& AddQueryParameters(const Aws::String& value) { m_queryParametersHasBeenSet = true; m_queryParameters.push_back(value); return *this; }
    inline StartQueryRequest& AddQueryParameters(Aws::String&& value) { m_queryParametersHasBeenSet = true; m_queryParameters.push_back(std::move(value)); return *this; }
    inline StartQueryRequest& AddQueryParameters(const char* value) { m_queryParametersHasBeenSet = true; m_queryParameters.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The account ID of the event data store owner. </p>
     */
    inline const Aws::String& GetEventDataStoreOwnerAccountId() const{ return m_eventDataStoreOwnerAccountId; }
    inline bool EventDataStoreOwnerAccountIdHasBeenSet() const { return m_eventDataStoreOwnerAccountIdHasBeenSet; }
    inline void SetEventDataStoreOwnerAccountId(const Aws::String& value) { m_eventDataStoreOwnerAccountIdHasBeenSet = true; m_eventDataStoreOwnerAccountId = value; }
    inline void SetEventDataStoreOwnerAccountId(Aws::String&& value) { m_eventDataStoreOwnerAccountIdHasBeenSet = true; m_eventDataStoreOwnerAccountId = std::move(value); }
    inline void SetEventDataStoreOwnerAccountId(const char* value) { m_eventDataStoreOwnerAccountIdHasBeenSet = true; m_eventDataStoreOwnerAccountId.assign(value); }
    inline StartQueryRequest& WithEventDataStoreOwnerAccountId(const Aws::String& value) { SetEventDataStoreOwnerAccountId(value); return *this;}
    inline StartQueryRequest& WithEventDataStoreOwnerAccountId(Aws::String&& value) { SetEventDataStoreOwnerAccountId(std::move(value)); return *this;}
    inline StartQueryRequest& WithEventDataStoreOwnerAccountId(const char* value) { SetEventDataStoreOwnerAccountId(value); return *this;}
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
