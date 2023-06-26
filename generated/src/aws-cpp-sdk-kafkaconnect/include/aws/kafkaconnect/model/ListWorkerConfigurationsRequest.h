/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/KafkaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace KafkaConnect
{
namespace Model
{

  /**
   */
  class ListWorkerConfigurationsRequest : public KafkaConnectRequest
  {
  public:
    AWS_KAFKACONNECT_API ListWorkerConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWorkerConfigurations"; }

    AWS_KAFKACONNECT_API Aws::String SerializePayload() const override;

    AWS_KAFKACONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of worker configurations to list in one response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of worker configurations to list in one response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of worker configurations to list in one response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of worker configurations to list in one response.</p>
     */
    inline ListWorkerConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the response of a ListWorkerConfigurations operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response of a ListWorkerConfigurations operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the response of a ListWorkerConfigurations operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the response of a ListWorkerConfigurations operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the response of a ListWorkerConfigurations operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the response of a ListWorkerConfigurations operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline ListWorkerConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response of a ListWorkerConfigurations operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline ListWorkerConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response of a ListWorkerConfigurations operation is truncated, it will
     * include a NextToken. Send this NextToken in a subsequent request to continue
     * listing from where the previous operation left off.</p>
     */
    inline ListWorkerConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
