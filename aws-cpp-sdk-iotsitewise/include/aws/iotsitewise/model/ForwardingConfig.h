/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ForwardingConfigState.h>
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
   * <p>The forwarding configuration for a given property.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ForwardingConfig">AWS
   * API Reference</a></p>
   */
  class AWS_IOTSITEWISE_API ForwardingConfig
  {
  public:
    ForwardingConfig();
    ForwardingConfig(Aws::Utils::Json::JsonView jsonValue);
    ForwardingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The forwarding state for the given property. </p>
     */
    inline const ForwardingConfigState& GetState() const{ return m_state; }

    /**
     * <p>The forwarding state for the given property. </p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The forwarding state for the given property. </p>
     */
    inline void SetState(const ForwardingConfigState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The forwarding state for the given property. </p>
     */
    inline void SetState(ForwardingConfigState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The forwarding state for the given property. </p>
     */
    inline ForwardingConfig& WithState(const ForwardingConfigState& value) { SetState(value); return *this;}

    /**
     * <p>The forwarding state for the given property. </p>
     */
    inline ForwardingConfig& WithState(ForwardingConfigState&& value) { SetState(std::move(value)); return *this;}

  private:

    ForwardingConfigState m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
