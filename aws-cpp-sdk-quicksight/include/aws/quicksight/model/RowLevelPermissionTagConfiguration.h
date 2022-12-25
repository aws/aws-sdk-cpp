/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Status.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/RowLevelPermissionTagRule.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The configuration of tags on a dataset to set row-level security.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RowLevelPermissionTagConfiguration">AWS
   * API Reference</a></p>
   */
  class RowLevelPermissionTagConfiguration
  {
  public:
    AWS_QUICKSIGHT_API RowLevelPermissionTagConfiguration();
    AWS_QUICKSIGHT_API RowLevelPermissionTagConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RowLevelPermissionTagConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of row-level security tags. If enabled, the status is
     * <code>ENABLED</code>. If disabled, the status is <code>DISABLED</code>.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The status of row-level security tags. If enabled, the status is
     * <code>ENABLED</code>. If disabled, the status is <code>DISABLED</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of row-level security tags. If enabled, the status is
     * <code>ENABLED</code>. If disabled, the status is <code>DISABLED</code>.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of row-level security tags. If enabled, the status is
     * <code>ENABLED</code>. If disabled, the status is <code>DISABLED</code>.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of row-level security tags. If enabled, the status is
     * <code>ENABLED</code>. If disabled, the status is <code>DISABLED</code>.</p>
     */
    inline RowLevelPermissionTagConfiguration& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of row-level security tags. If enabled, the status is
     * <code>ENABLED</code>. If disabled, the status is <code>DISABLED</code>.</p>
     */
    inline RowLevelPermissionTagConfiguration& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A set of rules associated with row-level security, such as the tag names and
     * columns that they are assigned to.</p>
     */
    inline const Aws::Vector<RowLevelPermissionTagRule>& GetTagRules() const{ return m_tagRules; }

    /**
     * <p>A set of rules associated with row-level security, such as the tag names and
     * columns that they are assigned to.</p>
     */
    inline bool TagRulesHasBeenSet() const { return m_tagRulesHasBeenSet; }

    /**
     * <p>A set of rules associated with row-level security, such as the tag names and
     * columns that they are assigned to.</p>
     */
    inline void SetTagRules(const Aws::Vector<RowLevelPermissionTagRule>& value) { m_tagRulesHasBeenSet = true; m_tagRules = value; }

    /**
     * <p>A set of rules associated with row-level security, such as the tag names and
     * columns that they are assigned to.</p>
     */
    inline void SetTagRules(Aws::Vector<RowLevelPermissionTagRule>&& value) { m_tagRulesHasBeenSet = true; m_tagRules = std::move(value); }

    /**
     * <p>A set of rules associated with row-level security, such as the tag names and
     * columns that they are assigned to.</p>
     */
    inline RowLevelPermissionTagConfiguration& WithTagRules(const Aws::Vector<RowLevelPermissionTagRule>& value) { SetTagRules(value); return *this;}

    /**
     * <p>A set of rules associated with row-level security, such as the tag names and
     * columns that they are assigned to.</p>
     */
    inline RowLevelPermissionTagConfiguration& WithTagRules(Aws::Vector<RowLevelPermissionTagRule>&& value) { SetTagRules(std::move(value)); return *this;}

    /**
     * <p>A set of rules associated with row-level security, such as the tag names and
     * columns that they are assigned to.</p>
     */
    inline RowLevelPermissionTagConfiguration& AddTagRules(const RowLevelPermissionTagRule& value) { m_tagRulesHasBeenSet = true; m_tagRules.push_back(value); return *this; }

    /**
     * <p>A set of rules associated with row-level security, such as the tag names and
     * columns that they are assigned to.</p>
     */
    inline RowLevelPermissionTagConfiguration& AddTagRules(RowLevelPermissionTagRule&& value) { m_tagRulesHasBeenSet = true; m_tagRules.push_back(std::move(value)); return *this; }

  private:

    Status m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<RowLevelPermissionTagRule> m_tagRules;
    bool m_tagRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
