/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/DatasetState.h>
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
   * <p>The status of the dataset. This contains the state and any error messages.
   * The state is <code>ACTIVE</code> when ready to use.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DatasetStatus">AWS
   * API Reference</a></p>
   */
  class DatasetStatus
  {
  public:
    AWS_IOTSITEWISE_API DatasetStatus();
    AWS_IOTSITEWISE_API DatasetStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API DatasetStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current status of the dataset.</p>
     */
    inline const DatasetState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const DatasetState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(DatasetState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline DatasetStatus& WithState(const DatasetState& value) { SetState(value); return *this;}
    inline DatasetStatus& WithState(DatasetState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ErrorDetails& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const ErrorDetails& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(ErrorDetails&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline DatasetStatus& WithError(const ErrorDetails& value) { SetError(value); return *this;}
    inline DatasetStatus& WithError(ErrorDetails&& value) { SetError(std::move(value)); return *this;}
    ///@}
  private:

    DatasetState m_state;
    bool m_stateHasBeenSet = false;

    ErrorDetails m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
