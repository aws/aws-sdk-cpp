/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
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
namespace ControlTower
{
namespace Model
{

  /**
   * <p>A filter applied on the <code>ListEnabledBaseline</code> operation. Allowed
   * filters are <code>baselineIdentifiers</code> and <code>targetIdentifiers</code>.
   * The filter can be applied for either, or both.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnabledBaselineFilter">AWS
   * API Reference</a></p>
   */
  class EnabledBaselineFilter
  {
  public:
    AWS_CONTROLTOWER_API EnabledBaselineFilter();
    AWS_CONTROLTOWER_API EnabledBaselineFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API EnabledBaselineFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifiers for the <code>Baseline</code> objects returned as part of the
     * filter operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBaselineIdentifiers() const{ return m_baselineIdentifiers; }
    inline bool BaselineIdentifiersHasBeenSet() const { return m_baselineIdentifiersHasBeenSet; }
    inline void SetBaselineIdentifiers(const Aws::Vector<Aws::String>& value) { m_baselineIdentifiersHasBeenSet = true; m_baselineIdentifiers = value; }
    inline void SetBaselineIdentifiers(Aws::Vector<Aws::String>&& value) { m_baselineIdentifiersHasBeenSet = true; m_baselineIdentifiers = std::move(value); }
    inline EnabledBaselineFilter& WithBaselineIdentifiers(const Aws::Vector<Aws::String>& value) { SetBaselineIdentifiers(value); return *this;}
    inline EnabledBaselineFilter& WithBaselineIdentifiers(Aws::Vector<Aws::String>&& value) { SetBaselineIdentifiers(std::move(value)); return *this;}
    inline EnabledBaselineFilter& AddBaselineIdentifiers(const Aws::String& value) { m_baselineIdentifiersHasBeenSet = true; m_baselineIdentifiers.push_back(value); return *this; }
    inline EnabledBaselineFilter& AddBaselineIdentifiers(Aws::String&& value) { m_baselineIdentifiersHasBeenSet = true; m_baselineIdentifiers.push_back(std::move(value)); return *this; }
    inline EnabledBaselineFilter& AddBaselineIdentifiers(const char* value) { m_baselineIdentifiersHasBeenSet = true; m_baselineIdentifiers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional filter that sets up a list of <code>parentIdentifiers</code> to
     * filter the results of the <code>ListEnabledBaseline</code> output.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParentIdentifiers() const{ return m_parentIdentifiers; }
    inline bool ParentIdentifiersHasBeenSet() const { return m_parentIdentifiersHasBeenSet; }
    inline void SetParentIdentifiers(const Aws::Vector<Aws::String>& value) { m_parentIdentifiersHasBeenSet = true; m_parentIdentifiers = value; }
    inline void SetParentIdentifiers(Aws::Vector<Aws::String>&& value) { m_parentIdentifiersHasBeenSet = true; m_parentIdentifiers = std::move(value); }
    inline EnabledBaselineFilter& WithParentIdentifiers(const Aws::Vector<Aws::String>& value) { SetParentIdentifiers(value); return *this;}
    inline EnabledBaselineFilter& WithParentIdentifiers(Aws::Vector<Aws::String>&& value) { SetParentIdentifiers(std::move(value)); return *this;}
    inline EnabledBaselineFilter& AddParentIdentifiers(const Aws::String& value) { m_parentIdentifiersHasBeenSet = true; m_parentIdentifiers.push_back(value); return *this; }
    inline EnabledBaselineFilter& AddParentIdentifiers(Aws::String&& value) { m_parentIdentifiersHasBeenSet = true; m_parentIdentifiers.push_back(std::move(value)); return *this; }
    inline EnabledBaselineFilter& AddParentIdentifiers(const char* value) { m_parentIdentifiersHasBeenSet = true; m_parentIdentifiers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifiers for the targets of the <code>Baseline</code> filter
     * operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetIdentifiers() const{ return m_targetIdentifiers; }
    inline bool TargetIdentifiersHasBeenSet() const { return m_targetIdentifiersHasBeenSet; }
    inline void SetTargetIdentifiers(const Aws::Vector<Aws::String>& value) { m_targetIdentifiersHasBeenSet = true; m_targetIdentifiers = value; }
    inline void SetTargetIdentifiers(Aws::Vector<Aws::String>&& value) { m_targetIdentifiersHasBeenSet = true; m_targetIdentifiers = std::move(value); }
    inline EnabledBaselineFilter& WithTargetIdentifiers(const Aws::Vector<Aws::String>& value) { SetTargetIdentifiers(value); return *this;}
    inline EnabledBaselineFilter& WithTargetIdentifiers(Aws::Vector<Aws::String>&& value) { SetTargetIdentifiers(std::move(value)); return *this;}
    inline EnabledBaselineFilter& AddTargetIdentifiers(const Aws::String& value) { m_targetIdentifiersHasBeenSet = true; m_targetIdentifiers.push_back(value); return *this; }
    inline EnabledBaselineFilter& AddTargetIdentifiers(Aws::String&& value) { m_targetIdentifiersHasBeenSet = true; m_targetIdentifiers.push_back(std::move(value)); return *this; }
    inline EnabledBaselineFilter& AddTargetIdentifiers(const char* value) { m_targetIdentifiersHasBeenSet = true; m_targetIdentifiers.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_baselineIdentifiers;
    bool m_baselineIdentifiersHasBeenSet = false;

    Aws::Vector<Aws::String> m_parentIdentifiers;
    bool m_parentIdentifiersHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetIdentifiers;
    bool m_targetIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
