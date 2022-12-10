/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/CoverageStringFilter.h>
#include <aws/inspector2/model/CoverageMapFilter.h>
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


    /**
     * <p>An array of Amazon Web Services account IDs to return coverage statistics
     * for.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetAccountId() const{ return m_accountId; }

    /**
     * <p>An array of Amazon Web Services account IDs to return coverage statistics
     * for.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>An array of Amazon Web Services account IDs to return coverage statistics
     * for.</p>
     */
    inline void SetAccountId(const Aws::Vector<CoverageStringFilter>& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>An array of Amazon Web Services account IDs to return coverage statistics
     * for.</p>
     */
    inline void SetAccountId(Aws::Vector<CoverageStringFilter>&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>An array of Amazon Web Services account IDs to return coverage statistics
     * for.</p>
     */
    inline CoverageFilterCriteria& WithAccountId(const Aws::Vector<CoverageStringFilter>& value) { SetAccountId(value); return *this;}

    /**
     * <p>An array of Amazon Web Services account IDs to return coverage statistics
     * for.</p>
     */
    inline CoverageFilterCriteria& WithAccountId(Aws::Vector<CoverageStringFilter>&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>An array of Amazon Web Services account IDs to return coverage statistics
     * for.</p>
     */
    inline CoverageFilterCriteria& AddAccountId(const CoverageStringFilter& value) { m_accountIdHasBeenSet = true; m_accountId.push_back(value); return *this; }

    /**
     * <p>An array of Amazon Web Services account IDs to return coverage statistics
     * for.</p>
     */
    inline CoverageFilterCriteria& AddAccountId(CoverageStringFilter&& value) { m_accountIdHasBeenSet = true; m_accountId.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon EC2 instance tags to filter on.</p>
     */
    inline const Aws::Vector<CoverageMapFilter>& GetEc2InstanceTags() const{ return m_ec2InstanceTags; }

    /**
     * <p>The Amazon EC2 instance tags to filter on.</p>
     */
    inline bool Ec2InstanceTagsHasBeenSet() const { return m_ec2InstanceTagsHasBeenSet; }

    /**
     * <p>The Amazon EC2 instance tags to filter on.</p>
     */
    inline void SetEc2InstanceTags(const Aws::Vector<CoverageMapFilter>& value) { m_ec2InstanceTagsHasBeenSet = true; m_ec2InstanceTags = value; }

    /**
     * <p>The Amazon EC2 instance tags to filter on.</p>
     */
    inline void SetEc2InstanceTags(Aws::Vector<CoverageMapFilter>&& value) { m_ec2InstanceTagsHasBeenSet = true; m_ec2InstanceTags = std::move(value); }

    /**
     * <p>The Amazon EC2 instance tags to filter on.</p>
     */
    inline CoverageFilterCriteria& WithEc2InstanceTags(const Aws::Vector<CoverageMapFilter>& value) { SetEc2InstanceTags(value); return *this;}

    /**
     * <p>The Amazon EC2 instance tags to filter on.</p>
     */
    inline CoverageFilterCriteria& WithEc2InstanceTags(Aws::Vector<CoverageMapFilter>&& value) { SetEc2InstanceTags(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 instance tags to filter on.</p>
     */
    inline CoverageFilterCriteria& AddEc2InstanceTags(const CoverageMapFilter& value) { m_ec2InstanceTagsHasBeenSet = true; m_ec2InstanceTags.push_back(value); return *this; }

    /**
     * <p>The Amazon EC2 instance tags to filter on.</p>
     */
    inline CoverageFilterCriteria& AddEc2InstanceTags(CoverageMapFilter&& value) { m_ec2InstanceTagsHasBeenSet = true; m_ec2InstanceTags.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon ECR image tags to filter on.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetEcrImageTags() const{ return m_ecrImageTags; }

    /**
     * <p>The Amazon ECR image tags to filter on.</p>
     */
    inline bool EcrImageTagsHasBeenSet() const { return m_ecrImageTagsHasBeenSet; }

    /**
     * <p>The Amazon ECR image tags to filter on.</p>
     */
    inline void SetEcrImageTags(const Aws::Vector<CoverageStringFilter>& value) { m_ecrImageTagsHasBeenSet = true; m_ecrImageTags = value; }

    /**
     * <p>The Amazon ECR image tags to filter on.</p>
     */
    inline void SetEcrImageTags(Aws::Vector<CoverageStringFilter>&& value) { m_ecrImageTagsHasBeenSet = true; m_ecrImageTags = std::move(value); }

    /**
     * <p>The Amazon ECR image tags to filter on.</p>
     */
    inline CoverageFilterCriteria& WithEcrImageTags(const Aws::Vector<CoverageStringFilter>& value) { SetEcrImageTags(value); return *this;}

    /**
     * <p>The Amazon ECR image tags to filter on.</p>
     */
    inline CoverageFilterCriteria& WithEcrImageTags(Aws::Vector<CoverageStringFilter>&& value) { SetEcrImageTags(std::move(value)); return *this;}

    /**
     * <p>The Amazon ECR image tags to filter on.</p>
     */
    inline CoverageFilterCriteria& AddEcrImageTags(const CoverageStringFilter& value) { m_ecrImageTagsHasBeenSet = true; m_ecrImageTags.push_back(value); return *this; }

    /**
     * <p>The Amazon ECR image tags to filter on.</p>
     */
    inline CoverageFilterCriteria& AddEcrImageTags(CoverageStringFilter&& value) { m_ecrImageTagsHasBeenSet = true; m_ecrImageTags.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon ECR repository name to filter on.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetEcrRepositoryName() const{ return m_ecrRepositoryName; }

    /**
     * <p>The Amazon ECR repository name to filter on.</p>
     */
    inline bool EcrRepositoryNameHasBeenSet() const { return m_ecrRepositoryNameHasBeenSet; }

    /**
     * <p>The Amazon ECR repository name to filter on.</p>
     */
    inline void SetEcrRepositoryName(const Aws::Vector<CoverageStringFilter>& value) { m_ecrRepositoryNameHasBeenSet = true; m_ecrRepositoryName = value; }

    /**
     * <p>The Amazon ECR repository name to filter on.</p>
     */
    inline void SetEcrRepositoryName(Aws::Vector<CoverageStringFilter>&& value) { m_ecrRepositoryNameHasBeenSet = true; m_ecrRepositoryName = std::move(value); }

    /**
     * <p>The Amazon ECR repository name to filter on.</p>
     */
    inline CoverageFilterCriteria& WithEcrRepositoryName(const Aws::Vector<CoverageStringFilter>& value) { SetEcrRepositoryName(value); return *this;}

    /**
     * <p>The Amazon ECR repository name to filter on.</p>
     */
    inline CoverageFilterCriteria& WithEcrRepositoryName(Aws::Vector<CoverageStringFilter>&& value) { SetEcrRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The Amazon ECR repository name to filter on.</p>
     */
    inline CoverageFilterCriteria& AddEcrRepositoryName(const CoverageStringFilter& value) { m_ecrRepositoryNameHasBeenSet = true; m_ecrRepositoryName.push_back(value); return *this; }

    /**
     * <p>The Amazon ECR repository name to filter on.</p>
     */
    inline CoverageFilterCriteria& AddEcrRepositoryName(CoverageStringFilter&& value) { m_ecrRepositoryNameHasBeenSet = true; m_ecrRepositoryName.push_back(std::move(value)); return *this; }


    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by function
     * names.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetLambdaFunctionName() const{ return m_lambdaFunctionName; }

    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by function
     * names.</p>
     */
    inline bool LambdaFunctionNameHasBeenSet() const { return m_lambdaFunctionNameHasBeenSet; }

    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by function
     * names.</p>
     */
    inline void SetLambdaFunctionName(const Aws::Vector<CoverageStringFilter>& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName = value; }

    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by function
     * names.</p>
     */
    inline void SetLambdaFunctionName(Aws::Vector<CoverageStringFilter>&& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName = std::move(value); }

    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by function
     * names.</p>
     */
    inline CoverageFilterCriteria& WithLambdaFunctionName(const Aws::Vector<CoverageStringFilter>& value) { SetLambdaFunctionName(value); return *this;}

    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by function
     * names.</p>
     */
    inline CoverageFilterCriteria& WithLambdaFunctionName(Aws::Vector<CoverageStringFilter>&& value) { SetLambdaFunctionName(std::move(value)); return *this;}

    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by function
     * names.</p>
     */
    inline CoverageFilterCriteria& AddLambdaFunctionName(const CoverageStringFilter& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName.push_back(value); return *this; }

    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by function
     * names.</p>
     */
    inline CoverageFilterCriteria& AddLambdaFunctionName(CoverageStringFilter&& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName.push_back(std::move(value)); return *this; }


    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by runtime.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetLambdaFunctionRuntime() const{ return m_lambdaFunctionRuntime; }

    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by runtime.</p>
     */
    inline bool LambdaFunctionRuntimeHasBeenSet() const { return m_lambdaFunctionRuntimeHasBeenSet; }

    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by runtime.</p>
     */
    inline void SetLambdaFunctionRuntime(const Aws::Vector<CoverageStringFilter>& value) { m_lambdaFunctionRuntimeHasBeenSet = true; m_lambdaFunctionRuntime = value; }

    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by runtime.</p>
     */
    inline void SetLambdaFunctionRuntime(Aws::Vector<CoverageStringFilter>&& value) { m_lambdaFunctionRuntimeHasBeenSet = true; m_lambdaFunctionRuntime = std::move(value); }

    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by runtime.</p>
     */
    inline CoverageFilterCriteria& WithLambdaFunctionRuntime(const Aws::Vector<CoverageStringFilter>& value) { SetLambdaFunctionRuntime(value); return *this;}

    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by runtime.</p>
     */
    inline CoverageFilterCriteria& WithLambdaFunctionRuntime(Aws::Vector<CoverageStringFilter>&& value) { SetLambdaFunctionRuntime(std::move(value)); return *this;}

    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by runtime.</p>
     */
    inline CoverageFilterCriteria& AddLambdaFunctionRuntime(const CoverageStringFilter& value) { m_lambdaFunctionRuntimeHasBeenSet = true; m_lambdaFunctionRuntime.push_back(value); return *this; }

    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by runtime.</p>
     */
    inline CoverageFilterCriteria& AddLambdaFunctionRuntime(CoverageStringFilter&& value) { m_lambdaFunctionRuntimeHasBeenSet = true; m_lambdaFunctionRuntime.push_back(std::move(value)); return *this; }


    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by tag.</p>
     */
    inline const Aws::Vector<CoverageMapFilter>& GetLambdaFunctionTags() const{ return m_lambdaFunctionTags; }

    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by tag.</p>
     */
    inline bool LambdaFunctionTagsHasBeenSet() const { return m_lambdaFunctionTagsHasBeenSet; }

    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by tag.</p>
     */
    inline void SetLambdaFunctionTags(const Aws::Vector<CoverageMapFilter>& value) { m_lambdaFunctionTagsHasBeenSet = true; m_lambdaFunctionTags = value; }

    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by tag.</p>
     */
    inline void SetLambdaFunctionTags(Aws::Vector<CoverageMapFilter>&& value) { m_lambdaFunctionTagsHasBeenSet = true; m_lambdaFunctionTags = std::move(value); }

    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by tag.</p>
     */
    inline CoverageFilterCriteria& WithLambdaFunctionTags(const Aws::Vector<CoverageMapFilter>& value) { SetLambdaFunctionTags(value); return *this;}

    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by tag.</p>
     */
    inline CoverageFilterCriteria& WithLambdaFunctionTags(Aws::Vector<CoverageMapFilter>&& value) { SetLambdaFunctionTags(std::move(value)); return *this;}

    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by tag.</p>
     */
    inline CoverageFilterCriteria& AddLambdaFunctionTags(const CoverageMapFilter& value) { m_lambdaFunctionTagsHasBeenSet = true; m_lambdaFunctionTags.push_back(value); return *this; }

    /**
     * <p>Returns coverage statistics for AWS Lambda functions filtered by tag.</p>
     */
    inline CoverageFilterCriteria& AddLambdaFunctionTags(CoverageMapFilter&& value) { m_lambdaFunctionTagsHasBeenSet = true; m_lambdaFunctionTags.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of Amazon Web Services resource IDs to return coverage statistics
     * for.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>An array of Amazon Web Services resource IDs to return coverage statistics
     * for.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>An array of Amazon Web Services resource IDs to return coverage statistics
     * for.</p>
     */
    inline void SetResourceId(const Aws::Vector<CoverageStringFilter>& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>An array of Amazon Web Services resource IDs to return coverage statistics
     * for.</p>
     */
    inline void SetResourceId(Aws::Vector<CoverageStringFilter>&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>An array of Amazon Web Services resource IDs to return coverage statistics
     * for.</p>
     */
    inline CoverageFilterCriteria& WithResourceId(const Aws::Vector<CoverageStringFilter>& value) { SetResourceId(value); return *this;}

    /**
     * <p>An array of Amazon Web Services resource IDs to return coverage statistics
     * for.</p>
     */
    inline CoverageFilterCriteria& WithResourceId(Aws::Vector<CoverageStringFilter>&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>An array of Amazon Web Services resource IDs to return coverage statistics
     * for.</p>
     */
    inline CoverageFilterCriteria& AddResourceId(const CoverageStringFilter& value) { m_resourceIdHasBeenSet = true; m_resourceId.push_back(value); return *this; }

    /**
     * <p>An array of Amazon Web Services resource IDs to return coverage statistics
     * for.</p>
     */
    inline CoverageFilterCriteria& AddResourceId(CoverageStringFilter&& value) { m_resourceIdHasBeenSet = true; m_resourceId.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of Amazon Web Services resource types to return coverage statistics
     * for. The values can be <code>AWS_EC2_INSTANCE</code> or
     * <code>AWS_ECR_REPOSITORY</code>.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>An array of Amazon Web Services resource types to return coverage statistics
     * for. The values can be <code>AWS_EC2_INSTANCE</code> or
     * <code>AWS_ECR_REPOSITORY</code>.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>An array of Amazon Web Services resource types to return coverage statistics
     * for. The values can be <code>AWS_EC2_INSTANCE</code> or
     * <code>AWS_ECR_REPOSITORY</code>.</p>
     */
    inline void SetResourceType(const Aws::Vector<CoverageStringFilter>& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>An array of Amazon Web Services resource types to return coverage statistics
     * for. The values can be <code>AWS_EC2_INSTANCE</code> or
     * <code>AWS_ECR_REPOSITORY</code>.</p>
     */
    inline void SetResourceType(Aws::Vector<CoverageStringFilter>&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>An array of Amazon Web Services resource types to return coverage statistics
     * for. The values can be <code>AWS_EC2_INSTANCE</code> or
     * <code>AWS_ECR_REPOSITORY</code>.</p>
     */
    inline CoverageFilterCriteria& WithResourceType(const Aws::Vector<CoverageStringFilter>& value) { SetResourceType(value); return *this;}

    /**
     * <p>An array of Amazon Web Services resource types to return coverage statistics
     * for. The values can be <code>AWS_EC2_INSTANCE</code> or
     * <code>AWS_ECR_REPOSITORY</code>.</p>
     */
    inline CoverageFilterCriteria& WithResourceType(Aws::Vector<CoverageStringFilter>&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>An array of Amazon Web Services resource types to return coverage statistics
     * for. The values can be <code>AWS_EC2_INSTANCE</code> or
     * <code>AWS_ECR_REPOSITORY</code>.</p>
     */
    inline CoverageFilterCriteria& AddResourceType(const CoverageStringFilter& value) { m_resourceTypeHasBeenSet = true; m_resourceType.push_back(value); return *this; }

    /**
     * <p>An array of Amazon Web Services resource types to return coverage statistics
     * for. The values can be <code>AWS_EC2_INSTANCE</code> or
     * <code>AWS_ECR_REPOSITORY</code>.</p>
     */
    inline CoverageFilterCriteria& AddResourceType(CoverageStringFilter&& value) { m_resourceTypeHasBeenSet = true; m_resourceType.push_back(std::move(value)); return *this; }


    /**
     * <p>The scan status code to filter on.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetScanStatusCode() const{ return m_scanStatusCode; }

    /**
     * <p>The scan status code to filter on.</p>
     */
    inline bool ScanStatusCodeHasBeenSet() const { return m_scanStatusCodeHasBeenSet; }

    /**
     * <p>The scan status code to filter on.</p>
     */
    inline void SetScanStatusCode(const Aws::Vector<CoverageStringFilter>& value) { m_scanStatusCodeHasBeenSet = true; m_scanStatusCode = value; }

    /**
     * <p>The scan status code to filter on.</p>
     */
    inline void SetScanStatusCode(Aws::Vector<CoverageStringFilter>&& value) { m_scanStatusCodeHasBeenSet = true; m_scanStatusCode = std::move(value); }

    /**
     * <p>The scan status code to filter on.</p>
     */
    inline CoverageFilterCriteria& WithScanStatusCode(const Aws::Vector<CoverageStringFilter>& value) { SetScanStatusCode(value); return *this;}

    /**
     * <p>The scan status code to filter on.</p>
     */
    inline CoverageFilterCriteria& WithScanStatusCode(Aws::Vector<CoverageStringFilter>&& value) { SetScanStatusCode(std::move(value)); return *this;}

    /**
     * <p>The scan status code to filter on.</p>
     */
    inline CoverageFilterCriteria& AddScanStatusCode(const CoverageStringFilter& value) { m_scanStatusCodeHasBeenSet = true; m_scanStatusCode.push_back(value); return *this; }

    /**
     * <p>The scan status code to filter on.</p>
     */
    inline CoverageFilterCriteria& AddScanStatusCode(CoverageStringFilter&& value) { m_scanStatusCodeHasBeenSet = true; m_scanStatusCode.push_back(std::move(value)); return *this; }


    /**
     * <p>The scan status reason to filter on.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetScanStatusReason() const{ return m_scanStatusReason; }

    /**
     * <p>The scan status reason to filter on.</p>
     */
    inline bool ScanStatusReasonHasBeenSet() const { return m_scanStatusReasonHasBeenSet; }

    /**
     * <p>The scan status reason to filter on.</p>
     */
    inline void SetScanStatusReason(const Aws::Vector<CoverageStringFilter>& value) { m_scanStatusReasonHasBeenSet = true; m_scanStatusReason = value; }

    /**
     * <p>The scan status reason to filter on.</p>
     */
    inline void SetScanStatusReason(Aws::Vector<CoverageStringFilter>&& value) { m_scanStatusReasonHasBeenSet = true; m_scanStatusReason = std::move(value); }

    /**
     * <p>The scan status reason to filter on.</p>
     */
    inline CoverageFilterCriteria& WithScanStatusReason(const Aws::Vector<CoverageStringFilter>& value) { SetScanStatusReason(value); return *this;}

    /**
     * <p>The scan status reason to filter on.</p>
     */
    inline CoverageFilterCriteria& WithScanStatusReason(Aws::Vector<CoverageStringFilter>&& value) { SetScanStatusReason(std::move(value)); return *this;}

    /**
     * <p>The scan status reason to filter on.</p>
     */
    inline CoverageFilterCriteria& AddScanStatusReason(const CoverageStringFilter& value) { m_scanStatusReasonHasBeenSet = true; m_scanStatusReason.push_back(value); return *this; }

    /**
     * <p>The scan status reason to filter on.</p>
     */
    inline CoverageFilterCriteria& AddScanStatusReason(CoverageStringFilter&& value) { m_scanStatusReasonHasBeenSet = true; m_scanStatusReason.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of Amazon Inspector scan types to return coverage statistics
     * for.</p>
     */
    inline const Aws::Vector<CoverageStringFilter>& GetScanType() const{ return m_scanType; }

    /**
     * <p>An array of Amazon Inspector scan types to return coverage statistics
     * for.</p>
     */
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }

    /**
     * <p>An array of Amazon Inspector scan types to return coverage statistics
     * for.</p>
     */
    inline void SetScanType(const Aws::Vector<CoverageStringFilter>& value) { m_scanTypeHasBeenSet = true; m_scanType = value; }

    /**
     * <p>An array of Amazon Inspector scan types to return coverage statistics
     * for.</p>
     */
    inline void SetScanType(Aws::Vector<CoverageStringFilter>&& value) { m_scanTypeHasBeenSet = true; m_scanType = std::move(value); }

    /**
     * <p>An array of Amazon Inspector scan types to return coverage statistics
     * for.</p>
     */
    inline CoverageFilterCriteria& WithScanType(const Aws::Vector<CoverageStringFilter>& value) { SetScanType(value); return *this;}

    /**
     * <p>An array of Amazon Inspector scan types to return coverage statistics
     * for.</p>
     */
    inline CoverageFilterCriteria& WithScanType(Aws::Vector<CoverageStringFilter>&& value) { SetScanType(std::move(value)); return *this;}

    /**
     * <p>An array of Amazon Inspector scan types to return coverage statistics
     * for.</p>
     */
    inline CoverageFilterCriteria& AddScanType(const CoverageStringFilter& value) { m_scanTypeHasBeenSet = true; m_scanType.push_back(value); return *this; }

    /**
     * <p>An array of Amazon Inspector scan types to return coverage statistics
     * for.</p>
     */
    inline CoverageFilterCriteria& AddScanType(CoverageStringFilter&& value) { m_scanTypeHasBeenSet = true; m_scanType.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CoverageStringFilter> m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<CoverageMapFilter> m_ec2InstanceTags;
    bool m_ec2InstanceTagsHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_ecrImageTags;
    bool m_ecrImageTagsHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_ecrRepositoryName;
    bool m_ecrRepositoryNameHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_lambdaFunctionName;
    bool m_lambdaFunctionNameHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_lambdaFunctionRuntime;
    bool m_lambdaFunctionRuntimeHasBeenSet = false;

    Aws::Vector<CoverageMapFilter> m_lambdaFunctionTags;
    bool m_lambdaFunctionTagsHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<CoverageStringFilter> m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

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
