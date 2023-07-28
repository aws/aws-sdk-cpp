/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Kafka
{
namespace Model
{

  /**
   */
  class ListClusterOperationsV2Request : public KafkaRequest
  {
  public:
    AWS_KAFKA_API ListClusterOperationsV2Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListClusterOperationsV2"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;

    AWS_KAFKA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * The arn of the cluster whose operations are being requested.
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * The arn of the cluster whose operations are being requested.
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * The arn of the cluster whose operations are being requested.
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * The arn of the cluster whose operations are being requested.
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * The arn of the cluster whose operations are being requested.
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * The arn of the cluster whose operations are being requested.
     */
    inline ListClusterOperationsV2Request& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * The arn of the cluster whose operations are being requested.
     */
    inline ListClusterOperationsV2Request& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * The arn of the cluster whose operations are being requested.
     */
    inline ListClusterOperationsV2Request& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * The maxResults of the query.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * The maxResults of the query.
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * The maxResults of the query.
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * The maxResults of the query.
     */
    inline ListClusterOperationsV2Request& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * The nextToken of the query.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The nextToken of the query.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * The nextToken of the query.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * The nextToken of the query.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * The nextToken of the query.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * The nextToken of the query.
     */
    inline ListClusterOperationsV2Request& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The nextToken of the query.
     */
    inline ListClusterOperationsV2Request& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The nextToken of the query.
     */
    inline ListClusterOperationsV2Request& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
