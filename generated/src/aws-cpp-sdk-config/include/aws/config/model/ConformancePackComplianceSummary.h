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
    AWS_CONFIGSERVICE_API ConformancePackComplianceSummary();
    AWS_CONFIGSERVICE_API ConformancePackComplianceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConformancePackComplianceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the conformance pack name.</p>
     */
    inline const Aws::String& GetConformancePackName() const{ return m_conformancePackName; }

    /**
     * <p>The name of the conformance pack name.</p>
     */
    inline bool ConformancePackNameHasBeenSet() const { return m_conformancePackNameHasBeenSet; }

    /**
     * <p>The name of the conformance pack name.</p>
     */
    inline void SetConformancePackName(const Aws::String& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = value; }

    /**
     * <p>The name of the conformance pack name.</p>
     */
    inline void SetConformancePackName(Aws::String&& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = std::move(value); }

    /**
     * <p>The name of the conformance pack name.</p>
     */
    inline void SetConformancePackName(const char* value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName.assign(value); }

    /**
     * <p>The name of the conformance pack name.</p>
     */
    inline ConformancePackComplianceSummary& WithConformancePackName(const Aws::String& value) { SetConformancePackName(value); return *this;}

    /**
     * <p>The name of the conformance pack name.</p>
     */
    inline ConformancePackComplianceSummary& WithConformancePackName(Aws::String&& value) { SetConformancePackName(std::move(value)); return *this;}

    /**
     * <p>The name of the conformance pack name.</p>
     */
    inline ConformancePackComplianceSummary& WithConformancePackName(const char* value) { SetConformancePackName(value); return *this;}


    /**
     * <p>The status of the conformance pack. The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code> and
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline const ConformancePackComplianceType& GetConformancePackComplianceStatus() const{ return m_conformancePackComplianceStatus; }

    /**
     * <p>The status of the conformance pack. The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code> and
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline bool ConformancePackComplianceStatusHasBeenSet() const { return m_conformancePackComplianceStatusHasBeenSet; }

    /**
     * <p>The status of the conformance pack. The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code> and
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline void SetConformancePackComplianceStatus(const ConformancePackComplianceType& value) { m_conformancePackComplianceStatusHasBeenSet = true; m_conformancePackComplianceStatus = value; }

    /**
     * <p>The status of the conformance pack. The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code> and
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline void SetConformancePackComplianceStatus(ConformancePackComplianceType&& value) { m_conformancePackComplianceStatusHasBeenSet = true; m_conformancePackComplianceStatus = std::move(value); }

    /**
     * <p>The status of the conformance pack. The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code> and
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline ConformancePackComplianceSummary& WithConformancePackComplianceStatus(const ConformancePackComplianceType& value) { SetConformancePackComplianceStatus(value); return *this;}

    /**
     * <p>The status of the conformance pack. The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code> and
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline ConformancePackComplianceSummary& WithConformancePackComplianceStatus(ConformancePackComplianceType&& value) { SetConformancePackComplianceStatus(std::move(value)); return *this;}

  private:

    Aws::String m_conformancePackName;
    bool m_conformancePackNameHasBeenSet = false;

    ConformancePackComplianceType m_conformancePackComplianceStatus;
    bool m_conformancePackComplianceStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
