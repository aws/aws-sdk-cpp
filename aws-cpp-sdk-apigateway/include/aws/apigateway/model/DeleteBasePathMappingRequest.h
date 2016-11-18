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
namespace APIGateway
{
namespace Model
{

  /**
   * <p>A request to delete the <a>BasePathMapping</a> resource.</p>
   */
  class AWS_APIGATEWAY_API DeleteBasePathMappingRequest : public APIGatewayRequest
  {
  public:
    DeleteBasePathMappingRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The domain name of the <a>BasePathMapping</a> resource to delete.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name of the <a>BasePathMapping</a> resource to delete.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name of the <a>BasePathMapping</a> resource to delete.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name of the <a>BasePathMapping</a> resource to delete.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name of the <a>BasePathMapping</a> resource to delete.</p>
     */
    inline DeleteBasePathMappingRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name of the <a>BasePathMapping</a> resource to delete.</p>
     */
    inline DeleteBasePathMappingRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name of the <a>BasePathMapping</a> resource to delete.</p>
     */
    inline DeleteBasePathMappingRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>The base path name of the <a>BasePathMapping</a> resource to delete.</p>
     */
    inline const Aws::String& GetBasePath() const{ return m_basePath; }

    /**
     * <p>The base path name of the <a>BasePathMapping</a> resource to delete.</p>
     */
    inline void SetBasePath(const Aws::String& value) { m_basePathHasBeenSet = true; m_basePath = value; }

    /**
     * <p>The base path name of the <a>BasePathMapping</a> resource to delete.</p>
     */
    inline void SetBasePath(Aws::String&& value) { m_basePathHasBeenSet = true; m_basePath = value; }

    /**
     * <p>The base path name of the <a>BasePathMapping</a> resource to delete.</p>
     */
    inline void SetBasePath(const char* value) { m_basePathHasBeenSet = true; m_basePath.assign(value); }

    /**
     * <p>The base path name of the <a>BasePathMapping</a> resource to delete.</p>
     */
    inline DeleteBasePathMappingRequest& WithBasePath(const Aws::String& value) { SetBasePath(value); return *this;}

    /**
     * <p>The base path name of the <a>BasePathMapping</a> resource to delete.</p>
     */
    inline DeleteBasePathMappingRequest& WithBasePath(Aws::String&& value) { SetBasePath(value); return *this;}

    /**
     * <p>The base path name of the <a>BasePathMapping</a> resource to delete.</p>
     */
    inline DeleteBasePathMappingRequest& WithBasePath(const char* value) { SetBasePath(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::String m_basePath;
    bool m_basePathHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
