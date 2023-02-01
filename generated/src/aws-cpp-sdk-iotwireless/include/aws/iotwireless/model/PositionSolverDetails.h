/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/SemtechGnssDetail.h>
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
   * <p>The wrapper for position solver details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/PositionSolverDetails">AWS
   * API Reference</a></p>
   */
  class PositionSolverDetails
  {
  public:
    AWS_IOTWIRELESS_API PositionSolverDetails();
    AWS_IOTWIRELESS_API PositionSolverDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API PositionSolverDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Semtech GNSS solver object details.</p>
     */
    inline const SemtechGnssDetail& GetSemtechGnss() const{ return m_semtechGnss; }

    /**
     * <p>The Semtech GNSS solver object details.</p>
     */
    inline bool SemtechGnssHasBeenSet() const { return m_semtechGnssHasBeenSet; }

    /**
     * <p>The Semtech GNSS solver object details.</p>
     */
    inline void SetSemtechGnss(const SemtechGnssDetail& value) { m_semtechGnssHasBeenSet = true; m_semtechGnss = value; }

    /**
     * <p>The Semtech GNSS solver object details.</p>
     */
    inline void SetSemtechGnss(SemtechGnssDetail&& value) { m_semtechGnssHasBeenSet = true; m_semtechGnss = std::move(value); }

    /**
     * <p>The Semtech GNSS solver object details.</p>
     */
    inline PositionSolverDetails& WithSemtechGnss(const SemtechGnssDetail& value) { SetSemtechGnss(value); return *this;}

    /**
     * <p>The Semtech GNSS solver object details.</p>
     */
    inline PositionSolverDetails& WithSemtechGnss(SemtechGnssDetail&& value) { SetSemtechGnss(std::move(value)); return *this;}

  private:

    SemtechGnssDetail m_semtechGnss;
    bool m_semtechGnssHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
