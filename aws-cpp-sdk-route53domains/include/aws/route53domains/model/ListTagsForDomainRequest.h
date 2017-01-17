﻿/*
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
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The ListTagsForDomainRequest includes the following elements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ListTagsForDomainRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API ListTagsForDomainRequest : public Route53DomainsRequest
  {
  public:
    ListTagsForDomainRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The domain for which you want to get a list of tags.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain for which you want to get a list of tags.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain for which you want to get a list of tags.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain for which you want to get a list of tags.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain for which you want to get a list of tags.</p>
     */
    inline ListTagsForDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain for which you want to get a list of tags.</p>
     */
    inline ListTagsForDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain for which you want to get a list of tags.</p>
     */
    inline ListTagsForDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
