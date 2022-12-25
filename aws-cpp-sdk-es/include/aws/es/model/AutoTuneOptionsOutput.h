/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/AutoTuneState.h>
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
   * <p>Specifies the Auto-Tune options: the Auto-Tune desired state for the domain
   * and list of maintenance schedules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AutoTuneOptionsOutput">AWS
   * API Reference</a></p>
   */
  class AutoTuneOptionsOutput
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API AutoTuneOptionsOutput();
    AWS_ELASTICSEARCHSERVICE_API AutoTuneOptionsOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API AutoTuneOptionsOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the <code>AutoTuneState</code> for the Elasticsearch domain.</p>
     */
    inline const AutoTuneState& GetState() const{ return m_state; }

    /**
     * <p>Specifies the <code>AutoTuneState</code> for the Elasticsearch domain.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Specifies the <code>AutoTuneState</code> for the Elasticsearch domain.</p>
     */
    inline void SetState(const AutoTuneState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Specifies the <code>AutoTuneState</code> for the Elasticsearch domain.</p>
     */
    inline void SetState(AutoTuneState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Specifies the <code>AutoTuneState</code> for the Elasticsearch domain.</p>
     */
    inline AutoTuneOptionsOutput& WithState(const AutoTuneState& value) { SetState(value); return *this;}

    /**
     * <p>Specifies the <code>AutoTuneState</code> for the Elasticsearch domain.</p>
     */
    inline AutoTuneOptionsOutput& WithState(AutoTuneState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Specifies the error message while enabling or disabling the Auto-Tune.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>Specifies the error message while enabling or disabling the Auto-Tune.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>Specifies the error message while enabling or disabling the Auto-Tune.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>Specifies the error message while enabling or disabling the Auto-Tune.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>Specifies the error message while enabling or disabling the Auto-Tune.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>Specifies the error message while enabling or disabling the Auto-Tune.</p>
     */
    inline AutoTuneOptionsOutput& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>Specifies the error message while enabling or disabling the Auto-Tune.</p>
     */
    inline AutoTuneOptionsOutput& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>Specifies the error message while enabling or disabling the Auto-Tune.</p>
     */
    inline AutoTuneOptionsOutput& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    AutoTuneState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
