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
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The DeleteTagsForDomainRequest includes the following elements.</p>
   */
  class AWS_ROUTE53DOMAINS_API DeleteTagsForDomainRequest : public Route53DomainsRequest
  {
  public:
    DeleteTagsForDomainRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The domain for which you want to delete one or more tags.</p> <p>The name of
     * a domain.</p> <p>Type: String</p> <p>Default: None</p> <p>Constraints: The
     * domain name can contain only the letters a through z, the numbers 0 through 9,
     * and hyphen (-). Hyphens are allowed only when they&apos;re surrounded by
     * letters, numbers, or other hyphens. You can&apos;t specify a hyphen at the
     * beginning or end of a label. To specify an Internationalized Domain Name, you
     * must convert the name to Punycode.</p> <p>Required: Yes</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain for which you want to delete one or more tags.</p> <p>The name of
     * a domain.</p> <p>Type: String</p> <p>Default: None</p> <p>Constraints: The
     * domain name can contain only the letters a through z, the numbers 0 through 9,
     * and hyphen (-). Hyphens are allowed only when they&apos;re surrounded by
     * letters, numbers, or other hyphens. You can&apos;t specify a hyphen at the
     * beginning or end of a label. To specify an Internationalized Domain Name, you
     * must convert the name to Punycode.</p> <p>Required: Yes</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain for which you want to delete one or more tags.</p> <p>The name of
     * a domain.</p> <p>Type: String</p> <p>Default: None</p> <p>Constraints: The
     * domain name can contain only the letters a through z, the numbers 0 through 9,
     * and hyphen (-). Hyphens are allowed only when they&apos;re surrounded by
     * letters, numbers, or other hyphens. You can&apos;t specify a hyphen at the
     * beginning or end of a label. To specify an Internationalized Domain Name, you
     * must convert the name to Punycode.</p> <p>Required: Yes</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain for which you want to delete one or more tags.</p> <p>The name of
     * a domain.</p> <p>Type: String</p> <p>Default: None</p> <p>Constraints: The
     * domain name can contain only the letters a through z, the numbers 0 through 9,
     * and hyphen (-). Hyphens are allowed only when they&apos;re surrounded by
     * letters, numbers, or other hyphens. You can&apos;t specify a hyphen at the
     * beginning or end of a label. To specify an Internationalized Domain Name, you
     * must convert the name to Punycode.</p> <p>Required: Yes</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain for which you want to delete one or more tags.</p> <p>The name of
     * a domain.</p> <p>Type: String</p> <p>Default: None</p> <p>Constraints: The
     * domain name can contain only the letters a through z, the numbers 0 through 9,
     * and hyphen (-). Hyphens are allowed only when they&apos;re surrounded by
     * letters, numbers, or other hyphens. You can&apos;t specify a hyphen at the
     * beginning or end of a label. To specify an Internationalized Domain Name, you
     * must convert the name to Punycode.</p> <p>Required: Yes</p>
     */
    inline DeleteTagsForDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain for which you want to delete one or more tags.</p> <p>The name of
     * a domain.</p> <p>Type: String</p> <p>Default: None</p> <p>Constraints: The
     * domain name can contain only the letters a through z, the numbers 0 through 9,
     * and hyphen (-). Hyphens are allowed only when they&apos;re surrounded by
     * letters, numbers, or other hyphens. You can&apos;t specify a hyphen at the
     * beginning or end of a label. To specify an Internationalized Domain Name, you
     * must convert the name to Punycode.</p> <p>Required: Yes</p>
     */
    inline DeleteTagsForDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain for which you want to delete one or more tags.</p> <p>The name of
     * a domain.</p> <p>Type: String</p> <p>Default: None</p> <p>Constraints: The
     * domain name can contain only the letters a through z, the numbers 0 through 9,
     * and hyphen (-). Hyphens are allowed only when they&apos;re surrounded by
     * letters, numbers, or other hyphens. You can&apos;t specify a hyphen at the
     * beginning or end of a label. To specify an Internationalized Domain Name, you
     * must convert the name to Punycode.</p> <p>Required: Yes</p>
     */
    inline DeleteTagsForDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>A list of tag keys to delete.</p> <p>Type: A list that contains the keys of
     * the tags that you want to delete.</p> <p>Default: None</p> <p>Required: No</p>'>
     */
    inline const Aws::Vector<Aws::String>& GetTagsToDelete() const{ return m_tagsToDelete; }

    /**
     * <p>A list of tag keys to delete.</p> <p>Type: A list that contains the keys of
     * the tags that you want to delete.</p> <p>Default: None</p> <p>Required: No</p>'>
     */
    inline void SetTagsToDelete(const Aws::Vector<Aws::String>& value) { m_tagsToDeleteHasBeenSet = true; m_tagsToDelete = value; }

    /**
     * <p>A list of tag keys to delete.</p> <p>Type: A list that contains the keys of
     * the tags that you want to delete.</p> <p>Default: None</p> <p>Required: No</p>'>
     */
    inline void SetTagsToDelete(Aws::Vector<Aws::String>&& value) { m_tagsToDeleteHasBeenSet = true; m_tagsToDelete = value; }

    /**
     * <p>A list of tag keys to delete.</p> <p>Type: A list that contains the keys of
     * the tags that you want to delete.</p> <p>Default: None</p> <p>Required: No</p>'>
     */
    inline DeleteTagsForDomainRequest& WithTagsToDelete(const Aws::Vector<Aws::String>& value) { SetTagsToDelete(value); return *this;}

    /**
     * <p>A list of tag keys to delete.</p> <p>Type: A list that contains the keys of
     * the tags that you want to delete.</p> <p>Default: None</p> <p>Required: No</p>'>
     */
    inline DeleteTagsForDomainRequest& WithTagsToDelete(Aws::Vector<Aws::String>&& value) { SetTagsToDelete(value); return *this;}

    /**
     * <p>A list of tag keys to delete.</p> <p>Type: A list that contains the keys of
     * the tags that you want to delete.</p> <p>Default: None</p> <p>Required: No</p>'>
     */
    inline DeleteTagsForDomainRequest& AddTagsToDelete(const Aws::String& value) { m_tagsToDeleteHasBeenSet = true; m_tagsToDelete.push_back(value); return *this; }

    /**
     * <p>A list of tag keys to delete.</p> <p>Type: A list that contains the keys of
     * the tags that you want to delete.</p> <p>Default: None</p> <p>Required: No</p>'>
     */
    inline DeleteTagsForDomainRequest& AddTagsToDelete(Aws::String&& value) { m_tagsToDeleteHasBeenSet = true; m_tagsToDelete.push_back(value); return *this; }

    /**
     * <p>A list of tag keys to delete.</p> <p>Type: A list that contains the keys of
     * the tags that you want to delete.</p> <p>Default: None</p> <p>Required: No</p>'>
     */
    inline DeleteTagsForDomainRequest& AddTagsToDelete(const char* value) { m_tagsToDeleteHasBeenSet = true; m_tagsToDelete.push_back(value); return *this; }

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::Vector<Aws::String> m_tagsToDelete;
    bool m_tagsToDeleteHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
