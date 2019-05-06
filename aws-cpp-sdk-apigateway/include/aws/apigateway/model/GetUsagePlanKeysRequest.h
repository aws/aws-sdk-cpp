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
   * <p>The GET request to get all the usage plan keys representing the API keys
   * added to a specified usage plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetUsagePlanKeysRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetUsagePlanKeysRequest : public APIGatewayRequest
  {
  public:
    GetUsagePlanKeysRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUsagePlanKeys"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>[Required] The Id of the <a>UsagePlan</a> resource representing the usage
     * plan containing the to-be-retrieved <a>UsagePlanKey</a> resource representing a
     * plan customer.</p>
     */
    inline const Aws::String& GetUsagePlanId() const{ return m_usagePlanId; }

    /**
     * <p>[Required] The Id of the <a>UsagePlan</a> resource representing the usage
     * plan containing the to-be-retrieved <a>UsagePlanKey</a> resource representing a
     * plan customer.</p>
     */
    inline bool UsagePlanIdHasBeenSet() const { return m_usagePlanIdHasBeenSet; }

    /**
     * <p>[Required] The Id of the <a>UsagePlan</a> resource representing the usage
     * plan containing the to-be-retrieved <a>UsagePlanKey</a> resource representing a
     * plan customer.</p>
     */
    inline void SetUsagePlanId(const Aws::String& value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId = value; }

    /**
     * <p>[Required] The Id of the <a>UsagePlan</a> resource representing the usage
     * plan containing the to-be-retrieved <a>UsagePlanKey</a> resource representing a
     * plan customer.</p>
     */
    inline void SetUsagePlanId(Aws::String&& value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId = std::move(value); }

    /**
     * <p>[Required] The Id of the <a>UsagePlan</a> resource representing the usage
     * plan containing the to-be-retrieved <a>UsagePlanKey</a> resource representing a
     * plan customer.</p>
     */
    inline void SetUsagePlanId(const char* value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId.assign(value); }

    /**
     * <p>[Required] The Id of the <a>UsagePlan</a> resource representing the usage
     * plan containing the to-be-retrieved <a>UsagePlanKey</a> resource representing a
     * plan customer.</p>
     */
    inline GetUsagePlanKeysRequest& WithUsagePlanId(const Aws::String& value) { SetUsagePlanId(value); return *this;}

    /**
     * <p>[Required] The Id of the <a>UsagePlan</a> resource representing the usage
     * plan containing the to-be-retrieved <a>UsagePlanKey</a> resource representing a
     * plan customer.</p>
     */
    inline GetUsagePlanKeysRequest& WithUsagePlanId(Aws::String&& value) { SetUsagePlanId(std::move(value)); return *this;}

    /**
     * <p>[Required] The Id of the <a>UsagePlan</a> resource representing the usage
     * plan containing the to-be-retrieved <a>UsagePlanKey</a> resource representing a
     * plan customer.</p>
     */
    inline GetUsagePlanKeysRequest& WithUsagePlanId(const char* value) { SetUsagePlanId(value); return *this;}


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
    inline GetUsagePlanKeysRequest& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline GetUsagePlanKeysRequest& WithPosition(Aws::String&& value) { SetPosition(std::move(value)); return *this;}

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline GetUsagePlanKeysRequest& WithPosition(const char* value) { SetPosition(value); return *this;}


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
    inline bool NameQueryHasBeenSet() const { return m_nameQueryHasBeenSet; }

    /**
     * <p>A query parameter specifying the name of the to-be-returned usage plan
     * keys.</p>
     */
    inline void SetNameQuery(const Aws::String& value) { m_nameQueryHasBeenSet = true; m_nameQuery = value; }

    /**
     * <p>A query parameter specifying the name of the to-be-returned usage plan
     * keys.</p>
     */
    inline void SetNameQuery(Aws::String&& value) { m_nameQueryHasBeenSet = true; m_nameQuery = std::move(value); }

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
    inline GetUsagePlanKeysRequest& WithNameQuery(Aws::String&& value) { SetNameQuery(std::move(value)); return *this;}

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
