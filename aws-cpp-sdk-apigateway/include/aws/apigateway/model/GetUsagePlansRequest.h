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
   * <p>The GET request to get all the usage plans of the caller's account.</p>
   */
  class AWS_APIGATEWAY_API GetUsagePlansRequest : public APIGatewayRequest
  {
  public:
    GetUsagePlansRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>The zero-based array index specifying the position of the to-be-retrieved
     * <a>UsagePlan</a> resource.</p>
     */
    inline const Aws::String& GetPosition() const{ return m_position; }

    /**
     * <p>The zero-based array index specifying the position of the to-be-retrieved
     * <a>UsagePlan</a> resource.</p>
     */
    inline void SetPosition(const Aws::String& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>The zero-based array index specifying the position of the to-be-retrieved
     * <a>UsagePlan</a> resource.</p>
     */
    inline void SetPosition(Aws::String&& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>The zero-based array index specifying the position of the to-be-retrieved
     * <a>UsagePlan</a> resource.</p>
     */
    inline void SetPosition(const char* value) { m_positionHasBeenSet = true; m_position.assign(value); }

    /**
     * <p>The zero-based array index specifying the position of the to-be-retrieved
     * <a>UsagePlan</a> resource.</p>
     */
    inline GetUsagePlansRequest& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    /**
     * <p>The zero-based array index specifying the position of the to-be-retrieved
     * <a>UsagePlan</a> resource.</p>
     */
    inline GetUsagePlansRequest& WithPosition(Aws::String&& value) { SetPosition(value); return *this;}

    /**
     * <p>The zero-based array index specifying the position of the to-be-retrieved
     * <a>UsagePlan</a> resource.</p>
     */
    inline GetUsagePlansRequest& WithPosition(const char* value) { SetPosition(value); return *this;}

    /**
     * <p>The identifier of the API key associated with the usage plans.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The identifier of the API key associated with the usage plans.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The identifier of the API key associated with the usage plans.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The identifier of the API key associated with the usage plans.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The identifier of the API key associated with the usage plans.</p>
     */
    inline GetUsagePlansRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The identifier of the API key associated with the usage plans.</p>
     */
    inline GetUsagePlansRequest& WithKeyId(Aws::String&& value) { SetKeyId(value); return *this;}

    /**
     * <p>The identifier of the API key associated with the usage plans.</p>
     */
    inline GetUsagePlansRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}

    /**
     * <p>The number of <a>UsagePlan</a> resources to be returned as the result.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The number of <a>UsagePlan</a> resources to be returned as the result.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The number of <a>UsagePlan</a> resources to be returned as the result.</p>
     */
    inline GetUsagePlansRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:
    Aws::String m_position;
    bool m_positionHasBeenSet;
    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
