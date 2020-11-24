/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ConfigurationState.h>
#include <aws/iotsitewise/model/ConfigurationErrorDetails.h>
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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ConfigurationStatus">AWS
   * API Reference</a></p>
   */
  class AWS_IOTSITEWISE_API ConfigurationStatus
  {
  public:
    ConfigurationStatus();
    ConfigurationStatus(Aws::Utils::Json::JsonView jsonValue);
    ConfigurationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const ConfigurationState& GetState() const{ return m_state; }

    /**
     * <p/>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetState(const ConfigurationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p/>
     */
    inline void SetState(ConfigurationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p/>
     */
    inline ConfigurationStatus& WithState(const ConfigurationState& value) { SetState(value); return *this;}

    /**
     * <p/>
     */
    inline ConfigurationStatus& WithState(ConfigurationState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const ConfigurationErrorDetails& GetError() const{ return m_error; }

    /**
     * <p/>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetError(const ConfigurationErrorDetails& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p/>
     */
    inline void SetError(ConfigurationErrorDetails&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p/>
     */
    inline ConfigurationStatus& WithError(const ConfigurationErrorDetails& value) { SetError(value); return *this;}

    /**
     * <p/>
     */
    inline ConfigurationStatus& WithError(ConfigurationErrorDetails&& value) { SetError(std::move(value)); return *this;}

  private:

    ConfigurationState m_state;
    bool m_stateHasBeenSet;

    ConfigurationErrorDetails m_error;
    bool m_errorHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
