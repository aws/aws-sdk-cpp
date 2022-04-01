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
   * <p>A match predicate. A predicate might look for characteristics such as
   * specific IP addresses, geographic locations, or sizes.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafRateBasedRuleMatchPredicate">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsWafRateBasedRuleMatchPredicate
  {
  public:
    AwsWafRateBasedRuleMatchPredicate();
    AwsWafRateBasedRuleMatchPredicate(Aws::Utils::Json::JsonView jsonValue);
    AwsWafRateBasedRuleMatchPredicate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the predicate.</p>
     */
    inline const Aws::String& GetDataId() const{ return m_dataId; }

    /**
     * <p>The unique identifier for the predicate.</p>
     */
    inline bool DataIdHasBeenSet() const { return m_dataIdHasBeenSet; }

    /**
     * <p>The unique identifier for the predicate.</p>
     */
    inline void SetDataId(const Aws::String& value) { m_dataIdHasBeenSet = true; m_dataId = value; }

    /**
     * <p>The unique identifier for the predicate.</p>
     */
    inline void SetDataId(Aws::String&& value) { m_dataIdHasBeenSet = true; m_dataId = std::move(value); }

    /**
     * <p>The unique identifier for the predicate.</p>
     */
    inline void SetDataId(const char* value) { m_dataIdHasBeenSet = true; m_dataId.assign(value); }

    /**
     * <p>The unique identifier for the predicate.</p>
     */
    inline AwsWafRateBasedRuleMatchPredicate& WithDataId(const Aws::String& value) { SetDataId(value); return *this;}

    /**
     * <p>The unique identifier for the predicate.</p>
     */
    inline AwsWafRateBasedRuleMatchPredicate& WithDataId(Aws::String&& value) { SetDataId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the predicate.</p>
     */
    inline AwsWafRateBasedRuleMatchPredicate& WithDataId(const char* value) { SetDataId(value); return *this;}


    /**
     * <p>If set to <code>true</code>, then the rule actions are performed on requests
     * that match the predicate settings.</p> <p>If set to <code>false</code>, then the
     * rule actions are performed on all requests except those that match the predicate
     * settings. </p>
     */
    inline bool GetNegated() const{ return m_negated; }

    /**
     * <p>If set to <code>true</code>, then the rule actions are performed on requests
     * that match the predicate settings.</p> <p>If set to <code>false</code>, then the
     * rule actions are performed on all requests except those that match the predicate
     * settings. </p>
     */
    inline bool NegatedHasBeenSet() const { return m_negatedHasBeenSet; }

    /**
     * <p>If set to <code>true</code>, then the rule actions are performed on requests
     * that match the predicate settings.</p> <p>If set to <code>false</code>, then the
     * rule actions are performed on all requests except those that match the predicate
     * settings. </p>
     */
    inline void SetNegated(bool value) { m_negatedHasBeenSet = true; m_negated = value; }

    /**
     * <p>If set to <code>true</code>, then the rule actions are performed on requests
     * that match the predicate settings.</p> <p>If set to <code>false</code>, then the
     * rule actions are performed on all requests except those that match the predicate
     * settings. </p>
     */
    inline AwsWafRateBasedRuleMatchPredicate& WithNegated(bool value) { SetNegated(value); return *this;}


    /**
     * <p>The type of predicate.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of predicate.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of predicate.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of predicate.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of predicate.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of predicate.</p>
     */
    inline AwsWafRateBasedRuleMatchPredicate& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of predicate.</p>
     */
    inline AwsWafRateBasedRuleMatchPredicate& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of predicate.</p>
     */
    inline AwsWafRateBasedRuleMatchPredicate& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_dataId;
    bool m_dataIdHasBeenSet;

    bool m_negated;
    bool m_negatedHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
