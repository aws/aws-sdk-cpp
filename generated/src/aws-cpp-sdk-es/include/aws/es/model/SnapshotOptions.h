/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>

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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Specifies the time, in UTC format, when the service takes a daily automated
   * snapshot of the specified Elasticsearch domain. Default value is <code>0</code>
   * hours.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/SnapshotOptions">AWS
   * API Reference</a></p>
   */
  class SnapshotOptions
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API SnapshotOptions();
    AWS_ELASTICSEARCHSERVICE_API SnapshotOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API SnapshotOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the time, in UTC format, when the service takes a daily automated
     * snapshot of the specified Elasticsearch domain. Default value is <code>0</code>
     * hours.</p>
     */
    inline int GetAutomatedSnapshotStartHour() const{ return m_automatedSnapshotStartHour; }

    /**
     * <p>Specifies the time, in UTC format, when the service takes a daily automated
     * snapshot of the specified Elasticsearch domain. Default value is <code>0</code>
     * hours.</p>
     */
    inline bool AutomatedSnapshotStartHourHasBeenSet() const { return m_automatedSnapshotStartHourHasBeenSet; }

    /**
     * <p>Specifies the time, in UTC format, when the service takes a daily automated
     * snapshot of the specified Elasticsearch domain. Default value is <code>0</code>
     * hours.</p>
     */
    inline void SetAutomatedSnapshotStartHour(int value) { m_automatedSnapshotStartHourHasBeenSet = true; m_automatedSnapshotStartHour = value; }

    /**
     * <p>Specifies the time, in UTC format, when the service takes a daily automated
     * snapshot of the specified Elasticsearch domain. Default value is <code>0</code>
     * hours.</p>
     */
    inline SnapshotOptions& WithAutomatedSnapshotStartHour(int value) { SetAutomatedSnapshotStartHour(value); return *this;}

  private:

    int m_automatedSnapshotStartHour;
    bool m_automatedSnapshotStartHourHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
