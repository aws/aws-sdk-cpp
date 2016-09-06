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
   * <p>The GET request to get all the usage plan keys representing the API keys
   * added to a specified usage plan.</p>
   */
  class AWS_APIGATEWAY_API GetUsagePlanKeysRequest : public APIGatewayRequest
  {
  public:
    GetUsagePlanKeysRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>The Id of the <a>UsagePlan</a> resource representing the usage plan
     * containing the to-be-retrieved <a>UsagePlanKey</a> resource representing a plan
     * customer.</p>
     */
    inline const Aws::String& GetUsagePlanId() const{ return m_usagePlanId; }

    /**
     * <p>The Id of the <a>UsagePlan</a> resource representing the usage plan
     * containing the to-be-retrieved <a>UsagePlanKey</a> resource representing a plan
     * customer.</p>
     */
    inline void SetUsagePlanId(const Aws::String& value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId = value; }

    /**
     * <p>The Id of the <a>UsagePlan</a> resource representing the usage plan
     * containing the to-be-retrieved <a>UsagePlanKey</a> resource representing a plan
     * customer.</p>
     */
    inline void SetUsagePlanId(Aws::String&& value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId = value; }

    /**
     * <p>The Id of the <a>UsagePlan</a> resource representing the usage plan
     * containing the to-be-retrieved <a>UsagePlanKey</a> resource representing a plan
     * customer.</p>
     */
    inline void SetUsagePlanId(const char* value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId.assign(value); }

    /**
     * <p>The Id of the <a>UsagePlan</a> resource representing the usage plan
     * containing the to-be-retrieved <a>UsagePlanKey</a> resource representing a plan
     * customer.</p>
     */
    inline GetUsagePlanKeysRequest& WithUsagePlanId(const Aws::String& value) { SetUsagePlanId(value); return *this;}

    /**
     * <p>The Id of the <a>UsagePlan</a> resource representing the usage plan
     * containing the to-be-retrieved <a>UsagePlanKey</a> resource representing a plan
     * customer.</p>
     */
    inline GetUsagePlanKeysRequest& WithUsagePlanId(Aws::String&& value) { SetUsagePlanId(value); return *this;}

    /**
     * <p>The Id of the <a>UsagePlan</a> resource representing the usage plan
     * containing the to-be-retrieved <a>UsagePlanKey</a> resource representing a plan
     * customer.</p>
     */
    inline GetUsagePlanKeysRequest& WithUsagePlanId(const char* value) { SetUsagePlanId(value); return *this;}

    /**
     * <p>A query parameter specifying the zero-based index specifying the position of
     * a usage plan key.</p>
     */
    inline const Aws::String& GetPosition() const{ return m_position; }

    /**
     * <p>A query parameter specifying the zero-based index specifying the position of
     * a usage plan key.</p>
     */
    inline void SetPosition(const Aws::String& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>A query parameter specifying the zero-based index specifying the position of
     * a usage plan key.</p>
     */
    inline void SetPosition(Aws::String&& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>A query parameter specifying the zero-based index specifying the position of
     * a usage plan key.</p>
     */
    inline void SetPosition(const char* value) { m_positionHasBeenSet = true; m_position.assign(value); }

    /**
     * <p>A query parameter specifying the zero-based index specifying the position of
     * a usage plan key.</p>
     */
    inline GetUsagePlanKeysRequest& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    /**
     * <p>A query parameter specifying the zero-based index specifying the position of
     * a usage plan key.</p>
     */
    inline GetUsagePlanKeysRequest& WithPosition(Aws::String&& value) { SetPosition(value); return *this;}

    /**
     * <p>A query parameter specifying the zero-based index specifying the position of
     * a usage plan key.</p>
     */
    inline GetUsagePlanKeysRequest& WithPosition(const char* value) { SetPosition(value); return *this;}

    /**
     * <p>A query parameter specifying the maximum number usage plan keys returned by
     * the GET request.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>A query parameter specifying the maximum number usage plan keys returned by
     * the GET request.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>A query parameter specifying the maximum number usage plan keys returned by
     * the GET request.</p>
     */
    inline GetUsagePlanKeysRequest& WithLimit(int value) { SetLimit(value); return *this;}

    /**
     * <p>A query parameter specifying the name of the to-be-returned usage plan
     * keys.</p>
     */
    inline const Aws::String& GetNameQuery() const{ return m_nameQuery; }

    /**
     * <p>A query parameter specifying the name of the to-be-returned usage plan
     * keys.</p>
     */
    inline void SetNameQuery(const Aws::String& value) { m_nameQueryHasBeenSet = true; m_nameQuery = value; }

    /**
     * <p>A query parameter specifying the name of the to-be-returned usage plan
     * keys.</p>
     */
    inline void SetNameQuery(Aws::String&& value) { m_nameQueryHasBeenSet = true; m_nameQuery = value; }

    /**
     * <p>A query parameter specifying the name of the to-be-returned usage plan
     * keys.</p>
     */
    inline void SetNameQuery(const char* value) { m_nameQueryHasBeenSet = true; m_nameQuery.assign(value); }

    /**
     * <p>A query parameter specifying the name of the to-be-returned usage plan
     * keys.</p>
     */
    inline GetUsagePlanKeysRequest& WithNameQuery(const Aws::String& value) { SetNameQuery(value); return *this;}

    /**
     * <p>A query parameter specifying the name of the to-be-returned usage plan
     * keys.</p>
     */
    inline GetUsagePlanKeysRequest& WithNameQuery(Aws::String&& value) { SetNameQuery(value); return *this;}

    /**
     * <p>A query parameter specifying the name of the to-be-returned usage plan
     * keys.</p>
     */
    inline GetUsagePlanKeysRequest& WithNameQuery(const char* value) { SetNameQuery(value); return *this;}

  private:
    Aws::String m_usagePlanId;
    bool m_usagePlanIdHasBeenSet;
    Aws::String m_position;
    bool m_positionHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
    Aws::String m_nameQuery;
    bool m_nameQueryHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
