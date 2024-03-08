/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/EnablementStatusSummary.h>
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
namespace ControlTower
{
namespace Model
{

  /**
   * <p>Returns a summary of information about an <code>EnabledBaseline</code>
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnabledBaselineSummary">AWS
   * API Reference</a></p>
   */
  class EnabledBaselineSummary
  {
  public:
    AWS_CONTROLTOWER_API EnabledBaselineSummary();
    AWS_CONTROLTOWER_API EnabledBaselineSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API EnabledBaselineSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the <code>EnabledBaseline</code> resource</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the <code>EnabledBaseline</code> resource</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the <code>EnabledBaseline</code> resource</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the <code>EnabledBaseline</code> resource</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the <code>EnabledBaseline</code> resource</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the <code>EnabledBaseline</code> resource</p>
     */
    inline EnabledBaselineSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the <code>EnabledBaseline</code> resource</p>
     */
    inline EnabledBaselineSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the <code>EnabledBaseline</code> resource</p>
     */
    inline EnabledBaselineSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The specific baseline that is enabled as part of the
     * <code>EnabledBaseline</code> resource.</p>
     */
    inline const Aws::String& GetBaselineIdentifier() const{ return m_baselineIdentifier; }

    /**
     * <p>The specific baseline that is enabled as part of the
     * <code>EnabledBaseline</code> resource.</p>
     */
    inline bool BaselineIdentifierHasBeenSet() const { return m_baselineIdentifierHasBeenSet; }

    /**
     * <p>The specific baseline that is enabled as part of the
     * <code>EnabledBaseline</code> resource.</p>
     */
    inline void SetBaselineIdentifier(const Aws::String& value) { m_baselineIdentifierHasBeenSet = true; m_baselineIdentifier = value; }

    /**
     * <p>The specific baseline that is enabled as part of the
     * <code>EnabledBaseline</code> resource.</p>
     */
    inline void SetBaselineIdentifier(Aws::String&& value) { m_baselineIdentifierHasBeenSet = true; m_baselineIdentifier = std::move(value); }

    /**
     * <p>The specific baseline that is enabled as part of the
     * <code>EnabledBaseline</code> resource.</p>
     */
    inline void SetBaselineIdentifier(const char* value) { m_baselineIdentifierHasBeenSet = true; m_baselineIdentifier.assign(value); }

    /**
     * <p>The specific baseline that is enabled as part of the
     * <code>EnabledBaseline</code> resource.</p>
     */
    inline EnabledBaselineSummary& WithBaselineIdentifier(const Aws::String& value) { SetBaselineIdentifier(value); return *this;}

    /**
     * <p>The specific baseline that is enabled as part of the
     * <code>EnabledBaseline</code> resource.</p>
     */
    inline EnabledBaselineSummary& WithBaselineIdentifier(Aws::String&& value) { SetBaselineIdentifier(std::move(value)); return *this;}

    /**
     * <p>The specific baseline that is enabled as part of the
     * <code>EnabledBaseline</code> resource.</p>
     */
    inline EnabledBaselineSummary& WithBaselineIdentifier(const char* value) { SetBaselineIdentifier(value); return *this;}


    /**
     * <p>The enabled version of the baseline.</p>
     */
    inline const Aws::String& GetBaselineVersion() const{ return m_baselineVersion; }

    /**
     * <p>The enabled version of the baseline.</p>
     */
    inline bool BaselineVersionHasBeenSet() const { return m_baselineVersionHasBeenSet; }

    /**
     * <p>The enabled version of the baseline.</p>
     */
    inline void SetBaselineVersion(const Aws::String& value) { m_baselineVersionHasBeenSet = true; m_baselineVersion = value; }

    /**
     * <p>The enabled version of the baseline.</p>
     */
    inline void SetBaselineVersion(Aws::String&& value) { m_baselineVersionHasBeenSet = true; m_baselineVersion = std::move(value); }

    /**
     * <p>The enabled version of the baseline.</p>
     */
    inline void SetBaselineVersion(const char* value) { m_baselineVersionHasBeenSet = true; m_baselineVersion.assign(value); }

    /**
     * <p>The enabled version of the baseline.</p>
     */
    inline EnabledBaselineSummary& WithBaselineVersion(const Aws::String& value) { SetBaselineVersion(value); return *this;}

    /**
     * <p>The enabled version of the baseline.</p>
     */
    inline EnabledBaselineSummary& WithBaselineVersion(Aws::String&& value) { SetBaselineVersion(std::move(value)); return *this;}

    /**
     * <p>The enabled version of the baseline.</p>
     */
    inline EnabledBaselineSummary& WithBaselineVersion(const char* value) { SetBaselineVersion(value); return *this;}


    
    inline const EnablementStatusSummary& GetStatusSummary() const{ return m_statusSummary; }

    
    inline bool StatusSummaryHasBeenSet() const { return m_statusSummaryHasBeenSet; }

    
    inline void SetStatusSummary(const EnablementStatusSummary& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = value; }

    
    inline void SetStatusSummary(EnablementStatusSummary&& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = std::move(value); }

    
    inline EnabledBaselineSummary& WithStatusSummary(const EnablementStatusSummary& value) { SetStatusSummary(value); return *this;}

    
    inline EnabledBaselineSummary& WithStatusSummary(EnablementStatusSummary&& value) { SetStatusSummary(std::move(value)); return *this;}


    /**
     * <p>The target upon which the baseline is enabled.</p>
     */
    inline const Aws::String& GetTargetIdentifier() const{ return m_targetIdentifier; }

    /**
     * <p>The target upon which the baseline is enabled.</p>
     */
    inline bool TargetIdentifierHasBeenSet() const { return m_targetIdentifierHasBeenSet; }

    /**
     * <p>The target upon which the baseline is enabled.</p>
     */
    inline void SetTargetIdentifier(const Aws::String& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = value; }

    /**
     * <p>The target upon which the baseline is enabled.</p>
     */
    inline void SetTargetIdentifier(Aws::String&& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = std::move(value); }

    /**
     * <p>The target upon which the baseline is enabled.</p>
     */
    inline void SetTargetIdentifier(const char* value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier.assign(value); }

    /**
     * <p>The target upon which the baseline is enabled.</p>
     */
    inline EnabledBaselineSummary& WithTargetIdentifier(const Aws::String& value) { SetTargetIdentifier(value); return *this;}

    /**
     * <p>The target upon which the baseline is enabled.</p>
     */
    inline EnabledBaselineSummary& WithTargetIdentifier(Aws::String&& value) { SetTargetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The target upon which the baseline is enabled.</p>
     */
    inline EnabledBaselineSummary& WithTargetIdentifier(const char* value) { SetTargetIdentifier(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_baselineIdentifier;
    bool m_baselineIdentifierHasBeenSet = false;

    Aws::String m_baselineVersion;
    bool m_baselineVersionHasBeenSet = false;

    EnablementStatusSummary m_statusSummary;
    bool m_statusSummaryHasBeenSet = false;

    Aws::String m_targetIdentifier;
    bool m_targetIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
