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
#include <aws/shield/model/AttackLayer.h>
#include <aws/shield/model/AttackPropertyIdentifier.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/shield/model/Unit.h>
#include <aws/shield/model/Contributor.h>
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
   * <p>Details of the described attack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AttackProperty">AWS
   * API Reference</a></p>
   */
  class AWS_SHIELD_API AttackProperty
  {
  public:
    AttackProperty();
    AttackProperty(Aws::Utils::Json::JsonView jsonValue);
    AttackProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of DDoS event that was observed. <code>NETWORK</code> indicates
     * layer 3 and layer 4 events and <code>APPLICATION</code> indicates layer 7
     * events.</p>
     */
    inline const AttackLayer& GetAttackLayer() const{ return m_attackLayer; }

    /**
     * <p>The type of DDoS event that was observed. <code>NETWORK</code> indicates
     * layer 3 and layer 4 events and <code>APPLICATION</code> indicates layer 7
     * events.</p>
     */
    inline bool AttackLayerHasBeenSet() const { return m_attackLayerHasBeenSet; }

    /**
     * <p>The type of DDoS event that was observed. <code>NETWORK</code> indicates
     * layer 3 and layer 4 events and <code>APPLICATION</code> indicates layer 7
     * events.</p>
     */
    inline void SetAttackLayer(const AttackLayer& value) { m_attackLayerHasBeenSet = true; m_attackLayer = value; }

    /**
     * <p>The type of DDoS event that was observed. <code>NETWORK</code> indicates
     * layer 3 and layer 4 events and <code>APPLICATION</code> indicates layer 7
     * events.</p>
     */
    inline void SetAttackLayer(AttackLayer&& value) { m_attackLayerHasBeenSet = true; m_attackLayer = std::move(value); }

    /**
     * <p>The type of DDoS event that was observed. <code>NETWORK</code> indicates
     * layer 3 and layer 4 events and <code>APPLICATION</code> indicates layer 7
     * events.</p>
     */
    inline AttackProperty& WithAttackLayer(const AttackLayer& value) { SetAttackLayer(value); return *this;}

    /**
     * <p>The type of DDoS event that was observed. <code>NETWORK</code> indicates
     * layer 3 and layer 4 events and <code>APPLICATION</code> indicates layer 7
     * events.</p>
     */
    inline AttackProperty& WithAttackLayer(AttackLayer&& value) { SetAttackLayer(std::move(value)); return *this;}


    /**
     * <p>Defines the DDoS attack property information that is provided.</p>
     */
    inline const AttackPropertyIdentifier& GetAttackPropertyIdentifier() const{ return m_attackPropertyIdentifier; }

    /**
     * <p>Defines the DDoS attack property information that is provided.</p>
     */
    inline bool AttackPropertyIdentifierHasBeenSet() const { return m_attackPropertyIdentifierHasBeenSet; }

    /**
     * <p>Defines the DDoS attack property information that is provided.</p>
     */
    inline void SetAttackPropertyIdentifier(const AttackPropertyIdentifier& value) { m_attackPropertyIdentifierHasBeenSet = true; m_attackPropertyIdentifier = value; }

    /**
     * <p>Defines the DDoS attack property information that is provided.</p>
     */
    inline void SetAttackPropertyIdentifier(AttackPropertyIdentifier&& value) { m_attackPropertyIdentifierHasBeenSet = true; m_attackPropertyIdentifier = std::move(value); }

    /**
     * <p>Defines the DDoS attack property information that is provided.</p>
     */
    inline AttackProperty& WithAttackPropertyIdentifier(const AttackPropertyIdentifier& value) { SetAttackPropertyIdentifier(value); return *this;}

    /**
     * <p>Defines the DDoS attack property information that is provided.</p>
     */
    inline AttackProperty& WithAttackPropertyIdentifier(AttackPropertyIdentifier&& value) { SetAttackPropertyIdentifier(std::move(value)); return *this;}


    /**
     * <p>The array of <a>Contributor</a> objects that includes the top five
     * contributors to an attack. </p>
     */
    inline const Aws::Vector<Contributor>& GetTopContributors() const{ return m_topContributors; }

    /**
     * <p>The array of <a>Contributor</a> objects that includes the top five
     * contributors to an attack. </p>
     */
    inline bool TopContributorsHasBeenSet() const { return m_topContributorsHasBeenSet; }

    /**
     * <p>The array of <a>Contributor</a> objects that includes the top five
     * contributors to an attack. </p>
     */
    inline void SetTopContributors(const Aws::Vector<Contributor>& value) { m_topContributorsHasBeenSet = true; m_topContributors = value; }

    /**
     * <p>The array of <a>Contributor</a> objects that includes the top five
     * contributors to an attack. </p>
     */
    inline void SetTopContributors(Aws::Vector<Contributor>&& value) { m_topContributorsHasBeenSet = true; m_topContributors = std::move(value); }

    /**
     * <p>The array of <a>Contributor</a> objects that includes the top five
     * contributors to an attack. </p>
     */
    inline AttackProperty& WithTopContributors(const Aws::Vector<Contributor>& value) { SetTopContributors(value); return *this;}

    /**
     * <p>The array of <a>Contributor</a> objects that includes the top five
     * contributors to an attack. </p>
     */
    inline AttackProperty& WithTopContributors(Aws::Vector<Contributor>&& value) { SetTopContributors(std::move(value)); return *this;}

    /**
     * <p>The array of <a>Contributor</a> objects that includes the top five
     * contributors to an attack. </p>
     */
    inline AttackProperty& AddTopContributors(const Contributor& value) { m_topContributorsHasBeenSet = true; m_topContributors.push_back(value); return *this; }

    /**
     * <p>The array of <a>Contributor</a> objects that includes the top five
     * contributors to an attack. </p>
     */
    inline AttackProperty& AddTopContributors(Contributor&& value) { m_topContributorsHasBeenSet = true; m_topContributors.push_back(std::move(value)); return *this; }


    /**
     * <p>The unit of the <code>Value</code> of the contributions.</p>
     */
    inline const Unit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of the <code>Value</code> of the contributions.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit of the <code>Value</code> of the contributions.</p>
     */
    inline void SetUnit(const Unit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of the <code>Value</code> of the contributions.</p>
     */
    inline void SetUnit(Unit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit of the <code>Value</code> of the contributions.</p>
     */
    inline AttackProperty& WithUnit(const Unit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of the <code>Value</code> of the contributions.</p>
     */
    inline AttackProperty& WithUnit(Unit&& value) { SetUnit(std::move(value)); return *this;}


    /**
     * <p>The total contributions made to this attack by all contributors, not just the
     * five listed in the <code>TopContributors</code> list.</p>
     */
    inline long long GetTotal() const{ return m_total; }

    /**
     * <p>The total contributions made to this attack by all contributors, not just the
     * five listed in the <code>TopContributors</code> list.</p>
     */
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }

    /**
     * <p>The total contributions made to this attack by all contributors, not just the
     * five listed in the <code>TopContributors</code> list.</p>
     */
    inline void SetTotal(long long value) { m_totalHasBeenSet = true; m_total = value; }

    /**
     * <p>The total contributions made to this attack by all contributors, not just the
     * five listed in the <code>TopContributors</code> list.</p>
     */
    inline AttackProperty& WithTotal(long long value) { SetTotal(value); return *this;}

  private:

    AttackLayer m_attackLayer;
    bool m_attackLayerHasBeenSet;

    AttackPropertyIdentifier m_attackPropertyIdentifier;
    bool m_attackPropertyIdentifierHasBeenSet;

    Aws::Vector<Contributor> m_topContributors;
    bool m_topContributorsHasBeenSet;

    Unit m_unit;
    bool m_unitHasBeenSet;

    long long m_total;
    bool m_totalHasBeenSet;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
