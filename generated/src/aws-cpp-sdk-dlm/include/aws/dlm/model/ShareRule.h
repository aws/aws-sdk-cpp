/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dlm/model/RetentionIntervalUnitValues.h>
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
namespace DLM
{
namespace Model
{

  /**
   * <p> <b>[Custom snapshot policies only]</b> Specifies a rule for sharing
   * snapshots across Amazon Web Services accounts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/ShareRule">AWS API
   * Reference</a></p>
   */
  class ShareRule
  {
  public:
    AWS_DLM_API ShareRule() = default;
    AWS_DLM_API ShareRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API ShareRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IDs of the Amazon Web Services accounts with which to share the
     * snapshots.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetAccounts() const { return m_targetAccounts; }
    inline bool TargetAccountsHasBeenSet() const { return m_targetAccountsHasBeenSet; }
    template<typename TargetAccountsT = Aws::Vector<Aws::String>>
    void SetTargetAccounts(TargetAccountsT&& value) { m_targetAccountsHasBeenSet = true; m_targetAccounts = std::forward<TargetAccountsT>(value); }
    template<typename TargetAccountsT = Aws::Vector<Aws::String>>
    ShareRule& WithTargetAccounts(TargetAccountsT&& value) { SetTargetAccounts(std::forward<TargetAccountsT>(value)); return *this;}
    template<typename TargetAccountsT = Aws::String>
    ShareRule& AddTargetAccounts(TargetAccountsT&& value) { m_targetAccountsHasBeenSet = true; m_targetAccounts.emplace_back(std::forward<TargetAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The period after which snapshots that are shared with other Amazon Web
     * Services accounts are automatically unshared.</p>
     */
    inline int GetUnshareInterval() const { return m_unshareInterval; }
    inline bool UnshareIntervalHasBeenSet() const { return m_unshareIntervalHasBeenSet; }
    inline void SetUnshareInterval(int value) { m_unshareIntervalHasBeenSet = true; m_unshareInterval = value; }
    inline ShareRule& WithUnshareInterval(int value) { SetUnshareInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of time for the automatic unsharing interval.</p>
     */
    inline RetentionIntervalUnitValues GetUnshareIntervalUnit() const { return m_unshareIntervalUnit; }
    inline bool UnshareIntervalUnitHasBeenSet() const { return m_unshareIntervalUnitHasBeenSet; }
    inline void SetUnshareIntervalUnit(RetentionIntervalUnitValues value) { m_unshareIntervalUnitHasBeenSet = true; m_unshareIntervalUnit = value; }
    inline ShareRule& WithUnshareIntervalUnit(RetentionIntervalUnitValues value) { SetUnshareIntervalUnit(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_targetAccounts;
    bool m_targetAccountsHasBeenSet = false;

    int m_unshareInterval{0};
    bool m_unshareIntervalHasBeenSet = false;

    RetentionIntervalUnitValues m_unshareIntervalUnit{RetentionIntervalUnitValues::NOT_SET};
    bool m_unshareIntervalUnitHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
