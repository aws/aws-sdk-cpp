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
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The DeleteTagsForDomainRequest includes the following elements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DeleteTagsForDomainRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API DeleteTagsForDomainRequest : public Route53DomainsRequest
  {
  public:
    DeleteTagsForDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTagsForDomain"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The domain for which you want to delete one or more tags.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain for which you want to delete one or more tags.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain for which you want to delete one or more tags.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain for which you want to delete one or more tags.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain for which you want to delete one or more tags.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain for which you want to delete one or more tags.</p>
     */
    inline DeleteTagsForDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain for which you want to delete one or more tags.</p>
     */
    inline DeleteTagsForDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain for which you want to delete one or more tags.</p>
     */
    inline DeleteTagsForDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>A list of tag keys to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagsToDelete() const{ return m_tagsToDelete; }

    /**
     * <p>A list of tag keys to delete.</p>
     */
    inline bool TagsToDeleteHasBeenSet() const { return m_tagsToDeleteHasBeenSet; }

    /**
     * <p>A list of tag keys to delete.</p>
     */
    inline void SetTagsToDelete(const Aws::Vector<Aws::String>& value) { m_tagsToDeleteHasBeenSet = true; m_tagsToDelete = value; }

    /**
     * <p>A list of tag keys to delete.</p>
     */
    inline void SetTagsToDelete(Aws::Vector<Aws::String>&& value) { m_tagsToDeleteHasBeenSet = true; m_tagsToDelete = std::move(value); }

    /**
     * <p>A list of tag keys to delete.</p>
     */
    inline DeleteTagsForDomainRequest& WithTagsToDelete(const Aws::Vector<Aws::String>& value) { SetTagsToDelete(value); return *this;}

    /**
     * <p>A list of tag keys to delete.</p>
     */
    inline DeleteTagsForDomainRequest& WithTagsToDelete(Aws::Vector<Aws::String>&& value) { SetTagsToDelete(std::move(value)); return *this;}

    /**
     * <p>A list of tag keys to delete.</p>
     */
    inline DeleteTagsForDomainRequest& AddTagsToDelete(const Aws::String& value) { m_tagsToDeleteHasBeenSet = true; m_tagsToDelete.push_back(value); return *this; }

    /**
     * <p>A list of tag keys to delete.</p>
     */
    inline DeleteTagsForDomainRequest& AddTagsToDelete(Aws::String&& value) { m_tagsToDeleteHasBeenSet = true; m_tagsToDelete.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of tag keys to delete.</p>
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
