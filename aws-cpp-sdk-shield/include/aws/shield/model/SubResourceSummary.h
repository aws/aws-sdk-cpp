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
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/SubResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/shield/model/SummarizedAttackVector.h>
#include <aws/shield/model/SummarizedCounter.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>The attack information for the specified SubResource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/SubResourceSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SHIELD_API SubResourceSummary
  {
  public:
    SubResourceSummary();
    SubResourceSummary(Aws::Utils::Json::JsonView jsonValue);
    SubResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>SubResource</code> type.</p>
     */
    inline const SubResourceType& GetType() const{ return m_type; }

    /**
     * <p>The <code>SubResource</code> type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The <code>SubResource</code> type.</p>
     */
    inline void SetType(const SubResourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The <code>SubResource</code> type.</p>
     */
    inline void SetType(SubResourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The <code>SubResource</code> type.</p>
     */
    inline SubResourceSummary& WithType(const SubResourceType& value) { SetType(value); return *this;}

    /**
     * <p>The <code>SubResource</code> type.</p>
     */
    inline SubResourceSummary& WithType(SubResourceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The unique identifier (ID) of the <code>SubResource</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier (ID) of the <code>SubResource</code>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the <code>SubResource</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier (ID) of the <code>SubResource</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the <code>SubResource</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier (ID) of the <code>SubResource</code>.</p>
     */
    inline SubResourceSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the <code>SubResource</code>.</p>
     */
    inline SubResourceSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the <code>SubResource</code>.</p>
     */
    inline SubResourceSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The list of attack types and associated counters.</p>
     */
    inline const Aws::Vector<SummarizedAttackVector>& GetAttackVectors() const{ return m_attackVectors; }

    /**
     * <p>The list of attack types and associated counters.</p>
     */
    inline bool AttackVectorsHasBeenSet() const { return m_attackVectorsHasBeenSet; }

    /**
     * <p>The list of attack types and associated counters.</p>
     */
    inline void SetAttackVectors(const Aws::Vector<SummarizedAttackVector>& value) { m_attackVectorsHasBeenSet = true; m_attackVectors = value; }

    /**
     * <p>The list of attack types and associated counters.</p>
     */
    inline void SetAttackVectors(Aws::Vector<SummarizedAttackVector>&& value) { m_attackVectorsHasBeenSet = true; m_attackVectors = std::move(value); }

    /**
     * <p>The list of attack types and associated counters.</p>
     */
    inline SubResourceSummary& WithAttackVectors(const Aws::Vector<SummarizedAttackVector>& value) { SetAttackVectors(value); return *this;}

    /**
     * <p>The list of attack types and associated counters.</p>
     */
    inline SubResourceSummary& WithAttackVectors(Aws::Vector<SummarizedAttackVector>&& value) { SetAttackVectors(std::move(value)); return *this;}

    /**
     * <p>The list of attack types and associated counters.</p>
     */
    inline SubResourceSummary& AddAttackVectors(const SummarizedAttackVector& value) { m_attackVectorsHasBeenSet = true; m_attackVectors.push_back(value); return *this; }

    /**
     * <p>The list of attack types and associated counters.</p>
     */
    inline SubResourceSummary& AddAttackVectors(SummarizedAttackVector&& value) { m_attackVectorsHasBeenSet = true; m_attackVectors.push_back(std::move(value)); return *this; }


    /**
     * <p>The counters that describe the details of the attack.</p>
     */
    inline const Aws::Vector<SummarizedCounter>& GetCounters() const{ return m_counters; }

    /**
     * <p>The counters that describe the details of the attack.</p>
     */
    inline bool CountersHasBeenSet() const { return m_countersHasBeenSet; }

    /**
     * <p>The counters that describe the details of the attack.</p>
     */
    inline void SetCounters(const Aws::Vector<SummarizedCounter>& value) { m_countersHasBeenSet = true; m_counters = value; }

    /**
     * <p>The counters that describe the details of the attack.</p>
     */
    inline void SetCounters(Aws::Vector<SummarizedCounter>&& value) { m_countersHasBeenSet = true; m_counters = std::move(value); }

    /**
     * <p>The counters that describe the details of the attack.</p>
     */
    inline SubResourceSummary& WithCounters(const Aws::Vector<SummarizedCounter>& value) { SetCounters(value); return *this;}

    /**
     * <p>The counters that describe the details of the attack.</p>
     */
    inline SubResourceSummary& WithCounters(Aws::Vector<SummarizedCounter>&& value) { SetCounters(std::move(value)); return *this;}

    /**
     * <p>The counters that describe the details of the attack.</p>
     */
    inline SubResourceSummary& AddCounters(const SummarizedCounter& value) { m_countersHasBeenSet = true; m_counters.push_back(value); return *this; }

    /**
     * <p>The counters that describe the details of the attack.</p>
     */
    inline SubResourceSummary& AddCounters(SummarizedCounter&& value) { m_countersHasBeenSet = true; m_counters.push_back(std::move(value)); return *this; }

  private:

    SubResourceType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::Vector<SummarizedAttackVector> m_attackVectors;
    bool m_attackVectorsHasBeenSet;

    Aws::Vector<SummarizedCounter> m_counters;
    bool m_countersHasBeenSet;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
