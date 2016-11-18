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
   * <p>A request to get information about a collection of <a>BasePathMapping</a>
   * resources.</p>
   */
  class AWS_APIGATEWAY_API GetBasePathMappingsRequest : public APIGatewayRequest
  {
  public:
    GetBasePathMappingsRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>The domain name of a <a>BasePathMapping</a> resource.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name of a <a>BasePathMapping</a> resource.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name of a <a>BasePathMapping</a> resource.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name of a <a>BasePathMapping</a> resource.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name of a <a>BasePathMapping</a> resource.</p>
     */
    inline GetBasePathMappingsRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name of a <a>BasePathMapping</a> resource.</p>
     */
    inline GetBasePathMappingsRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name of a <a>BasePathMapping</a> resource.</p>
     */
    inline GetBasePathMappingsRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>The position of the current <a>BasePathMapping</a> resource in the collection
     * to get information about.</p>
     */
    inline const Aws::String& GetPosition() const{ return m_position; }

    /**
     * <p>The position of the current <a>BasePathMapping</a> resource in the collection
     * to get information about.</p>
     */
    inline void SetPosition(const Aws::String& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>The position of the current <a>BasePathMapping</a> resource in the collection
     * to get information about.</p>
     */
    inline void SetPosition(Aws::String&& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>The position of the current <a>BasePathMapping</a> resource in the collection
     * to get information about.</p>
     */
    inline void SetPosition(const char* value) { m_positionHasBeenSet = true; m_position.assign(value); }

    /**
     * <p>The position of the current <a>BasePathMapping</a> resource in the collection
     * to get information about.</p>
     */
    inline GetBasePathMappingsRequest& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    /**
     * <p>The position of the current <a>BasePathMapping</a> resource in the collection
     * to get information about.</p>
     */
    inline GetBasePathMappingsRequest& WithPosition(Aws::String&& value) { SetPosition(value); return *this;}

    /**
     * <p>The position of the current <a>BasePathMapping</a> resource in the collection
     * to get information about.</p>
     */
    inline GetBasePathMappingsRequest& WithPosition(const char* value) { SetPosition(value); return *this;}

    /**
     * <p>The maximum number of <a>BasePathMapping</a> resources in the collection to
     * get information about. The default limit is 25. It should be an integer between
     * 1 - 500.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of <a>BasePathMapping</a> resources in the collection to
     * get information about. The default limit is 25. It should be an integer between
     * 1 - 500.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of <a>BasePathMapping</a> resources in the collection to
     * get information about. The default limit is 25. It should be an integer between
     * 1 - 500.</p>
     */
    inline GetBasePathMappingsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::String m_position;
    bool m_positionHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
