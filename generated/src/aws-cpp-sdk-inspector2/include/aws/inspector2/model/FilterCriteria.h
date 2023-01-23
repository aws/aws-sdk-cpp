/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/StringFilter.h>
#include <aws/inspector2/model/DateFilter.h>
#include <aws/inspector2/model/NumberFilter.h>
#include <aws/inspector2/model/PortRangeFilter.h>
#include <aws/inspector2/model/MapFilter.h>
#include <aws/inspector2/model/PackageFilter.h>
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
   * <p>Details on the criteria used to define the filter.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/FilterCriteria">AWS
   * API Reference</a></p>
   */
  class FilterCriteria
  {
  public:
    AWS_INSPECTOR2_API FilterCriteria();
    AWS_INSPECTOR2_API FilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API FilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details of the Amazon Web Services account IDs used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>Details of the Amazon Web Services account IDs used to filter findings.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>Details of the Amazon Web Services account IDs used to filter findings.</p>
     */
    inline void SetAwsAccountId(const Aws::Vector<StringFilter>& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>Details of the Amazon Web Services account IDs used to filter findings.</p>
     */
    inline void SetAwsAccountId(Aws::Vector<StringFilter>&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>Details of the Amazon Web Services account IDs used to filter findings.</p>
     */
    inline FilterCriteria& WithAwsAccountId(const Aws::Vector<StringFilter>& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>Details of the Amazon Web Services account IDs used to filter findings.</p>
     */
    inline FilterCriteria& WithAwsAccountId(Aws::Vector<StringFilter>&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>Details of the Amazon Web Services account IDs used to filter findings.</p>
     */
    inline FilterCriteria& AddAwsAccountId(const StringFilter& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.push_back(value); return *this; }

    /**
     * <p>Details of the Amazon Web Services account IDs used to filter findings.</p>
     */
    inline FilterCriteria& AddAwsAccountId(StringFilter&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.push_back(std::move(value)); return *this; }


    /**
     * <p>Details of the component IDs used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetComponentId() const{ return m_componentId; }

    /**
     * <p>Details of the component IDs used to filter findings.</p>
     */
    inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }

    /**
     * <p>Details of the component IDs used to filter findings.</p>
     */
    inline void SetComponentId(const Aws::Vector<StringFilter>& value) { m_componentIdHasBeenSet = true; m_componentId = value; }

    /**
     * <p>Details of the component IDs used to filter findings.</p>
     */
    inline void SetComponentId(Aws::Vector<StringFilter>&& value) { m_componentIdHasBeenSet = true; m_componentId = std::move(value); }

    /**
     * <p>Details of the component IDs used to filter findings.</p>
     */
    inline FilterCriteria& WithComponentId(const Aws::Vector<StringFilter>& value) { SetComponentId(value); return *this;}

    /**
     * <p>Details of the component IDs used to filter findings.</p>
     */
    inline FilterCriteria& WithComponentId(Aws::Vector<StringFilter>&& value) { SetComponentId(std::move(value)); return *this;}

    /**
     * <p>Details of the component IDs used to filter findings.</p>
     */
    inline FilterCriteria& AddComponentId(const StringFilter& value) { m_componentIdHasBeenSet = true; m_componentId.push_back(value); return *this; }

    /**
     * <p>Details of the component IDs used to filter findings.</p>
     */
    inline FilterCriteria& AddComponentId(StringFilter&& value) { m_componentIdHasBeenSet = true; m_componentId.push_back(std::move(value)); return *this; }


    /**
     * <p>Details of the component types used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetComponentType() const{ return m_componentType; }

    /**
     * <p>Details of the component types used to filter findings.</p>
     */
    inline bool ComponentTypeHasBeenSet() const { return m_componentTypeHasBeenSet; }

    /**
     * <p>Details of the component types used to filter findings.</p>
     */
    inline void SetComponentType(const Aws::Vector<StringFilter>& value) { m_componentTypeHasBeenSet = true; m_componentType = value; }

    /**
     * <p>Details of the component types used to filter findings.</p>
     */
    inline void SetComponentType(Aws::Vector<StringFilter>&& value) { m_componentTypeHasBeenSet = true; m_componentType = std::move(value); }

    /**
     * <p>Details of the component types used to filter findings.</p>
     */
    inline FilterCriteria& WithComponentType(const Aws::Vector<StringFilter>& value) { SetComponentType(value); return *this;}

    /**
     * <p>Details of the component types used to filter findings.</p>
     */
    inline FilterCriteria& WithComponentType(Aws::Vector<StringFilter>&& value) { SetComponentType(std::move(value)); return *this;}

    /**
     * <p>Details of the component types used to filter findings.</p>
     */
    inline FilterCriteria& AddComponentType(const StringFilter& value) { m_componentTypeHasBeenSet = true; m_componentType.push_back(value); return *this; }

    /**
     * <p>Details of the component types used to filter findings.</p>
     */
    inline FilterCriteria& AddComponentType(StringFilter&& value) { m_componentTypeHasBeenSet = true; m_componentType.push_back(std::move(value)); return *this; }


    /**
     * <p>Details of the Amazon EC2 instance image IDs used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetEc2InstanceImageId() const{ return m_ec2InstanceImageId; }

    /**
     * <p>Details of the Amazon EC2 instance image IDs used to filter findings.</p>
     */
    inline bool Ec2InstanceImageIdHasBeenSet() const { return m_ec2InstanceImageIdHasBeenSet; }

    /**
     * <p>Details of the Amazon EC2 instance image IDs used to filter findings.</p>
     */
    inline void SetEc2InstanceImageId(const Aws::Vector<StringFilter>& value) { m_ec2InstanceImageIdHasBeenSet = true; m_ec2InstanceImageId = value; }

    /**
     * <p>Details of the Amazon EC2 instance image IDs used to filter findings.</p>
     */
    inline void SetEc2InstanceImageId(Aws::Vector<StringFilter>&& value) { m_ec2InstanceImageIdHasBeenSet = true; m_ec2InstanceImageId = std::move(value); }

    /**
     * <p>Details of the Amazon EC2 instance image IDs used to filter findings.</p>
     */
    inline FilterCriteria& WithEc2InstanceImageId(const Aws::Vector<StringFilter>& value) { SetEc2InstanceImageId(value); return *this;}

    /**
     * <p>Details of the Amazon EC2 instance image IDs used to filter findings.</p>
     */
    inline FilterCriteria& WithEc2InstanceImageId(Aws::Vector<StringFilter>&& value) { SetEc2InstanceImageId(std::move(value)); return *this;}

    /**
     * <p>Details of the Amazon EC2 instance image IDs used to filter findings.</p>
     */
    inline FilterCriteria& AddEc2InstanceImageId(const StringFilter& value) { m_ec2InstanceImageIdHasBeenSet = true; m_ec2InstanceImageId.push_back(value); return *this; }

    /**
     * <p>Details of the Amazon EC2 instance image IDs used to filter findings.</p>
     */
    inline FilterCriteria& AddEc2InstanceImageId(StringFilter&& value) { m_ec2InstanceImageIdHasBeenSet = true; m_ec2InstanceImageId.push_back(std::move(value)); return *this; }


    /**
     * <p>Details of the Amazon EC2 instance subnet IDs used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetEc2InstanceSubnetId() const{ return m_ec2InstanceSubnetId; }

    /**
     * <p>Details of the Amazon EC2 instance subnet IDs used to filter findings.</p>
     */
    inline bool Ec2InstanceSubnetIdHasBeenSet() const { return m_ec2InstanceSubnetIdHasBeenSet; }

    /**
     * <p>Details of the Amazon EC2 instance subnet IDs used to filter findings.</p>
     */
    inline void SetEc2InstanceSubnetId(const Aws::Vector<StringFilter>& value) { m_ec2InstanceSubnetIdHasBeenSet = true; m_ec2InstanceSubnetId = value; }

    /**
     * <p>Details of the Amazon EC2 instance subnet IDs used to filter findings.</p>
     */
    inline void SetEc2InstanceSubnetId(Aws::Vector<StringFilter>&& value) { m_ec2InstanceSubnetIdHasBeenSet = true; m_ec2InstanceSubnetId = std::move(value); }

    /**
     * <p>Details of the Amazon EC2 instance subnet IDs used to filter findings.</p>
     */
    inline FilterCriteria& WithEc2InstanceSubnetId(const Aws::Vector<StringFilter>& value) { SetEc2InstanceSubnetId(value); return *this;}

    /**
     * <p>Details of the Amazon EC2 instance subnet IDs used to filter findings.</p>
     */
    inline FilterCriteria& WithEc2InstanceSubnetId(Aws::Vector<StringFilter>&& value) { SetEc2InstanceSubnetId(std::move(value)); return *this;}

    /**
     * <p>Details of the Amazon EC2 instance subnet IDs used to filter findings.</p>
     */
    inline FilterCriteria& AddEc2InstanceSubnetId(const StringFilter& value) { m_ec2InstanceSubnetIdHasBeenSet = true; m_ec2InstanceSubnetId.push_back(value); return *this; }

    /**
     * <p>Details of the Amazon EC2 instance subnet IDs used to filter findings.</p>
     */
    inline FilterCriteria& AddEc2InstanceSubnetId(StringFilter&& value) { m_ec2InstanceSubnetIdHasBeenSet = true; m_ec2InstanceSubnetId.push_back(std::move(value)); return *this; }


    /**
     * <p>Details of the Amazon EC2 instance VPC IDs used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetEc2InstanceVpcId() const{ return m_ec2InstanceVpcId; }

    /**
     * <p>Details of the Amazon EC2 instance VPC IDs used to filter findings.</p>
     */
    inline bool Ec2InstanceVpcIdHasBeenSet() const { return m_ec2InstanceVpcIdHasBeenSet; }

    /**
     * <p>Details of the Amazon EC2 instance VPC IDs used to filter findings.</p>
     */
    inline void SetEc2InstanceVpcId(const Aws::Vector<StringFilter>& value) { m_ec2InstanceVpcIdHasBeenSet = true; m_ec2InstanceVpcId = value; }

    /**
     * <p>Details of the Amazon EC2 instance VPC IDs used to filter findings.</p>
     */
    inline void SetEc2InstanceVpcId(Aws::Vector<StringFilter>&& value) { m_ec2InstanceVpcIdHasBeenSet = true; m_ec2InstanceVpcId = std::move(value); }

    /**
     * <p>Details of the Amazon EC2 instance VPC IDs used to filter findings.</p>
     */
    inline FilterCriteria& WithEc2InstanceVpcId(const Aws::Vector<StringFilter>& value) { SetEc2InstanceVpcId(value); return *this;}

    /**
     * <p>Details of the Amazon EC2 instance VPC IDs used to filter findings.</p>
     */
    inline FilterCriteria& WithEc2InstanceVpcId(Aws::Vector<StringFilter>&& value) { SetEc2InstanceVpcId(std::move(value)); return *this;}

    /**
     * <p>Details of the Amazon EC2 instance VPC IDs used to filter findings.</p>
     */
    inline FilterCriteria& AddEc2InstanceVpcId(const StringFilter& value) { m_ec2InstanceVpcIdHasBeenSet = true; m_ec2InstanceVpcId.push_back(value); return *this; }

    /**
     * <p>Details of the Amazon EC2 instance VPC IDs used to filter findings.</p>
     */
    inline FilterCriteria& AddEc2InstanceVpcId(StringFilter&& value) { m_ec2InstanceVpcIdHasBeenSet = true; m_ec2InstanceVpcId.push_back(std::move(value)); return *this; }


    /**
     * <p>Details of the Amazon ECR image architecture types used to filter
     * findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetEcrImageArchitecture() const{ return m_ecrImageArchitecture; }

    /**
     * <p>Details of the Amazon ECR image architecture types used to filter
     * findings.</p>
     */
    inline bool EcrImageArchitectureHasBeenSet() const { return m_ecrImageArchitectureHasBeenSet; }

    /**
     * <p>Details of the Amazon ECR image architecture types used to filter
     * findings.</p>
     */
    inline void SetEcrImageArchitecture(const Aws::Vector<StringFilter>& value) { m_ecrImageArchitectureHasBeenSet = true; m_ecrImageArchitecture = value; }

    /**
     * <p>Details of the Amazon ECR image architecture types used to filter
     * findings.</p>
     */
    inline void SetEcrImageArchitecture(Aws::Vector<StringFilter>&& value) { m_ecrImageArchitectureHasBeenSet = true; m_ecrImageArchitecture = std::move(value); }

    /**
     * <p>Details of the Amazon ECR image architecture types used to filter
     * findings.</p>
     */
    inline FilterCriteria& WithEcrImageArchitecture(const Aws::Vector<StringFilter>& value) { SetEcrImageArchitecture(value); return *this;}

    /**
     * <p>Details of the Amazon ECR image architecture types used to filter
     * findings.</p>
     */
    inline FilterCriteria& WithEcrImageArchitecture(Aws::Vector<StringFilter>&& value) { SetEcrImageArchitecture(std::move(value)); return *this;}

    /**
     * <p>Details of the Amazon ECR image architecture types used to filter
     * findings.</p>
     */
    inline FilterCriteria& AddEcrImageArchitecture(const StringFilter& value) { m_ecrImageArchitectureHasBeenSet = true; m_ecrImageArchitecture.push_back(value); return *this; }

    /**
     * <p>Details of the Amazon ECR image architecture types used to filter
     * findings.</p>
     */
    inline FilterCriteria& AddEcrImageArchitecture(StringFilter&& value) { m_ecrImageArchitectureHasBeenSet = true; m_ecrImageArchitecture.push_back(std::move(value)); return *this; }


    /**
     * <p>Details of the Amazon ECR image hashes used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetEcrImageHash() const{ return m_ecrImageHash; }

    /**
     * <p>Details of the Amazon ECR image hashes used to filter findings.</p>
     */
    inline bool EcrImageHashHasBeenSet() const { return m_ecrImageHashHasBeenSet; }

    /**
     * <p>Details of the Amazon ECR image hashes used to filter findings.</p>
     */
    inline void SetEcrImageHash(const Aws::Vector<StringFilter>& value) { m_ecrImageHashHasBeenSet = true; m_ecrImageHash = value; }

    /**
     * <p>Details of the Amazon ECR image hashes used to filter findings.</p>
     */
    inline void SetEcrImageHash(Aws::Vector<StringFilter>&& value) { m_ecrImageHashHasBeenSet = true; m_ecrImageHash = std::move(value); }

    /**
     * <p>Details of the Amazon ECR image hashes used to filter findings.</p>
     */
    inline FilterCriteria& WithEcrImageHash(const Aws::Vector<StringFilter>& value) { SetEcrImageHash(value); return *this;}

    /**
     * <p>Details of the Amazon ECR image hashes used to filter findings.</p>
     */
    inline FilterCriteria& WithEcrImageHash(Aws::Vector<StringFilter>&& value) { SetEcrImageHash(std::move(value)); return *this;}

    /**
     * <p>Details of the Amazon ECR image hashes used to filter findings.</p>
     */
    inline FilterCriteria& AddEcrImageHash(const StringFilter& value) { m_ecrImageHashHasBeenSet = true; m_ecrImageHash.push_back(value); return *this; }

    /**
     * <p>Details of the Amazon ECR image hashes used to filter findings.</p>
     */
    inline FilterCriteria& AddEcrImageHash(StringFilter&& value) { m_ecrImageHashHasBeenSet = true; m_ecrImageHash.push_back(std::move(value)); return *this; }


    /**
     * <p>Details on the Amazon ECR image push date and time used to filter
     * findings.</p>
     */
    inline const Aws::Vector<DateFilter>& GetEcrImagePushedAt() const{ return m_ecrImagePushedAt; }

    /**
     * <p>Details on the Amazon ECR image push date and time used to filter
     * findings.</p>
     */
    inline bool EcrImagePushedAtHasBeenSet() const { return m_ecrImagePushedAtHasBeenSet; }

    /**
     * <p>Details on the Amazon ECR image push date and time used to filter
     * findings.</p>
     */
    inline void SetEcrImagePushedAt(const Aws::Vector<DateFilter>& value) { m_ecrImagePushedAtHasBeenSet = true; m_ecrImagePushedAt = value; }

    /**
     * <p>Details on the Amazon ECR image push date and time used to filter
     * findings.</p>
     */
    inline void SetEcrImagePushedAt(Aws::Vector<DateFilter>&& value) { m_ecrImagePushedAtHasBeenSet = true; m_ecrImagePushedAt = std::move(value); }

    /**
     * <p>Details on the Amazon ECR image push date and time used to filter
     * findings.</p>
     */
    inline FilterCriteria& WithEcrImagePushedAt(const Aws::Vector<DateFilter>& value) { SetEcrImagePushedAt(value); return *this;}

    /**
     * <p>Details on the Amazon ECR image push date and time used to filter
     * findings.</p>
     */
    inline FilterCriteria& WithEcrImagePushedAt(Aws::Vector<DateFilter>&& value) { SetEcrImagePushedAt(std::move(value)); return *this;}

    /**
     * <p>Details on the Amazon ECR image push date and time used to filter
     * findings.</p>
     */
    inline FilterCriteria& AddEcrImagePushedAt(const DateFilter& value) { m_ecrImagePushedAtHasBeenSet = true; m_ecrImagePushedAt.push_back(value); return *this; }

    /**
     * <p>Details on the Amazon ECR image push date and time used to filter
     * findings.</p>
     */
    inline FilterCriteria& AddEcrImagePushedAt(DateFilter&& value) { m_ecrImagePushedAtHasBeenSet = true; m_ecrImagePushedAt.push_back(std::move(value)); return *this; }


    /**
     * <p>Details on the Amazon ECR registry used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetEcrImageRegistry() const{ return m_ecrImageRegistry; }

    /**
     * <p>Details on the Amazon ECR registry used to filter findings.</p>
     */
    inline bool EcrImageRegistryHasBeenSet() const { return m_ecrImageRegistryHasBeenSet; }

    /**
     * <p>Details on the Amazon ECR registry used to filter findings.</p>
     */
    inline void SetEcrImageRegistry(const Aws::Vector<StringFilter>& value) { m_ecrImageRegistryHasBeenSet = true; m_ecrImageRegistry = value; }

    /**
     * <p>Details on the Amazon ECR registry used to filter findings.</p>
     */
    inline void SetEcrImageRegistry(Aws::Vector<StringFilter>&& value) { m_ecrImageRegistryHasBeenSet = true; m_ecrImageRegistry = std::move(value); }

    /**
     * <p>Details on the Amazon ECR registry used to filter findings.</p>
     */
    inline FilterCriteria& WithEcrImageRegistry(const Aws::Vector<StringFilter>& value) { SetEcrImageRegistry(value); return *this;}

    /**
     * <p>Details on the Amazon ECR registry used to filter findings.</p>
     */
    inline FilterCriteria& WithEcrImageRegistry(Aws::Vector<StringFilter>&& value) { SetEcrImageRegistry(std::move(value)); return *this;}

    /**
     * <p>Details on the Amazon ECR registry used to filter findings.</p>
     */
    inline FilterCriteria& AddEcrImageRegistry(const StringFilter& value) { m_ecrImageRegistryHasBeenSet = true; m_ecrImageRegistry.push_back(value); return *this; }

    /**
     * <p>Details on the Amazon ECR registry used to filter findings.</p>
     */
    inline FilterCriteria& AddEcrImageRegistry(StringFilter&& value) { m_ecrImageRegistryHasBeenSet = true; m_ecrImageRegistry.push_back(std::move(value)); return *this; }


    /**
     * <p>Details on the name of the Amazon ECR repository used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetEcrImageRepositoryName() const{ return m_ecrImageRepositoryName; }

    /**
     * <p>Details on the name of the Amazon ECR repository used to filter findings.</p>
     */
    inline bool EcrImageRepositoryNameHasBeenSet() const { return m_ecrImageRepositoryNameHasBeenSet; }

    /**
     * <p>Details on the name of the Amazon ECR repository used to filter findings.</p>
     */
    inline void SetEcrImageRepositoryName(const Aws::Vector<StringFilter>& value) { m_ecrImageRepositoryNameHasBeenSet = true; m_ecrImageRepositoryName = value; }

    /**
     * <p>Details on the name of the Amazon ECR repository used to filter findings.</p>
     */
    inline void SetEcrImageRepositoryName(Aws::Vector<StringFilter>&& value) { m_ecrImageRepositoryNameHasBeenSet = true; m_ecrImageRepositoryName = std::move(value); }

    /**
     * <p>Details on the name of the Amazon ECR repository used to filter findings.</p>
     */
    inline FilterCriteria& WithEcrImageRepositoryName(const Aws::Vector<StringFilter>& value) { SetEcrImageRepositoryName(value); return *this;}

    /**
     * <p>Details on the name of the Amazon ECR repository used to filter findings.</p>
     */
    inline FilterCriteria& WithEcrImageRepositoryName(Aws::Vector<StringFilter>&& value) { SetEcrImageRepositoryName(std::move(value)); return *this;}

    /**
     * <p>Details on the name of the Amazon ECR repository used to filter findings.</p>
     */
    inline FilterCriteria& AddEcrImageRepositoryName(const StringFilter& value) { m_ecrImageRepositoryNameHasBeenSet = true; m_ecrImageRepositoryName.push_back(value); return *this; }

    /**
     * <p>Details on the name of the Amazon ECR repository used to filter findings.</p>
     */
    inline FilterCriteria& AddEcrImageRepositoryName(StringFilter&& value) { m_ecrImageRepositoryNameHasBeenSet = true; m_ecrImageRepositoryName.push_back(std::move(value)); return *this; }


    /**
     * <p>The tags attached to the Amazon ECR container image.</p>
     */
    inline const Aws::Vector<StringFilter>& GetEcrImageTags() const{ return m_ecrImageTags; }

    /**
     * <p>The tags attached to the Amazon ECR container image.</p>
     */
    inline bool EcrImageTagsHasBeenSet() const { return m_ecrImageTagsHasBeenSet; }

    /**
     * <p>The tags attached to the Amazon ECR container image.</p>
     */
    inline void SetEcrImageTags(const Aws::Vector<StringFilter>& value) { m_ecrImageTagsHasBeenSet = true; m_ecrImageTags = value; }

    /**
     * <p>The tags attached to the Amazon ECR container image.</p>
     */
    inline void SetEcrImageTags(Aws::Vector<StringFilter>&& value) { m_ecrImageTagsHasBeenSet = true; m_ecrImageTags = std::move(value); }

    /**
     * <p>The tags attached to the Amazon ECR container image.</p>
     */
    inline FilterCriteria& WithEcrImageTags(const Aws::Vector<StringFilter>& value) { SetEcrImageTags(value); return *this;}

    /**
     * <p>The tags attached to the Amazon ECR container image.</p>
     */
    inline FilterCriteria& WithEcrImageTags(Aws::Vector<StringFilter>&& value) { SetEcrImageTags(std::move(value)); return *this;}

    /**
     * <p>The tags attached to the Amazon ECR container image.</p>
     */
    inline FilterCriteria& AddEcrImageTags(const StringFilter& value) { m_ecrImageTagsHasBeenSet = true; m_ecrImageTags.push_back(value); return *this; }

    /**
     * <p>The tags attached to the Amazon ECR container image.</p>
     */
    inline FilterCriteria& AddEcrImageTags(StringFilter&& value) { m_ecrImageTagsHasBeenSet = true; m_ecrImageTags.push_back(std::move(value)); return *this; }


    /**
     * <p>Filters the list of AWS Lambda findings by the availability of exploits.</p>
     */
    inline const Aws::Vector<StringFilter>& GetExploitAvailable() const{ return m_exploitAvailable; }

    /**
     * <p>Filters the list of AWS Lambda findings by the availability of exploits.</p>
     */
    inline bool ExploitAvailableHasBeenSet() const { return m_exploitAvailableHasBeenSet; }

    /**
     * <p>Filters the list of AWS Lambda findings by the availability of exploits.</p>
     */
    inline void SetExploitAvailable(const Aws::Vector<StringFilter>& value) { m_exploitAvailableHasBeenSet = true; m_exploitAvailable = value; }

    /**
     * <p>Filters the list of AWS Lambda findings by the availability of exploits.</p>
     */
    inline void SetExploitAvailable(Aws::Vector<StringFilter>&& value) { m_exploitAvailableHasBeenSet = true; m_exploitAvailable = std::move(value); }

    /**
     * <p>Filters the list of AWS Lambda findings by the availability of exploits.</p>
     */
    inline FilterCriteria& WithExploitAvailable(const Aws::Vector<StringFilter>& value) { SetExploitAvailable(value); return *this;}

    /**
     * <p>Filters the list of AWS Lambda findings by the availability of exploits.</p>
     */
    inline FilterCriteria& WithExploitAvailable(Aws::Vector<StringFilter>&& value) { SetExploitAvailable(std::move(value)); return *this;}

    /**
     * <p>Filters the list of AWS Lambda findings by the availability of exploits.</p>
     */
    inline FilterCriteria& AddExploitAvailable(const StringFilter& value) { m_exploitAvailableHasBeenSet = true; m_exploitAvailable.push_back(value); return *this; }

    /**
     * <p>Filters the list of AWS Lambda findings by the availability of exploits.</p>
     */
    inline FilterCriteria& AddExploitAvailable(StringFilter&& value) { m_exploitAvailableHasBeenSet = true; m_exploitAvailable.push_back(std::move(value)); return *this; }


    /**
     * <p>Details on the finding ARNs used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetFindingArn() const{ return m_findingArn; }

    /**
     * <p>Details on the finding ARNs used to filter findings.</p>
     */
    inline bool FindingArnHasBeenSet() const { return m_findingArnHasBeenSet; }

    /**
     * <p>Details on the finding ARNs used to filter findings.</p>
     */
    inline void SetFindingArn(const Aws::Vector<StringFilter>& value) { m_findingArnHasBeenSet = true; m_findingArn = value; }

    /**
     * <p>Details on the finding ARNs used to filter findings.</p>
     */
    inline void SetFindingArn(Aws::Vector<StringFilter>&& value) { m_findingArnHasBeenSet = true; m_findingArn = std::move(value); }

    /**
     * <p>Details on the finding ARNs used to filter findings.</p>
     */
    inline FilterCriteria& WithFindingArn(const Aws::Vector<StringFilter>& value) { SetFindingArn(value); return *this;}

    /**
     * <p>Details on the finding ARNs used to filter findings.</p>
     */
    inline FilterCriteria& WithFindingArn(Aws::Vector<StringFilter>&& value) { SetFindingArn(std::move(value)); return *this;}

    /**
     * <p>Details on the finding ARNs used to filter findings.</p>
     */
    inline FilterCriteria& AddFindingArn(const StringFilter& value) { m_findingArnHasBeenSet = true; m_findingArn.push_back(value); return *this; }

    /**
     * <p>Details on the finding ARNs used to filter findings.</p>
     */
    inline FilterCriteria& AddFindingArn(StringFilter&& value) { m_findingArnHasBeenSet = true; m_findingArn.push_back(std::move(value)); return *this; }


    /**
     * <p>Details on the finding status types used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetFindingStatus() const{ return m_findingStatus; }

    /**
     * <p>Details on the finding status types used to filter findings.</p>
     */
    inline bool FindingStatusHasBeenSet() const { return m_findingStatusHasBeenSet; }

    /**
     * <p>Details on the finding status types used to filter findings.</p>
     */
    inline void SetFindingStatus(const Aws::Vector<StringFilter>& value) { m_findingStatusHasBeenSet = true; m_findingStatus = value; }

    /**
     * <p>Details on the finding status types used to filter findings.</p>
     */
    inline void SetFindingStatus(Aws::Vector<StringFilter>&& value) { m_findingStatusHasBeenSet = true; m_findingStatus = std::move(value); }

    /**
     * <p>Details on the finding status types used to filter findings.</p>
     */
    inline FilterCriteria& WithFindingStatus(const Aws::Vector<StringFilter>& value) { SetFindingStatus(value); return *this;}

    /**
     * <p>Details on the finding status types used to filter findings.</p>
     */
    inline FilterCriteria& WithFindingStatus(Aws::Vector<StringFilter>&& value) { SetFindingStatus(std::move(value)); return *this;}

    /**
     * <p>Details on the finding status types used to filter findings.</p>
     */
    inline FilterCriteria& AddFindingStatus(const StringFilter& value) { m_findingStatusHasBeenSet = true; m_findingStatus.push_back(value); return *this; }

    /**
     * <p>Details on the finding status types used to filter findings.</p>
     */
    inline FilterCriteria& AddFindingStatus(StringFilter&& value) { m_findingStatusHasBeenSet = true; m_findingStatus.push_back(std::move(value)); return *this; }


    /**
     * <p>Details on the finding types used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetFindingType() const{ return m_findingType; }

    /**
     * <p>Details on the finding types used to filter findings.</p>
     */
    inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }

    /**
     * <p>Details on the finding types used to filter findings.</p>
     */
    inline void SetFindingType(const Aws::Vector<StringFilter>& value) { m_findingTypeHasBeenSet = true; m_findingType = value; }

    /**
     * <p>Details on the finding types used to filter findings.</p>
     */
    inline void SetFindingType(Aws::Vector<StringFilter>&& value) { m_findingTypeHasBeenSet = true; m_findingType = std::move(value); }

    /**
     * <p>Details on the finding types used to filter findings.</p>
     */
    inline FilterCriteria& WithFindingType(const Aws::Vector<StringFilter>& value) { SetFindingType(value); return *this;}

    /**
     * <p>Details on the finding types used to filter findings.</p>
     */
    inline FilterCriteria& WithFindingType(Aws::Vector<StringFilter>&& value) { SetFindingType(std::move(value)); return *this;}

    /**
     * <p>Details on the finding types used to filter findings.</p>
     */
    inline FilterCriteria& AddFindingType(const StringFilter& value) { m_findingTypeHasBeenSet = true; m_findingType.push_back(value); return *this; }

    /**
     * <p>Details on the finding types used to filter findings.</p>
     */
    inline FilterCriteria& AddFindingType(StringFilter&& value) { m_findingTypeHasBeenSet = true; m_findingType.push_back(std::move(value)); return *this; }


    /**
     * <p>Details on the date and time a finding was first seen used to filter
     * findings.</p>
     */
    inline const Aws::Vector<DateFilter>& GetFirstObservedAt() const{ return m_firstObservedAt; }

    /**
     * <p>Details on the date and time a finding was first seen used to filter
     * findings.</p>
     */
    inline bool FirstObservedAtHasBeenSet() const { return m_firstObservedAtHasBeenSet; }

    /**
     * <p>Details on the date and time a finding was first seen used to filter
     * findings.</p>
     */
    inline void SetFirstObservedAt(const Aws::Vector<DateFilter>& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt = value; }

    /**
     * <p>Details on the date and time a finding was first seen used to filter
     * findings.</p>
     */
    inline void SetFirstObservedAt(Aws::Vector<DateFilter>&& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt = std::move(value); }

    /**
     * <p>Details on the date and time a finding was first seen used to filter
     * findings.</p>
     */
    inline FilterCriteria& WithFirstObservedAt(const Aws::Vector<DateFilter>& value) { SetFirstObservedAt(value); return *this;}

    /**
     * <p>Details on the date and time a finding was first seen used to filter
     * findings.</p>
     */
    inline FilterCriteria& WithFirstObservedAt(Aws::Vector<DateFilter>&& value) { SetFirstObservedAt(std::move(value)); return *this;}

    /**
     * <p>Details on the date and time a finding was first seen used to filter
     * findings.</p>
     */
    inline FilterCriteria& AddFirstObservedAt(const DateFilter& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt.push_back(value); return *this; }

    /**
     * <p>Details on the date and time a finding was first seen used to filter
     * findings.</p>
     */
    inline FilterCriteria& AddFirstObservedAt(DateFilter&& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt.push_back(std::move(value)); return *this; }


    /**
     * <p>Details on whether a fix is available through a version update. This value
     * can be <code>YES</code>, <code>NO</code>, or <code>PARTIAL</code>. A
     * <code>PARTIAL</code> fix means that some, but not all, of the packages
     * identified in the finding have fixes available through updated versions.</p>
     */
    inline const Aws::Vector<StringFilter>& GetFixAvailable() const{ return m_fixAvailable; }

    /**
     * <p>Details on whether a fix is available through a version update. This value
     * can be <code>YES</code>, <code>NO</code>, or <code>PARTIAL</code>. A
     * <code>PARTIAL</code> fix means that some, but not all, of the packages
     * identified in the finding have fixes available through updated versions.</p>
     */
    inline bool FixAvailableHasBeenSet() const { return m_fixAvailableHasBeenSet; }

    /**
     * <p>Details on whether a fix is available through a version update. This value
     * can be <code>YES</code>, <code>NO</code>, or <code>PARTIAL</code>. A
     * <code>PARTIAL</code> fix means that some, but not all, of the packages
     * identified in the finding have fixes available through updated versions.</p>
     */
    inline void SetFixAvailable(const Aws::Vector<StringFilter>& value) { m_fixAvailableHasBeenSet = true; m_fixAvailable = value; }

    /**
     * <p>Details on whether a fix is available through a version update. This value
     * can be <code>YES</code>, <code>NO</code>, or <code>PARTIAL</code>. A
     * <code>PARTIAL</code> fix means that some, but not all, of the packages
     * identified in the finding have fixes available through updated versions.</p>
     */
    inline void SetFixAvailable(Aws::Vector<StringFilter>&& value) { m_fixAvailableHasBeenSet = true; m_fixAvailable = std::move(value); }

    /**
     * <p>Details on whether a fix is available through a version update. This value
     * can be <code>YES</code>, <code>NO</code>, or <code>PARTIAL</code>. A
     * <code>PARTIAL</code> fix means that some, but not all, of the packages
     * identified in the finding have fixes available through updated versions.</p>
     */
    inline FilterCriteria& WithFixAvailable(const Aws::Vector<StringFilter>& value) { SetFixAvailable(value); return *this;}

    /**
     * <p>Details on whether a fix is available through a version update. This value
     * can be <code>YES</code>, <code>NO</code>, or <code>PARTIAL</code>. A
     * <code>PARTIAL</code> fix means that some, but not all, of the packages
     * identified in the finding have fixes available through updated versions.</p>
     */
    inline FilterCriteria& WithFixAvailable(Aws::Vector<StringFilter>&& value) { SetFixAvailable(std::move(value)); return *this;}

    /**
     * <p>Details on whether a fix is available through a version update. This value
     * can be <code>YES</code>, <code>NO</code>, or <code>PARTIAL</code>. A
     * <code>PARTIAL</code> fix means that some, but not all, of the packages
     * identified in the finding have fixes available through updated versions.</p>
     */
    inline FilterCriteria& AddFixAvailable(const StringFilter& value) { m_fixAvailableHasBeenSet = true; m_fixAvailable.push_back(value); return *this; }

    /**
     * <p>Details on whether a fix is available through a version update. This value
     * can be <code>YES</code>, <code>NO</code>, or <code>PARTIAL</code>. A
     * <code>PARTIAL</code> fix means that some, but not all, of the packages
     * identified in the finding have fixes available through updated versions.</p>
     */
    inline FilterCriteria& AddFixAvailable(StringFilter&& value) { m_fixAvailableHasBeenSet = true; m_fixAvailable.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Inspector score to filter on.</p>
     */
    inline const Aws::Vector<NumberFilter>& GetInspectorScore() const{ return m_inspectorScore; }

    /**
     * <p>The Amazon Inspector score to filter on.</p>
     */
    inline bool InspectorScoreHasBeenSet() const { return m_inspectorScoreHasBeenSet; }

    /**
     * <p>The Amazon Inspector score to filter on.</p>
     */
    inline void SetInspectorScore(const Aws::Vector<NumberFilter>& value) { m_inspectorScoreHasBeenSet = true; m_inspectorScore = value; }

    /**
     * <p>The Amazon Inspector score to filter on.</p>
     */
    inline void SetInspectorScore(Aws::Vector<NumberFilter>&& value) { m_inspectorScoreHasBeenSet = true; m_inspectorScore = std::move(value); }

    /**
     * <p>The Amazon Inspector score to filter on.</p>
     */
    inline FilterCriteria& WithInspectorScore(const Aws::Vector<NumberFilter>& value) { SetInspectorScore(value); return *this;}

    /**
     * <p>The Amazon Inspector score to filter on.</p>
     */
    inline FilterCriteria& WithInspectorScore(Aws::Vector<NumberFilter>&& value) { SetInspectorScore(std::move(value)); return *this;}

    /**
     * <p>The Amazon Inspector score to filter on.</p>
     */
    inline FilterCriteria& AddInspectorScore(const NumberFilter& value) { m_inspectorScoreHasBeenSet = true; m_inspectorScore.push_back(value); return *this; }

    /**
     * <p>The Amazon Inspector score to filter on.</p>
     */
    inline FilterCriteria& AddInspectorScore(NumberFilter&& value) { m_inspectorScoreHasBeenSet = true; m_inspectorScore.push_back(std::move(value)); return *this; }


    /**
     * <p>Filters the list of AWS Lambda functions by execution role.</p>
     */
    inline const Aws::Vector<StringFilter>& GetLambdaFunctionExecutionRoleArn() const{ return m_lambdaFunctionExecutionRoleArn; }

    /**
     * <p>Filters the list of AWS Lambda functions by execution role.</p>
     */
    inline bool LambdaFunctionExecutionRoleArnHasBeenSet() const { return m_lambdaFunctionExecutionRoleArnHasBeenSet; }

    /**
     * <p>Filters the list of AWS Lambda functions by execution role.</p>
     */
    inline void SetLambdaFunctionExecutionRoleArn(const Aws::Vector<StringFilter>& value) { m_lambdaFunctionExecutionRoleArnHasBeenSet = true; m_lambdaFunctionExecutionRoleArn = value; }

    /**
     * <p>Filters the list of AWS Lambda functions by execution role.</p>
     */
    inline void SetLambdaFunctionExecutionRoleArn(Aws::Vector<StringFilter>&& value) { m_lambdaFunctionExecutionRoleArnHasBeenSet = true; m_lambdaFunctionExecutionRoleArn = std::move(value); }

    /**
     * <p>Filters the list of AWS Lambda functions by execution role.</p>
     */
    inline FilterCriteria& WithLambdaFunctionExecutionRoleArn(const Aws::Vector<StringFilter>& value) { SetLambdaFunctionExecutionRoleArn(value); return *this;}

    /**
     * <p>Filters the list of AWS Lambda functions by execution role.</p>
     */
    inline FilterCriteria& WithLambdaFunctionExecutionRoleArn(Aws::Vector<StringFilter>&& value) { SetLambdaFunctionExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>Filters the list of AWS Lambda functions by execution role.</p>
     */
    inline FilterCriteria& AddLambdaFunctionExecutionRoleArn(const StringFilter& value) { m_lambdaFunctionExecutionRoleArnHasBeenSet = true; m_lambdaFunctionExecutionRoleArn.push_back(value); return *this; }

    /**
     * <p>Filters the list of AWS Lambda functions by execution role.</p>
     */
    inline FilterCriteria& AddLambdaFunctionExecutionRoleArn(StringFilter&& value) { m_lambdaFunctionExecutionRoleArnHasBeenSet = true; m_lambdaFunctionExecutionRoleArn.push_back(std::move(value)); return *this; }


    /**
     * <p>Filters the list of AWS Lambda functions by the date and time that a user
     * last updated the configuration, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601
     * format</a> </p>
     */
    inline const Aws::Vector<DateFilter>& GetLambdaFunctionLastModifiedAt() const{ return m_lambdaFunctionLastModifiedAt; }

    /**
     * <p>Filters the list of AWS Lambda functions by the date and time that a user
     * last updated the configuration, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601
     * format</a> </p>
     */
    inline bool LambdaFunctionLastModifiedAtHasBeenSet() const { return m_lambdaFunctionLastModifiedAtHasBeenSet; }

    /**
     * <p>Filters the list of AWS Lambda functions by the date and time that a user
     * last updated the configuration, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601
     * format</a> </p>
     */
    inline void SetLambdaFunctionLastModifiedAt(const Aws::Vector<DateFilter>& value) { m_lambdaFunctionLastModifiedAtHasBeenSet = true; m_lambdaFunctionLastModifiedAt = value; }

    /**
     * <p>Filters the list of AWS Lambda functions by the date and time that a user
     * last updated the configuration, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601
     * format</a> </p>
     */
    inline void SetLambdaFunctionLastModifiedAt(Aws::Vector<DateFilter>&& value) { m_lambdaFunctionLastModifiedAtHasBeenSet = true; m_lambdaFunctionLastModifiedAt = std::move(value); }

    /**
     * <p>Filters the list of AWS Lambda functions by the date and time that a user
     * last updated the configuration, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601
     * format</a> </p>
     */
    inline FilterCriteria& WithLambdaFunctionLastModifiedAt(const Aws::Vector<DateFilter>& value) { SetLambdaFunctionLastModifiedAt(value); return *this;}

    /**
     * <p>Filters the list of AWS Lambda functions by the date and time that a user
     * last updated the configuration, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601
     * format</a> </p>
     */
    inline FilterCriteria& WithLambdaFunctionLastModifiedAt(Aws::Vector<DateFilter>&& value) { SetLambdaFunctionLastModifiedAt(std::move(value)); return *this;}

    /**
     * <p>Filters the list of AWS Lambda functions by the date and time that a user
     * last updated the configuration, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601
     * format</a> </p>
     */
    inline FilterCriteria& AddLambdaFunctionLastModifiedAt(const DateFilter& value) { m_lambdaFunctionLastModifiedAtHasBeenSet = true; m_lambdaFunctionLastModifiedAt.push_back(value); return *this; }

    /**
     * <p>Filters the list of AWS Lambda functions by the date and time that a user
     * last updated the configuration, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601
     * format</a> </p>
     */
    inline FilterCriteria& AddLambdaFunctionLastModifiedAt(DateFilter&& value) { m_lambdaFunctionLastModifiedAtHasBeenSet = true; m_lambdaFunctionLastModifiedAt.push_back(std::move(value)); return *this; }


    /**
     * <p>Filters the list of AWS Lambda functions by the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>. A Lambda function can have up to five layers.</p>
     */
    inline const Aws::Vector<StringFilter>& GetLambdaFunctionLayers() const{ return m_lambdaFunctionLayers; }

    /**
     * <p>Filters the list of AWS Lambda functions by the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>. A Lambda function can have up to five layers.</p>
     */
    inline bool LambdaFunctionLayersHasBeenSet() const { return m_lambdaFunctionLayersHasBeenSet; }

    /**
     * <p>Filters the list of AWS Lambda functions by the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>. A Lambda function can have up to five layers.</p>
     */
    inline void SetLambdaFunctionLayers(const Aws::Vector<StringFilter>& value) { m_lambdaFunctionLayersHasBeenSet = true; m_lambdaFunctionLayers = value; }

    /**
     * <p>Filters the list of AWS Lambda functions by the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>. A Lambda function can have up to five layers.</p>
     */
    inline void SetLambdaFunctionLayers(Aws::Vector<StringFilter>&& value) { m_lambdaFunctionLayersHasBeenSet = true; m_lambdaFunctionLayers = std::move(value); }

    /**
     * <p>Filters the list of AWS Lambda functions by the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>. A Lambda function can have up to five layers.</p>
     */
    inline FilterCriteria& WithLambdaFunctionLayers(const Aws::Vector<StringFilter>& value) { SetLambdaFunctionLayers(value); return *this;}

    /**
     * <p>Filters the list of AWS Lambda functions by the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>. A Lambda function can have up to five layers.</p>
     */
    inline FilterCriteria& WithLambdaFunctionLayers(Aws::Vector<StringFilter>&& value) { SetLambdaFunctionLayers(std::move(value)); return *this;}

    /**
     * <p>Filters the list of AWS Lambda functions by the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>. A Lambda function can have up to five layers.</p>
     */
    inline FilterCriteria& AddLambdaFunctionLayers(const StringFilter& value) { m_lambdaFunctionLayersHasBeenSet = true; m_lambdaFunctionLayers.push_back(value); return *this; }

    /**
     * <p>Filters the list of AWS Lambda functions by the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>. A Lambda function can have up to five layers.</p>
     */
    inline FilterCriteria& AddLambdaFunctionLayers(StringFilter&& value) { m_lambdaFunctionLayersHasBeenSet = true; m_lambdaFunctionLayers.push_back(std::move(value)); return *this; }


    /**
     * <p>Filters the list of AWS Lambda functions by the name of the function.</p>
     */
    inline const Aws::Vector<StringFilter>& GetLambdaFunctionName() const{ return m_lambdaFunctionName; }

    /**
     * <p>Filters the list of AWS Lambda functions by the name of the function.</p>
     */
    inline bool LambdaFunctionNameHasBeenSet() const { return m_lambdaFunctionNameHasBeenSet; }

    /**
     * <p>Filters the list of AWS Lambda functions by the name of the function.</p>
     */
    inline void SetLambdaFunctionName(const Aws::Vector<StringFilter>& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName = value; }

    /**
     * <p>Filters the list of AWS Lambda functions by the name of the function.</p>
     */
    inline void SetLambdaFunctionName(Aws::Vector<StringFilter>&& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName = std::move(value); }

    /**
     * <p>Filters the list of AWS Lambda functions by the name of the function.</p>
     */
    inline FilterCriteria& WithLambdaFunctionName(const Aws::Vector<StringFilter>& value) { SetLambdaFunctionName(value); return *this;}

    /**
     * <p>Filters the list of AWS Lambda functions by the name of the function.</p>
     */
    inline FilterCriteria& WithLambdaFunctionName(Aws::Vector<StringFilter>&& value) { SetLambdaFunctionName(std::move(value)); return *this;}

    /**
     * <p>Filters the list of AWS Lambda functions by the name of the function.</p>
     */
    inline FilterCriteria& AddLambdaFunctionName(const StringFilter& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName.push_back(value); return *this; }

    /**
     * <p>Filters the list of AWS Lambda functions by the name of the function.</p>
     */
    inline FilterCriteria& AddLambdaFunctionName(StringFilter&& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName.push_back(std::move(value)); return *this; }


    /**
     * <p>Filters the list of AWS Lambda functions by the runtime environment for the
     * Lambda function.</p>
     */
    inline const Aws::Vector<StringFilter>& GetLambdaFunctionRuntime() const{ return m_lambdaFunctionRuntime; }

    /**
     * <p>Filters the list of AWS Lambda functions by the runtime environment for the
     * Lambda function.</p>
     */
    inline bool LambdaFunctionRuntimeHasBeenSet() const { return m_lambdaFunctionRuntimeHasBeenSet; }

    /**
     * <p>Filters the list of AWS Lambda functions by the runtime environment for the
     * Lambda function.</p>
     */
    inline void SetLambdaFunctionRuntime(const Aws::Vector<StringFilter>& value) { m_lambdaFunctionRuntimeHasBeenSet = true; m_lambdaFunctionRuntime = value; }

    /**
     * <p>Filters the list of AWS Lambda functions by the runtime environment for the
     * Lambda function.</p>
     */
    inline void SetLambdaFunctionRuntime(Aws::Vector<StringFilter>&& value) { m_lambdaFunctionRuntimeHasBeenSet = true; m_lambdaFunctionRuntime = std::move(value); }

    /**
     * <p>Filters the list of AWS Lambda functions by the runtime environment for the
     * Lambda function.</p>
     */
    inline FilterCriteria& WithLambdaFunctionRuntime(const Aws::Vector<StringFilter>& value) { SetLambdaFunctionRuntime(value); return *this;}

    /**
     * <p>Filters the list of AWS Lambda functions by the runtime environment for the
     * Lambda function.</p>
     */
    inline FilterCriteria& WithLambdaFunctionRuntime(Aws::Vector<StringFilter>&& value) { SetLambdaFunctionRuntime(std::move(value)); return *this;}

    /**
     * <p>Filters the list of AWS Lambda functions by the runtime environment for the
     * Lambda function.</p>
     */
    inline FilterCriteria& AddLambdaFunctionRuntime(const StringFilter& value) { m_lambdaFunctionRuntimeHasBeenSet = true; m_lambdaFunctionRuntime.push_back(value); return *this; }

    /**
     * <p>Filters the list of AWS Lambda functions by the runtime environment for the
     * Lambda function.</p>
     */
    inline FilterCriteria& AddLambdaFunctionRuntime(StringFilter&& value) { m_lambdaFunctionRuntimeHasBeenSet = true; m_lambdaFunctionRuntime.push_back(std::move(value)); return *this; }


    /**
     * <p>Details on the date and time a finding was last seen used to filter
     * findings.</p>
     */
    inline const Aws::Vector<DateFilter>& GetLastObservedAt() const{ return m_lastObservedAt; }

    /**
     * <p>Details on the date and time a finding was last seen used to filter
     * findings.</p>
     */
    inline bool LastObservedAtHasBeenSet() const { return m_lastObservedAtHasBeenSet; }

    /**
     * <p>Details on the date and time a finding was last seen used to filter
     * findings.</p>
     */
    inline void SetLastObservedAt(const Aws::Vector<DateFilter>& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = value; }

    /**
     * <p>Details on the date and time a finding was last seen used to filter
     * findings.</p>
     */
    inline void SetLastObservedAt(Aws::Vector<DateFilter>&& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = std::move(value); }

    /**
     * <p>Details on the date and time a finding was last seen used to filter
     * findings.</p>
     */
    inline FilterCriteria& WithLastObservedAt(const Aws::Vector<DateFilter>& value) { SetLastObservedAt(value); return *this;}

    /**
     * <p>Details on the date and time a finding was last seen used to filter
     * findings.</p>
     */
    inline FilterCriteria& WithLastObservedAt(Aws::Vector<DateFilter>&& value) { SetLastObservedAt(std::move(value)); return *this;}

    /**
     * <p>Details on the date and time a finding was last seen used to filter
     * findings.</p>
     */
    inline FilterCriteria& AddLastObservedAt(const DateFilter& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt.push_back(value); return *this; }

    /**
     * <p>Details on the date and time a finding was last seen used to filter
     * findings.</p>
     */
    inline FilterCriteria& AddLastObservedAt(DateFilter&& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt.push_back(std::move(value)); return *this; }


    /**
     * <p>Details on the ingress source addresses used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetNetworkProtocol() const{ return m_networkProtocol; }

    /**
     * <p>Details on the ingress source addresses used to filter findings.</p>
     */
    inline bool NetworkProtocolHasBeenSet() const { return m_networkProtocolHasBeenSet; }

    /**
     * <p>Details on the ingress source addresses used to filter findings.</p>
     */
    inline void SetNetworkProtocol(const Aws::Vector<StringFilter>& value) { m_networkProtocolHasBeenSet = true; m_networkProtocol = value; }

    /**
     * <p>Details on the ingress source addresses used to filter findings.</p>
     */
    inline void SetNetworkProtocol(Aws::Vector<StringFilter>&& value) { m_networkProtocolHasBeenSet = true; m_networkProtocol = std::move(value); }

    /**
     * <p>Details on the ingress source addresses used to filter findings.</p>
     */
    inline FilterCriteria& WithNetworkProtocol(const Aws::Vector<StringFilter>& value) { SetNetworkProtocol(value); return *this;}

    /**
     * <p>Details on the ingress source addresses used to filter findings.</p>
     */
    inline FilterCriteria& WithNetworkProtocol(Aws::Vector<StringFilter>&& value) { SetNetworkProtocol(std::move(value)); return *this;}

    /**
     * <p>Details on the ingress source addresses used to filter findings.</p>
     */
    inline FilterCriteria& AddNetworkProtocol(const StringFilter& value) { m_networkProtocolHasBeenSet = true; m_networkProtocol.push_back(value); return *this; }

    /**
     * <p>Details on the ingress source addresses used to filter findings.</p>
     */
    inline FilterCriteria& AddNetworkProtocol(StringFilter&& value) { m_networkProtocolHasBeenSet = true; m_networkProtocol.push_back(std::move(value)); return *this; }


    /**
     * <p>Details on the port ranges used to filter findings.</p>
     */
    inline const Aws::Vector<PortRangeFilter>& GetPortRange() const{ return m_portRange; }

    /**
     * <p>Details on the port ranges used to filter findings.</p>
     */
    inline bool PortRangeHasBeenSet() const { return m_portRangeHasBeenSet; }

    /**
     * <p>Details on the port ranges used to filter findings.</p>
     */
    inline void SetPortRange(const Aws::Vector<PortRangeFilter>& value) { m_portRangeHasBeenSet = true; m_portRange = value; }

    /**
     * <p>Details on the port ranges used to filter findings.</p>
     */
    inline void SetPortRange(Aws::Vector<PortRangeFilter>&& value) { m_portRangeHasBeenSet = true; m_portRange = std::move(value); }

    /**
     * <p>Details on the port ranges used to filter findings.</p>
     */
    inline FilterCriteria& WithPortRange(const Aws::Vector<PortRangeFilter>& value) { SetPortRange(value); return *this;}

    /**
     * <p>Details on the port ranges used to filter findings.</p>
     */
    inline FilterCriteria& WithPortRange(Aws::Vector<PortRangeFilter>&& value) { SetPortRange(std::move(value)); return *this;}

    /**
     * <p>Details on the port ranges used to filter findings.</p>
     */
    inline FilterCriteria& AddPortRange(const PortRangeFilter& value) { m_portRangeHasBeenSet = true; m_portRange.push_back(value); return *this; }

    /**
     * <p>Details on the port ranges used to filter findings.</p>
     */
    inline FilterCriteria& AddPortRange(PortRangeFilter&& value) { m_portRangeHasBeenSet = true; m_portRange.push_back(std::move(value)); return *this; }


    /**
     * <p>Details on the related vulnerabilities used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetRelatedVulnerabilities() const{ return m_relatedVulnerabilities; }

    /**
     * <p>Details on the related vulnerabilities used to filter findings.</p>
     */
    inline bool RelatedVulnerabilitiesHasBeenSet() const { return m_relatedVulnerabilitiesHasBeenSet; }

    /**
     * <p>Details on the related vulnerabilities used to filter findings.</p>
     */
    inline void SetRelatedVulnerabilities(const Aws::Vector<StringFilter>& value) { m_relatedVulnerabilitiesHasBeenSet = true; m_relatedVulnerabilities = value; }

    /**
     * <p>Details on the related vulnerabilities used to filter findings.</p>
     */
    inline void SetRelatedVulnerabilities(Aws::Vector<StringFilter>&& value) { m_relatedVulnerabilitiesHasBeenSet = true; m_relatedVulnerabilities = std::move(value); }

    /**
     * <p>Details on the related vulnerabilities used to filter findings.</p>
     */
    inline FilterCriteria& WithRelatedVulnerabilities(const Aws::Vector<StringFilter>& value) { SetRelatedVulnerabilities(value); return *this;}

    /**
     * <p>Details on the related vulnerabilities used to filter findings.</p>
     */
    inline FilterCriteria& WithRelatedVulnerabilities(Aws::Vector<StringFilter>&& value) { SetRelatedVulnerabilities(std::move(value)); return *this;}

    /**
     * <p>Details on the related vulnerabilities used to filter findings.</p>
     */
    inline FilterCriteria& AddRelatedVulnerabilities(const StringFilter& value) { m_relatedVulnerabilitiesHasBeenSet = true; m_relatedVulnerabilities.push_back(value); return *this; }

    /**
     * <p>Details on the related vulnerabilities used to filter findings.</p>
     */
    inline FilterCriteria& AddRelatedVulnerabilities(StringFilter&& value) { m_relatedVulnerabilitiesHasBeenSet = true; m_relatedVulnerabilities.push_back(std::move(value)); return *this; }


    /**
     * <p>Details on the resource IDs used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Details on the resource IDs used to filter findings.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>Details on the resource IDs used to filter findings.</p>
     */
    inline void SetResourceId(const Aws::Vector<StringFilter>& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Details on the resource IDs used to filter findings.</p>
     */
    inline void SetResourceId(Aws::Vector<StringFilter>&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>Details on the resource IDs used to filter findings.</p>
     */
    inline FilterCriteria& WithResourceId(const Aws::Vector<StringFilter>& value) { SetResourceId(value); return *this;}

    /**
     * <p>Details on the resource IDs used to filter findings.</p>
     */
    inline FilterCriteria& WithResourceId(Aws::Vector<StringFilter>&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>Details on the resource IDs used to filter findings.</p>
     */
    inline FilterCriteria& AddResourceId(const StringFilter& value) { m_resourceIdHasBeenSet = true; m_resourceId.push_back(value); return *this; }

    /**
     * <p>Details on the resource IDs used to filter findings.</p>
     */
    inline FilterCriteria& AddResourceId(StringFilter&& value) { m_resourceIdHasBeenSet = true; m_resourceId.push_back(std::move(value)); return *this; }


    /**
     * <p>Details on the resource tags used to filter findings.</p>
     */
    inline const Aws::Vector<MapFilter>& GetResourceTags() const{ return m_resourceTags; }

    /**
     * <p>Details on the resource tags used to filter findings.</p>
     */
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }

    /**
     * <p>Details on the resource tags used to filter findings.</p>
     */
    inline void SetResourceTags(const Aws::Vector<MapFilter>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }

    /**
     * <p>Details on the resource tags used to filter findings.</p>
     */
    inline void SetResourceTags(Aws::Vector<MapFilter>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }

    /**
     * <p>Details on the resource tags used to filter findings.</p>
     */
    inline FilterCriteria& WithResourceTags(const Aws::Vector<MapFilter>& value) { SetResourceTags(value); return *this;}

    /**
     * <p>Details on the resource tags used to filter findings.</p>
     */
    inline FilterCriteria& WithResourceTags(Aws::Vector<MapFilter>&& value) { SetResourceTags(std::move(value)); return *this;}

    /**
     * <p>Details on the resource tags used to filter findings.</p>
     */
    inline FilterCriteria& AddResourceTags(const MapFilter& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(value); return *this; }

    /**
     * <p>Details on the resource tags used to filter findings.</p>
     */
    inline FilterCriteria& AddResourceTags(MapFilter&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(std::move(value)); return *this; }


    /**
     * <p>Details on the resource types used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Details on the resource types used to filter findings.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Details on the resource types used to filter findings.</p>
     */
    inline void SetResourceType(const Aws::Vector<StringFilter>& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Details on the resource types used to filter findings.</p>
     */
    inline void SetResourceType(Aws::Vector<StringFilter>&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Details on the resource types used to filter findings.</p>
     */
    inline FilterCriteria& WithResourceType(const Aws::Vector<StringFilter>& value) { SetResourceType(value); return *this;}

    /**
     * <p>Details on the resource types used to filter findings.</p>
     */
    inline FilterCriteria& WithResourceType(Aws::Vector<StringFilter>&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>Details on the resource types used to filter findings.</p>
     */
    inline FilterCriteria& AddResourceType(const StringFilter& value) { m_resourceTypeHasBeenSet = true; m_resourceType.push_back(value); return *this; }

    /**
     * <p>Details on the resource types used to filter findings.</p>
     */
    inline FilterCriteria& AddResourceType(StringFilter&& value) { m_resourceTypeHasBeenSet = true; m_resourceType.push_back(std::move(value)); return *this; }


    /**
     * <p>Details on the severity used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetSeverity() const{ return m_severity; }

    /**
     * <p>Details on the severity used to filter findings.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>Details on the severity used to filter findings.</p>
     */
    inline void SetSeverity(const Aws::Vector<StringFilter>& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>Details on the severity used to filter findings.</p>
     */
    inline void SetSeverity(Aws::Vector<StringFilter>&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>Details on the severity used to filter findings.</p>
     */
    inline FilterCriteria& WithSeverity(const Aws::Vector<StringFilter>& value) { SetSeverity(value); return *this;}

    /**
     * <p>Details on the severity used to filter findings.</p>
     */
    inline FilterCriteria& WithSeverity(Aws::Vector<StringFilter>&& value) { SetSeverity(std::move(value)); return *this;}

    /**
     * <p>Details on the severity used to filter findings.</p>
     */
    inline FilterCriteria& AddSeverity(const StringFilter& value) { m_severityHasBeenSet = true; m_severity.push_back(value); return *this; }

    /**
     * <p>Details on the severity used to filter findings.</p>
     */
    inline FilterCriteria& AddSeverity(StringFilter&& value) { m_severityHasBeenSet = true; m_severity.push_back(std::move(value)); return *this; }


    /**
     * <p>Details on the finding title used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetTitle() const{ return m_title; }

    /**
     * <p>Details on the finding title used to filter findings.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>Details on the finding title used to filter findings.</p>
     */
    inline void SetTitle(const Aws::Vector<StringFilter>& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>Details on the finding title used to filter findings.</p>
     */
    inline void SetTitle(Aws::Vector<StringFilter>&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>Details on the finding title used to filter findings.</p>
     */
    inline FilterCriteria& WithTitle(const Aws::Vector<StringFilter>& value) { SetTitle(value); return *this;}

    /**
     * <p>Details on the finding title used to filter findings.</p>
     */
    inline FilterCriteria& WithTitle(Aws::Vector<StringFilter>&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>Details on the finding title used to filter findings.</p>
     */
    inline FilterCriteria& AddTitle(const StringFilter& value) { m_titleHasBeenSet = true; m_title.push_back(value); return *this; }

    /**
     * <p>Details on the finding title used to filter findings.</p>
     */
    inline FilterCriteria& AddTitle(StringFilter&& value) { m_titleHasBeenSet = true; m_title.push_back(std::move(value)); return *this; }


    /**
     * <p>Details on the date and time a finding was last updated at used to filter
     * findings.</p>
     */
    inline const Aws::Vector<DateFilter>& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>Details on the date and time a finding was last updated at used to filter
     * findings.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>Details on the date and time a finding was last updated at used to filter
     * findings.</p>
     */
    inline void SetUpdatedAt(const Aws::Vector<DateFilter>& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>Details on the date and time a finding was last updated at used to filter
     * findings.</p>
     */
    inline void SetUpdatedAt(Aws::Vector<DateFilter>&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>Details on the date and time a finding was last updated at used to filter
     * findings.</p>
     */
    inline FilterCriteria& WithUpdatedAt(const Aws::Vector<DateFilter>& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>Details on the date and time a finding was last updated at used to filter
     * findings.</p>
     */
    inline FilterCriteria& WithUpdatedAt(Aws::Vector<DateFilter>&& value) { SetUpdatedAt(std::move(value)); return *this;}

    /**
     * <p>Details on the date and time a finding was last updated at used to filter
     * findings.</p>
     */
    inline FilterCriteria& AddUpdatedAt(const DateFilter& value) { m_updatedAtHasBeenSet = true; m_updatedAt.push_back(value); return *this; }

    /**
     * <p>Details on the date and time a finding was last updated at used to filter
     * findings.</p>
     */
    inline FilterCriteria& AddUpdatedAt(DateFilter&& value) { m_updatedAtHasBeenSet = true; m_updatedAt.push_back(std::move(value)); return *this; }


    /**
     * <p>Details on the vendor severity used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetVendorSeverity() const{ return m_vendorSeverity; }

    /**
     * <p>Details on the vendor severity used to filter findings.</p>
     */
    inline bool VendorSeverityHasBeenSet() const { return m_vendorSeverityHasBeenSet; }

    /**
     * <p>Details on the vendor severity used to filter findings.</p>
     */
    inline void SetVendorSeverity(const Aws::Vector<StringFilter>& value) { m_vendorSeverityHasBeenSet = true; m_vendorSeverity = value; }

    /**
     * <p>Details on the vendor severity used to filter findings.</p>
     */
    inline void SetVendorSeverity(Aws::Vector<StringFilter>&& value) { m_vendorSeverityHasBeenSet = true; m_vendorSeverity = std::move(value); }

    /**
     * <p>Details on the vendor severity used to filter findings.</p>
     */
    inline FilterCriteria& WithVendorSeverity(const Aws::Vector<StringFilter>& value) { SetVendorSeverity(value); return *this;}

    /**
     * <p>Details on the vendor severity used to filter findings.</p>
     */
    inline FilterCriteria& WithVendorSeverity(Aws::Vector<StringFilter>&& value) { SetVendorSeverity(std::move(value)); return *this;}

    /**
     * <p>Details on the vendor severity used to filter findings.</p>
     */
    inline FilterCriteria& AddVendorSeverity(const StringFilter& value) { m_vendorSeverityHasBeenSet = true; m_vendorSeverity.push_back(value); return *this; }

    /**
     * <p>Details on the vendor severity used to filter findings.</p>
     */
    inline FilterCriteria& AddVendorSeverity(StringFilter&& value) { m_vendorSeverityHasBeenSet = true; m_vendorSeverity.push_back(std::move(value)); return *this; }


    /**
     * <p>Details on the vulnerability ID used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetVulnerabilityId() const{ return m_vulnerabilityId; }

    /**
     * <p>Details on the vulnerability ID used to filter findings.</p>
     */
    inline bool VulnerabilityIdHasBeenSet() const { return m_vulnerabilityIdHasBeenSet; }

    /**
     * <p>Details on the vulnerability ID used to filter findings.</p>
     */
    inline void SetVulnerabilityId(const Aws::Vector<StringFilter>& value) { m_vulnerabilityIdHasBeenSet = true; m_vulnerabilityId = value; }

    /**
     * <p>Details on the vulnerability ID used to filter findings.</p>
     */
    inline void SetVulnerabilityId(Aws::Vector<StringFilter>&& value) { m_vulnerabilityIdHasBeenSet = true; m_vulnerabilityId = std::move(value); }

    /**
     * <p>Details on the vulnerability ID used to filter findings.</p>
     */
    inline FilterCriteria& WithVulnerabilityId(const Aws::Vector<StringFilter>& value) { SetVulnerabilityId(value); return *this;}

    /**
     * <p>Details on the vulnerability ID used to filter findings.</p>
     */
    inline FilterCriteria& WithVulnerabilityId(Aws::Vector<StringFilter>&& value) { SetVulnerabilityId(std::move(value)); return *this;}

    /**
     * <p>Details on the vulnerability ID used to filter findings.</p>
     */
    inline FilterCriteria& AddVulnerabilityId(const StringFilter& value) { m_vulnerabilityIdHasBeenSet = true; m_vulnerabilityId.push_back(value); return *this; }

    /**
     * <p>Details on the vulnerability ID used to filter findings.</p>
     */
    inline FilterCriteria& AddVulnerabilityId(StringFilter&& value) { m_vulnerabilityIdHasBeenSet = true; m_vulnerabilityId.push_back(std::move(value)); return *this; }


    /**
     * <p>Details on the vulnerability type used to filter findings.</p>
     */
    inline const Aws::Vector<StringFilter>& GetVulnerabilitySource() const{ return m_vulnerabilitySource; }

    /**
     * <p>Details on the vulnerability type used to filter findings.</p>
     */
    inline bool VulnerabilitySourceHasBeenSet() const { return m_vulnerabilitySourceHasBeenSet; }

    /**
     * <p>Details on the vulnerability type used to filter findings.</p>
     */
    inline void SetVulnerabilitySource(const Aws::Vector<StringFilter>& value) { m_vulnerabilitySourceHasBeenSet = true; m_vulnerabilitySource = value; }

    /**
     * <p>Details on the vulnerability type used to filter findings.</p>
     */
    inline void SetVulnerabilitySource(Aws::Vector<StringFilter>&& value) { m_vulnerabilitySourceHasBeenSet = true; m_vulnerabilitySource = std::move(value); }

    /**
     * <p>Details on the vulnerability type used to filter findings.</p>
     */
    inline FilterCriteria& WithVulnerabilitySource(const Aws::Vector<StringFilter>& value) { SetVulnerabilitySource(value); return *this;}

    /**
     * <p>Details on the vulnerability type used to filter findings.</p>
     */
    inline FilterCriteria& WithVulnerabilitySource(Aws::Vector<StringFilter>&& value) { SetVulnerabilitySource(std::move(value)); return *this;}

    /**
     * <p>Details on the vulnerability type used to filter findings.</p>
     */
    inline FilterCriteria& AddVulnerabilitySource(const StringFilter& value) { m_vulnerabilitySourceHasBeenSet = true; m_vulnerabilitySource.push_back(value); return *this; }

    /**
     * <p>Details on the vulnerability type used to filter findings.</p>
     */
    inline FilterCriteria& AddVulnerabilitySource(StringFilter&& value) { m_vulnerabilitySourceHasBeenSet = true; m_vulnerabilitySource.push_back(std::move(value)); return *this; }


    /**
     * <p>Details on the vulnerable packages used to filter findings.</p>
     */
    inline const Aws::Vector<PackageFilter>& GetVulnerablePackages() const{ return m_vulnerablePackages; }

    /**
     * <p>Details on the vulnerable packages used to filter findings.</p>
     */
    inline bool VulnerablePackagesHasBeenSet() const { return m_vulnerablePackagesHasBeenSet; }

    /**
     * <p>Details on the vulnerable packages used to filter findings.</p>
     */
    inline void SetVulnerablePackages(const Aws::Vector<PackageFilter>& value) { m_vulnerablePackagesHasBeenSet = true; m_vulnerablePackages = value; }

    /**
     * <p>Details on the vulnerable packages used to filter findings.</p>
     */
    inline void SetVulnerablePackages(Aws::Vector<PackageFilter>&& value) { m_vulnerablePackagesHasBeenSet = true; m_vulnerablePackages = std::move(value); }

    /**
     * <p>Details on the vulnerable packages used to filter findings.</p>
     */
    inline FilterCriteria& WithVulnerablePackages(const Aws::Vector<PackageFilter>& value) { SetVulnerablePackages(value); return *this;}

    /**
     * <p>Details on the vulnerable packages used to filter findings.</p>
     */
    inline FilterCriteria& WithVulnerablePackages(Aws::Vector<PackageFilter>&& value) { SetVulnerablePackages(std::move(value)); return *this;}

    /**
     * <p>Details on the vulnerable packages used to filter findings.</p>
     */
    inline FilterCriteria& AddVulnerablePackages(const PackageFilter& value) { m_vulnerablePackagesHasBeenSet = true; m_vulnerablePackages.push_back(value); return *this; }

    /**
     * <p>Details on the vulnerable packages used to filter findings.</p>
     */
    inline FilterCriteria& AddVulnerablePackages(PackageFilter&& value) { m_vulnerablePackagesHasBeenSet = true; m_vulnerablePackages.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<StringFilter> m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_componentId;
    bool m_componentIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_componentType;
    bool m_componentTypeHasBeenSet = false;

    Aws::Vector<StringFilter> m_ec2InstanceImageId;
    bool m_ec2InstanceImageIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_ec2InstanceSubnetId;
    bool m_ec2InstanceSubnetIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_ec2InstanceVpcId;
    bool m_ec2InstanceVpcIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_ecrImageArchitecture;
    bool m_ecrImageArchitectureHasBeenSet = false;

    Aws::Vector<StringFilter> m_ecrImageHash;
    bool m_ecrImageHashHasBeenSet = false;

    Aws::Vector<DateFilter> m_ecrImagePushedAt;
    bool m_ecrImagePushedAtHasBeenSet = false;

    Aws::Vector<StringFilter> m_ecrImageRegistry;
    bool m_ecrImageRegistryHasBeenSet = false;

    Aws::Vector<StringFilter> m_ecrImageRepositoryName;
    bool m_ecrImageRepositoryNameHasBeenSet = false;

    Aws::Vector<StringFilter> m_ecrImageTags;
    bool m_ecrImageTagsHasBeenSet = false;

    Aws::Vector<StringFilter> m_exploitAvailable;
    bool m_exploitAvailableHasBeenSet = false;

    Aws::Vector<StringFilter> m_findingArn;
    bool m_findingArnHasBeenSet = false;

    Aws::Vector<StringFilter> m_findingStatus;
    bool m_findingStatusHasBeenSet = false;

    Aws::Vector<StringFilter> m_findingType;
    bool m_findingTypeHasBeenSet = false;

    Aws::Vector<DateFilter> m_firstObservedAt;
    bool m_firstObservedAtHasBeenSet = false;

    Aws::Vector<StringFilter> m_fixAvailable;
    bool m_fixAvailableHasBeenSet = false;

    Aws::Vector<NumberFilter> m_inspectorScore;
    bool m_inspectorScoreHasBeenSet = false;

    Aws::Vector<StringFilter> m_lambdaFunctionExecutionRoleArn;
    bool m_lambdaFunctionExecutionRoleArnHasBeenSet = false;

    Aws::Vector<DateFilter> m_lambdaFunctionLastModifiedAt;
    bool m_lambdaFunctionLastModifiedAtHasBeenSet = false;

    Aws::Vector<StringFilter> m_lambdaFunctionLayers;
    bool m_lambdaFunctionLayersHasBeenSet = false;

    Aws::Vector<StringFilter> m_lambdaFunctionName;
    bool m_lambdaFunctionNameHasBeenSet = false;

    Aws::Vector<StringFilter> m_lambdaFunctionRuntime;
    bool m_lambdaFunctionRuntimeHasBeenSet = false;

    Aws::Vector<DateFilter> m_lastObservedAt;
    bool m_lastObservedAtHasBeenSet = false;

    Aws::Vector<StringFilter> m_networkProtocol;
    bool m_networkProtocolHasBeenSet = false;

    Aws::Vector<PortRangeFilter> m_portRange;
    bool m_portRangeHasBeenSet = false;

    Aws::Vector<StringFilter> m_relatedVulnerabilities;
    bool m_relatedVulnerabilitiesHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<MapFilter> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<StringFilter> m_severity;
    bool m_severityHasBeenSet = false;

    Aws::Vector<StringFilter> m_title;
    bool m_titleHasBeenSet = false;

    Aws::Vector<DateFilter> m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<StringFilter> m_vendorSeverity;
    bool m_vendorSeverityHasBeenSet = false;

    Aws::Vector<StringFilter> m_vulnerabilityId;
    bool m_vulnerabilityIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_vulnerabilitySource;
    bool m_vulnerabilitySourceHasBeenSet = false;

    Aws::Vector<PackageFilter> m_vulnerablePackages;
    bool m_vulnerablePackagesHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
