﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Includes counts by severity level for medium severity and higher level
   * findings, plus a total for all of the findings for the specified
   * filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/SeverityCounts">AWS
   * API Reference</a></p>
   */
  class SeverityCounts
  {
  public:
    AWS_IMAGEBUILDER_API SeverityCounts() = default;
    AWS_IMAGEBUILDER_API SeverityCounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API SeverityCounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of findings across all severity levels for the specified
     * filter.</p>
     */
    inline long long GetAll() const { return m_all; }
    inline bool AllHasBeenSet() const { return m_allHasBeenSet; }
    inline void SetAll(long long value) { m_allHasBeenSet = true; m_all = value; }
    inline SeverityCounts& WithAll(long long value) { SetAll(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of critical severity findings for the specified filter.</p>
     */
    inline long long GetCritical() const { return m_critical; }
    inline bool CriticalHasBeenSet() const { return m_criticalHasBeenSet; }
    inline void SetCritical(long long value) { m_criticalHasBeenSet = true; m_critical = value; }
    inline SeverityCounts& WithCritical(long long value) { SetCritical(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of high severity findings for the specified filter.</p>
     */
    inline long long GetHigh() const { return m_high; }
    inline bool HighHasBeenSet() const { return m_highHasBeenSet; }
    inline void SetHigh(long long value) { m_highHasBeenSet = true; m_high = value; }
    inline SeverityCounts& WithHigh(long long value) { SetHigh(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of medium severity findings for the specified filter.</p>
     */
    inline long long GetMedium() const { return m_medium; }
    inline bool MediumHasBeenSet() const { return m_mediumHasBeenSet; }
    inline void SetMedium(long long value) { m_mediumHasBeenSet = true; m_medium = value; }
    inline SeverityCounts& WithMedium(long long value) { SetMedium(value); return *this;}
    ///@}
  private:

    long long m_all{0};
    bool m_allHasBeenSet = false;

    long long m_critical{0};
    bool m_criticalHasBeenSet = false;

    long long m_high{0};
    bool m_highHasBeenSet = false;

    long long m_medium{0};
    bool m_mediumHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
