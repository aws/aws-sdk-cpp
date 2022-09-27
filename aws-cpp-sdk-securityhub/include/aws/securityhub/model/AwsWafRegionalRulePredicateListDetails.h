﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides details about the <code>ByteMatchSet</code>, <code>IPSet</code>,
   * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
   * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, and
   * <code>SizeConstraintSet</code> objects that you want to add to a rule and, for
   * each object, indicates whether you want to negate the settings. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafRegionalRulePredicateListDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsWafRegionalRulePredicateListDetails
  {
  public:
    AwsWafRegionalRulePredicateListDetails();
    AwsWafRegionalRulePredicateListDetails(Aws::Utils::Json::JsonView jsonValue);
    AwsWafRegionalRulePredicateListDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for a predicate in a rule, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. </p>
     */
    inline const Aws::String& GetDataId() const{ return m_dataId; }

    /**
     * <p>A unique identifier for a predicate in a rule, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. </p>
     */
    inline bool DataIdHasBeenSet() const { return m_dataIdHasBeenSet; }

    /**
     * <p>A unique identifier for a predicate in a rule, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. </p>
     */
    inline void SetDataId(const Aws::String& value) { m_dataIdHasBeenSet = true; m_dataId = value; }

    /**
     * <p>A unique identifier for a predicate in a rule, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. </p>
     */
    inline void SetDataId(Aws::String&& value) { m_dataIdHasBeenSet = true; m_dataId = std::move(value); }

    /**
     * <p>A unique identifier for a predicate in a rule, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. </p>
     */
    inline void SetDataId(const char* value) { m_dataIdHasBeenSet = true; m_dataId.assign(value); }

    /**
     * <p>A unique identifier for a predicate in a rule, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. </p>
     */
    inline AwsWafRegionalRulePredicateListDetails& WithDataId(const Aws::String& value) { SetDataId(value); return *this;}

    /**
     * <p>A unique identifier for a predicate in a rule, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. </p>
     */
    inline AwsWafRegionalRulePredicateListDetails& WithDataId(Aws::String&& value) { SetDataId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a predicate in a rule, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. </p>
     */
    inline AwsWafRegionalRulePredicateListDetails& WithDataId(const char* value) { SetDataId(value); return *this;}


    /**
     * <p>Specifies if you want WAF to allow, block, or count requests based on the
     * settings in the <code>ByteMatchSet</code>, <code>IPSet</code>,
     * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
     * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, or
     * <code>SizeConstraintSet</code>. </p>
     */
    inline bool GetNegated() const{ return m_negated; }

    /**
     * <p>Specifies if you want WAF to allow, block, or count requests based on the
     * settings in the <code>ByteMatchSet</code>, <code>IPSet</code>,
     * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
     * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, or
     * <code>SizeConstraintSet</code>. </p>
     */
    inline bool NegatedHasBeenSet() const { return m_negatedHasBeenSet; }

    /**
     * <p>Specifies if you want WAF to allow, block, or count requests based on the
     * settings in the <code>ByteMatchSet</code>, <code>IPSet</code>,
     * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
     * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, or
     * <code>SizeConstraintSet</code>. </p>
     */
    inline void SetNegated(bool value) { m_negatedHasBeenSet = true; m_negated = value; }

    /**
     * <p>Specifies if you want WAF to allow, block, or count requests based on the
     * settings in the <code>ByteMatchSet</code>, <code>IPSet</code>,
     * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
     * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, or
     * <code>SizeConstraintSet</code>. </p>
     */
    inline AwsWafRegionalRulePredicateListDetails& WithNegated(bool value) { SetNegated(value); return *this;}


    /**
     * <p>The type of predicate in a rule, such as <code>ByteMatch</code> or
     * <code>IPSet</code>. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of predicate in a rule, such as <code>ByteMatch</code> or
     * <code>IPSet</code>. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of predicate in a rule, such as <code>ByteMatch</code> or
     * <code>IPSet</code>. </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of predicate in a rule, such as <code>ByteMatch</code> or
     * <code>IPSet</code>. </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of predicate in a rule, such as <code>ByteMatch</code> or
     * <code>IPSet</code>. </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of predicate in a rule, such as <code>ByteMatch</code> or
     * <code>IPSet</code>. </p>
     */
    inline AwsWafRegionalRulePredicateListDetails& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of predicate in a rule, such as <code>ByteMatch</code> or
     * <code>IPSet</code>. </p>
     */
    inline AwsWafRegionalRulePredicateListDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of predicate in a rule, such as <code>ByteMatch</code> or
     * <code>IPSet</code>. </p>
     */
    inline AwsWafRegionalRulePredicateListDetails& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_dataId;
    bool m_dataIdHasBeenSet = false;

    bool m_negated;
    bool m_negatedHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
