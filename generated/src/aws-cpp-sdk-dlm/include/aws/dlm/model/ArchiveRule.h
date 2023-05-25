/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/dlm/model/ArchiveRetainRule.h>
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
namespace DLM
{
namespace Model
{

  /**
   * <p> <b>[Snapshot policies only]</b> Specifies a snapshot archiving rule for a
   * schedule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/ArchiveRule">AWS API
   * Reference</a></p>
   */
  class ArchiveRule
  {
  public:
    AWS_DLM_API ArchiveRule();
    AWS_DLM_API ArchiveRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API ArchiveRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the retention period for the snapshot archiving rule.</p>
     */
    inline const ArchiveRetainRule& GetRetainRule() const{ return m_retainRule; }

    /**
     * <p>Information about the retention period for the snapshot archiving rule.</p>
     */
    inline bool RetainRuleHasBeenSet() const { return m_retainRuleHasBeenSet; }

    /**
     * <p>Information about the retention period for the snapshot archiving rule.</p>
     */
    inline void SetRetainRule(const ArchiveRetainRule& value) { m_retainRuleHasBeenSet = true; m_retainRule = value; }

    /**
     * <p>Information about the retention period for the snapshot archiving rule.</p>
     */
    inline void SetRetainRule(ArchiveRetainRule&& value) { m_retainRuleHasBeenSet = true; m_retainRule = std::move(value); }

    /**
     * <p>Information about the retention period for the snapshot archiving rule.</p>
     */
    inline ArchiveRule& WithRetainRule(const ArchiveRetainRule& value) { SetRetainRule(value); return *this;}

    /**
     * <p>Information about the retention period for the snapshot archiving rule.</p>
     */
    inline ArchiveRule& WithRetainRule(ArchiveRetainRule&& value) { SetRetainRule(std::move(value)); return *this;}

  private:

    ArchiveRetainRule m_retainRule;
    bool m_retainRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
