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
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53domains/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The UpdateTagsForDomainRequest includes the following elements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateTagsForDomainRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API UpdateTagsForDomainRequest : public Route53DomainsRequest
  {
  public:
    UpdateTagsForDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTagsForDomain"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The domain for which you want to add or update tags.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain for which you want to add or update tags.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain for which you want to add or update tags.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain for which you want to add or update tags.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain for which you want to add or update tags.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain for which you want to add or update tags.</p>
     */
    inline UpdateTagsForDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain for which you want to add or update tags.</p>
     */
    inline UpdateTagsForDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain for which you want to add or update tags.</p>
     */
    inline UpdateTagsForDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>A list of the tag keys and values that you want to add or update. If you
     * specify a key that already exists, the corresponding value will be replaced.</p>
     */
    inline const Aws::Vector<Tag>& GetTagsToUpdate() const{ return m_tagsToUpdate; }

    /**
     * <p>A list of the tag keys and values that you want to add or update. If you
     * specify a key that already exists, the corresponding value will be replaced.</p>
     */
    inline bool TagsToUpdateHasBeenSet() const { return m_tagsToUpdateHasBeenSet; }

    /**
     * <p>A list of the tag keys and values that you want to add or update. If you
     * specify a key that already exists, the corresponding value will be replaced.</p>
     */
    inline void SetTagsToUpdate(const Aws::Vector<Tag>& value) { m_tagsToUpdateHasBeenSet = true; m_tagsToUpdate = value; }

    /**
     * <p>A list of the tag keys and values that you want to add or update. If you
     * specify a key that already exists, the corresponding value will be replaced.</p>
     */
    inline void SetTagsToUpdate(Aws::Vector<Tag>&& value) { m_tagsToUpdateHasBeenSet = true; m_tagsToUpdate = std::move(value); }

    /**
     * <p>A list of the tag keys and values that you want to add or update. If you
     * specify a key that already exists, the corresponding value will be replaced.</p>
     */
    inline UpdateTagsForDomainRequest& WithTagsToUpdate(const Aws::Vector<Tag>& value) { SetTagsToUpdate(value); return *this;}

    /**
     * <p>A list of the tag keys and values that you want to add or update. If you
     * specify a key that already exists, the corresponding value will be replaced.</p>
     */
    inline UpdateTagsForDomainRequest& WithTagsToUpdate(Aws::Vector<Tag>&& value) { SetTagsToUpdate(std::move(value)); return *this;}

    /**
     * <p>A list of the tag keys and values that you want to add or update. If you
     * specify a key that already exists, the corresponding value will be replaced.</p>
     */
    inline UpdateTagsForDomainRequest& AddTagsToUpdate(const Tag& value) { m_tagsToUpdateHasBeenSet = true; m_tagsToUpdate.push_back(value); return *this; }

    /**
     * <p>A list of the tag keys and values that you want to add or update. If you
     * specify a key that already exists, the corresponding value will be replaced.</p>
     */
    inline UpdateTagsForDomainRequest& AddTagsToUpdate(Tag&& value) { m_tagsToUpdateHasBeenSet = true; m_tagsToUpdate.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::Vector<Tag> m_tagsToUpdate;
    bool m_tagsToUpdateHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
