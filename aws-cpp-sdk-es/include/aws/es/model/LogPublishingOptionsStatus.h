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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/es/model/OptionStatus.h>
#include <aws/es/model/LogType.h>
#include <aws/es/model/LogPublishingOption.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>The configured log publishing options for the domain and their current
   * status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/LogPublishingOptionsStatus">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API LogPublishingOptionsStatus
  {
  public:
    LogPublishingOptionsStatus();
    LogPublishingOptionsStatus(Aws::Utils::Json::JsonView jsonValue);
    LogPublishingOptionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The log publishing options configured for the Elasticsearch domain.</p>
     */
    inline const Aws::Map<LogType, LogPublishingOption>& GetOptions() const{ return m_options; }

    /**
     * <p>The log publishing options configured for the Elasticsearch domain.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The log publishing options configured for the Elasticsearch domain.</p>
     */
    inline void SetOptions(const Aws::Map<LogType, LogPublishingOption>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The log publishing options configured for the Elasticsearch domain.</p>
     */
    inline void SetOptions(Aws::Map<LogType, LogPublishingOption>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The log publishing options configured for the Elasticsearch domain.</p>
     */
    inline LogPublishingOptionsStatus& WithOptions(const Aws::Map<LogType, LogPublishingOption>& value) { SetOptions(value); return *this;}

    /**
     * <p>The log publishing options configured for the Elasticsearch domain.</p>
     */
    inline LogPublishingOptionsStatus& WithOptions(Aws::Map<LogType, LogPublishingOption>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p>The log publishing options configured for the Elasticsearch domain.</p>
     */
    inline LogPublishingOptionsStatus& AddOptions(const LogType& key, const LogPublishingOption& value) { m_optionsHasBeenSet = true; m_options.emplace(key, value); return *this; }

    /**
     * <p>The log publishing options configured for the Elasticsearch domain.</p>
     */
    inline LogPublishingOptionsStatus& AddOptions(LogType&& key, const LogPublishingOption& value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), value); return *this; }

    /**
     * <p>The log publishing options configured for the Elasticsearch domain.</p>
     */
    inline LogPublishingOptionsStatus& AddOptions(const LogType& key, LogPublishingOption&& value) { m_optionsHasBeenSet = true; m_options.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The log publishing options configured for the Elasticsearch domain.</p>
     */
    inline LogPublishingOptionsStatus& AddOptions(LogType&& key, LogPublishingOption&& value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>The status of the log publishing options for the Elasticsearch domain. See
     * <code>OptionStatus</code> for the status information that's included. </p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the log publishing options for the Elasticsearch domain. See
     * <code>OptionStatus</code> for the status information that's included. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the log publishing options for the Elasticsearch domain. See
     * <code>OptionStatus</code> for the status information that's included. </p>
     */
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the log publishing options for the Elasticsearch domain. See
     * <code>OptionStatus</code> for the status information that's included. </p>
     */
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the log publishing options for the Elasticsearch domain. See
     * <code>OptionStatus</code> for the status information that's included. </p>
     */
    inline LogPublishingOptionsStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the log publishing options for the Elasticsearch domain. See
     * <code>OptionStatus</code> for the status information that's included. </p>
     */
    inline LogPublishingOptionsStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Map<LogType, LogPublishingOption> m_options;
    bool m_optionsHasBeenSet;

    OptionStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
