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
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/MQRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MQ
{
namespace Model
{

  /**
   */
  class AWS_MQ_API DescribeBrokerInstanceOptionsRequest : public MQRequest
  {
  public:
    DescribeBrokerInstanceOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBrokerInstanceOptions"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * Filter response by engine type.
     */
    inline const Aws::String& GetEngineType() const{ return m_engineType; }

    /**
     * Filter response by engine type.
     */
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }

    /**
     * Filter response by engine type.
     */
    inline void SetEngineType(const Aws::String& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }

    /**
     * Filter response by engine type.
     */
    inline void SetEngineType(Aws::String&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }

    /**
     * Filter response by engine type.
     */
    inline void SetEngineType(const char* value) { m_engineTypeHasBeenSet = true; m_engineType.assign(value); }

    /**
     * Filter response by engine type.
     */
    inline DescribeBrokerInstanceOptionsRequest& WithEngineType(const Aws::String& value) { SetEngineType(value); return *this;}

    /**
     * Filter response by engine type.
     */
    inline DescribeBrokerInstanceOptionsRequest& WithEngineType(Aws::String&& value) { SetEngineType(std::move(value)); return *this;}

    /**
     * Filter response by engine type.
     */
    inline DescribeBrokerInstanceOptionsRequest& WithEngineType(const char* value) { SetEngineType(value); return *this;}


    /**
     * Filter response by host instance type.
     */
    inline const Aws::String& GetHostInstanceType() const{ return m_hostInstanceType; }

    /**
     * Filter response by host instance type.
     */
    inline bool HostInstanceTypeHasBeenSet() const { return m_hostInstanceTypeHasBeenSet; }

    /**
     * Filter response by host instance type.
     */
    inline void SetHostInstanceType(const Aws::String& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = value; }

    /**
     * Filter response by host instance type.
     */
    inline void SetHostInstanceType(Aws::String&& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = std::move(value); }

    /**
     * Filter response by host instance type.
     */
    inline void SetHostInstanceType(const char* value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType.assign(value); }

    /**
     * Filter response by host instance type.
     */
    inline DescribeBrokerInstanceOptionsRequest& WithHostInstanceType(const Aws::String& value) { SetHostInstanceType(value); return *this;}

    /**
     * Filter response by host instance type.
     */
    inline DescribeBrokerInstanceOptionsRequest& WithHostInstanceType(Aws::String&& value) { SetHostInstanceType(std::move(value)); return *this;}

    /**
     * Filter response by host instance type.
     */
    inline DescribeBrokerInstanceOptionsRequest& WithHostInstanceType(const char* value) { SetHostInstanceType(value); return *this;}


    /**
     * The maximum number of instance options that Amazon MQ can return per page (20 by
     * default). This value must be an integer from 5 to 100.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * The maximum number of instance options that Amazon MQ can return per page (20 by
     * default). This value must be an integer from 5 to 100.
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * The maximum number of instance options that Amazon MQ can return per page (20 by
     * default). This value must be an integer from 5 to 100.
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * The maximum number of instance options that Amazon MQ can return per page (20 by
     * default). This value must be an integer from 5 to 100.
     */
    inline DescribeBrokerInstanceOptionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline DescribeBrokerInstanceOptionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline DescribeBrokerInstanceOptionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline DescribeBrokerInstanceOptionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_engineType;
    bool m_engineTypeHasBeenSet;

    Aws::String m_hostInstanceType;
    bool m_hostInstanceTypeHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
