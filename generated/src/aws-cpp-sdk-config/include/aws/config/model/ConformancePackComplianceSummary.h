/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConformancePackComplianceType.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Summary includes the name and status of the conformance pack.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConformancePackComplianceSummary">AWS
   * API Reference</a></p>
   */
  class ConformancePackComplianceSummary
  {
  public:
    AWS_CONFIGSERVICE_API ConformancePackComplianceSummary() = default;
    AWS_CONFIGSERVICE_API ConformancePackComplianceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConformancePackComplianceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the conformance pack name.</p>
     */
    inline const Aws::String& GetConformancePackName() const { return m_conformancePackName; }
    inline bool ConformancePackNameHasBeenSet() const { return m_conformancePackNameHasBeenSet; }
    template<typename ConformancePackNameT = Aws::String>
    void SetConformancePackName(ConformancePackNameT&& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = std::forward<ConformancePackNameT>(value); }
    template<typename ConformancePackNameT = Aws::String>
    ConformancePackComplianceSummary& WithConformancePackName(ConformancePackNameT&& value) { SetConformancePackName(std::forward<ConformancePackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the conformance pack.</p>
     */
    inline ConformancePackComplianceType GetConformancePackComplianceStatus() const { return m_conformancePackComplianceStatus; }
    inline bool ConformancePackComplianceStatusHasBeenSet() const { return m_conformancePackComplianceStatusHasBeenSet; }
    inline void SetConformancePackComplianceStatus(ConformancePackComplianceType value) { m_conformancePackComplianceStatusHasBeenSet = true; m_conformancePackComplianceStatus = value; }
    inline ConformancePackComplianceSummary& WithConformancePackComplianceStatus(ConformancePackComplianceType value) { SetConformancePackComplianceStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_conformancePackName;
    bool m_conformancePackNameHasBeenSet = false;

    ConformancePackComplianceType m_conformancePackComplianceStatus{ConformancePackComplianceType::NOT_SET};
    bool m_conformancePackComplianceStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
