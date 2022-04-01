﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Request to describe a <a>BasePathMapping</a> resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetBasePathMappingRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetBasePathMappingRequest : public APIGatewayRequest
  {
  public:
    GetBasePathMappingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBasePathMapping"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>[Required] The domain name of the <a>BasePathMapping</a> resource to be
     * described.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>[Required] The domain name of the <a>BasePathMapping</a> resource to be
     * described.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>[Required] The domain name of the <a>BasePathMapping</a> resource to be
     * described.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>[Required] The domain name of the <a>BasePathMapping</a> resource to be
     * described.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>[Required] The domain name of the <a>BasePathMapping</a> resource to be
     * described.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>[Required] The domain name of the <a>BasePathMapping</a> resource to be
     * described.</p>
     */
    inline GetBasePathMappingRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>[Required] The domain name of the <a>BasePathMapping</a> resource to be
     * described.</p>
     */
    inline GetBasePathMappingRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>[Required] The domain name of the <a>BasePathMapping</a> resource to be
     * described.</p>
     */
    inline GetBasePathMappingRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>[Required] The base path name that callers of the API must provide as part of
     * the URL after the domain name. This value must be unique for all of the mappings
     * across a single API. Specify '(none)' if you do not want callers to specify any
     * base path name after the domain name.</p>
     */
    inline const Aws::String& GetBasePath() const{ return m_basePath; }

    /**
     * <p>[Required] The base path name that callers of the API must provide as part of
     * the URL after the domain name. This value must be unique for all of the mappings
     * across a single API. Specify '(none)' if you do not want callers to specify any
     * base path name after the domain name.</p>
     */
    inline bool BasePathHasBeenSet() const { return m_basePathHasBeenSet; }

    /**
     * <p>[Required] The base path name that callers of the API must provide as part of
     * the URL after the domain name. This value must be unique for all of the mappings
     * across a single API. Specify '(none)' if you do not want callers to specify any
     * base path name after the domain name.</p>
     */
    inline void SetBasePath(const Aws::String& value) { m_basePathHasBeenSet = true; m_basePath = value; }

    /**
     * <p>[Required] The base path name that callers of the API must provide as part of
     * the URL after the domain name. This value must be unique for all of the mappings
     * across a single API. Specify '(none)' if you do not want callers to specify any
     * base path name after the domain name.</p>
     */
    inline void SetBasePath(Aws::String&& value) { m_basePathHasBeenSet = true; m_basePath = std::move(value); }

    /**
     * <p>[Required] The base path name that callers of the API must provide as part of
     * the URL after the domain name. This value must be unique for all of the mappings
     * across a single API. Specify '(none)' if you do not want callers to specify any
     * base path name after the domain name.</p>
     */
    inline void SetBasePath(const char* value) { m_basePathHasBeenSet = true; m_basePath.assign(value); }

    /**
     * <p>[Required] The base path name that callers of the API must provide as part of
     * the URL after the domain name. This value must be unique for all of the mappings
     * across a single API. Specify '(none)' if you do not want callers to specify any
     * base path name after the domain name.</p>
     */
    inline GetBasePathMappingRequest& WithBasePath(const Aws::String& value) { SetBasePath(value); return *this;}

    /**
     * <p>[Required] The base path name that callers of the API must provide as part of
     * the URL after the domain name. This value must be unique for all of the mappings
     * across a single API. Specify '(none)' if you do not want callers to specify any
     * base path name after the domain name.</p>
     */
    inline GetBasePathMappingRequest& WithBasePath(Aws::String&& value) { SetBasePath(std::move(value)); return *this;}

    /**
     * <p>[Required] The base path name that callers of the API must provide as part of
     * the URL after the domain name. This value must be unique for all of the mappings
     * across a single API. Specify '(none)' if you do not want callers to specify any
     * base path name after the domain name.</p>
     */
    inline GetBasePathMappingRequest& WithBasePath(const char* value) { SetBasePath(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_basePath;
    bool m_basePathHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
