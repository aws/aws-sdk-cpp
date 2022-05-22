/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/opensearch/model/OptionStatus.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Status of the advanced options for the specified domain. Currently, the
   * following advanced options are available: </p> <ul> <li>Option to allow
   * references to indices in an HTTP request body. Must be <code>false</code> when
   * configuring access to individual sub-resources. By default, the value is
   * <code>true</code>. See <a
   * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
   * target="_blank">Advanced cluster parameters </a> for more information. </li>
   * <li>Option to specify the percentage of heap space allocated to field data. By
   * default, this setting is unbounded. </li> </ul> <p>For more information, see <a
   * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">
   * Advanced cluster parameters</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AdvancedOptionsStatus">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API AdvancedOptionsStatus
  {
  public:
    AdvancedOptionsStatus();
    AdvancedOptionsStatus(Aws::Utils::Json::JsonView jsonValue);
    AdvancedOptionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of advanced options for the specified domain.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOptions() const{ return m_options; }

    /**
     * <p>The status of advanced options for the specified domain.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The status of advanced options for the specified domain.</p>
     */
    inline void SetOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The status of advanced options for the specified domain.</p>
     */
    inline void SetOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The status of advanced options for the specified domain.</p>
     */
    inline AdvancedOptionsStatus& WithOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetOptions(value); return *this;}

    /**
     * <p>The status of advanced options for the specified domain.</p>
     */
    inline AdvancedOptionsStatus& WithOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p>The status of advanced options for the specified domain.</p>
     */
    inline AdvancedOptionsStatus& AddOptions(const Aws::String& key, const Aws::String& value) { m_optionsHasBeenSet = true; m_options.emplace(key, value); return *this; }

    /**
     * <p>The status of advanced options for the specified domain.</p>
     */
    inline AdvancedOptionsStatus& AddOptions(Aws::String&& key, const Aws::String& value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), value); return *this; }

    /**
     * <p>The status of advanced options for the specified domain.</p>
     */
    inline AdvancedOptionsStatus& AddOptions(const Aws::String& key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The status of advanced options for the specified domain.</p>
     */
    inline AdvancedOptionsStatus& AddOptions(Aws::String&& key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The status of advanced options for the specified domain.</p>
     */
    inline AdvancedOptionsStatus& AddOptions(const char* key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The status of advanced options for the specified domain.</p>
     */
    inline AdvancedOptionsStatus& AddOptions(Aws::String&& key, const char* value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), value); return *this; }

    /**
     * <p>The status of advanced options for the specified domain.</p>
     */
    inline AdvancedOptionsStatus& AddOptions(const char* key, const char* value) { m_optionsHasBeenSet = true; m_options.emplace(key, value); return *this; }


    /**
     * <p>The <code>OptionStatus</code> for advanced options for the specified domain.
     * </p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The <code>OptionStatus</code> for advanced options for the specified domain.
     * </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The <code>OptionStatus</code> for advanced options for the specified domain.
     * </p>
     */
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The <code>OptionStatus</code> for advanced options for the specified domain.
     * </p>
     */
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The <code>OptionStatus</code> for advanced options for the specified domain.
     * </p>
     */
    inline AdvancedOptionsStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The <code>OptionStatus</code> for advanced options for the specified domain.
     * </p>
     */
    inline AdvancedOptionsStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_options;
    bool m_optionsHasBeenSet;

    OptionStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
