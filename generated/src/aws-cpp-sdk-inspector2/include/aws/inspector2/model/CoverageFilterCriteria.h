/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/CoverageStringFilter.h>
#include <aws/inspector2/model/CoverageMapFilter.h>
#include <aws/inspector2/model/CoverageDateFilter.h>
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
   * <p>A structure that identifies filter criteria for
   * <code>GetCoverageStatistics</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CoverageFilterCriteria">AWS
   * API Reference</a></p>
   */
  class CoverageFilterCriteria
  {
  public:
    AWS_INSPECTOR2_API CoverageFilterCriteria();
    AWS_INSPECTOR2_API CoverageFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CoverageFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of Amazon Web Services account IDs to return coverage statistics
     * for.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::Vector<CoverageStringFilter>& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::Vector<CoverageStringFilter>&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline CoverageFilterCriteria& WithAccountId(const Aws::Vector<CoverageStringFilter>& value) { SetAccountId(value); return *this;}
    inline CoverageFilterCriteria& WithAccountId(Aws::Vector<CoverageStringFilter>&& value) { SetAccountId(std::move(value)); return *this;}
    inline CoverageFilterCriteria& AddAccountId(const CoverageStringFilter& value) { m_accountIdHasBeenSet = true; m_accountId.push_back(value); return *this; }
    inline CoverageFilterCriteria& AddAccountId(CoverageStringFilter&& value) { m_accountIdHasBeenSet = true; m_accountId.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance tags to filter on.</p>
     */
    inline const Aws::Vector<CoverageMapFilter>& GetEc2InstanceTags() const{ return m_ec2InstanceTags; }
    inline bool Ec2InstanceTagsHasBeenSet() const { return m_ec2InstanceTagsHasBeenSet; }
    inline void SetEc2InstanceTags(const Aws::Vector<CoverageMapFilter>& value) { m_ec2InstanceTagsHasBeenSet = true; m_ec2InstanceTags = value; }
    inline void SetEc2InstanceTags(Aws::Vector<CoverageMapFilter>&& value) { m_ec2InstanceTagsHasBeenSet = true; m_ec2InstanceTags = std::move(value); }
    inline CoverageFilterCriteria& WithEc2InstanceTags(const Aws::Vector<CoverageMapFilter>& value) { SetEc2InstanceTags(value); return *this;}
    inline CoverageFilterCriteria& WithEc2InstanceTags(Aws::Vector<CoverageMapFilter>&& value) { SetEc2InstanceTags(std::move(value)); return *this;}
    inline CoverageFilterCriteria& AddEc2InstanceTags(const CoverageMapFilter& value) { m_ec2InstanceTagsHasBeenSet = true; m_ec2InstanceTags.push_back(value); return *this; }
    inline CoverageFilterCriteria& AddEc2InstanceTags(CoverageMapFilter&& value) { m_ec2InstanceTagsHasBeenSet = true; m_ec2InstanceTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon ECR image tags to filter on.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetEcrImageTags() const{ return m_ecrImageTags; }
    inline bool EcrImageTagsHasBeenSet() const { return m_ecrImageTagsHasBeenSet; }
    inline void SetEcrImageTags(const Aws::Vector<CoverageStringFilter>& value) { m_ecrImageTagsHasBeenSet = true; m_ecrImageTags = value; }
    inline void SetEcrImageTags(Aws::Vector<CoverageStringFilter>&& value) { m_ecrImageTagsHasBeenSet = true; m_ecrImageTags = std::move(value); }
    inline CoverageFilterCriteria& WithEcrImageTags(const Aws::Vector<CoverageStringFilter>& value) { SetEcrImageTags(value); return *this;}
    inline CoverageFilterCriteria& WithEcrImageTags(Aws::Vector<CoverageStringFilter>&& value) { SetEcrImageTags(std::move(value)); return *this;}
    inline CoverageFilterCriteria& AddEcrImageTags(const CoverageStringFilter& value) { m_ecrImageTagsHasBeenSet = true; m_ecrImageTags.push_back(value); return *this; }
    inline CoverageFilterCriteria& AddEcrImageTags(CoverageStringFilter&& value) { m_ecrImageTagsHasBeenSet = true; m_ecrImageTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon ECR repository name to filter on.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetEcrRepositoryName() const{ return m_ecrRepositoryName; }
    inline bool EcrRepositoryNameHasBeenSet() const { return m_ecrRepositoryNameHasBeenSet; }
    inline void SetEcrRepositoryName(const Aws::Vector<CoverageStringFilter>& value) { m_ecrRepositoryNameHasBeenSet = true; m_ecrRepositoryName = value; }
    inline void SetEcrRepositoryName(Aws::Vector<CoverageStringFilter>&& value) { m_ecrRepositoryNameHasBeenSet = true; m_ecrRepositoryName = std::move(value); }
    inline CoverageFilterCriteria& WithEcrRepositoryName(const Aws::Vector<CoverageStringFilter>& value) { SetEcrRepositoryName(value); return *this;}
    inline CoverageFilterCriteria& WithEcrRepositoryName(Aws::Vector<CoverageStringFilter>&& value) { SetEcrRepositoryName(std::move(value)); return *this;}
    inline CoverageFilterCriteria& AddEcrRepositoryName(const CoverageStringFilter& value) { m_ecrRepositoryNameHasBeenSet = true; m_ecrRepositoryName.push_back(value); return *this; }
    inline CoverageFilterCriteria& AddEcrRepositoryName(CoverageStringFilter&& value) { m_ecrRepositoryNameHasBeenSet = true; m_ecrRepositoryName.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date an image was last pulled at.</p>
     */
    inline const Aws::Vector<CoverageDateFilter>& GetImagePulledAt() const{ return m_imagePulledAt; }
    inline bool ImagePulledAtHasBeenSet() const { return m_imagePulledAtHasBeenSet; }
    inline void SetImagePulledAt(const Aws::Vector<CoverageDateFilter>& value) { m_imagePulledAtHasBeenSet = true; m_imagePulledAt = value; }
    inline void SetImagePulledAt(Aws::Vector<CoverageDateFilter>&& value) { m_imagePulledAtHasBeenSet = true; m_imagePulledAt = std::move(value); }
    inline CoverageFilterCriteria& WithImagePulledAt(const Aws::Vector<CoverageDateFilter>& value) { SetImagePulledAt(value); return *this;}
    inline CoverageFilterCriteria& WithImagePulledAt(Aws::Vector<CoverageDateFilter>&& value) { SetImagePulledAt(std::move(value)); return *this;}
    inline CoverageFilterCriteria& AddImagePulledAt(const CoverageDateFilter& value) { m_imagePulledAtHasBeenSet = true; m_imagePulledAt.push_back(value); return *this; }
    inline CoverageFilterCriteria& AddImagePulledAt(CoverageDateFilter&& value) { m_imagePulledAtHasBeenSet = true; m_imagePulledAt.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns coverage statistics for Amazon Web Services Lambda functions filtered
     * by function names.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetLambdaFunctionName() const{ return m_lambdaFunctionName; }
    inline bool LambdaFunctionNameHasBeenSet() const { return m_lambdaFunctionNameHasBeenSet; }
    inline void SetLambdaFunctionName(const Aws::Vector<CoverageStringFilter>& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName = value; }
    inline void SetLambdaFunctionName(Aws::Vector<CoverageStringFilter>&& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName = std::move(value); }
    inline CoverageFilterCriteria& WithLambdaFunctionName(const Aws::Vector<CoverageStringFilter>& value) { SetLambdaFunctionName(value); return *this;}
    inline CoverageFilterCriteria& WithLambdaFunctionName(Aws::Vector<CoverageStringFilter>&& value) { SetLambdaFunctionName(std::move(value)); return *this;}
    inline CoverageFilterCriteria& AddLambdaFunctionName(const CoverageStringFilter& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName.push_back(value); return *this; }
    inline CoverageFilterCriteria& AddLambdaFunctionName(CoverageStringFilter&& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns coverage statistics for Amazon Web Services Lambda functions filtered
     * by runtime.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetLambdaFunctionRuntime() const{ return m_lambdaFunctionRuntime; }
    inline bool LambdaFunctionRuntimeHasBeenSet() const { return m_lambdaFunctionRuntimeHasBeenSet; }
    inline void SetLambdaFunctionRuntime(const Aws::Vector<CoverageStringFilter>& value) { m_lambdaFunctionRuntimeHasBeenSet = true; m_lambdaFunctionRuntime = value; }
    inline void SetLambdaFunctionRuntime(Aws::Vector<CoverageStringFilter>&& value) { m_lambdaFunctionRuntimeHasBeenSet = true; m_lambdaFunctionRuntime = std::move(value); }
    inline CoverageFilterCriteria& WithLambdaFunctionRuntime(const Aws::Vector<CoverageStringFilter>& value) { SetLambdaFunctionRuntime(value); return *this;}
    inline CoverageFilterCriteria& WithLambdaFunctionRuntime(Aws::Vector<CoverageStringFilter>&& value) { SetLambdaFunctionRuntime(std::move(value)); return *this;}
    inline CoverageFilterCriteria& AddLambdaFunctionRuntime(const CoverageStringFilter& value) { m_lambdaFunctionRuntimeHasBeenSet = true; m_lambdaFunctionRuntime.push_back(value); return *this; }
    inline CoverageFilterCriteria& AddLambdaFunctionRuntime(CoverageStringFilter&& value) { m_lambdaFunctionRuntimeHasBeenSet = true; m_lambdaFunctionRuntime.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns coverage statistics for Amazon Web Services Lambda functions filtered
     * by tag.</p>
     */
    inline const Aws::Vector<CoverageMapFilter>& GetLambdaFunctionTags() const{ return m_lambdaFunctionTags; }
    inline bool LambdaFunctionTagsHasBeenSet() const { return m_lambdaFunctionTagsHasBeenSet; }
    inline void SetLambdaFunctionTags(const Aws::Vector<CoverageMapFilter>& value) { m_lambdaFunctionTagsHasBeenSet = true; m_lambdaFunctionTags = value; }
    inline void SetLambdaFunctionTags(Aws::Vector<CoverageMapFilter>&& value) { m_lambdaFunctionTagsHasBeenSet = true; m_lambdaFunctionTags = std::move(value); }
    inline CoverageFilterCriteria& WithLambdaFunctionTags(const Aws::Vector<CoverageMapFilter>& value) { SetLambdaFunctionTags(value); return *this;}
    inline CoverageFilterCriteria& WithLambdaFunctionTags(Aws::Vector<CoverageMapFilter>&& value) { SetLambdaFunctionTags(std::move(value)); return *this;}
    inline CoverageFilterCriteria& AddLambdaFunctionTags(const CoverageMapFilter& value) { m_lambdaFunctionTagsHasBeenSet = true; m_lambdaFunctionTags.push_back(value); return *this; }
    inline CoverageFilterCriteria& AddLambdaFunctionTags(CoverageMapFilter&& value) { m_lambdaFunctionTagsHasBeenSet = true; m_lambdaFunctionTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters Amazon Web Services resources based on whether Amazon Inspector has
     * checked them for vulnerabilities within the specified time range.</p>
     */
    inline const Aws::Vector<CoverageDateFilter>& GetLastScannedAt() const{ return m_lastScannedAt; }
    inline bool LastScannedAtHasBeenSet() const { return m_lastScannedAtHasBeenSet; }
    inline void SetLastScannedAt(const Aws::Vector<CoverageDateFilter>& value) { m_lastScannedAtHasBeenSet = true; m_lastScannedAt = value; }
    inline void SetLastScannedAt(Aws::Vector<CoverageDateFilter>&& value) { m_lastScannedAtHasBeenSet = true; m_lastScannedAt = std::move(value); }
    inline CoverageFilterCriteria& WithLastScannedAt(const Aws::Vector<CoverageDateFilter>& value) { SetLastScannedAt(value); return *this;}
    inline CoverageFilterCriteria& WithLastScannedAt(Aws::Vector<CoverageDateFilter>&& value) { SetLastScannedAt(std::move(value)); return *this;}
    inline CoverageFilterCriteria& AddLastScannedAt(const CoverageDateFilter& value) { m_lastScannedAtHasBeenSet = true; m_lastScannedAt.push_back(value); return *this; }
    inline CoverageFilterCriteria& AddLastScannedAt(CoverageDateFilter&& value) { m_lastScannedAtHasBeenSet = true; m_lastScannedAt.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of Amazon Web Services resource IDs to return coverage statistics
     * for.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::Vector<CoverageStringFilter>& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::Vector<CoverageStringFilter>&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline CoverageFilterCriteria& WithResourceId(const Aws::Vector<CoverageStringFilter>& value) { SetResourceId(value); return *this;}
    inline CoverageFilterCriteria& WithResourceId(Aws::Vector<CoverageStringFilter>&& value) { SetResourceId(std::move(value)); return *this;}
    inline CoverageFilterCriteria& AddResourceId(const CoverageStringFilter& value) { m_resourceIdHasBeenSet = true; m_resourceId.push_back(value); return *this; }
    inline CoverageFilterCriteria& AddResourceId(CoverageStringFilter&& value) { m_resourceIdHasBeenSet = true; m_resourceId.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of Amazon Web Services resource types to return coverage statistics
     * for. The values can be <code>AWS_EC2_INSTANCE</code>,
     * <code>AWS_LAMBDA_FUNCTION</code>, <code>AWS_ECR_CONTAINER_IMAGE</code>,
     * <code>AWS_ECR_REPOSITORY</code> or <code>AWS_ACCOUNT</code>.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::Vector<CoverageStringFilter>& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::Vector<CoverageStringFilter>&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline CoverageFilterCriteria& WithResourceType(const Aws::Vector<CoverageStringFilter>& value) { SetResourceType(value); return *this;}
    inline CoverageFilterCriteria& WithResourceType(Aws::Vector<CoverageStringFilter>&& value) { SetResourceType(std::move(value)); return *this;}
    inline CoverageFilterCriteria& AddResourceType(const CoverageStringFilter& value) { m_resourceTypeHasBeenSet = true; m_resourceType.push_back(value); return *this; }
    inline CoverageFilterCriteria& AddResourceType(CoverageStringFilter&& value) { m_resourceTypeHasBeenSet = true; m_resourceType.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filter to search for Amazon EC2 instance coverage by scan mode. Valid
     * values are <code>EC2_SSM_AGENT_BASED</code> and <code>EC2_AGENTLESS</code>.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetScanMode() const{ return m_scanMode; }
    inline bool ScanModeHasBeenSet() const { return m_scanModeHasBeenSet; }
    inline void SetScanMode(const Aws::Vector<CoverageStringFilter>& value) { m_scanModeHasBeenSet = true; m_scanMode = value; }
    inline void SetScanMode(Aws::Vector<CoverageStringFilter>&& value) { m_scanModeHasBeenSet = true; m_scanMode = std::move(value); }
    inline CoverageFilterCriteria& WithScanMode(const Aws::Vector<CoverageStringFilter>& value) { SetScanMode(value); return *this;}
    inline CoverageFilterCriteria& WithScanMode(Aws::Vector<CoverageStringFilter>&& value) { SetScanMode(std::move(value)); return *this;}
    inline CoverageFilterCriteria& AddScanMode(const CoverageStringFilter& value) { m_scanModeHasBeenSet = true; m_scanMode.push_back(value); return *this; }
    inline CoverageFilterCriteria& AddScanMode(CoverageStringFilter&& value) { m_scanModeHasBeenSet = true; m_scanMode.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The scan status code to filter on. Valid values are:
     * <code>ValidationException</code>, <code>InternalServerException</code>,
     * <code>ResourceNotFoundException</code>, <code>BadRequestException</code>, and
     * <code>ThrottlingException</code>.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetScanStatusCode() const{ return m_scanStatusCode; }
    inline bool ScanStatusCodeHasBeenSet() const { return m_scanStatusCodeHasBeenSet; }
    inline void SetScanStatusCode(const Aws::Vector<CoverageStringFilter>& value) { m_scanStatusCodeHasBeenSet = true; m_scanStatusCode = value; }
    inline void SetScanStatusCode(Aws::Vector<CoverageStringFilter>&& value) { m_scanStatusCodeHasBeenSet = true; m_scanStatusCode = std::move(value); }
    inline CoverageFilterCriteria& WithScanStatusCode(const Aws::Vector<CoverageStringFilter>& value) { SetScanStatusCode(value); return *this;}
    inline CoverageFilterCriteria& WithScanStatusCode(Aws::Vector<CoverageStringFilter>&& value) { SetScanStatusCode(std::move(value)); return *this;}
    inline CoverageFilterCriteria& AddScanStatusCode(const CoverageStringFilter& value) { m_scanStatusCodeHasBeenSet = true; m_scanStatusCode.push_back(value); return *this; }
    inline CoverageFilterCriteria& AddScanStatusCode(CoverageStringFilter&& value) { m_scanStatusCodeHasBeenSet = true; m_scanStatusCode.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The scan status reason to filter on.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetScanStatusReason() const{ return m_scanStatusReason; }
    inline bool ScanStatusReasonHasBeenSet() const { return m_scanStatusReasonHasBeenSet; }
    inline void SetScanStatusReason(const Aws::Vector<CoverageStringFilter>& value) { m_scanStatusReasonHasBeenSet = true; m_scanStatusReason = value; }
    inline void SetScanStatusReason(Aws::Vector<CoverageStringFilter>&& value) { m_scanStatusReasonHasBeenSet = true; m_scanStatusReason = std::move(value); }
    inline CoverageFilterCriteria& WithScanStatusReason(const Aws::Vector<CoverageStringFilter>& value) { SetScanStatusReason(value); return *this;}
    inline CoverageFilterCriteria& WithScanStatusReason(Aws::Vector<CoverageStringFilter>&& value) { SetScanStatusReason(std::move(value)); return *this;}
    inline CoverageFilterCriteria& AddScanStatusReason(const CoverageStringFilter& value) { m_scanStatusReasonHasBeenSet = true; m_scanStatusReason.push_back(value); return *this; }
    inline CoverageFilterCriteria& AddScanStatusReason(CoverageStringFilter&& value) { m_scanStatusReasonHasBeenSet = true; m_scanStatusReason.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of Amazon Inspector scan types to return coverage statistics
     * for.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetScanType() const{ return m_scanType; }
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }
    inline void SetScanType(const Aws::Vector<CoverageStringFilter>& value) { m_scanTypeHasBeenSet = true; m_scanType = value; }
    inline void SetScanType(Aws::Vector<CoverageStringFilter>&& value) { m_scanTypeHasBeenSet = true; m_scanType = std::move(value); }
    inline CoverageFilterCriteria& WithScanType(const Aws::Vector<CoverageStringFilter>& value) { SetScanType(value); return *this;}
    inline CoverageFilterCriteria& WithScanType(Aws::Vector<CoverageStringFilter>&& value) { SetScanType(std::move(value)); return *this;}
    inline CoverageFilterCriteria& AddScanType(const CoverageStringFilter& value) { m_scanTypeHasBeenSet = true; m_scanType.push_back(value); return *this; }
    inline CoverageFilterCriteria& AddScanType(CoverageStringFilter&& value) { m_scanTypeHasBeenSet = true; m_scanType.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CoverageStringFilter> m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<CoverageMapFilter> m_ec2InstanceTags;
    bool m_ec2InstanceTagsHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_ecrImageTags;
    bool m_ecrImageTagsHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_ecrRepositoryName;
    bool m_ecrRepositoryNameHasBeenSet = false;

    Aws::Vector<CoverageDateFilter> m_imagePulledAt;
    bool m_imagePulledAtHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_lambdaFunctionName;
    bool m_lambdaFunctionNameHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_lambdaFunctionRuntime;
    bool m_lambdaFunctionRuntimeHasBeenSet = false;

    Aws::Vector<CoverageMapFilter> m_lambdaFunctionTags;
    bool m_lambdaFunctionTagsHasBeenSet = false;

    Aws::Vector<CoverageDateFilter> m_lastScannedAt;
    bool m_lastScannedAtHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_scanMode;
    bool m_scanModeHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_scanStatusCode;
    bool m_scanStatusCodeHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_scanStatusReason;
    bool m_scanStatusReasonHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_scanType;
    bool m_scanTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
