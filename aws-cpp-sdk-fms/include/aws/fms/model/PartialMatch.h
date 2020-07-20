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
  class AWS_FMS_API PartialMatch
  {
  public:
    PartialMatch();
    PartialMatch(Aws::Utils::Json::JsonView jsonValue);
    PartialMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The reference rule from the master security group of the AWS Firewall Manager
     * policy.</p>
     */
    inline const Aws::String& GetReference() const{ return m_reference; }

    /**
     * <p>The reference rule from the master security group of the AWS Firewall Manager
     * policy.</p>
     */
    inline bool ReferenceHasBeenSet() const { return m_referenceHasBeenSet; }

    /**
     * <p>The reference rule from the master security group of the AWS Firewall Manager
     * policy.</p>
     */
    inline void SetReference(const Aws::String& value) { m_referenceHasBeenSet = true; m_reference = value; }

    /**
     * <p>The reference rule from the master security group of the AWS Firewall Manager
     * policy.</p>
     */
    inline void SetReference(Aws::String&& value) { m_referenceHasBeenSet = true; m_reference = std::move(value); }

    /**
     * <p>The reference rule from the master security group of the AWS Firewall Manager
     * policy.</p>
     */
    inline void SetReference(const char* value) { m_referenceHasBeenSet = true; m_reference.assign(value); }

    /**
     * <p>The reference rule from the master security group of the AWS Firewall Manager
     * policy.</p>
     */
    inline PartialMatch& WithReference(const Aws::String& value) { SetReference(value); return *this;}

    /**
     * <p>The reference rule from the master security group of the AWS Firewall Manager
     * policy.</p>
     */
    inline PartialMatch& WithReference(Aws::String&& value) { SetReference(std::move(value)); return *this;}

    /**
     * <p>The reference rule from the master security group of the AWS Firewall Manager
     * policy.</p>
     */
    inline PartialMatch& WithReference(const char* value) { SetReference(value); return *this;}


    /**
     * <p>The violation reason.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetViolationReasons() const{ return m_targetViolationReasons; }

    /**
     * <p>The violation reason.</p>
     */
    inline bool TargetViolationReasonsHasBeenSet() const { return m_targetViolationReasonsHasBeenSet; }

    /**
     * <p>The violation reason.</p>
     */
    inline void SetTargetViolationReasons(const Aws::Vector<Aws::String>& value) { m_targetViolationReasonsHasBeenSet = true; m_targetViolationReasons = value; }

    /**
     * <p>The violation reason.</p>
     */
    inline void SetTargetViolationReasons(Aws::Vector<Aws::String>&& value) { m_targetViolationReasonsHasBeenSet = true; m_targetViolationReasons = std::move(value); }

    /**
     * <p>The violation reason.</p>
     */
    inline PartialMatch& WithTargetViolationReasons(const Aws::Vector<Aws::String>& value) { SetTargetViolationReasons(value); return *this;}

    /**
     * <p>The violation reason.</p>
     */
    inline PartialMatch& WithTargetViolationReasons(Aws::Vector<Aws::String>&& value) { SetTargetViolationReasons(std::move(value)); return *this;}

    /**
     * <p>The violation reason.</p>
     */
    inline PartialMatch& AddTargetViolationReasons(const Aws::String& value) { m_targetViolationReasonsHasBeenSet = true; m_targetViolationReasons.push_back(value); return *this; }

    /**
     * <p>The violation reason.</p>
     */
    inline PartialMatch& AddTargetViolationReasons(Aws::String&& value) { m_targetViolationReasonsHasBeenSet = true; m_targetViolationReasons.push_back(std::move(value)); return *this; }

    /**
     * <p>The violation reason.</p>
     */
    inline PartialMatch& AddTargetViolationReasons(const char* value) { m_targetViolationReasonsHasBeenSet = true; m_targetViolationReasons.push_back(value); return *this; }

  private:

    Aws::String m_reference;
    bool m_referenceHasBeenSet;

    Aws::Vector<Aws::String> m_targetViolationReasons;
    bool m_targetViolationReasonsHasBeenSet;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
