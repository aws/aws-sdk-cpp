/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/WirelessGatewayTaskDefinitionType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class ListWirelessGatewayTaskDefinitionsRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API ListWirelessGatewayTaskDefinitionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWirelessGatewayTaskDefinitions"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;

    AWS_IOTWIRELESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of results to return in this operation.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in this operation.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in this operation.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in this operation.</p>
     */
    inline ListWirelessGatewayTaskDefinitionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline ListWirelessGatewayTaskDefinitionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline ListWirelessGatewayTaskDefinitionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline ListWirelessGatewayTaskDefinitionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A filter to list only the wireless gateway task definitions that use this
     * task definition type.</p>
     */
    inline const WirelessGatewayTaskDefinitionType& GetTaskDefinitionType() const{ return m_taskDefinitionType; }

    /**
     * <p>A filter to list only the wireless gateway task definitions that use this
     * task definition type.</p>
     */
    inline bool TaskDefinitionTypeHasBeenSet() const { return m_taskDefinitionTypeHasBeenSet; }

    /**
     * <p>A filter to list only the wireless gateway task definitions that use this
     * task definition type.</p>
     */
    inline void SetTaskDefinitionType(const WirelessGatewayTaskDefinitionType& value) { m_taskDefinitionTypeHasBeenSet = true; m_taskDefinitionType = value; }

    /**
     * <p>A filter to list only the wireless gateway task definitions that use this
     * task definition type.</p>
     */
    inline void SetTaskDefinitionType(WirelessGatewayTaskDefinitionType&& value) { m_taskDefinitionTypeHasBeenSet = true; m_taskDefinitionType = std::move(value); }

    /**
     * <p>A filter to list only the wireless gateway task definitions that use this
     * task definition type.</p>
     */
    inline ListWirelessGatewayTaskDefinitionsRequest& WithTaskDefinitionType(const WirelessGatewayTaskDefinitionType& value) { SetTaskDefinitionType(value); return *this;}

    /**
     * <p>A filter to list only the wireless gateway task definitions that use this
     * task definition type.</p>
     */
    inline ListWirelessGatewayTaskDefinitionsRequest& WithTaskDefinitionType(WirelessGatewayTaskDefinitionType&& value) { SetTaskDefinitionType(std::move(value)); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    WirelessGatewayTaskDefinitionType m_taskDefinitionType;
    bool m_taskDefinitionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
