/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/AdvancedSecurityOptions.h>
#include <aws/es/model/OptionStatus.h>
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
   * <p> Specifies the status of advanced security options for the specified
   * Elasticsearch domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AdvancedSecurityOptionsStatus">AWS
   * API Reference</a></p>
   */
  class AdvancedSecurityOptionsStatus
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API AdvancedSecurityOptionsStatus();
    AWS_ELASTICSEARCHSERVICE_API AdvancedSecurityOptionsStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API AdvancedSecurityOptionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies advanced security options for the specified Elasticsearch
     * domain.</p>
     */
    inline const AdvancedSecurityOptions& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const AdvancedSecurityOptions& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(AdvancedSecurityOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline AdvancedSecurityOptionsStatus& WithOptions(const AdvancedSecurityOptions& value) { SetOptions(value); return *this;}
    inline AdvancedSecurityOptionsStatus& WithOptions(AdvancedSecurityOptions&& value) { SetOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Status of the advanced security options for the specified Elasticsearch
     * domain.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AdvancedSecurityOptionsStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}
    inline AdvancedSecurityOptionsStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    AdvancedSecurityOptions m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
