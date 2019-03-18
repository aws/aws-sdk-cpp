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
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/PredicateType.h>
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
namespace WAF
{
namespace Model
{

  /**
   * <p>Specifies the <a>ByteMatchSet</a>, <a>IPSet</a>, <a>SqlInjectionMatchSet</a>,
   * <a>XssMatchSet</a>, <a>RegexMatchSet</a>, <a>GeoMatchSet</a>, and
   * <a>SizeConstraintSet</a> objects that you want to add to a <code>Rule</code>
   * and, for each object, indicates whether you want to negate the settings, for
   * example, requests that do NOT originate from the IP address 192.0.2.44.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/Predicate">AWS API
   * Reference</a></p>
   */
  class AWS_WAF_API Predicate
  {
  public:
    Predicate();
    Predicate(Aws::Utils::Json::JsonView jsonValue);
    Predicate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Set <code>Negated</code> to <code>False</code> if you want AWS WAF to allow,
     * block, or count requests based on the settings in the specified
     * <a>ByteMatchSet</a>, <a>IPSet</a>, <a>SqlInjectionMatchSet</a>,
     * <a>XssMatchSet</a>, <a>RegexMatchSet</a>, <a>GeoMatchSet</a>, or
     * <a>SizeConstraintSet</a>. For example, if an <code>IPSet</code> includes the IP
     * address <code>192.0.2.44</code>, AWS WAF will allow or block requests based on
     * that IP address.</p> <p>Set <code>Negated</code> to <code>True</code> if you
     * want AWS WAF to allow or block a request based on the negation of the settings
     * in the <a>ByteMatchSet</a>, <a>IPSet</a>, <a>SqlInjectionMatchSet</a>,
     * <a>XssMatchSet</a>, <a>RegexMatchSet</a>, <a>GeoMatchSet</a>, or
     * <a>SizeConstraintSet</a>. For example, if an <code>IPSet</code> includes the IP
     * address <code>192.0.2.44</code>, AWS WAF will allow, block, or count requests
     * based on all IP addresses <i>except</i> <code>192.0.2.44</code>.</p>
     */
    inline bool GetNegated() const{ return m_negated; }

    /**
     * <p>Set <code>Negated</code> to <code>False</code> if you want AWS WAF to allow,
     * block, or count requests based on the settings in the specified
     * <a>ByteMatchSet</a>, <a>IPSet</a>, <a>SqlInjectionMatchSet</a>,
     * <a>XssMatchSet</a>, <a>RegexMatchSet</a>, <a>GeoMatchSet</a>, or
     * <a>SizeConstraintSet</a>. For example, if an <code>IPSet</code> includes the IP
     * address <code>192.0.2.44</code>, AWS WAF will allow or block requests based on
     * that IP address.</p> <p>Set <code>Negated</code> to <code>True</code> if you
     * want AWS WAF to allow or block a request based on the negation of the settings
     * in the <a>ByteMatchSet</a>, <a>IPSet</a>, <a>SqlInjectionMatchSet</a>,
     * <a>XssMatchSet</a>, <a>RegexMatchSet</a>, <a>GeoMatchSet</a>, or
     * <a>SizeConstraintSet</a>. For example, if an <code>IPSet</code> includes the IP
     * address <code>192.0.2.44</code>, AWS WAF will allow, block, or count requests
     * based on all IP addresses <i>except</i> <code>192.0.2.44</code>.</p>
     */
    inline bool NegatedHasBeenSet() const { return m_negatedHasBeenSet; }

    /**
     * <p>Set <code>Negated</code> to <code>False</code> if you want AWS WAF to allow,
     * block, or count requests based on the settings in the specified
     * <a>ByteMatchSet</a>, <a>IPSet</a>, <a>SqlInjectionMatchSet</a>,
     * <a>XssMatchSet</a>, <a>RegexMatchSet</a>, <a>GeoMatchSet</a>, or
     * <a>SizeConstraintSet</a>. For example, if an <code>IPSet</code> includes the IP
     * address <code>192.0.2.44</code>, AWS WAF will allow or block requests based on
     * that IP address.</p> <p>Set <code>Negated</code> to <code>True</code> if you
     * want AWS WAF to allow or block a request based on the negation of the settings
     * in the <a>ByteMatchSet</a>, <a>IPSet</a>, <a>SqlInjectionMatchSet</a>,
     * <a>XssMatchSet</a>, <a>RegexMatchSet</a>, <a>GeoMatchSet</a>, or
     * <a>SizeConstraintSet</a>. For example, if an <code>IPSet</code> includes the IP
     * address <code>192.0.2.44</code>, AWS WAF will allow, block, or count requests
     * based on all IP addresses <i>except</i> <code>192.0.2.44</code>.</p>
     */
    inline void SetNegated(bool value) { m_negatedHasBeenSet = true; m_negated = value; }

    /**
     * <p>Set <code>Negated</code> to <code>False</code> if you want AWS WAF to allow,
     * block, or count requests based on the settings in the specified
     * <a>ByteMatchSet</a>, <a>IPSet</a>, <a>SqlInjectionMatchSet</a>,
     * <a>XssMatchSet</a>, <a>RegexMatchSet</a>, <a>GeoMatchSet</a>, or
     * <a>SizeConstraintSet</a>. For example, if an <code>IPSet</code> includes the IP
     * address <code>192.0.2.44</code>, AWS WAF will allow or block requests based on
     * that IP address.</p> <p>Set <code>Negated</code> to <code>True</code> if you
     * want AWS WAF to allow or block a request based on the negation of the settings
     * in the <a>ByteMatchSet</a>, <a>IPSet</a>, <a>SqlInjectionMatchSet</a>,
     * <a>XssMatchSet</a>, <a>RegexMatchSet</a>, <a>GeoMatchSet</a>, or
     * <a>SizeConstraintSet</a>. For example, if an <code>IPSet</code> includes the IP
     * address <code>192.0.2.44</code>, AWS WAF will allow, block, or count requests
     * based on all IP addresses <i>except</i> <code>192.0.2.44</code>.</p>
     */
    inline Predicate& WithNegated(bool value) { SetNegated(value); return *this;}


    /**
     * <p>The type of predicate in a <code>Rule</code>, such as <code>ByteMatch</code>
     * or <code>IPSet</code>.</p>
     */
    inline const PredicateType& GetType() const{ return m_type; }

    /**
     * <p>The type of predicate in a <code>Rule</code>, such as <code>ByteMatch</code>
     * or <code>IPSet</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of predicate in a <code>Rule</code>, such as <code>ByteMatch</code>
     * or <code>IPSet</code>.</p>
     */
    inline void SetType(const PredicateType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of predicate in a <code>Rule</code>, such as <code>ByteMatch</code>
     * or <code>IPSet</code>.</p>
     */
    inline void SetType(PredicateType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of predicate in a <code>Rule</code>, such as <code>ByteMatch</code>
     * or <code>IPSet</code>.</p>
     */
    inline Predicate& WithType(const PredicateType& value) { SetType(value); return *this;}

    /**
     * <p>The type of predicate in a <code>Rule</code>, such as <code>ByteMatch</code>
     * or <code>IPSet</code>.</p>
     */
    inline Predicate& WithType(PredicateType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for a predicate in a <code>Rule</code>, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. The ID is returned by the
     * corresponding <code>Create</code> or <code>List</code> command.</p>
     */
    inline const Aws::String& GetDataId() const{ return m_dataId; }

    /**
     * <p>A unique identifier for a predicate in a <code>Rule</code>, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. The ID is returned by the
     * corresponding <code>Create</code> or <code>List</code> command.</p>
     */
    inline bool DataIdHasBeenSet() const { return m_dataIdHasBeenSet; }

    /**
     * <p>A unique identifier for a predicate in a <code>Rule</code>, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. The ID is returned by the
     * corresponding <code>Create</code> or <code>List</code> command.</p>
     */
    inline void SetDataId(const Aws::String& value) { m_dataIdHasBeenSet = true; m_dataId = value; }

    /**
     * <p>A unique identifier for a predicate in a <code>Rule</code>, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. The ID is returned by the
     * corresponding <code>Create</code> or <code>List</code> command.</p>
     */
    inline void SetDataId(Aws::String&& value) { m_dataIdHasBeenSet = true; m_dataId = std::move(value); }

    /**
     * <p>A unique identifier for a predicate in a <code>Rule</code>, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. The ID is returned by the
     * corresponding <code>Create</code> or <code>List</code> command.</p>
     */
    inline void SetDataId(const char* value) { m_dataIdHasBeenSet = true; m_dataId.assign(value); }

    /**
     * <p>A unique identifier for a predicate in a <code>Rule</code>, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. The ID is returned by the
     * corresponding <code>Create</code> or <code>List</code> command.</p>
     */
    inline Predicate& WithDataId(const Aws::String& value) { SetDataId(value); return *this;}

    /**
     * <p>A unique identifier for a predicate in a <code>Rule</code>, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. The ID is returned by the
     * corresponding <code>Create</code> or <code>List</code> command.</p>
     */
    inline Predicate& WithDataId(Aws::String&& value) { SetDataId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a predicate in a <code>Rule</code>, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. The ID is returned by the
     * corresponding <code>Create</code> or <code>List</code> command.</p>
     */
    inline Predicate& WithDataId(const char* value) { SetDataId(value); return *this;}

  private:

    bool m_negated;
    bool m_negatedHasBeenSet;

    PredicateType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_dataId;
    bool m_dataIdHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
