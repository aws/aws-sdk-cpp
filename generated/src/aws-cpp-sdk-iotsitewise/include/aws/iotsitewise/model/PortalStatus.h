/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/PortalState.h>
#include <aws/iotsitewise/model/MonitorErrorDetails.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains information about the current status of a portal.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PortalStatus">AWS
   * API Reference</a></p>
   */
  class PortalStatus
  {
  public:
    AWS_IOTSITEWISE_API PortalStatus();
    AWS_IOTSITEWISE_API PortalStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API PortalStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current state of the portal.</p>
     */
    inline const PortalState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const PortalState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(PortalState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline PortalStatus& WithState(const PortalState& value) { SetState(value); return *this;}
    inline PortalStatus& WithState(PortalState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains associated error information, if any.</p>
     */
    inline const MonitorErrorDetails& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const MonitorErrorDetails& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(MonitorErrorDetails&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline PortalStatus& WithError(const MonitorErrorDetails& value) { SetError(value); return *this;}
    inline PortalStatus& WithError(MonitorErrorDetails&& value) { SetError(std::move(value)); return *this;}
    ///@}
  private:

    PortalState m_state;
    bool m_stateHasBeenSet = false;

    MonitorErrorDetails m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
