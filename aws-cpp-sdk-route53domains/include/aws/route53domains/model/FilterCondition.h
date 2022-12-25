/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/model/ListDomainsAttributeName.h>
#include <aws/route53domains/model/Operator.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Information for the filtering of a list of domains returned by <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains__ListDomains.html">ListDomains</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/FilterCondition">AWS
   * API Reference</a></p>
   */
  class FilterCondition
  {
  public:
    AWS_ROUTE53DOMAINS_API FilterCondition();
    AWS_ROUTE53DOMAINS_API FilterCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API FilterCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the field which should be used for filtering the list of domains.</p>
     */
    inline const ListDomainsAttributeName& GetName() const{ return m_name; }

    /**
     * <p>Name of the field which should be used for filtering the list of domains.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the field which should be used for filtering the list of domains.</p>
     */
    inline void SetName(const ListDomainsAttributeName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the field which should be used for filtering the list of domains.</p>
     */
    inline void SetName(ListDomainsAttributeName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the field which should be used for filtering the list of domains.</p>
     */
    inline FilterCondition& WithName(const ListDomainsAttributeName& value) { SetName(value); return *this;}

    /**
     * <p>Name of the field which should be used for filtering the list of domains.</p>
     */
    inline FilterCondition& WithName(ListDomainsAttributeName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The operator values for filtering domain names. The values can be:</p> <ul>
     * <li> <p> <code>LE</code>: Less than, or equal to</p> </li> <li> <p>
     * <code>GE</code>: Greater than, or equal to</p> </li> <li> <p>
     * <code>BEGINS_WITH</code>: Begins with</p> </li> </ul>
     */
    inline const Operator& GetOperator() const{ return m_operator; }

    /**
     * <p>The operator values for filtering domain names. The values can be:</p> <ul>
     * <li> <p> <code>LE</code>: Less than, or equal to</p> </li> <li> <p>
     * <code>GE</code>: Greater than, or equal to</p> </li> <li> <p>
     * <code>BEGINS_WITH</code>: Begins with</p> </li> </ul>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operator values for filtering domain names. The values can be:</p> <ul>
     * <li> <p> <code>LE</code>: Less than, or equal to</p> </li> <li> <p>
     * <code>GE</code>: Greater than, or equal to</p> </li> <li> <p>
     * <code>BEGINS_WITH</code>: Begins with</p> </li> </ul>
     */
    inline void SetOperator(const Operator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operator values for filtering domain names. The values can be:</p> <ul>
     * <li> <p> <code>LE</code>: Less than, or equal to</p> </li> <li> <p>
     * <code>GE</code>: Greater than, or equal to</p> </li> <li> <p>
     * <code>BEGINS_WITH</code>: Begins with</p> </li> </ul>
     */
    inline void SetOperator(Operator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operator values for filtering domain names. The values can be:</p> <ul>
     * <li> <p> <code>LE</code>: Less than, or equal to</p> </li> <li> <p>
     * <code>GE</code>: Greater than, or equal to</p> </li> <li> <p>
     * <code>BEGINS_WITH</code>: Begins with</p> </li> </ul>
     */
    inline FilterCondition& WithOperator(const Operator& value) { SetOperator(value); return *this;}

    /**
     * <p>The operator values for filtering domain names. The values can be:</p> <ul>
     * <li> <p> <code>LE</code>: Less than, or equal to</p> </li> <li> <p>
     * <code>GE</code>: Greater than, or equal to</p> </li> <li> <p>
     * <code>BEGINS_WITH</code>: Begins with</p> </li> </ul>
     */
    inline FilterCondition& WithOperator(Operator&& value) { SetOperator(std::move(value)); return *this;}


    /**
     * <p> An array of strings presenting values to compare. Only 1 item in the list is
     * currently supported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p> An array of strings presenting values to compare. Only 1 item in the list is
     * currently supported.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p> An array of strings presenting values to compare. Only 1 item in the list is
     * currently supported.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p> An array of strings presenting values to compare. Only 1 item in the list is
     * currently supported.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p> An array of strings presenting values to compare. Only 1 item in the list is
     * currently supported.</p>
     */
    inline FilterCondition& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p> An array of strings presenting values to compare. Only 1 item in the list is
     * currently supported.</p>
     */
    inline FilterCondition& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p> An array of strings presenting values to compare. Only 1 item in the list is
     * currently supported.</p>
     */
    inline FilterCondition& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p> An array of strings presenting values to compare. Only 1 item in the list is
     * currently supported.</p>
     */
    inline FilterCondition& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p> An array of strings presenting values to compare. Only 1 item in the list is
     * currently supported.</p>
     */
    inline FilterCondition& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    ListDomainsAttributeName m_name;
    bool m_nameHasBeenSet = false;

    Operator m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
