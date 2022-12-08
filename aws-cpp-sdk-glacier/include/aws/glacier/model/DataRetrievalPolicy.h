/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glacier/model/DataRetrievalRule.h>
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
namespace Glacier
{
namespace Model
{

  /**
   * <p>Data retrieval policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/DataRetrievalPolicy">AWS
   * API Reference</a></p>
   */
  class DataRetrievalPolicy
  {
  public:
    AWS_GLACIER_API DataRetrievalPolicy();
    AWS_GLACIER_API DataRetrievalPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API DataRetrievalPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The policy rule. Although this is a list type, currently there must be only
     * one rule, which contains a Strategy field and optionally a BytesPerHour
     * field.</p>
     */
    inline const Aws::Vector<DataRetrievalRule>& GetRules() const{ return m_rules; }

    /**
     * <p>The policy rule. Although this is a list type, currently there must be only
     * one rule, which contains a Strategy field and optionally a BytesPerHour
     * field.</p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>The policy rule. Although this is a list type, currently there must be only
     * one rule, which contains a Strategy field and optionally a BytesPerHour
     * field.</p>
     */
    inline void SetRules(const Aws::Vector<DataRetrievalRule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>The policy rule. Although this is a list type, currently there must be only
     * one rule, which contains a Strategy field and optionally a BytesPerHour
     * field.</p>
     */
    inline void SetRules(Aws::Vector<DataRetrievalRule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>The policy rule. Although this is a list type, currently there must be only
     * one rule, which contains a Strategy field and optionally a BytesPerHour
     * field.</p>
     */
    inline DataRetrievalPolicy& WithRules(const Aws::Vector<DataRetrievalRule>& value) { SetRules(value); return *this;}

    /**
     * <p>The policy rule. Although this is a list type, currently there must be only
     * one rule, which contains a Strategy field and optionally a BytesPerHour
     * field.</p>
     */
    inline DataRetrievalPolicy& WithRules(Aws::Vector<DataRetrievalRule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>The policy rule. Although this is a list type, currently there must be only
     * one rule, which contains a Strategy field and optionally a BytesPerHour
     * field.</p>
     */
    inline DataRetrievalPolicy& AddRules(const DataRetrievalRule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>The policy rule. Although this is a list type, currently there must be only
     * one rule, which contains a Strategy field and optionally a BytesPerHour
     * field.</p>
     */
    inline DataRetrievalPolicy& AddRules(DataRetrievalRule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DataRetrievalRule> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
