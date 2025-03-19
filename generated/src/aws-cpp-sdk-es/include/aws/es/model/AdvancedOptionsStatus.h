/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AdvancedOptionsStatus
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API AdvancedOptionsStatus() = default;
    AWS_ELASTICSEARCHSERVICE_API AdvancedOptionsStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API AdvancedOptionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the status of advanced options for the specified Elasticsearch
     * domain.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Aws::Map<Aws::String, Aws::String>>
    AdvancedOptionsStatus& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    template<typename OptionsKeyT = Aws::String, typename OptionsValueT = Aws::String>
    AdvancedOptionsStatus& AddOptions(OptionsKeyT&& key, OptionsValueT&& value) {
      m_optionsHasBeenSet = true; m_options.emplace(std::forward<OptionsKeyT>(key), std::forward<OptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> Specifies the status of <code>OptionStatus</code> for advanced options for
     * the specified Elasticsearch domain.</p>
     */
    inline const OptionStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = OptionStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = OptionStatus>
    AdvancedOptionsStatus& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
