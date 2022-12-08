/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/AdvancedSecurityOptions.h>
#include <aws/opensearch/model/OptionStatus.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The status of fine-grained access control settings for a
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AdvancedSecurityOptionsStatus">AWS
   * API Reference</a></p>
   */
  class AdvancedSecurityOptionsStatus
  {
  public:
    AWS_OPENSEARCHSERVICE_API AdvancedSecurityOptionsStatus();
    AWS_OPENSEARCHSERVICE_API AdvancedSecurityOptionsStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AdvancedSecurityOptionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Container for fine-grained access control settings.</p>
     */
    inline const AdvancedSecurityOptions& GetOptions() const{ return m_options; }

    /**
     * <p>Container for fine-grained access control settings.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>Container for fine-grained access control settings.</p>
     */
    inline void SetOptions(const AdvancedSecurityOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>Container for fine-grained access control settings.</p>
     */
    inline void SetOptions(AdvancedSecurityOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>Container for fine-grained access control settings.</p>
     */
    inline AdvancedSecurityOptionsStatus& WithOptions(const AdvancedSecurityOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>Container for fine-grained access control settings.</p>
     */
    inline AdvancedSecurityOptionsStatus& WithOptions(AdvancedSecurityOptions&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>Status of the fine-grained access control settings for a domain.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the fine-grained access control settings for a domain.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of the fine-grained access control settings for a domain.</p>
     */
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of the fine-grained access control settings for a domain.</p>
     */
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of the fine-grained access control settings for a domain.</p>
     */
    inline AdvancedSecurityOptionsStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the fine-grained access control settings for a domain.</p>
     */
    inline AdvancedSecurityOptionsStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    AdvancedSecurityOptions m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
