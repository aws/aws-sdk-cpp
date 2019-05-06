/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API ListGatewaysRequest : public AlexaForBusinessRequest
  {
  public:
    ListGatewaysRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGateways"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The gateway group ARN for which to list gateways.</p>
     */
    inline const Aws::String& GetGatewayGroupArn() const{ return m_gatewayGroupArn; }

    /**
     * <p>The gateway group ARN for which to list gateways.</p>
     */
    inline bool GatewayGroupArnHasBeenSet() const { return m_gatewayGroupArnHasBeenSet; }

    /**
     * <p>The gateway group ARN for which to list gateways.</p>
     */
    inline void SetGatewayGroupArn(const Aws::String& value) { m_gatewayGroupArnHasBeenSet = true; m_gatewayGroupArn = value; }

    /**
     * <p>The gateway group ARN for which to list gateways.</p>
     */
    inline void SetGatewayGroupArn(Aws::String&& value) { m_gatewayGroupArnHasBeenSet = true; m_gatewayGroupArn = std::move(value); }

    /**
     * <p>The gateway group ARN for which to list gateways.</p>
     */
    inline void SetGatewayGroupArn(const char* value) { m_gatewayGroupArnHasBeenSet = true; m_gatewayGroupArn.assign(value); }

    /**
     * <p>The gateway group ARN for which to list gateways.</p>
     */
    inline ListGatewaysRequest& WithGatewayGroupArn(const Aws::String& value) { SetGatewayGroupArn(value); return *this;}

    /**
     * <p>The gateway group ARN for which to list gateways.</p>
     */
    inline ListGatewaysRequest& WithGatewayGroupArn(Aws::String&& value) { SetGatewayGroupArn(std::move(value)); return *this;}

    /**
     * <p>The gateway group ARN for which to list gateways.</p>
     */
    inline ListGatewaysRequest& WithGatewayGroupArn(const char* value) { SetGatewayGroupArn(value); return *this;}


    /**
     * <p>The token used to paginate though multiple pages of gateway summaries.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to paginate though multiple pages of gateway summaries.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token used to paginate though multiple pages of gateway summaries.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token used to paginate though multiple pages of gateway summaries.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token used to paginate though multiple pages of gateway summaries.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token used to paginate though multiple pages of gateway summaries.</p>
     */
    inline ListGatewaysRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to paginate though multiple pages of gateway summaries.</p>
     */
    inline ListGatewaysRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to paginate though multiple pages of gateway summaries.</p>
     */
    inline ListGatewaysRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of gateway summaries to return. The default is 50.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of gateway summaries to return. The default is 50.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of gateway summaries to return. The default is 50.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of gateway summaries to return. The default is 50.</p>
     */
    inline ListGatewaysRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_gatewayGroupArn;
    bool m_gatewayGroupArnHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
