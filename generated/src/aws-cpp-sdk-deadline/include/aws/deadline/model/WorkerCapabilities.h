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
    AWS_DEADLINE_API WorkerCapabilities();
    AWS_DEADLINE_API WorkerCapabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API WorkerCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The worker capabilities amounts on a list of worker capabilities.</p>
     */
    inline const Aws::Vector<WorkerAmountCapability>& GetAmounts() const{ return m_amounts; }

    /**
     * <p>The worker capabilities amounts on a list of worker capabilities.</p>
     */
    inline bool AmountsHasBeenSet() const { return m_amountsHasBeenSet; }

    /**
     * <p>The worker capabilities amounts on a list of worker capabilities.</p>
     */
    inline void SetAmounts(const Aws::Vector<WorkerAmountCapability>& value) { m_amountsHasBeenSet = true; m_amounts = value; }

    /**
     * <p>The worker capabilities amounts on a list of worker capabilities.</p>
     */
    inline void SetAmounts(Aws::Vector<WorkerAmountCapability>&& value) { m_amountsHasBeenSet = true; m_amounts = std::move(value); }

    /**
     * <p>The worker capabilities amounts on a list of worker capabilities.</p>
     */
    inline WorkerCapabilities& WithAmounts(const Aws::Vector<WorkerAmountCapability>& value) { SetAmounts(value); return *this;}

    /**
     * <p>The worker capabilities amounts on a list of worker capabilities.</p>
     */
    inline WorkerCapabilities& WithAmounts(Aws::Vector<WorkerAmountCapability>&& value) { SetAmounts(std::move(value)); return *this;}

    /**
     * <p>The worker capabilities amounts on a list of worker capabilities.</p>
     */
    inline WorkerCapabilities& AddAmounts(const WorkerAmountCapability& value) { m_amountsHasBeenSet = true; m_amounts.push_back(value); return *this; }

    /**
     * <p>The worker capabilities amounts on a list of worker capabilities.</p>
     */
    inline WorkerCapabilities& AddAmounts(WorkerAmountCapability&& value) { m_amountsHasBeenSet = true; m_amounts.push_back(std::move(value)); return *this; }


    /**
     * <p>The worker attribute capabilities in the list of attribute capabilities.</p>
     */
    inline const Aws::Vector<WorkerAttributeCapability>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The worker attribute capabilities in the list of attribute capabilities.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The worker attribute capabilities in the list of attribute capabilities.</p>
     */
    inline void SetAttributes(const Aws::Vector<WorkerAttributeCapability>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The worker attribute capabilities in the list of attribute capabilities.</p>
     */
    inline void SetAttributes(Aws::Vector<WorkerAttributeCapability>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The worker attribute capabilities in the list of attribute capabilities.</p>
     */
    inline WorkerCapabilities& WithAttributes(const Aws::Vector<WorkerAttributeCapability>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The worker attribute capabilities in the list of attribute capabilities.</p>
     */
    inline WorkerCapabilities& WithAttributes(Aws::Vector<WorkerAttributeCapability>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The worker attribute capabilities in the list of attribute capabilities.</p>
     */
    inline WorkerCapabilities& AddAttributes(const WorkerAttributeCapability& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The worker attribute capabilities in the list of attribute capabilities.</p>
     */
    inline WorkerCapabilities& AddAttributes(WorkerAttributeCapability&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<WorkerAmountCapability> m_amounts;
    bool m_amountsHasBeenSet = false;

    Aws::Vector<WorkerAttributeCapability> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
