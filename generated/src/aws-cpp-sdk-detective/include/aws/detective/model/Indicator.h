/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/model/IndicatorType.h>
#include <aws/detective/model/IndicatorDetail.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>Detective investigations triages indicators of compromises such as a finding
   * and surfaces only the most critical and suspicious issues, so you can focus on
   * high-level investigations. An <code>Indicator</code> lets you determine if an
   * Amazon Web Services resource is involved in unusual activity that could indicate
   * malicious behavior and its impact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/Indicator">AWS
   * API Reference</a></p>
   */
  class Indicator
  {
  public:
    AWS_DETECTIVE_API Indicator() = default;
    AWS_DETECTIVE_API Indicator(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Indicator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of indicator. </p>
     */
    inline IndicatorType GetIndicatorType() const { return m_indicatorType; }
    inline bool IndicatorTypeHasBeenSet() const { return m_indicatorTypeHasBeenSet; }
    inline void SetIndicatorType(IndicatorType value) { m_indicatorTypeHasBeenSet = true; m_indicatorType = value; }
    inline Indicator& WithIndicatorType(IndicatorType value) { SetIndicatorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the indicators of compromise that are used to determine if a
     * resource is involved in a security incident. An indicator of compromise (IOC) is
     * an artifact observed in or on a network, system, or environment that can (with a
     * high level of confidence) identify malicious activity or a security
     * incident.</p>
     */
    inline const IndicatorDetail& GetIndicatorDetail() const { return m_indicatorDetail; }
    inline bool IndicatorDetailHasBeenSet() const { return m_indicatorDetailHasBeenSet; }
    template<typename IndicatorDetailT = IndicatorDetail>
    void SetIndicatorDetail(IndicatorDetailT&& value) { m_indicatorDetailHasBeenSet = true; m_indicatorDetail = std::forward<IndicatorDetailT>(value); }
    template<typename IndicatorDetailT = IndicatorDetail>
    Indicator& WithIndicatorDetail(IndicatorDetailT&& value) { SetIndicatorDetail(std::forward<IndicatorDetailT>(value)); return *this;}
    ///@}
  private:

    IndicatorType m_indicatorType{IndicatorType::NOT_SET};
    bool m_indicatorTypeHasBeenSet = false;

    IndicatorDetail m_indicatorDetail;
    bool m_indicatorDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
