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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API CreateDomainRequest : public LightsailRequest
  {
  public:
    CreateDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDomain"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The domain name to manage (e.g., <code>example.com</code>).</p> <note> <p>You
     * cannot register a new domain name using Lightsail. You must register a domain
     * name using Amazon Route 53 or another domain name registrar. If you have already
     * registered your domain, you can enter its name in this parameter to manage the
     * DNS records for that domain.</p> </note>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name to manage (e.g., <code>example.com</code>).</p> <note> <p>You
     * cannot register a new domain name using Lightsail. You must register a domain
     * name using Amazon Route 53 or another domain name registrar. If you have already
     * registered your domain, you can enter its name in this parameter to manage the
     * DNS records for that domain.</p> </note>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain name to manage (e.g., <code>example.com</code>).</p> <note> <p>You
     * cannot register a new domain name using Lightsail. You must register a domain
     * name using Amazon Route 53 or another domain name registrar. If you have already
     * registered your domain, you can enter its name in this parameter to manage the
     * DNS records for that domain.</p> </note>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name to manage (e.g., <code>example.com</code>).</p> <note> <p>You
     * cannot register a new domain name using Lightsail. You must register a domain
     * name using Amazon Route 53 or another domain name registrar. If you have already
     * registered your domain, you can enter its name in this parameter to manage the
     * DNS records for that domain.</p> </note>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain name to manage (e.g., <code>example.com</code>).</p> <note> <p>You
     * cannot register a new domain name using Lightsail. You must register a domain
     * name using Amazon Route 53 or another domain name registrar. If you have already
     * registered your domain, you can enter its name in this parameter to manage the
     * DNS records for that domain.</p> </note>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name to manage (e.g., <code>example.com</code>).</p> <note> <p>You
     * cannot register a new domain name using Lightsail. You must register a domain
     * name using Amazon Route 53 or another domain name registrar. If you have already
     * registered your domain, you can enter its name in this parameter to manage the
     * DNS records for that domain.</p> </note>
     */
    inline CreateDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name to manage (e.g., <code>example.com</code>).</p> <note> <p>You
     * cannot register a new domain name using Lightsail. You must register a domain
     * name using Amazon Route 53 or another domain name registrar. If you have already
     * registered your domain, you can enter its name in this parameter to manage the
     * DNS records for that domain.</p> </note>
     */
    inline CreateDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name to manage (e.g., <code>example.com</code>).</p> <note> <p>You
     * cannot register a new domain name using Lightsail. You must register a domain
     * name using Amazon Route 53 or another domain name registrar. If you have already
     * registered your domain, you can enter its name in this parameter to manage the
     * DNS records for that domain.</p> </note>
     */
    inline CreateDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline CreateDomainRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline CreateDomainRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline CreateDomainRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline CreateDomainRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
