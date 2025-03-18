/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/WorkerAmountCapability.h>
#include <aws/deadline/model/WorkerAttributeCapability.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The details for worker capabilities.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/WorkerCapabilities">AWS
   * API Reference</a></p>
   */
  class WorkerCapabilities
  {
  public:
    AWS_DEADLINE_API WorkerCapabilities() = default;
    AWS_DEADLINE_API WorkerCapabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API WorkerCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The worker capabilities amounts on a list of worker capabilities.</p>
     */
    inline const Aws::Vector<WorkerAmountCapability>& GetAmounts() const { return m_amounts; }
    inline bool AmountsHasBeenSet() const { return m_amountsHasBeenSet; }
    template<typename AmountsT = Aws::Vector<WorkerAmountCapability>>
    void SetAmounts(AmountsT&& value) { m_amountsHasBeenSet = true; m_amounts = std::forward<AmountsT>(value); }
    template<typename AmountsT = Aws::Vector<WorkerAmountCapability>>
    WorkerCapabilities& WithAmounts(AmountsT&& value) { SetAmounts(std::forward<AmountsT>(value)); return *this;}
    template<typename AmountsT = WorkerAmountCapability>
    WorkerCapabilities& AddAmounts(AmountsT&& value) { m_amountsHasBeenSet = true; m_amounts.emplace_back(std::forward<AmountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The worker attribute capabilities in the list of attribute capabilities.</p>
     */
    inline const Aws::Vector<WorkerAttributeCapability>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<WorkerAttributeCapability>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<WorkerAttributeCapability>>
    WorkerCapabilities& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = WorkerAttributeCapability>
    WorkerCapabilities& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<WorkerAmountCapability> m_amounts;
    bool m_amountsHasBeenSet = false;

    Aws::Vector<WorkerAttributeCapability> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
