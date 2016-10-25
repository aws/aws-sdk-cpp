/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/es/model/SnapshotOptions.h>
#include <aws/es/model/OptionStatus.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Status of a daily automated snapshot.</p>
   */
  class AWS_ELASTICSEARCHSERVICE_API SnapshotOptionsStatus
  {
  public:
    SnapshotOptionsStatus();
    SnapshotOptionsStatus(const Aws::Utils::Json::JsonValue& jsonValue);
    SnapshotOptionsStatus& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Specifies the daily snapshot options specified for the Elasticsearch
     * domain.</p>
     */
    inline const SnapshotOptions& GetOptions() const{ return m_options; }

    /**
     * <p>Specifies the daily snapshot options specified for the Elasticsearch
     * domain.</p>
     */
    inline void SetOptions(const SnapshotOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>Specifies the daily snapshot options specified for the Elasticsearch
     * domain.</p>
     */
    inline void SetOptions(SnapshotOptions&& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>Specifies the daily snapshot options specified for the Elasticsearch
     * domain.</p>
     */
    inline SnapshotOptionsStatus& WithOptions(const SnapshotOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>Specifies the daily snapshot options specified for the Elasticsearch
     * domain.</p>
     */
    inline SnapshotOptionsStatus& WithOptions(SnapshotOptions&& value) { SetOptions(value); return *this;}

    /**
     * <p>Specifies the status of a daily automated snapshot.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies the status of a daily automated snapshot.</p>
     */
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies the status of a daily automated snapshot.</p>
     */
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies the status of a daily automated snapshot.</p>
     */
    inline SnapshotOptionsStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the status of a daily automated snapshot.</p>
     */
    inline SnapshotOptionsStatus& WithStatus(OptionStatus&& value) { SetStatus(value); return *this;}

  private:
    SnapshotOptions m_options;
    bool m_optionsHasBeenSet;
    OptionStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
