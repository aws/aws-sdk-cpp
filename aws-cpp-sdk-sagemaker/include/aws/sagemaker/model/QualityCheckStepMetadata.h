/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Container for the metadata for a Quality check step. For more information,
   * see the topic on <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/build-and-manage-steps.html#step-type-quality-check">QualityCheck
   * step</a> in the <i>Amazon SageMaker Developer Guide</i>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/QualityCheckStepMetadata">AWS
   * API Reference</a></p>
   */
  class QualityCheckStepMetadata
  {
  public:
    AWS_SAGEMAKER_API QualityCheckStepMetadata();
    AWS_SAGEMAKER_API QualityCheckStepMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API QualityCheckStepMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the Quality check step.</p>
     */
    inline const Aws::String& GetCheckType() const{ return m_checkType; }

    /**
     * <p>The type of the Quality check step.</p>
     */
    inline bool CheckTypeHasBeenSet() const { return m_checkTypeHasBeenSet; }

    /**
     * <p>The type of the Quality check step.</p>
     */
    inline void SetCheckType(const Aws::String& value) { m_checkTypeHasBeenSet = true; m_checkType = value; }

    /**
     * <p>The type of the Quality check step.</p>
     */
    inline void SetCheckType(Aws::String&& value) { m_checkTypeHasBeenSet = true; m_checkType = std::move(value); }

    /**
     * <p>The type of the Quality check step.</p>
     */
    inline void SetCheckType(const char* value) { m_checkTypeHasBeenSet = true; m_checkType.assign(value); }

    /**
     * <p>The type of the Quality check step.</p>
     */
    inline QualityCheckStepMetadata& WithCheckType(const Aws::String& value) { SetCheckType(value); return *this;}

    /**
     * <p>The type of the Quality check step.</p>
     */
    inline QualityCheckStepMetadata& WithCheckType(Aws::String&& value) { SetCheckType(std::move(value)); return *this;}

    /**
     * <p>The type of the Quality check step.</p>
     */
    inline QualityCheckStepMetadata& WithCheckType(const char* value) { SetCheckType(value); return *this;}


    /**
     * <p>The Amazon S3 URI of the baseline statistics file used for the drift
     * check.</p>
     */
    inline const Aws::String& GetBaselineUsedForDriftCheckStatistics() const{ return m_baselineUsedForDriftCheckStatistics; }

    /**
     * <p>The Amazon S3 URI of the baseline statistics file used for the drift
     * check.</p>
     */
    inline bool BaselineUsedForDriftCheckStatisticsHasBeenSet() const { return m_baselineUsedForDriftCheckStatisticsHasBeenSet; }

    /**
     * <p>The Amazon S3 URI of the baseline statistics file used for the drift
     * check.</p>
     */
    inline void SetBaselineUsedForDriftCheckStatistics(const Aws::String& value) { m_baselineUsedForDriftCheckStatisticsHasBeenSet = true; m_baselineUsedForDriftCheckStatistics = value; }

    /**
     * <p>The Amazon S3 URI of the baseline statistics file used for the drift
     * check.</p>
     */
    inline void SetBaselineUsedForDriftCheckStatistics(Aws::String&& value) { m_baselineUsedForDriftCheckStatisticsHasBeenSet = true; m_baselineUsedForDriftCheckStatistics = std::move(value); }

    /**
     * <p>The Amazon S3 URI of the baseline statistics file used for the drift
     * check.</p>
     */
    inline void SetBaselineUsedForDriftCheckStatistics(const char* value) { m_baselineUsedForDriftCheckStatisticsHasBeenSet = true; m_baselineUsedForDriftCheckStatistics.assign(value); }

    /**
     * <p>The Amazon S3 URI of the baseline statistics file used for the drift
     * check.</p>
     */
    inline QualityCheckStepMetadata& WithBaselineUsedForDriftCheckStatistics(const Aws::String& value) { SetBaselineUsedForDriftCheckStatistics(value); return *this;}

    /**
     * <p>The Amazon S3 URI of the baseline statistics file used for the drift
     * check.</p>
     */
    inline QualityCheckStepMetadata& WithBaselineUsedForDriftCheckStatistics(Aws::String&& value) { SetBaselineUsedForDriftCheckStatistics(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 URI of the baseline statistics file used for the drift
     * check.</p>
     */
    inline QualityCheckStepMetadata& WithBaselineUsedForDriftCheckStatistics(const char* value) { SetBaselineUsedForDriftCheckStatistics(value); return *this;}


    /**
     * <p>The Amazon S3 URI of the baseline constraints file used for the drift
     * check.</p>
     */
    inline const Aws::String& GetBaselineUsedForDriftCheckConstraints() const{ return m_baselineUsedForDriftCheckConstraints; }

    /**
     * <p>The Amazon S3 URI of the baseline constraints file used for the drift
     * check.</p>
     */
    inline bool BaselineUsedForDriftCheckConstraintsHasBeenSet() const { return m_baselineUsedForDriftCheckConstraintsHasBeenSet; }

    /**
     * <p>The Amazon S3 URI of the baseline constraints file used for the drift
     * check.</p>
     */
    inline void SetBaselineUsedForDriftCheckConstraints(const Aws::String& value) { m_baselineUsedForDriftCheckConstraintsHasBeenSet = true; m_baselineUsedForDriftCheckConstraints = value; }

    /**
     * <p>The Amazon S3 URI of the baseline constraints file used for the drift
     * check.</p>
     */
    inline void SetBaselineUsedForDriftCheckConstraints(Aws::String&& value) { m_baselineUsedForDriftCheckConstraintsHasBeenSet = true; m_baselineUsedForDriftCheckConstraints = std::move(value); }

    /**
     * <p>The Amazon S3 URI of the baseline constraints file used for the drift
     * check.</p>
     */
    inline void SetBaselineUsedForDriftCheckConstraints(const char* value) { m_baselineUsedForDriftCheckConstraintsHasBeenSet = true; m_baselineUsedForDriftCheckConstraints.assign(value); }

    /**
     * <p>The Amazon S3 URI of the baseline constraints file used for the drift
     * check.</p>
     */
    inline QualityCheckStepMetadata& WithBaselineUsedForDriftCheckConstraints(const Aws::String& value) { SetBaselineUsedForDriftCheckConstraints(value); return *this;}

    /**
     * <p>The Amazon S3 URI of the baseline constraints file used for the drift
     * check.</p>
     */
    inline QualityCheckStepMetadata& WithBaselineUsedForDriftCheckConstraints(Aws::String&& value) { SetBaselineUsedForDriftCheckConstraints(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 URI of the baseline constraints file used for the drift
     * check.</p>
     */
    inline QualityCheckStepMetadata& WithBaselineUsedForDriftCheckConstraints(const char* value) { SetBaselineUsedForDriftCheckConstraints(value); return *this;}


    /**
     * <p>The Amazon S3 URI of the newly calculated baseline statistics file.</p>
     */
    inline const Aws::String& GetCalculatedBaselineStatistics() const{ return m_calculatedBaselineStatistics; }

    /**
     * <p>The Amazon S3 URI of the newly calculated baseline statistics file.</p>
     */
    inline bool CalculatedBaselineStatisticsHasBeenSet() const { return m_calculatedBaselineStatisticsHasBeenSet; }

    /**
     * <p>The Amazon S3 URI of the newly calculated baseline statistics file.</p>
     */
    inline void SetCalculatedBaselineStatistics(const Aws::String& value) { m_calculatedBaselineStatisticsHasBeenSet = true; m_calculatedBaselineStatistics = value; }

    /**
     * <p>The Amazon S3 URI of the newly calculated baseline statistics file.</p>
     */
    inline void SetCalculatedBaselineStatistics(Aws::String&& value) { m_calculatedBaselineStatisticsHasBeenSet = true; m_calculatedBaselineStatistics = std::move(value); }

    /**
     * <p>The Amazon S3 URI of the newly calculated baseline statistics file.</p>
     */
    inline void SetCalculatedBaselineStatistics(const char* value) { m_calculatedBaselineStatisticsHasBeenSet = true; m_calculatedBaselineStatistics.assign(value); }

    /**
     * <p>The Amazon S3 URI of the newly calculated baseline statistics file.</p>
     */
    inline QualityCheckStepMetadata& WithCalculatedBaselineStatistics(const Aws::String& value) { SetCalculatedBaselineStatistics(value); return *this;}

    /**
     * <p>The Amazon S3 URI of the newly calculated baseline statistics file.</p>
     */
    inline QualityCheckStepMetadata& WithCalculatedBaselineStatistics(Aws::String&& value) { SetCalculatedBaselineStatistics(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 URI of the newly calculated baseline statistics file.</p>
     */
    inline QualityCheckStepMetadata& WithCalculatedBaselineStatistics(const char* value) { SetCalculatedBaselineStatistics(value); return *this;}


    /**
     * <p>The Amazon S3 URI of the newly calculated baseline constraints file.</p>
     */
    inline const Aws::String& GetCalculatedBaselineConstraints() const{ return m_calculatedBaselineConstraints; }

    /**
     * <p>The Amazon S3 URI of the newly calculated baseline constraints file.</p>
     */
    inline bool CalculatedBaselineConstraintsHasBeenSet() const { return m_calculatedBaselineConstraintsHasBeenSet; }

    /**
     * <p>The Amazon S3 URI of the newly calculated baseline constraints file.</p>
     */
    inline void SetCalculatedBaselineConstraints(const Aws::String& value) { m_calculatedBaselineConstraintsHasBeenSet = true; m_calculatedBaselineConstraints = value; }

    /**
     * <p>The Amazon S3 URI of the newly calculated baseline constraints file.</p>
     */
    inline void SetCalculatedBaselineConstraints(Aws::String&& value) { m_calculatedBaselineConstraintsHasBeenSet = true; m_calculatedBaselineConstraints = std::move(value); }

    /**
     * <p>The Amazon S3 URI of the newly calculated baseline constraints file.</p>
     */
    inline void SetCalculatedBaselineConstraints(const char* value) { m_calculatedBaselineConstraintsHasBeenSet = true; m_calculatedBaselineConstraints.assign(value); }

    /**
     * <p>The Amazon S3 URI of the newly calculated baseline constraints file.</p>
     */
    inline QualityCheckStepMetadata& WithCalculatedBaselineConstraints(const Aws::String& value) { SetCalculatedBaselineConstraints(value); return *this;}

    /**
     * <p>The Amazon S3 URI of the newly calculated baseline constraints file.</p>
     */
    inline QualityCheckStepMetadata& WithCalculatedBaselineConstraints(Aws::String&& value) { SetCalculatedBaselineConstraints(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 URI of the newly calculated baseline constraints file.</p>
     */
    inline QualityCheckStepMetadata& WithCalculatedBaselineConstraints(const char* value) { SetCalculatedBaselineConstraints(value); return *this;}


    /**
     * <p>The model package group name.</p>
     */
    inline const Aws::String& GetModelPackageGroupName() const{ return m_modelPackageGroupName; }

    /**
     * <p>The model package group name.</p>
     */
    inline bool ModelPackageGroupNameHasBeenSet() const { return m_modelPackageGroupNameHasBeenSet; }

    /**
     * <p>The model package group name.</p>
     */
    inline void SetModelPackageGroupName(const Aws::String& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = value; }

    /**
     * <p>The model package group name.</p>
     */
    inline void SetModelPackageGroupName(Aws::String&& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = std::move(value); }

    /**
     * <p>The model package group name.</p>
     */
    inline void SetModelPackageGroupName(const char* value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName.assign(value); }

    /**
     * <p>The model package group name.</p>
     */
    inline QualityCheckStepMetadata& WithModelPackageGroupName(const Aws::String& value) { SetModelPackageGroupName(value); return *this;}

    /**
     * <p>The model package group name.</p>
     */
    inline QualityCheckStepMetadata& WithModelPackageGroupName(Aws::String&& value) { SetModelPackageGroupName(std::move(value)); return *this;}

    /**
     * <p>The model package group name.</p>
     */
    inline QualityCheckStepMetadata& WithModelPackageGroupName(const char* value) { SetModelPackageGroupName(value); return *this;}


    /**
     * <p>The Amazon S3 URI of violation report if violations are detected.</p>
     */
    inline const Aws::String& GetViolationReport() const{ return m_violationReport; }

    /**
     * <p>The Amazon S3 URI of violation report if violations are detected.</p>
     */
    inline bool ViolationReportHasBeenSet() const { return m_violationReportHasBeenSet; }

    /**
     * <p>The Amazon S3 URI of violation report if violations are detected.</p>
     */
    inline void SetViolationReport(const Aws::String& value) { m_violationReportHasBeenSet = true; m_violationReport = value; }

    /**
     * <p>The Amazon S3 URI of violation report if violations are detected.</p>
     */
    inline void SetViolationReport(Aws::String&& value) { m_violationReportHasBeenSet = true; m_violationReport = std::move(value); }

    /**
     * <p>The Amazon S3 URI of violation report if violations are detected.</p>
     */
    inline void SetViolationReport(const char* value) { m_violationReportHasBeenSet = true; m_violationReport.assign(value); }

    /**
     * <p>The Amazon S3 URI of violation report if violations are detected.</p>
     */
    inline QualityCheckStepMetadata& WithViolationReport(const Aws::String& value) { SetViolationReport(value); return *this;}

    /**
     * <p>The Amazon S3 URI of violation report if violations are detected.</p>
     */
    inline QualityCheckStepMetadata& WithViolationReport(Aws::String&& value) { SetViolationReport(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 URI of violation report if violations are detected.</p>
     */
    inline QualityCheckStepMetadata& WithViolationReport(const char* value) { SetViolationReport(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Quality check processing job that was
     * run by this step execution.</p>
     */
    inline const Aws::String& GetCheckJobArn() const{ return m_checkJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Quality check processing job that was
     * run by this step execution.</p>
     */
    inline bool CheckJobArnHasBeenSet() const { return m_checkJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Quality check processing job that was
     * run by this step execution.</p>
     */
    inline void SetCheckJobArn(const Aws::String& value) { m_checkJobArnHasBeenSet = true; m_checkJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Quality check processing job that was
     * run by this step execution.</p>
     */
    inline void SetCheckJobArn(Aws::String&& value) { m_checkJobArnHasBeenSet = true; m_checkJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Quality check processing job that was
     * run by this step execution.</p>
     */
    inline void SetCheckJobArn(const char* value) { m_checkJobArnHasBeenSet = true; m_checkJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Quality check processing job that was
     * run by this step execution.</p>
     */
    inline QualityCheckStepMetadata& WithCheckJobArn(const Aws::String& value) { SetCheckJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Quality check processing job that was
     * run by this step execution.</p>
     */
    inline QualityCheckStepMetadata& WithCheckJobArn(Aws::String&& value) { SetCheckJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Quality check processing job that was
     * run by this step execution.</p>
     */
    inline QualityCheckStepMetadata& WithCheckJobArn(const char* value) { SetCheckJobArn(value); return *this;}


    /**
     * <p>This flag indicates if the drift check against the previous baseline will be
     * skipped or not. If it is set to <code>False</code>, the previous baseline of the
     * configured check type must be available.</p>
     */
    inline bool GetSkipCheck() const{ return m_skipCheck; }

    /**
     * <p>This flag indicates if the drift check against the previous baseline will be
     * skipped or not. If it is set to <code>False</code>, the previous baseline of the
     * configured check type must be available.</p>
     */
    inline bool SkipCheckHasBeenSet() const { return m_skipCheckHasBeenSet; }

    /**
     * <p>This flag indicates if the drift check against the previous baseline will be
     * skipped or not. If it is set to <code>False</code>, the previous baseline of the
     * configured check type must be available.</p>
     */
    inline void SetSkipCheck(bool value) { m_skipCheckHasBeenSet = true; m_skipCheck = value; }

    /**
     * <p>This flag indicates if the drift check against the previous baseline will be
     * skipped or not. If it is set to <code>False</code>, the previous baseline of the
     * configured check type must be available.</p>
     */
    inline QualityCheckStepMetadata& WithSkipCheck(bool value) { SetSkipCheck(value); return *this;}


    /**
     * <p>This flag indicates if a newly calculated baseline can be accessed through
     * step properties <code>BaselineUsedForDriftCheckConstraints</code> and
     * <code>BaselineUsedForDriftCheckStatistics</code>. If it is set to
     * <code>False</code>, the previous baseline of the configured check type must also
     * be available. These can be accessed through the
     * <code>BaselineUsedForDriftCheckConstraints</code> and <code>
     * BaselineUsedForDriftCheckStatistics</code> properties. </p>
     */
    inline bool GetRegisterNewBaseline() const{ return m_registerNewBaseline; }

    /**
     * <p>This flag indicates if a newly calculated baseline can be accessed through
     * step properties <code>BaselineUsedForDriftCheckConstraints</code> and
     * <code>BaselineUsedForDriftCheckStatistics</code>. If it is set to
     * <code>False</code>, the previous baseline of the configured check type must also
     * be available. These can be accessed through the
     * <code>BaselineUsedForDriftCheckConstraints</code> and <code>
     * BaselineUsedForDriftCheckStatistics</code> properties. </p>
     */
    inline bool RegisterNewBaselineHasBeenSet() const { return m_registerNewBaselineHasBeenSet; }

    /**
     * <p>This flag indicates if a newly calculated baseline can be accessed through
     * step properties <code>BaselineUsedForDriftCheckConstraints</code> and
     * <code>BaselineUsedForDriftCheckStatistics</code>. If it is set to
     * <code>False</code>, the previous baseline of the configured check type must also
     * be available. These can be accessed through the
     * <code>BaselineUsedForDriftCheckConstraints</code> and <code>
     * BaselineUsedForDriftCheckStatistics</code> properties. </p>
     */
    inline void SetRegisterNewBaseline(bool value) { m_registerNewBaselineHasBeenSet = true; m_registerNewBaseline = value; }

    /**
     * <p>This flag indicates if a newly calculated baseline can be accessed through
     * step properties <code>BaselineUsedForDriftCheckConstraints</code> and
     * <code>BaselineUsedForDriftCheckStatistics</code>. If it is set to
     * <code>False</code>, the previous baseline of the configured check type must also
     * be available. These can be accessed through the
     * <code>BaselineUsedForDriftCheckConstraints</code> and <code>
     * BaselineUsedForDriftCheckStatistics</code> properties. </p>
     */
    inline QualityCheckStepMetadata& WithRegisterNewBaseline(bool value) { SetRegisterNewBaseline(value); return *this;}

  private:

    Aws::String m_checkType;
    bool m_checkTypeHasBeenSet = false;

    Aws::String m_baselineUsedForDriftCheckStatistics;
    bool m_baselineUsedForDriftCheckStatisticsHasBeenSet = false;

    Aws::String m_baselineUsedForDriftCheckConstraints;
    bool m_baselineUsedForDriftCheckConstraintsHasBeenSet = false;

    Aws::String m_calculatedBaselineStatistics;
    bool m_calculatedBaselineStatisticsHasBeenSet = false;

    Aws::String m_calculatedBaselineConstraints;
    bool m_calculatedBaselineConstraintsHasBeenSet = false;

    Aws::String m_modelPackageGroupName;
    bool m_modelPackageGroupNameHasBeenSet = false;

    Aws::String m_violationReport;
    bool m_violationReportHasBeenSet = false;

    Aws::String m_checkJobArn;
    bool m_checkJobArnHasBeenSet = false;

    bool m_skipCheck;
    bool m_skipCheckHasBeenSet = false;

    bool m_registerNewBaseline;
    bool m_registerNewBaselineHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
