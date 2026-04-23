/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ELASTICSEARCHSERVICE_API SnapshotOptions
  {
  public:
    SnapshotOptions();
    SnapshotOptions(Aws::Utils::Json::JsonView jsonValue);
    SnapshotOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_automatedSnapshotStartHourHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
