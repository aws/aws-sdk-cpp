/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Details of the evidence for a vulnerability identified in a
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Evidence">AWS
   * API Reference</a></p>
   */
  class Evidence
  {
  public:
    AWS_INSPECTOR2_API Evidence();
    AWS_INSPECTOR2_API Evidence(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Evidence& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The evidence details.</p>
     */
    inline const Aws::String& GetEvidenceDetail() const{ return m_evidenceDetail; }

    /**
     * <p>The evidence details.</p>
     */
    inline bool EvidenceDetailHasBeenSet() const { return m_evidenceDetailHasBeenSet; }

    /**
     * <p>The evidence details.</p>
     */
    inline void SetEvidenceDetail(const Aws::String& value) { m_evidenceDetailHasBeenSet = true; m_evidenceDetail = value; }

    /**
     * <p>The evidence details.</p>
     */
    inline void SetEvidenceDetail(Aws::String&& value) { m_evidenceDetailHasBeenSet = true; m_evidenceDetail = std::move(value); }

    /**
     * <p>The evidence details.</p>
     */
    inline void SetEvidenceDetail(const char* value) { m_evidenceDetailHasBeenSet = true; m_evidenceDetail.assign(value); }

    /**
     * <p>The evidence details.</p>
     */
    inline Evidence& WithEvidenceDetail(const Aws::String& value) { SetEvidenceDetail(value); return *this;}

    /**
     * <p>The evidence details.</p>
     */
    inline Evidence& WithEvidenceDetail(Aws::String&& value) { SetEvidenceDetail(std::move(value)); return *this;}

    /**
     * <p>The evidence details.</p>
     */
    inline Evidence& WithEvidenceDetail(const char* value) { SetEvidenceDetail(value); return *this;}


    /**
     * <p>The evidence rule.</p>
     */
    inline const Aws::String& GetEvidenceRule() const{ return m_evidenceRule; }

    /**
     * <p>The evidence rule.</p>
     */
    inline bool EvidenceRuleHasBeenSet() const { return m_evidenceRuleHasBeenSet; }

    /**
     * <p>The evidence rule.</p>
     */
    inline void SetEvidenceRule(const Aws::String& value) { m_evidenceRuleHasBeenSet = true; m_evidenceRule = value; }

    /**
     * <p>The evidence rule.</p>
     */
    inline void SetEvidenceRule(Aws::String&& value) { m_evidenceRuleHasBeenSet = true; m_evidenceRule = std::move(value); }

    /**
     * <p>The evidence rule.</p>
     */
    inline void SetEvidenceRule(const char* value) { m_evidenceRuleHasBeenSet = true; m_evidenceRule.assign(value); }

    /**
     * <p>The evidence rule.</p>
     */
    inline Evidence& WithEvidenceRule(const Aws::String& value) { SetEvidenceRule(value); return *this;}

    /**
     * <p>The evidence rule.</p>
     */
    inline Evidence& WithEvidenceRule(Aws::String&& value) { SetEvidenceRule(std::move(value)); return *this;}

    /**
     * <p>The evidence rule.</p>
     */
    inline Evidence& WithEvidenceRule(const char* value) { SetEvidenceRule(value); return *this;}


    /**
     * <p>The evidence severity.</p>
     */
    inline const Aws::String& GetSeverity() const{ return m_severity; }

    /**
     * <p>The evidence severity.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>The evidence severity.</p>
     */
    inline void SetSeverity(const Aws::String& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The evidence severity.</p>
     */
    inline void SetSeverity(Aws::String&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>The evidence severity.</p>
     */
    inline void SetSeverity(const char* value) { m_severityHasBeenSet = true; m_severity.assign(value); }

    /**
     * <p>The evidence severity.</p>
     */
    inline Evidence& WithSeverity(const Aws::String& value) { SetSeverity(value); return *this;}

    /**
     * <p>The evidence severity.</p>
     */
    inline Evidence& WithSeverity(Aws::String&& value) { SetSeverity(std::move(value)); return *this;}

    /**
     * <p>The evidence severity.</p>
     */
    inline Evidence& WithSeverity(const char* value) { SetSeverity(value); return *this;}

  private:

    Aws::String m_evidenceDetail;
    bool m_evidenceDetailHasBeenSet = false;

    Aws::String m_evidenceRule;
    bool m_evidenceRuleHasBeenSet = false;

    Aws::String m_severity;
    bool m_severityHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
