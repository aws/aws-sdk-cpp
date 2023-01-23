/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    /**
     * <p>The SQL code of your query.</p>
     */
    inline const Aws::String& GetQueryStatement() const{ return m_queryStatement; }

    /**
     * <p>The SQL code of your query.</p>
     */
    inline bool QueryStatementHasBeenSet() const { return m_queryStatementHasBeenSet; }

    /**
     * <p>The SQL code of your query.</p>
     */
    inline void SetQueryStatement(const Aws::String& value) { m_queryStatementHasBeenSet = true; m_queryStatement = value; }

    /**
     * <p>The SQL code of your query.</p>
     */
    inline void SetQueryStatement(Aws::String&& value) { m_queryStatementHasBeenSet = true; m_queryStatement = std::move(value); }

    /**
     * <p>The SQL code of your query.</p>
     */
    inline void SetQueryStatement(const char* value) { m_queryStatementHasBeenSet = true; m_queryStatement.assign(value); }

    /**
     * <p>The SQL code of your query.</p>
     */
    inline StartQueryRequest& WithQueryStatement(const Aws::String& value) { SetQueryStatement(value); return *this;}

    /**
     * <p>The SQL code of your query.</p>
     */
    inline StartQueryRequest& WithQueryStatement(Aws::String&& value) { SetQueryStatement(std::move(value)); return *this;}

    /**
     * <p>The SQL code of your query.</p>
     */
    inline StartQueryRequest& WithQueryStatement(const char* value) { SetQueryStatement(value); return *this;}


    /**
     * <p> The URI for the S3 bucket where CloudTrail delivers the query results. </p>
     */
    inline const Aws::String& GetDeliveryS3Uri() const{ return m_deliveryS3Uri; }

    /**
     * <p> The URI for the S3 bucket where CloudTrail delivers the query results. </p>
     */
    inline bool DeliveryS3UriHasBeenSet() const { return m_deliveryS3UriHasBeenSet; }

    /**
     * <p> The URI for the S3 bucket where CloudTrail delivers the query results. </p>
     */
    inline void SetDeliveryS3Uri(const Aws::String& value) { m_deliveryS3UriHasBeenSet = true; m_deliveryS3Uri = value; }

    /**
     * <p> The URI for the S3 bucket where CloudTrail delivers the query results. </p>
     */
    inline void SetDeliveryS3Uri(Aws::String&& value) { m_deliveryS3UriHasBeenSet = true; m_deliveryS3Uri = std::move(value); }

    /**
     * <p> The URI for the S3 bucket where CloudTrail delivers the query results. </p>
     */
    inline void SetDeliveryS3Uri(const char* value) { m_deliveryS3UriHasBeenSet = true; m_deliveryS3Uri.assign(value); }

    /**
     * <p> The URI for the S3 bucket where CloudTrail delivers the query results. </p>
     */
    inline StartQueryRequest& WithDeliveryS3Uri(const Aws::String& value) { SetDeliveryS3Uri(value); return *this;}

    /**
     * <p> The URI for the S3 bucket where CloudTrail delivers the query results. </p>
     */
    inline StartQueryRequest& WithDeliveryS3Uri(Aws::String&& value) { SetDeliveryS3Uri(std::move(value)); return *this;}

    /**
     * <p> The URI for the S3 bucket where CloudTrail delivers the query results. </p>
     */
    inline StartQueryRequest& WithDeliveryS3Uri(const char* value) { SetDeliveryS3Uri(value); return *this;}

  private:

    Aws::String m_queryStatement;
    bool m_queryStatementHasBeenSet = false;

    Aws::String m_deliveryS3Uri;
    bool m_deliveryS3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
