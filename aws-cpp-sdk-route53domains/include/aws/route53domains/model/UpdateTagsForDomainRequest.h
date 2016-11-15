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
#include <aws/route53domains/model/Tag.h>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The UpdateTagsForDomainRequest includes the following elements.</p>
   */
  class AWS_ROUTE53DOMAINS_API UpdateTagsForDomainRequest : public Route53DomainsRequest
  {
  public:
    UpdateTagsForDomainRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The domain for which you want to add or update tags.</p> <p>The name of a
     * domain.</p> <p>Type: String</p> <p>Default: None</p> <p>Constraints: The domain
     * name can contain only the letters a through z, the numbers 0 through 9, and
     * hyphen (-). Hyphens are allowed only when they&apos;re surrounded by letters,
     * numbers, or other hyphens. You can&apos;t specify a hyphen at the beginning or
     * end of a label. To specify an Internationalized Domain Name, you must convert
     * the name to Punycode.</p> <p>Required: Yes</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain for which you want to add or update tags.</p> <p>The name of a
     * domain.</p> <p>Type: String</p> <p>Default: None</p> <p>Constraints: The domain
     * name can contain only the letters a through z, the numbers 0 through 9, and
     * hyphen (-). Hyphens are allowed only when they&apos;re surrounded by letters,
     * numbers, or other hyphens. You can&apos;t specify a hyphen at the beginning or
     * end of a label. To specify an Internationalized Domain Name, you must convert
     * the name to Punycode.</p> <p>Required: Yes</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain for which you want to add or update tags.</p> <p>The name of a
     * domain.</p> <p>Type: String</p> <p>Default: None</p> <p>Constraints: The domain
     * name can contain only the letters a through z, the numbers 0 through 9, and
     * hyphen (-). Hyphens are allowed only when they&apos;re surrounded by letters,
     * numbers, or other hyphens. You can&apos;t specify a hyphen at the beginning or
     * end of a label. To specify an Internationalized Domain Name, you must convert
     * the name to Punycode.</p> <p>Required: Yes</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain for which you want to add or update tags.</p> <p>The name of a
     * domain.</p> <p>Type: String</p> <p>Default: None</p> <p>Constraints: The domain
     * name can contain only the letters a through z, the numbers 0 through 9, and
     * hyphen (-). Hyphens are allowed only when they&apos;re surrounded by letters,
     * numbers, or other hyphens. You can&apos;t specify a hyphen at the beginning or
     * end of a label. To specify an Internationalized Domain Name, you must convert
     * the name to Punycode.</p> <p>Required: Yes</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain for which you want to add or update tags.</p> <p>The name of a
     * domain.</p> <p>Type: String</p> <p>Default: None</p> <p>Constraints: The domain
     * name can contain only the letters a through z, the numbers 0 through 9, and
     * hyphen (-). Hyphens are allowed only when they&apos;re surrounded by letters,
     * numbers, or other hyphens. You can&apos;t specify a hyphen at the beginning or
     * end of a label. To specify an Internationalized Domain Name, you must convert
     * the name to Punycode.</p> <p>Required: Yes</p>
     */
    inline UpdateTagsForDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain for which you want to add or update tags.</p> <p>The name of a
     * domain.</p> <p>Type: String</p> <p>Default: None</p> <p>Constraints: The domain
     * name can contain only the letters a through z, the numbers 0 through 9, and
     * hyphen (-). Hyphens are allowed only when they&apos;re surrounded by letters,
     * numbers, or other hyphens. You can&apos;t specify a hyphen at the beginning or
     * end of a label. To specify an Internationalized Domain Name, you must convert
     * the name to Punycode.</p> <p>Required: Yes</p>
     */
    inline UpdateTagsForDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain for which you want to add or update tags.</p> <p>The name of a
     * domain.</p> <p>Type: String</p> <p>Default: None</p> <p>Constraints: The domain
     * name can contain only the letters a through z, the numbers 0 through 9, and
     * hyphen (-). Hyphens are allowed only when they&apos;re surrounded by letters,
     * numbers, or other hyphens. You can&apos;t specify a hyphen at the beginning or
     * end of a label. To specify an Internationalized Domain Name, you must convert
     * the name to Punycode.</p> <p>Required: Yes</p>
     */
    inline UpdateTagsForDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>A list of the tag keys and values that you want to add or update. If you
     * specify a key that already exists, the corresponding value will be replaced.</p>
     * <p>Type: A complex type containing a list of tags</p> <p>Default: None</p>
     * <p>Required: No</p>'> <p>Each tag includes the following elements:</p> <ul>
     * <li><p>Key</p> <p>The key (name) of a tag.</p> <p>Type: String</p> <p>Default:
     * None</p> <p>Valid values: Unicode characters including alphanumeric, space, and
     * ".:/=+\-@"</p> <p>Constraints: Each key can be 1-128 characters long.</p>
     * <p>Required: Yes</p> </li> <li><p>Value</p> <p>The value of a tag.</p> <p>Type:
     * String</p> <p>Default: None</p> <p>Valid values: Unicode characters including
     * alphanumeric, space, and ".:/=+\-@"</p> <p>Constraints: Each value can be 0-256
     * characters long.</p> <p>Required: Yes</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTagsToUpdate() const{ return m_tagsToUpdate; }

    /**
     * <p>A list of the tag keys and values that you want to add or update. If you
     * specify a key that already exists, the corresponding value will be replaced.</p>
     * <p>Type: A complex type containing a list of tags</p> <p>Default: None</p>
     * <p>Required: No</p>'> <p>Each tag includes the following elements:</p> <ul>
     * <li><p>Key</p> <p>The key (name) of a tag.</p> <p>Type: String</p> <p>Default:
     * None</p> <p>Valid values: Unicode characters including alphanumeric, space, and
     * ".:/=+\-@"</p> <p>Constraints: Each key can be 1-128 characters long.</p>
     * <p>Required: Yes</p> </li> <li><p>Value</p> <p>The value of a tag.</p> <p>Type:
     * String</p> <p>Default: None</p> <p>Valid values: Unicode characters including
     * alphanumeric, space, and ".:/=+\-@"</p> <p>Constraints: Each value can be 0-256
     * characters long.</p> <p>Required: Yes</p> </li> </ul>
     */
    inline void SetTagsToUpdate(const Aws::Vector<Tag>& value) { m_tagsToUpdateHasBeenSet = true; m_tagsToUpdate = value; }

    /**
     * <p>A list of the tag keys and values that you want to add or update. If you
     * specify a key that already exists, the corresponding value will be replaced.</p>
     * <p>Type: A complex type containing a list of tags</p> <p>Default: None</p>
     * <p>Required: No</p>'> <p>Each tag includes the following elements:</p> <ul>
     * <li><p>Key</p> <p>The key (name) of a tag.</p> <p>Type: String</p> <p>Default:
     * None</p> <p>Valid values: Unicode characters including alphanumeric, space, and
     * ".:/=+\-@"</p> <p>Constraints: Each key can be 1-128 characters long.</p>
     * <p>Required: Yes</p> </li> <li><p>Value</p> <p>The value of a tag.</p> <p>Type:
     * String</p> <p>Default: None</p> <p>Valid values: Unicode characters including
     * alphanumeric, space, and ".:/=+\-@"</p> <p>Constraints: Each value can be 0-256
     * characters long.</p> <p>Required: Yes</p> </li> </ul>
     */
    inline void SetTagsToUpdate(Aws::Vector<Tag>&& value) { m_tagsToUpdateHasBeenSet = true; m_tagsToUpdate = value; }

    /**
     * <p>A list of the tag keys and values that you want to add or update. If you
     * specify a key that already exists, the corresponding value will be replaced.</p>
     * <p>Type: A complex type containing a list of tags</p> <p>Default: None</p>
     * <p>Required: No</p>'> <p>Each tag includes the following elements:</p> <ul>
     * <li><p>Key</p> <p>The key (name) of a tag.</p> <p>Type: String</p> <p>Default:
     * None</p> <p>Valid values: Unicode characters including alphanumeric, space, and
     * ".:/=+\-@"</p> <p>Constraints: Each key can be 1-128 characters long.</p>
     * <p>Required: Yes</p> </li> <li><p>Value</p> <p>The value of a tag.</p> <p>Type:
     * String</p> <p>Default: None</p> <p>Valid values: Unicode characters including
     * alphanumeric, space, and ".:/=+\-@"</p> <p>Constraints: Each value can be 0-256
     * characters long.</p> <p>Required: Yes</p> </li> </ul>
     */
    inline UpdateTagsForDomainRequest& WithTagsToUpdate(const Aws::Vector<Tag>& value) { SetTagsToUpdate(value); return *this;}

    /**
     * <p>A list of the tag keys and values that you want to add or update. If you
     * specify a key that already exists, the corresponding value will be replaced.</p>
     * <p>Type: A complex type containing a list of tags</p> <p>Default: None</p>
     * <p>Required: No</p>'> <p>Each tag includes the following elements:</p> <ul>
     * <li><p>Key</p> <p>The key (name) of a tag.</p> <p>Type: String</p> <p>Default:
     * None</p> <p>Valid values: Unicode characters including alphanumeric, space, and
     * ".:/=+\-@"</p> <p>Constraints: Each key can be 1-128 characters long.</p>
     * <p>Required: Yes</p> </li> <li><p>Value</p> <p>The value of a tag.</p> <p>Type:
     * String</p> <p>Default: None</p> <p>Valid values: Unicode characters including
     * alphanumeric, space, and ".:/=+\-@"</p> <p>Constraints: Each value can be 0-256
     * characters long.</p> <p>Required: Yes</p> </li> </ul>
     */
    inline UpdateTagsForDomainRequest& WithTagsToUpdate(Aws::Vector<Tag>&& value) { SetTagsToUpdate(value); return *this;}

    /**
     * <p>A list of the tag keys and values that you want to add or update. If you
     * specify a key that already exists, the corresponding value will be replaced.</p>
     * <p>Type: A complex type containing a list of tags</p> <p>Default: None</p>
     * <p>Required: No</p>'> <p>Each tag includes the following elements:</p> <ul>
     * <li><p>Key</p> <p>The key (name) of a tag.</p> <p>Type: String</p> <p>Default:
     * None</p> <p>Valid values: Unicode characters including alphanumeric, space, and
     * ".:/=+\-@"</p> <p>Constraints: Each key can be 1-128 characters long.</p>
     * <p>Required: Yes</p> </li> <li><p>Value</p> <p>The value of a tag.</p> <p>Type:
     * String</p> <p>Default: None</p> <p>Valid values: Unicode characters including
     * alphanumeric, space, and ".:/=+\-@"</p> <p>Constraints: Each value can be 0-256
     * characters long.</p> <p>Required: Yes</p> </li> </ul>
     */
    inline UpdateTagsForDomainRequest& AddTagsToUpdate(const Tag& value) { m_tagsToUpdateHasBeenSet = true; m_tagsToUpdate.push_back(value); return *this; }

    /**
     * <p>A list of the tag keys and values that you want to add or update. If you
     * specify a key that already exists, the corresponding value will be replaced.</p>
     * <p>Type: A complex type containing a list of tags</p> <p>Default: None</p>
     * <p>Required: No</p>'> <p>Each tag includes the following elements:</p> <ul>
     * <li><p>Key</p> <p>The key (name) of a tag.</p> <p>Type: String</p> <p>Default:
     * None</p> <p>Valid values: Unicode characters including alphanumeric, space, and
     * ".:/=+\-@"</p> <p>Constraints: Each key can be 1-128 characters long.</p>
     * <p>Required: Yes</p> </li> <li><p>Value</p> <p>The value of a tag.</p> <p>Type:
     * String</p> <p>Default: None</p> <p>Valid values: Unicode characters including
     * alphanumeric, space, and ".:/=+\-@"</p> <p>Constraints: Each value can be 0-256
     * characters long.</p> <p>Required: Yes</p> </li> </ul>
     */
    inline UpdateTagsForDomainRequest& AddTagsToUpdate(Tag&& value) { m_tagsToUpdateHasBeenSet = true; m_tagsToUpdate.push_back(value); return *this; }

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::Vector<Tag> m_tagsToUpdate;
    bool m_tagsToUpdateHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
