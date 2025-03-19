/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/IntegerRange.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>A socket address with a port range.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/RangedSocketAddress">AWS
   * API Reference</a></p>
   */
  class RangedSocketAddress
  {
  public:
    AWS_GROUNDSTATION_API RangedSocketAddress() = default;
    AWS_GROUNDSTATION_API RangedSocketAddress(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API RangedSocketAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>IPv4 socket address.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RangedSocketAddress& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Port range of a socket address.</p>
     */
    inline const IntegerRange& GetPortRange() const { return m_portRange; }
    inline bool PortRangeHasBeenSet() const { return m_portRangeHasBeenSet; }
    template<typename PortRangeT = IntegerRange>
    void SetPortRange(PortRangeT&& value) { m_portRangeHasBeenSet = true; m_portRange = std::forward<PortRangeT>(value); }
    template<typename PortRangeT = IntegerRange>
    RangedSocketAddress& WithPortRange(PortRangeT&& value) { SetPortRange(std::forward<PortRangeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    IntegerRange m_portRange;
    bool m_portRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
