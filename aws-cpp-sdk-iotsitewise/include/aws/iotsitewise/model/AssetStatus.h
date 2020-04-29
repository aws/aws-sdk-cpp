/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/AssetState.h>
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
   * <p>Contains information about the current status of an asset. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-and-model-states.html">Asset
   * and Model States</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetStatus">AWS
   * API Reference</a></p>
   */
  class AWS_IOTSITEWISE_API AssetStatus
  {
  public:
    AssetStatus();
    AssetStatus(Aws::Utils::Json::JsonView jsonValue);
    AssetStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current status of the asset.</p>
     */
    inline const AssetState& GetState() const{ return m_state; }

    /**
     * <p>The current status of the asset.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current status of the asset.</p>
     */
    inline void SetState(const AssetState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current status of the asset.</p>
     */
    inline void SetState(AssetState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current status of the asset.</p>
     */
    inline AssetStatus& WithState(const AssetState& value) { SetState(value); return *this;}

    /**
     * <p>The current status of the asset.</p>
     */
    inline AssetStatus& WithState(AssetState&& value) { SetState(std::move(value)); return *this;}


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
    inline AssetStatus& WithError(const ErrorDetails& value) { SetError(value); return *this;}

    /**
     * <p>Contains associated error information, if any.</p>
     */
    inline AssetStatus& WithError(ErrorDetails&& value) { SetError(std::move(value)); return *this;}

  private:

    AssetState m_state;
    bool m_stateHasBeenSet;

    ErrorDetails m_error;
    bool m_errorHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
