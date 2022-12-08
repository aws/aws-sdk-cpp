/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/SemtechGnssConfiguration.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>The wrapper for position solver configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/PositionSolverConfigurations">AWS
   * API Reference</a></p>
   */
  class PositionSolverConfigurations
  {
  public:
    AWS_IOTWIRELESS_API PositionSolverConfigurations();
    AWS_IOTWIRELESS_API PositionSolverConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API PositionSolverConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Semtech GNSS solver configuration object.</p>
     */
    inline const SemtechGnssConfiguration& GetSemtechGnss() const{ return m_semtechGnss; }

    /**
     * <p>The Semtech GNSS solver configuration object.</p>
     */
    inline bool SemtechGnssHasBeenSet() const { return m_semtechGnssHasBeenSet; }

    /**
     * <p>The Semtech GNSS solver configuration object.</p>
     */
    inline void SetSemtechGnss(const SemtechGnssConfiguration& value) { m_semtechGnssHasBeenSet = true; m_semtechGnss = value; }

    /**
     * <p>The Semtech GNSS solver configuration object.</p>
     */
    inline void SetSemtechGnss(SemtechGnssConfiguration&& value) { m_semtechGnssHasBeenSet = true; m_semtechGnss = std::move(value); }

    /**
     * <p>The Semtech GNSS solver configuration object.</p>
     */
    inline PositionSolverConfigurations& WithSemtechGnss(const SemtechGnssConfiguration& value) { SetSemtechGnss(value); return *this;}

    /**
     * <p>The Semtech GNSS solver configuration object.</p>
     */
    inline PositionSolverConfigurations& WithSemtechGnss(SemtechGnssConfiguration&& value) { SetSemtechGnss(std::move(value)); return *this;}

  private:

    SemtechGnssConfiguration m_semtechGnss;
    bool m_semtechGnssHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
