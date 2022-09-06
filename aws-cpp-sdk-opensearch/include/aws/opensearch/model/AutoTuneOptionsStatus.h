/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/AutoTuneOptions.h>
#include <aws/opensearch/model/AutoTuneStatus.h>
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
   * <p>The Auto-Tune status for the domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AutoTuneOptionsStatus">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API AutoTuneOptionsStatus
  {
  public:
    AutoTuneOptionsStatus();
    AutoTuneOptionsStatus(Aws::Utils::Json::JsonView jsonValue);
    AutoTuneOptionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies Auto-Tune options for the domain.</p>
     */
    inline const AutoTuneOptions& GetOptions() const{ return m_options; }

    /**
     * <p>Specifies Auto-Tune options for the domain.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>Specifies Auto-Tune options for the domain.</p>
     */
    inline void SetOptions(const AutoTuneOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>Specifies Auto-Tune options for the domain.</p>
     */
    inline void SetOptions(AutoTuneOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>Specifies Auto-Tune options for the domain.</p>
     */
    inline AutoTuneOptionsStatus& WithOptions(const AutoTuneOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>Specifies Auto-Tune options for the domain.</p>
     */
    inline AutoTuneOptionsStatus& WithOptions(AutoTuneOptions&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>The status of the Auto-Tune options for the domain.</p>
     */
    inline const AutoTuneStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Auto-Tune options for the domain.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Auto-Tune options for the domain.</p>
     */
    inline void SetStatus(const AutoTuneStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Auto-Tune options for the domain.</p>
     */
    inline void SetStatus(AutoTuneStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Auto-Tune options for the domain.</p>
     */
    inline AutoTuneOptionsStatus& WithStatus(const AutoTuneStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Auto-Tune options for the domain.</p>
     */
    inline AutoTuneOptionsStatus& WithStatus(AutoTuneStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    AutoTuneOptions m_options;
    bool m_optionsHasBeenSet = false;

    AutoTuneStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
