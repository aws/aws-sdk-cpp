/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/ThreatIntelligenceDetail.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the reason that the finding was
   * generated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Evidence">AWS
   * API Reference</a></p>
   */
  class Evidence
  {
  public:
    AWS_GUARDDUTY_API Evidence();
    AWS_GUARDDUTY_API Evidence(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Evidence& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of threat intelligence details related to the evidence.</p>
     */
    inline const Aws::Vector<ThreatIntelligenceDetail>& GetThreatIntelligenceDetails() const{ return m_threatIntelligenceDetails; }

    /**
     * <p>A list of threat intelligence details related to the evidence.</p>
     */
    inline bool ThreatIntelligenceDetailsHasBeenSet() const { return m_threatIntelligenceDetailsHasBeenSet; }

    /**
     * <p>A list of threat intelligence details related to the evidence.</p>
     */
    inline void SetThreatIntelligenceDetails(const Aws::Vector<ThreatIntelligenceDetail>& value) { m_threatIntelligenceDetailsHasBeenSet = true; m_threatIntelligenceDetails = value; }

    /**
     * <p>A list of threat intelligence details related to the evidence.</p>
     */
    inline void SetThreatIntelligenceDetails(Aws::Vector<ThreatIntelligenceDetail>&& value) { m_threatIntelligenceDetailsHasBeenSet = true; m_threatIntelligenceDetails = std::move(value); }

    /**
     * <p>A list of threat intelligence details related to the evidence.</p>
     */
    inline Evidence& WithThreatIntelligenceDetails(const Aws::Vector<ThreatIntelligenceDetail>& value) { SetThreatIntelligenceDetails(value); return *this;}

    /**
     * <p>A list of threat intelligence details related to the evidence.</p>
     */
    inline Evidence& WithThreatIntelligenceDetails(Aws::Vector<ThreatIntelligenceDetail>&& value) { SetThreatIntelligenceDetails(std::move(value)); return *this;}

    /**
     * <p>A list of threat intelligence details related to the evidence.</p>
     */
    inline Evidence& AddThreatIntelligenceDetails(const ThreatIntelligenceDetail& value) { m_threatIntelligenceDetailsHasBeenSet = true; m_threatIntelligenceDetails.push_back(value); return *this; }

    /**
     * <p>A list of threat intelligence details related to the evidence.</p>
     */
    inline Evidence& AddThreatIntelligenceDetails(ThreatIntelligenceDetail&& value) { m_threatIntelligenceDetailsHasBeenSet = true; m_threatIntelligenceDetails.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ThreatIntelligenceDetail> m_threatIntelligenceDetails;
    bool m_threatIntelligenceDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
