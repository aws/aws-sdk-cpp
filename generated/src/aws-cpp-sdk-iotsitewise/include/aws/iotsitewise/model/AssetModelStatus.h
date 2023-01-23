/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/AssetModelState.h>
#include <aws/iotsitewise/model/ErrorDetails.h>
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
   * <p>Contains current status information for an asset model. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-and-model-states.html">Asset
   * and model states</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetModelStatus">AWS
   * API Reference</a></p>
   */
  class AssetModelStatus
  {
  public:
    AWS_IOTSITEWISE_API AssetModelStatus();
    AWS_IOTSITEWISE_API AssetModelStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetModelStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current state of the asset model.</p>
     */
    inline const AssetModelState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the asset model.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the asset model.</p>
     */
    inline void SetState(const AssetModelState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the asset model.</p>
     */
    inline void SetState(AssetModelState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the asset model.</p>
     */
    inline AssetModelStatus& WithState(const AssetModelState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the asset model.</p>
     */
    inline AssetModelStatus& WithState(AssetModelState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Contains associated error information, if any.</p>
     */
    inline const ErrorDetails& GetError() const{ return m_error; }

    /**
     * <p>Contains associated error information, if any.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>Contains associated error information, if any.</p>
     */
    inline void SetError(const ErrorDetails& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>Contains associated error information, if any.</p>
     */
    inline void SetError(ErrorDetails&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>Contains associated error information, if any.</p>
     */
    inline AssetModelStatus& WithError(const ErrorDetails& value) { SetError(value); return *this;}

    /**
     * <p>Contains associated error information, if any.</p>
     */
    inline AssetModelStatus& WithError(ErrorDetails&& value) { SetError(std::move(value)); return *this;}

  private:

    AssetModelState m_state;
    bool m_stateHasBeenSet = false;

    ErrorDetails m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
