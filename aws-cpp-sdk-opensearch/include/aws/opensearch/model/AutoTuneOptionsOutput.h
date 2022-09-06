/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/AutoTuneState.h>
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
   * <p>The Auto-Tune options: the Auto-Tune desired state for the domain and list of
   * maintenance schedules. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AutoTuneOptionsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API AutoTuneOptionsOutput
  {
  public:
    AutoTuneOptionsOutput();
    AutoTuneOptionsOutput(Aws::Utils::Json::JsonView jsonValue);
    AutoTuneOptionsOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>AutoTuneState</code> for the domain. </p>
     */
    inline const AutoTuneState& GetState() const{ return m_state; }

    /**
     * <p>The <code>AutoTuneState</code> for the domain. </p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The <code>AutoTuneState</code> for the domain. </p>
     */
    inline void SetState(const AutoTuneState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The <code>AutoTuneState</code> for the domain. </p>
     */
    inline void SetState(AutoTuneState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The <code>AutoTuneState</code> for the domain. </p>
     */
    inline AutoTuneOptionsOutput& WithState(const AutoTuneState& value) { SetState(value); return *this;}

    /**
     * <p>The <code>AutoTuneState</code> for the domain. </p>
     */
    inline AutoTuneOptionsOutput& WithState(AutoTuneState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The error message while enabling or disabling Auto-Tune.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message while enabling or disabling Auto-Tune.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message while enabling or disabling Auto-Tune.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message while enabling or disabling Auto-Tune.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message while enabling or disabling Auto-Tune.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message while enabling or disabling Auto-Tune.</p>
     */
    inline AutoTuneOptionsOutput& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message while enabling or disabling Auto-Tune.</p>
     */
    inline AutoTuneOptionsOutput& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message while enabling or disabling Auto-Tune.</p>
     */
    inline AutoTuneOptionsOutput& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    AutoTuneState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
