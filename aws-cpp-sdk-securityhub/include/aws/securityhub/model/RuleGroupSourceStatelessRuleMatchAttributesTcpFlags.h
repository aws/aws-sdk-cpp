/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A set of TCP flags and masks to inspect for.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RuleGroupSourceStatelessRuleMatchAttributesTcpFlags">AWS
   * API Reference</a></p>
   */
  class RuleGroupSourceStatelessRuleMatchAttributesTcpFlags
  {
  public:
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleMatchAttributesTcpFlags();
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleMatchAttributesTcpFlags(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleMatchAttributesTcpFlags& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the flags from the <code>Masks</code> setting that must be set in
     * order for the packet to match. Flags that are listed must be set. Flags that are
     * not listed must not be set.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFlags() const{ return m_flags; }

    /**
     * <p>Defines the flags from the <code>Masks</code> setting that must be set in
     * order for the packet to match. Flags that are listed must be set. Flags that are
     * not listed must not be set.</p>
     */
    inline bool FlagsHasBeenSet() const { return m_flagsHasBeenSet; }

    /**
     * <p>Defines the flags from the <code>Masks</code> setting that must be set in
     * order for the packet to match. Flags that are listed must be set. Flags that are
     * not listed must not be set.</p>
     */
    inline void SetFlags(const Aws::Vector<Aws::String>& value) { m_flagsHasBeenSet = true; m_flags = value; }

    /**
     * <p>Defines the flags from the <code>Masks</code> setting that must be set in
     * order for the packet to match. Flags that are listed must be set. Flags that are
     * not listed must not be set.</p>
     */
    inline void SetFlags(Aws::Vector<Aws::String>&& value) { m_flagsHasBeenSet = true; m_flags = std::move(value); }

    /**
     * <p>Defines the flags from the <code>Masks</code> setting that must be set in
     * order for the packet to match. Flags that are listed must be set. Flags that are
     * not listed must not be set.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributesTcpFlags& WithFlags(const Aws::Vector<Aws::String>& value) { SetFlags(value); return *this;}

    /**
     * <p>Defines the flags from the <code>Masks</code> setting that must be set in
     * order for the packet to match. Flags that are listed must be set. Flags that are
     * not listed must not be set.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributesTcpFlags& WithFlags(Aws::Vector<Aws::String>&& value) { SetFlags(std::move(value)); return *this;}

    /**
     * <p>Defines the flags from the <code>Masks</code> setting that must be set in
     * order for the packet to match. Flags that are listed must be set. Flags that are
     * not listed must not be set.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributesTcpFlags& AddFlags(const Aws::String& value) { m_flagsHasBeenSet = true; m_flags.push_back(value); return *this; }

    /**
     * <p>Defines the flags from the <code>Masks</code> setting that must be set in
     * order for the packet to match. Flags that are listed must be set. Flags that are
     * not listed must not be set.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributesTcpFlags& AddFlags(Aws::String&& value) { m_flagsHasBeenSet = true; m_flags.push_back(std::move(value)); return *this; }

    /**
     * <p>Defines the flags from the <code>Masks</code> setting that must be set in
     * order for the packet to match. Flags that are listed must be set. Flags that are
     * not listed must not be set.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributesTcpFlags& AddFlags(const char* value) { m_flagsHasBeenSet = true; m_flags.push_back(value); return *this; }


    /**
     * <p>The set of flags to consider in the inspection. If not specified, then all
     * flags are inspected.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMasks() const{ return m_masks; }

    /**
     * <p>The set of flags to consider in the inspection. If not specified, then all
     * flags are inspected.</p>
     */
    inline bool MasksHasBeenSet() const { return m_masksHasBeenSet; }

    /**
     * <p>The set of flags to consider in the inspection. If not specified, then all
     * flags are inspected.</p>
     */
    inline void SetMasks(const Aws::Vector<Aws::String>& value) { m_masksHasBeenSet = true; m_masks = value; }

    /**
     * <p>The set of flags to consider in the inspection. If not specified, then all
     * flags are inspected.</p>
     */
    inline void SetMasks(Aws::Vector<Aws::String>&& value) { m_masksHasBeenSet = true; m_masks = std::move(value); }

    /**
     * <p>The set of flags to consider in the inspection. If not specified, then all
     * flags are inspected.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributesTcpFlags& WithMasks(const Aws::Vector<Aws::String>& value) { SetMasks(value); return *this;}

    /**
     * <p>The set of flags to consider in the inspection. If not specified, then all
     * flags are inspected.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributesTcpFlags& WithMasks(Aws::Vector<Aws::String>&& value) { SetMasks(std::move(value)); return *this;}

    /**
     * <p>The set of flags to consider in the inspection. If not specified, then all
     * flags are inspected.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributesTcpFlags& AddMasks(const Aws::String& value) { m_masksHasBeenSet = true; m_masks.push_back(value); return *this; }

    /**
     * <p>The set of flags to consider in the inspection. If not specified, then all
     * flags are inspected.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributesTcpFlags& AddMasks(Aws::String&& value) { m_masksHasBeenSet = true; m_masks.push_back(std::move(value)); return *this; }

    /**
     * <p>The set of flags to consider in the inspection. If not specified, then all
     * flags are inspected.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributesTcpFlags& AddMasks(const char* value) { m_masksHasBeenSet = true; m_masks.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_flags;
    bool m_flagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_masks;
    bool m_masksHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
