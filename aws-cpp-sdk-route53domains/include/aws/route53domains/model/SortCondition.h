/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/model/ListDomainsAttributeName.h>
#include <aws/route53domains/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>Information for sorting a list of domains.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/SortCondition">AWS
   * API Reference</a></p>
   */
  class SortCondition
  {
  public:
    AWS_ROUTE53DOMAINS_API SortCondition();
    AWS_ROUTE53DOMAINS_API SortCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API SortCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Field to be used for sorting the list of domains. It can be either the name
     * or the expiration for a domain. Note that if <code>filterCondition</code> is
     * used in the same <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains__ListDomains.html">ListDomains</a>
     * call, the field used for sorting has to be the same as the field used for
     * filtering.</p>
     */
    inline const ListDomainsAttributeName& GetName() const{ return m_name; }

    /**
     * <p>Field to be used for sorting the list of domains. It can be either the name
     * or the expiration for a domain. Note that if <code>filterCondition</code> is
     * used in the same <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains__ListDomains.html">ListDomains</a>
     * call, the field used for sorting has to be the same as the field used for
     * filtering.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Field to be used for sorting the list of domains. It can be either the name
     * or the expiration for a domain. Note that if <code>filterCondition</code> is
     * used in the same <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains__ListDomains.html">ListDomains</a>
     * call, the field used for sorting has to be the same as the field used for
     * filtering.</p>
     */
    inline void SetName(const ListDomainsAttributeName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Field to be used for sorting the list of domains. It can be either the name
     * or the expiration for a domain. Note that if <code>filterCondition</code> is
     * used in the same <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains__ListDomains.html">ListDomains</a>
     * call, the field used for sorting has to be the same as the field used for
     * filtering.</p>
     */
    inline void SetName(ListDomainsAttributeName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Field to be used for sorting the list of domains. It can be either the name
     * or the expiration for a domain. Note that if <code>filterCondition</code> is
     * used in the same <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains__ListDomains.html">ListDomains</a>
     * call, the field used for sorting has to be the same as the field used for
     * filtering.</p>
     */
    inline SortCondition& WithName(const ListDomainsAttributeName& value) { SetName(value); return *this;}

    /**
     * <p>Field to be used for sorting the list of domains. It can be either the name
     * or the expiration for a domain. Note that if <code>filterCondition</code> is
     * used in the same <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains__ListDomains.html">ListDomains</a>
     * call, the field used for sorting has to be the same as the field used for
     * filtering.</p>
     */
    inline SortCondition& WithName(ListDomainsAttributeName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The sort order for a list of domains. Either ascending (ASC) or descending
     * (DES).</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order for a list of domains. Either ascending (ASC) or descending
     * (DES).</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order for a list of domains. Either ascending (ASC) or descending
     * (DES).</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order for a list of domains. Either ascending (ASC) or descending
     * (DES).</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order for a list of domains. Either ascending (ASC) or descending
     * (DES).</p>
     */
    inline SortCondition& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order for a list of domains. Either ascending (ASC) or descending
     * (DES).</p>
     */
    inline SortCondition& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    ListDomainsAttributeName m_name;
    bool m_nameHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
