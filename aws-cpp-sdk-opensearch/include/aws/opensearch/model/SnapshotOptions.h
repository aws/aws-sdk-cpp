/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The time, in UTC format, when OpenSearch Service takes a daily automated
   * snapshot of the specified domain. Default is <code>0</code> hours.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/SnapshotOptions">AWS
   * API Reference</a></p>
   */
  class SnapshotOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API SnapshotOptions();
    AWS_OPENSEARCHSERVICE_API SnapshotOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API SnapshotOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time, in UTC format, when OpenSearch Service takes a daily automated
     * snapshot of the specified domain. Default is <code>0</code> hours.</p>
     */
    inline int GetAutomatedSnapshotStartHour() const{ return m_automatedSnapshotStartHour; }

    /**
     * <p>The time, in UTC format, when OpenSearch Service takes a daily automated
     * snapshot of the specified domain. Default is <code>0</code> hours.</p>
     */
    inline bool AutomatedSnapshotStartHourHasBeenSet() const { return m_automatedSnapshotStartHourHasBeenSet; }

    /**
     * <p>The time, in UTC format, when OpenSearch Service takes a daily automated
     * snapshot of the specified domain. Default is <code>0</code> hours.</p>
     */
    inline void SetAutomatedSnapshotStartHour(int value) { m_automatedSnapshotStartHourHasBeenSet = true; m_automatedSnapshotStartHour = value; }

    /**
     * <p>The time, in UTC format, when OpenSearch Service takes a daily automated
     * snapshot of the specified domain. Default is <code>0</code> hours.</p>
     */
    inline SnapshotOptions& WithAutomatedSnapshotStartHour(int value) { SetAutomatedSnapshotStartHour(value); return *this;}

  private:

    int m_automatedSnapshotStartHour;
    bool m_automatedSnapshotStartHourHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
