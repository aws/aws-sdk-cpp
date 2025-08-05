/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-region-switch/model/RoutingControlStateChange.h>
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
namespace ARCRegionswitch
{
namespace Model
{

  /**
   * <p>Represents the state of an ARC routing control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/ArcRoutingControlState">AWS
   * API Reference</a></p>
   */
  class ArcRoutingControlState
  {
  public:
    AWS_ARCREGIONSWITCH_API ArcRoutingControlState() = default;
    AWS_ARCREGIONSWITCH_API ArcRoutingControlState(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API ArcRoutingControlState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a routing control.</p>
     */
    inline const Aws::String& GetRoutingControlArn() const { return m_routingControlArn; }
    inline bool RoutingControlArnHasBeenSet() const { return m_routingControlArnHasBeenSet; }
    template<typename RoutingControlArnT = Aws::String>
    void SetRoutingControlArn(RoutingControlArnT&& value) { m_routingControlArnHasBeenSet = true; m_routingControlArn = std::forward<RoutingControlArnT>(value); }
    template<typename RoutingControlArnT = Aws::String>
    ArcRoutingControlState& WithRoutingControlArn(RoutingControlArnT&& value) { SetRoutingControlArn(std::forward<RoutingControlArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of an ARC routing control, On or Off.</p>
     */
    inline RoutingControlStateChange GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(RoutingControlStateChange value) { m_stateHasBeenSet = true; m_state = value; }
    inline ArcRoutingControlState& WithState(RoutingControlStateChange value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_routingControlArn;
    bool m_routingControlArnHasBeenSet = false;

    RoutingControlStateChange m_state{RoutingControlStateChange::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
