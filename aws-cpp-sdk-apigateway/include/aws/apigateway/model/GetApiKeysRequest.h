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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace APIGateway
{
namespace Model
{

  /**
   * <p>A request to get information about the current <a>ApiKeys</a>
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetApiKeysRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetApiKeysRequest : public APIGatewayRequest
  {
  public:
    GetApiKeysRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetApiKeys"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline const Aws::String& GetPosition() const{ return m_position; }

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline void SetPosition(const Aws::String& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline void SetPosition(Aws::String&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline void SetPosition(const char* value) { m_positionHasBeenSet = true; m_position.assign(value); }

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline GetApiKeysRequest& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline GetApiKeysRequest& WithPosition(Aws::String&& value) { SetPosition(std::move(value)); return *this;}

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline GetApiKeysRequest& WithPosition(const char* value) { SetPosition(value); return *this;}


    /**
     * <p>The maximum number of returned results per page. The default value is 25 and
     * the maximum value is 500.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of returned results per page. The default value is 25 and
     * the maximum value is 500.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of returned results per page. The default value is 25 and
     * the maximum value is 500.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of returned results per page. The default value is 25 and
     * the maximum value is 500.</p>
     */
    inline GetApiKeysRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The name of queried API keys.</p>
     */
    inline const Aws::String& GetNameQuery() const{ return m_nameQuery; }

    /**
     * <p>The name of queried API keys.</p>
     */
    inline bool NameQueryHasBeenSet() const { return m_nameQueryHasBeenSet; }

    /**
     * <p>The name of queried API keys.</p>
     */
    inline void SetNameQuery(const Aws::String& value) { m_nameQueryHasBeenSet = true; m_nameQuery = value; }

    /**
     * <p>The name of queried API keys.</p>
     */
    inline void SetNameQuery(Aws::String&& value) { m_nameQueryHasBeenSet = true; m_nameQuery = std::move(value); }

    /**
     * <p>The name of queried API keys.</p>
     */
    inline void SetNameQuery(const char* value) { m_nameQueryHasBeenSet = true; m_nameQuery.assign(value); }

    /**
     * <p>The name of queried API keys.</p>
     */
    inline GetApiKeysRequest& WithNameQuery(const Aws::String& value) { SetNameQuery(value); return *this;}

    /**
     * <p>The name of queried API keys.</p>
     */
    inline GetApiKeysRequest& WithNameQuery(Aws::String&& value) { SetNameQuery(std::move(value)); return *this;}

    /**
     * <p>The name of queried API keys.</p>
     */
    inline GetApiKeysRequest& WithNameQuery(const char* value) { SetNameQuery(value); return *this;}


    /**
     * <p>The identifier of a customer in AWS Marketplace or an external system, such
     * as a developer portal.</p>
     */
    inline const Aws::String& GetCustomerId() const{ return m_customerId; }

    /**
     * <p>The identifier of a customer in AWS Marketplace or an external system, such
     * as a developer portal.</p>
     */
    inline bool CustomerIdHasBeenSet() const { return m_customerIdHasBeenSet; }

    /**
     * <p>The identifier of a customer in AWS Marketplace or an external system, such
     * as a developer portal.</p>
     */
    inline void SetCustomerId(const Aws::String& value) { m_customerIdHasBeenSet = true; m_customerId = value; }

    /**
     * <p>The identifier of a customer in AWS Marketplace or an external system, such
     * as a developer portal.</p>
     */
    inline void SetCustomerId(Aws::String&& value) { m_customerIdHasBeenSet = true; m_customerId = std::move(value); }

    /**
     * <p>The identifier of a customer in AWS Marketplace or an external system, such
     * as a developer portal.</p>
     */
    inline void SetCustomerId(const char* value) { m_customerIdHasBeenSet = true; m_customerId.assign(value); }

    /**
     * <p>The identifier of a customer in AWS Marketplace or an external system, such
     * as a developer portal.</p>
     */
    inline GetApiKeysRequest& WithCustomerId(const Aws::String& value) { SetCustomerId(value); return *this;}

    /**
     * <p>The identifier of a customer in AWS Marketplace or an external system, such
     * as a developer portal.</p>
     */
    inline GetApiKeysRequest& WithCustomerId(Aws::String&& value) { SetCustomerId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a customer in AWS Marketplace or an external system, such
     * as a developer portal.</p>
     */
    inline GetApiKeysRequest& WithCustomerId(const char* value) { SetCustomerId(value); return *this;}


    /**
     * <p>A boolean flag to specify whether (<code>true</code>) or not
     * (<code>false</code>) the result contains key values.</p>
     */
    inline bool GetIncludeValues() const{ return m_includeValues; }

    /**
     * <p>A boolean flag to specify whether (<code>true</code>) or not
     * (<code>false</code>) the result contains key values.</p>
     */
    inline bool IncludeValuesHasBeenSet() const { return m_includeValuesHasBeenSet; }

    /**
     * <p>A boolean flag to specify whether (<code>true</code>) or not
     * (<code>false</code>) the result contains key values.</p>
     */
    inline void SetIncludeValues(bool value) { m_includeValuesHasBeenSet = true; m_includeValues = value; }

    /**
     * <p>A boolean flag to specify whether (<code>true</code>) or not
     * (<code>false</code>) the result contains key values.</p>
     */
    inline GetApiKeysRequest& WithIncludeValues(bool value) { SetIncludeValues(value); return *this;}

  private:

    Aws::String m_position;
    bool m_positionHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_nameQuery;
    bool m_nameQueryHasBeenSet;

    Aws::String m_customerId;
    bool m_customerIdHasBeenSet;

    bool m_includeValues;
    bool m_includeValuesHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
