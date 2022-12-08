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
   * <p> <b>[Snapshot policies only]</b> Specifies a rule for sharing snapshots
   * across Amazon Web Services accounts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/ShareRule">AWS API
   * Reference</a></p>
   */
  class ShareRule
  {
  public:
    AWS_DLM_API ShareRule();
    AWS_DLM_API ShareRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API ShareRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IDs of the Amazon Web Services accounts with which to share the
     * snapshots.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetAccounts() const{ return m_targetAccounts; }

    /**
     * <p>The IDs of the Amazon Web Services accounts with which to share the
     * snapshots.</p>
     */
    inline bool TargetAccountsHasBeenSet() const { return m_targetAccountsHasBeenSet; }

    /**
     * <p>The IDs of the Amazon Web Services accounts with which to share the
     * snapshots.</p>
     */
    inline void SetTargetAccounts(const Aws::Vector<Aws::String>& value) { m_targetAccountsHasBeenSet = true; m_targetAccounts = value; }

    /**
     * <p>The IDs of the Amazon Web Services accounts with which to share the
     * snapshots.</p>
     */
    inline void SetTargetAccounts(Aws::Vector<Aws::String>&& value) { m_targetAccountsHasBeenSet = true; m_targetAccounts = std::move(value); }

    /**
     * <p>The IDs of the Amazon Web Services accounts with which to share the
     * snapshots.</p>
     */
    inline ShareRule& WithTargetAccounts(const Aws::Vector<Aws::String>& value) { SetTargetAccounts(value); return *this;}

    /**
     * <p>The IDs of the Amazon Web Services accounts with which to share the
     * snapshots.</p>
     */
    inline ShareRule& WithTargetAccounts(Aws::Vector<Aws::String>&& value) { SetTargetAccounts(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Amazon Web Services accounts with which to share the
     * snapshots.</p>
     */
    inline ShareRule& AddTargetAccounts(const Aws::String& value) { m_targetAccountsHasBeenSet = true; m_targetAccounts.push_back(value); return *this; }

    /**
     * <p>The IDs of the Amazon Web Services accounts with which to share the
     * snapshots.</p>
     */
    inline ShareRule& AddTargetAccounts(Aws::String&& value) { m_targetAccountsHasBeenSet = true; m_targetAccounts.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Amazon Web Services accounts with which to share the
     * snapshots.</p>
     */
    inline ShareRule& AddTargetAccounts(const char* value) { m_targetAccountsHasBeenSet = true; m_targetAccounts.push_back(value); return *this; }


    /**
     * <p>The period after which snapshots that are shared with other Amazon Web
     * Services accounts are automatically unshared.</p>
     */
    inline int GetUnshareInterval() const{ return m_unshareInterval; }

    /**
     * <p>The period after which snapshots that are shared with other Amazon Web
     * Services accounts are automatically unshared.</p>
     */
    inline bool UnshareIntervalHasBeenSet() const { return m_unshareIntervalHasBeenSet; }

    /**
     * <p>The period after which snapshots that are shared with other Amazon Web
     * Services accounts are automatically unshared.</p>
     */
    inline void SetUnshareInterval(int value) { m_unshareIntervalHasBeenSet = true; m_unshareInterval = value; }

    /**
     * <p>The period after which snapshots that are shared with other Amazon Web
     * Services accounts are automatically unshared.</p>
     */
    inline ShareRule& WithUnshareInterval(int value) { SetUnshareInterval(value); return *this;}


    /**
     * <p>The unit of time for the automatic unsharing interval.</p>
     */
    inline const RetentionIntervalUnitValues& GetUnshareIntervalUnit() const{ return m_unshareIntervalUnit; }

    /**
     * <p>The unit of time for the automatic unsharing interval.</p>
     */
    inline bool UnshareIntervalUnitHasBeenSet() const { return m_unshareIntervalUnitHasBeenSet; }

    /**
     * <p>The unit of time for the automatic unsharing interval.</p>
     */
    inline void SetUnshareIntervalUnit(const RetentionIntervalUnitValues& value) { m_unshareIntervalUnitHasBeenSet = true; m_unshareIntervalUnit = value; }

    /**
     * <p>The unit of time for the automatic unsharing interval.</p>
     */
    inline void SetUnshareIntervalUnit(RetentionIntervalUnitValues&& value) { m_unshareIntervalUnitHasBeenSet = true; m_unshareIntervalUnit = std::move(value); }

    /**
     * <p>The unit of time for the automatic unsharing interval.</p>
     */
    inline ShareRule& WithUnshareIntervalUnit(const RetentionIntervalUnitValues& value) { SetUnshareIntervalUnit(value); return *this;}

    /**
     * <p>The unit of time for the automatic unsharing interval.</p>
     */
    inline ShareRule& WithUnshareIntervalUnit(RetentionIntervalUnitValues&& value) { SetUnshareIntervalUnit(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_targetAccounts;
    bool m_targetAccountsHasBeenSet = false;

    int m_unshareInterval;
    bool m_unshareIntervalHasBeenSet = false;

    RetentionIntervalUnitValues m_unshareIntervalUnit;
    bool m_unshareIntervalUnitHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
