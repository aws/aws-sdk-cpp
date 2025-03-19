/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>The reference rule that partially matches the <code>ViolationTarget</code>
   * rule and violation reason.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PartialMatch">AWS
   * API Reference</a></p>
   */
  class PartialMatch
  {
  public:
    AWS_FMS_API PartialMatch() = default;
    AWS_FMS_API PartialMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API PartialMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reference rule from the primary security group of the Firewall Manager
     * policy.</p>
     */
    inline const Aws::String& GetReference() const { return m_reference; }
    inline bool ReferenceHasBeenSet() const { return m_referenceHasBeenSet; }
    template<typename ReferenceT = Aws::String>
    void SetReference(ReferenceT&& value) { m_referenceHasBeenSet = true; m_reference = std::forward<ReferenceT>(value); }
    template<typename ReferenceT = Aws::String>
    PartialMatch& WithReference(ReferenceT&& value) { SetReference(std::forward<ReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The violation reason.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetViolationReasons() const { return m_targetViolationReasons; }
    inline bool TargetViolationReasonsHasBeenSet() const { return m_targetViolationReasonsHasBeenSet; }
    template<typename TargetViolationReasonsT = Aws::Vector<Aws::String>>
    void SetTargetViolationReasons(TargetViolationReasonsT&& value) { m_targetViolationReasonsHasBeenSet = true; m_targetViolationReasons = std::forward<TargetViolationReasonsT>(value); }
    template<typename TargetViolationReasonsT = Aws::Vector<Aws::String>>
    PartialMatch& WithTargetViolationReasons(TargetViolationReasonsT&& value) { SetTargetViolationReasons(std::forward<TargetViolationReasonsT>(value)); return *this;}
    template<typename TargetViolationReasonsT = Aws::String>
    PartialMatch& AddTargetViolationReasons(TargetViolationReasonsT&& value) { m_targetViolationReasonsHasBeenSet = true; m_targetViolationReasons.emplace_back(std::forward<TargetViolationReasonsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_reference;
    bool m_referenceHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetViolationReasons;
    bool m_targetViolationReasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
