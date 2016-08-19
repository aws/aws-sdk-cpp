/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>A request to get information about the current <a>ApiKeys</a> resource.</p>
   */
  class AWS_APIGATEWAY_API GetApiKeysRequest : public APIGatewayRequest
  {
  public:
    GetApiKeysRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>The position of the current <a>ApiKeys</a> resource to get information
     * about.</p>
     */
    inline const Aws::String& GetPosition() const{ return m_position; }

    /**
     * <p>The position of the current <a>ApiKeys</a> resource to get information
     * about.</p>
     */
    inline void SetPosition(const Aws::String& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>The position of the current <a>ApiKeys</a> resource to get information
     * about.</p>
     */
    inline void SetPosition(Aws::String&& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>The position of the current <a>ApiKeys</a> resource to get information
     * about.</p>
     */
    inline void SetPosition(const char* value) { m_positionHasBeenSet = true; m_position.assign(value); }

    /**
     * <p>The position of the current <a>ApiKeys</a> resource to get information
     * about.</p>
     */
    inline GetApiKeysRequest& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    /**
     * <p>The position of the current <a>ApiKeys</a> resource to get information
     * about.</p>
     */
    inline GetApiKeysRequest& WithPosition(Aws::String&& value) { SetPosition(value); return *this;}

    /**
     * <p>The position of the current <a>ApiKeys</a> resource to get information
     * about.</p>
     */
    inline GetApiKeysRequest& WithPosition(const char* value) { SetPosition(value); return *this;}

    /**
     * <p>The maximum number of <a>ApiKeys</a> to get information about.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of <a>ApiKeys</a> to get information about.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of <a>ApiKeys</a> to get information about.</p>
     */
    inline GetApiKeysRequest& WithLimit(int value) { SetLimit(value); return *this;}

    /**
     * <p>The name of queried API keys.</p>
     */
    inline const Aws::String& GetNameQuery() const{ return m_nameQuery; }

    /**
     * <p>The name of queried API keys.</p>
     */
    inline void SetNameQuery(const Aws::String& value) { m_nameQueryHasBeenSet = true; m_nameQuery = value; }

    /**
     * <p>The name of queried API keys.</p>
     */
    inline void SetNameQuery(Aws::String&& value) { m_nameQueryHasBeenSet = true; m_nameQuery = value; }

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
    inline GetApiKeysRequest& WithNameQuery(Aws::String&& value) { SetNameQuery(value); return *this;}

    /**
     * <p>The name of queried API keys.</p>
     */
    inline GetApiKeysRequest& WithNameQuery(const char* value) { SetNameQuery(value); return *this;}

    /**
     * <p>A boolean flag to specify whether (<code>true</code>) or not
     * (<code>false</code>) the result contains key values.</p>
     */
    inline bool GetIncludeValues() const{ return m_includeValues; }

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
    bool m_includeValues;
    bool m_includeValuesHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
