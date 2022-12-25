/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateDomainRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CreateDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDomain"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The domain name to manage (e.g., <code>example.com</code>).</p>  <p>You
     * cannot register a new domain name using Lightsail. You must register a domain
     * name using Amazon Route 53 or another domain name registrar. If you have already
     * registered your domain, you can enter its name in this parameter to manage the
     * DNS records for that domain using Lightsail.</p> 
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name to manage (e.g., <code>example.com</code>).</p>  <p>You
     * cannot register a new domain name using Lightsail. You must register a domain
     * name using Amazon Route 53 or another domain name registrar. If you have already
     * registered your domain, you can enter its name in this parameter to manage the
     * DNS records for that domain using Lightsail.</p> 
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain name to manage (e.g., <code>example.com</code>).</p>  <p>You
     * cannot register a new domain name using Lightsail. You must register a domain
     * name using Amazon Route 53 or another domain name registrar. If you have already
     * registered your domain, you can enter its name in this parameter to manage the
     * DNS records for that domain using Lightsail.</p> 
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name to manage (e.g., <code>example.com</code>).</p>  <p>You
     * cannot register a new domain name using Lightsail. You must register a domain
     * name using Amazon Route 53 or another domain name registrar. If you have already
     * registered your domain, you can enter its name in this parameter to manage the
     * DNS records for that domain using Lightsail.</p> 
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain name to manage (e.g., <code>example.com</code>).</p>  <p>You
     * cannot register a new domain name using Lightsail. You must register a domain
     * name using Amazon Route 53 or another domain name registrar. If you have already
     * registered your domain, you can enter its name in this parameter to manage the
     * DNS records for that domain using Lightsail.</p> 
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name to manage (e.g., <code>example.com</code>).</p>  <p>You
     * cannot register a new domain name using Lightsail. You must register a domain
     * name using Amazon Route 53 or another domain name registrar. If you have already
     * registered your domain, you can enter its name in this parameter to manage the
     * DNS records for that domain using Lightsail.</p> 
     */
    inline CreateDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name to manage (e.g., <code>example.com</code>).</p>  <p>You
     * cannot register a new domain name using Lightsail. You must register a domain
     * name using Amazon Route 53 or another domain name registrar. If you have already
     * registered your domain, you can enter its name in this parameter to manage the
     * DNS records for that domain using Lightsail.</p> 
     */
    inline CreateDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name to manage (e.g., <code>example.com</code>).</p>  <p>You
     * cannot register a new domain name using Lightsail. You must register a domain
     * name using Amazon Route 53 or another domain name registrar. If you have already
     * registered your domain, you can enter its name in this parameter to manage the
     * DNS records for that domain using Lightsail.</p> 
     */
    inline CreateDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateDomainRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateDomainRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateDomainRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateDomainRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
