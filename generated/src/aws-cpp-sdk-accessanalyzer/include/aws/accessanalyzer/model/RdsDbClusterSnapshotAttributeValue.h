/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>The values for a manual Amazon RDS DB cluster snapshot
   * attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/RdsDbClusterSnapshotAttributeValue">AWS
   * API Reference</a></p>
   */
  class RdsDbClusterSnapshotAttributeValue
  {
  public:
    AWS_ACCESSANALYZER_API RdsDbClusterSnapshotAttributeValue();
    AWS_ACCESSANALYZER_API RdsDbClusterSnapshotAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API RdsDbClusterSnapshotAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account IDs that have access to the manual Amazon RDS
     * DB cluster snapshot. If the value <code>all</code> is specified, then the Amazon
     * RDS DB cluster snapshot is public and can be copied or restored by all Amazon
     * Web Services accounts.</p> <ul> <li> <p>If the configuration is for an existing
     * Amazon RDS DB cluster snapshot and you do not specify the
     * <code>accountIds</code> in <code>RdsDbClusterSnapshotAttributeValue</code>, then
     * the access preview uses the existing shared <code>accountIds</code> for the
     * snapshot.</p> </li> <li> <p>If the access preview is for a new resource and you
     * do not specify the specify the <code>accountIds</code> in
     * <code>RdsDbClusterSnapshotAttributeValue</code>, then the access preview
     * considers the snapshot without any attributes.</p> </li> <li> <p>To propose
     * deletion of existing shared <code>accountIds</code>, you can specify an empty
     * list for <code>accountIds</code> in the
     * <code>RdsDbClusterSnapshotAttributeValue</code>.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The Amazon Web Services account IDs that have access to the manual Amazon RDS
     * DB cluster snapshot. If the value <code>all</code> is specified, then the Amazon
     * RDS DB cluster snapshot is public and can be copied or restored by all Amazon
     * Web Services accounts.</p> <ul> <li> <p>If the configuration is for an existing
     * Amazon RDS DB cluster snapshot and you do not specify the
     * <code>accountIds</code> in <code>RdsDbClusterSnapshotAttributeValue</code>, then
     * the access preview uses the existing shared <code>accountIds</code> for the
     * snapshot.</p> </li> <li> <p>If the access preview is for a new resource and you
     * do not specify the specify the <code>accountIds</code> in
     * <code>RdsDbClusterSnapshotAttributeValue</code>, then the access preview
     * considers the snapshot without any attributes.</p> </li> <li> <p>To propose
     * deletion of existing shared <code>accountIds</code>, you can specify an empty
     * list for <code>accountIds</code> in the
     * <code>RdsDbClusterSnapshotAttributeValue</code>.</p> </li> </ul>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>The Amazon Web Services account IDs that have access to the manual Amazon RDS
     * DB cluster snapshot. If the value <code>all</code> is specified, then the Amazon
     * RDS DB cluster snapshot is public and can be copied or restored by all Amazon
     * Web Services accounts.</p> <ul> <li> <p>If the configuration is for an existing
     * Amazon RDS DB cluster snapshot and you do not specify the
     * <code>accountIds</code> in <code>RdsDbClusterSnapshotAttributeValue</code>, then
     * the access preview uses the existing shared <code>accountIds</code> for the
     * snapshot.</p> </li> <li> <p>If the access preview is for a new resource and you
     * do not specify the specify the <code>accountIds</code> in
     * <code>RdsDbClusterSnapshotAttributeValue</code>, then the access preview
     * considers the snapshot without any attributes.</p> </li> <li> <p>To propose
     * deletion of existing shared <code>accountIds</code>, you can specify an empty
     * list for <code>accountIds</code> in the
     * <code>RdsDbClusterSnapshotAttributeValue</code>.</p> </li> </ul>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>The Amazon Web Services account IDs that have access to the manual Amazon RDS
     * DB cluster snapshot. If the value <code>all</code> is specified, then the Amazon
     * RDS DB cluster snapshot is public and can be copied or restored by all Amazon
     * Web Services accounts.</p> <ul> <li> <p>If the configuration is for an existing
     * Amazon RDS DB cluster snapshot and you do not specify the
     * <code>accountIds</code> in <code>RdsDbClusterSnapshotAttributeValue</code>, then
     * the access preview uses the existing shared <code>accountIds</code> for the
     * snapshot.</p> </li> <li> <p>If the access preview is for a new resource and you
     * do not specify the specify the <code>accountIds</code> in
     * <code>RdsDbClusterSnapshotAttributeValue</code>, then the access preview
     * considers the snapshot without any attributes.</p> </li> <li> <p>To propose
     * deletion of existing shared <code>accountIds</code>, you can specify an empty
     * list for <code>accountIds</code> in the
     * <code>RdsDbClusterSnapshotAttributeValue</code>.</p> </li> </ul>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>The Amazon Web Services account IDs that have access to the manual Amazon RDS
     * DB cluster snapshot. If the value <code>all</code> is specified, then the Amazon
     * RDS DB cluster snapshot is public and can be copied or restored by all Amazon
     * Web Services accounts.</p> <ul> <li> <p>If the configuration is for an existing
     * Amazon RDS DB cluster snapshot and you do not specify the
     * <code>accountIds</code> in <code>RdsDbClusterSnapshotAttributeValue</code>, then
     * the access preview uses the existing shared <code>accountIds</code> for the
     * snapshot.</p> </li> <li> <p>If the access preview is for a new resource and you
     * do not specify the specify the <code>accountIds</code> in
     * <code>RdsDbClusterSnapshotAttributeValue</code>, then the access preview
     * considers the snapshot without any attributes.</p> </li> <li> <p>To propose
     * deletion of existing shared <code>accountIds</code>, you can specify an empty
     * list for <code>accountIds</code> in the
     * <code>RdsDbClusterSnapshotAttributeValue</code>.</p> </li> </ul>
     */
    inline RdsDbClusterSnapshotAttributeValue& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The Amazon Web Services account IDs that have access to the manual Amazon RDS
     * DB cluster snapshot. If the value <code>all</code> is specified, then the Amazon
     * RDS DB cluster snapshot is public and can be copied or restored by all Amazon
     * Web Services accounts.</p> <ul> <li> <p>If the configuration is for an existing
     * Amazon RDS DB cluster snapshot and you do not specify the
     * <code>accountIds</code> in <code>RdsDbClusterSnapshotAttributeValue</code>, then
     * the access preview uses the existing shared <code>accountIds</code> for the
     * snapshot.</p> </li> <li> <p>If the access preview is for a new resource and you
     * do not specify the specify the <code>accountIds</code> in
     * <code>RdsDbClusterSnapshotAttributeValue</code>, then the access preview
     * considers the snapshot without any attributes.</p> </li> <li> <p>To propose
     * deletion of existing shared <code>accountIds</code>, you can specify an empty
     * list for <code>accountIds</code> in the
     * <code>RdsDbClusterSnapshotAttributeValue</code>.</p> </li> </ul>
     */
    inline RdsDbClusterSnapshotAttributeValue& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account IDs that have access to the manual Amazon RDS
     * DB cluster snapshot. If the value <code>all</code> is specified, then the Amazon
     * RDS DB cluster snapshot is public and can be copied or restored by all Amazon
     * Web Services accounts.</p> <ul> <li> <p>If the configuration is for an existing
     * Amazon RDS DB cluster snapshot and you do not specify the
     * <code>accountIds</code> in <code>RdsDbClusterSnapshotAttributeValue</code>, then
     * the access preview uses the existing shared <code>accountIds</code> for the
     * snapshot.</p> </li> <li> <p>If the access preview is for a new resource and you
     * do not specify the specify the <code>accountIds</code> in
     * <code>RdsDbClusterSnapshotAttributeValue</code>, then the access preview
     * considers the snapshot without any attributes.</p> </li> <li> <p>To propose
     * deletion of existing shared <code>accountIds</code>, you can specify an empty
     * list for <code>accountIds</code> in the
     * <code>RdsDbClusterSnapshotAttributeValue</code>.</p> </li> </ul>
     */
    inline RdsDbClusterSnapshotAttributeValue& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>The Amazon Web Services account IDs that have access to the manual Amazon RDS
     * DB cluster snapshot. If the value <code>all</code> is specified, then the Amazon
     * RDS DB cluster snapshot is public and can be copied or restored by all Amazon
     * Web Services accounts.</p> <ul> <li> <p>If the configuration is for an existing
     * Amazon RDS DB cluster snapshot and you do not specify the
     * <code>accountIds</code> in <code>RdsDbClusterSnapshotAttributeValue</code>, then
     * the access preview uses the existing shared <code>accountIds</code> for the
     * snapshot.</p> </li> <li> <p>If the access preview is for a new resource and you
     * do not specify the specify the <code>accountIds</code> in
     * <code>RdsDbClusterSnapshotAttributeValue</code>, then the access preview
     * considers the snapshot without any attributes.</p> </li> <li> <p>To propose
     * deletion of existing shared <code>accountIds</code>, you can specify an empty
     * list for <code>accountIds</code> in the
     * <code>RdsDbClusterSnapshotAttributeValue</code>.</p> </li> </ul>
     */
    inline RdsDbClusterSnapshotAttributeValue& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Web Services account IDs that have access to the manual Amazon RDS
     * DB cluster snapshot. If the value <code>all</code> is specified, then the Amazon
     * RDS DB cluster snapshot is public and can be copied or restored by all Amazon
     * Web Services accounts.</p> <ul> <li> <p>If the configuration is for an existing
     * Amazon RDS DB cluster snapshot and you do not specify the
     * <code>accountIds</code> in <code>RdsDbClusterSnapshotAttributeValue</code>, then
     * the access preview uses the existing shared <code>accountIds</code> for the
     * snapshot.</p> </li> <li> <p>If the access preview is for a new resource and you
     * do not specify the specify the <code>accountIds</code> in
     * <code>RdsDbClusterSnapshotAttributeValue</code>, then the access preview
     * considers the snapshot without any attributes.</p> </li> <li> <p>To propose
     * deletion of existing shared <code>accountIds</code>, you can specify an empty
     * list for <code>accountIds</code> in the
     * <code>RdsDbClusterSnapshotAttributeValue</code>.</p> </li> </ul>
     */
    inline RdsDbClusterSnapshotAttributeValue& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
