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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p> Status of the advanced options for the specified Elasticsearch domain.
   * Currently, the following advanced options are available:</p> <ul> <li>Option to
   * allow references to indices in an HTTP request body. Must be <code>false</code>
   * when configuring access to individual sub-resources. By default, the value is
   * <code>true</code>. See <a
   * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
   * target="_blank">Configuration Advanced Options</a> for more information.</li>
   * <li>Option to specify the percentage of heap space that is allocated to field
   * data. By default, this setting is unbounded.</li> </ul> <p>For more information,
   * see <a
   * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options">Configuring
   * Advanced Options</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AdvancedOptionsStatus">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API AdvancedOptionsStatus
  {
  public:
    AdvancedOptionsStatus();
    AdvancedOptionsStatus(Aws::Utils::Json::JsonView jsonValue);
    AdvancedOptionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies the status of advanced options for the specified Elasticsearch
     * domain.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOptions() const{ return m_options; }

    /**
     * <p> Specifies the status of advanced options for the specified Elasticsearch
     * domain.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p> Specifies the status of advanced options for the specified Elasticsearch
     * domain.</p>
     */
    inline void SetOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p> Specifies the status of advanced options for the specified Elasticsearch
     * domain.</p>
     */
    inline void SetOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p> Specifies the status of advanced options for the specified Elasticsearch
     * domain.</p>
     */
    inline AdvancedOptionsStatus& WithOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetOptions(value); return *this;}

    /**
     * <p> Specifies the status of advanced options for the specified Elasticsearch
     * domain.</p>
     */
    inline AdvancedOptionsStatus& WithOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p> Specifies the status of advanced options for the specified Elasticsearch
     * domain.</p>
     */
    inline AdvancedOptionsStatus& AddOptions(const Aws::String& key, const Aws::String& value) { m_optionsHasBeenSet = true; m_options.emplace(key, value); return *this; }

    /**
     * <p> Specifies the status of advanced options for the specified Elasticsearch
     * domain.</p>
     */
    inline AdvancedOptionsStatus& AddOptions(Aws::String&& key, const Aws::String& value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), value); return *this; }

    /**
     * <p> Specifies the status of advanced options for the specified Elasticsearch
     * domain.</p>
     */
    inline AdvancedOptionsStatus& AddOptions(const Aws::String& key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Specifies the status of advanced options for the specified Elasticsearch
     * domain.</p>
     */
    inline AdvancedOptionsStatus& AddOptions(Aws::String&& key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Specifies the status of advanced options for the specified Elasticsearch
     * domain.</p>
     */
    inline AdvancedOptionsStatus& AddOptions(const char* key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Specifies the status of advanced options for the specified Elasticsearch
     * domain.</p>
     */
    inline AdvancedOptionsStatus& AddOptions(Aws::String&& key, const char* value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), value); return *this; }

    /**
     * <p> Specifies the status of advanced options for the specified Elasticsearch
     * domain.</p>
     */
    inline AdvancedOptionsStatus& AddOptions(const char* key, const char* value) { m_optionsHasBeenSet = true; m_options.emplace(key, value); return *this; }


    /**
     * <p> Specifies the status of <code>OptionStatus</code> for advanced options for
     * the specified Elasticsearch domain.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p> Specifies the status of <code>OptionStatus</code> for advanced options for
     * the specified Elasticsearch domain.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> Specifies the status of <code>OptionStatus</code> for advanced options for
     * the specified Elasticsearch domain.</p>
     */
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Specifies the status of <code>OptionStatus</code> for advanced options for
     * the specified Elasticsearch domain.</p>
     */
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> Specifies the status of <code>OptionStatus</code> for advanced options for
     * the specified Elasticsearch domain.</p>
     */
    inline AdvancedOptionsStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> Specifies the status of <code>OptionStatus</code> for advanced options for
     * the specified Elasticsearch domain.</p>
     */
    inline AdvancedOptionsStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_options;
    bool m_optionsHasBeenSet;

    OptionStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
