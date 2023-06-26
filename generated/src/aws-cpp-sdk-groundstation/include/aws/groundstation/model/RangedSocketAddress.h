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
    AWS_GROUNDSTATION_API RangedSocketAddress();
    AWS_GROUNDSTATION_API RangedSocketAddress(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API RangedSocketAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>IPv4 socket address.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>IPv4 socket address.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>IPv4 socket address.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>IPv4 socket address.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>IPv4 socket address.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>IPv4 socket address.</p>
     */
    inline RangedSocketAddress& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>IPv4 socket address.</p>
     */
    inline RangedSocketAddress& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>IPv4 socket address.</p>
     */
    inline RangedSocketAddress& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Port range of a socket address.</p>
     */
    inline const IntegerRange& GetPortRange() const{ return m_portRange; }

    /**
     * <p>Port range of a socket address.</p>
     */
    inline bool PortRangeHasBeenSet() const { return m_portRangeHasBeenSet; }

    /**
     * <p>Port range of a socket address.</p>
     */
    inline void SetPortRange(const IntegerRange& value) { m_portRangeHasBeenSet = true; m_portRange = value; }

    /**
     * <p>Port range of a socket address.</p>
     */
    inline void SetPortRange(IntegerRange&& value) { m_portRangeHasBeenSet = true; m_portRange = std::move(value); }

    /**
     * <p>Port range of a socket address.</p>
     */
    inline RangedSocketAddress& WithPortRange(const IntegerRange& value) { SetPortRange(value); return *this;}

    /**
     * <p>Port range of a socket address.</p>
     */
    inline RangedSocketAddress& WithPortRange(IntegerRange&& value) { SetPortRange(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    IntegerRange m_portRange;
    bool m_portRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
