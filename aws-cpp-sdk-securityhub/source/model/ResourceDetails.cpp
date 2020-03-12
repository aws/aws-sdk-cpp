/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/securityhub/model/ResourceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

ResourceDetails::ResourceDetails() : 
    m_awsCodeBuildProjectHasBeenSet(false),
    m_awsCloudFrontDistributionHasBeenSet(false),
    m_awsEc2InstanceHasBeenSet(false),
    m_awsEc2NetworkInterfaceHasBeenSet(false),
    m_awsEc2SecurityGroupHasBeenSet(false),
    m_awsElbv2LoadBalancerHasBeenSet(false),
    m_awsElasticsearchDomainHasBeenSet(false),
    m_awsS3BucketHasBeenSet(false),
    m_awsS3ObjectHasBeenSet(false),
    m_awsIamAccessKeyHasBeenSet(false),
    m_awsIamRoleHasBeenSet(false),
    m_awsKmsKeyHasBeenSet(false),
    m_awsLambdaFunctionHasBeenSet(false),
    m_awsLambdaLayerVersionHasBeenSet(false),
    m_awsRdsDbInstanceHasBeenSet(false),
    m_awsSnsTopicHasBeenSet(false),
    m_awsSqsQueueHasBeenSet(false),
    m_awsWafWebAclHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_otherHasBeenSet(false)
{
}

ResourceDetails::ResourceDetails(JsonView jsonValue) : 
    m_awsCodeBuildProjectHasBeenSet(false),
    m_awsCloudFrontDistributionHasBeenSet(false),
    m_awsEc2InstanceHasBeenSet(false),
    m_awsEc2NetworkInterfaceHasBeenSet(false),
    m_awsEc2SecurityGroupHasBeenSet(false),
    m_awsElbv2LoadBalancerHasBeenSet(false),
    m_awsElasticsearchDomainHasBeenSet(false),
    m_awsS3BucketHasBeenSet(false),
    m_awsS3ObjectHasBeenSet(false),
    m_awsIamAccessKeyHasBeenSet(false),
    m_awsIamRoleHasBeenSet(false),
    m_awsKmsKeyHasBeenSet(false),
    m_awsLambdaFunctionHasBeenSet(false),
    m_awsLambdaLayerVersionHasBeenSet(false),
    m_awsRdsDbInstanceHasBeenSet(false),
    m_awsSnsTopicHasBeenSet(false),
    m_awsSqsQueueHasBeenSet(false),
    m_awsWafWebAclHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_otherHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDetails& ResourceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AwsCodeBuildProject"))
  {
    m_awsCodeBuildProject = jsonValue.GetObject("AwsCodeBuildProject");

    m_awsCodeBuildProjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsCloudFrontDistribution"))
  {
    m_awsCloudFrontDistribution = jsonValue.GetObject("AwsCloudFrontDistribution");

    m_awsCloudFrontDistributionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEc2Instance"))
  {
    m_awsEc2Instance = jsonValue.GetObject("AwsEc2Instance");

    m_awsEc2InstanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEc2NetworkInterface"))
  {
    m_awsEc2NetworkInterface = jsonValue.GetObject("AwsEc2NetworkInterface");

    m_awsEc2NetworkInterfaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEc2SecurityGroup"))
  {
    m_awsEc2SecurityGroup = jsonValue.GetObject("AwsEc2SecurityGroup");

    m_awsEc2SecurityGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsElbv2LoadBalancer"))
  {
    m_awsElbv2LoadBalancer = jsonValue.GetObject("AwsElbv2LoadBalancer");

    m_awsElbv2LoadBalancerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsElasticsearchDomain"))
  {
    m_awsElasticsearchDomain = jsonValue.GetObject("AwsElasticsearchDomain");

    m_awsElasticsearchDomainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsS3Bucket"))
  {
    m_awsS3Bucket = jsonValue.GetObject("AwsS3Bucket");

    m_awsS3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsS3Object"))
  {
    m_awsS3Object = jsonValue.GetObject("AwsS3Object");

    m_awsS3ObjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsIamAccessKey"))
  {
    m_awsIamAccessKey = jsonValue.GetObject("AwsIamAccessKey");

    m_awsIamAccessKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsIamRole"))
  {
    m_awsIamRole = jsonValue.GetObject("AwsIamRole");

    m_awsIamRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsKmsKey"))
  {
    m_awsKmsKey = jsonValue.GetObject("AwsKmsKey");

    m_awsKmsKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsLambdaFunction"))
  {
    m_awsLambdaFunction = jsonValue.GetObject("AwsLambdaFunction");

    m_awsLambdaFunctionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsLambdaLayerVersion"))
  {
    m_awsLambdaLayerVersion = jsonValue.GetObject("AwsLambdaLayerVersion");

    m_awsLambdaLayerVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsRdsDbInstance"))
  {
    m_awsRdsDbInstance = jsonValue.GetObject("AwsRdsDbInstance");

    m_awsRdsDbInstanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsSnsTopic"))
  {
    m_awsSnsTopic = jsonValue.GetObject("AwsSnsTopic");

    m_awsSnsTopicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsSqsQueue"))
  {
    m_awsSqsQueue = jsonValue.GetObject("AwsSqsQueue");

    m_awsSqsQueueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsWafWebAcl"))
  {
    m_awsWafWebAcl = jsonValue.GetObject("AwsWafWebAcl");

    m_awsWafWebAclHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Container"))
  {
    m_container = jsonValue.GetObject("Container");

    m_containerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Other"))
  {
    Aws::Map<Aws::String, JsonView> otherJsonMap = jsonValue.GetObject("Other").GetAllObjects();
    for(auto& otherItem : otherJsonMap)
    {
      m_other[otherItem.first] = otherItem.second.AsString();
    }
    m_otherHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_awsCodeBuildProjectHasBeenSet)
  {
   payload.WithObject("AwsCodeBuildProject", m_awsCodeBuildProject.Jsonize());

  }

  if(m_awsCloudFrontDistributionHasBeenSet)
  {
   payload.WithObject("AwsCloudFrontDistribution", m_awsCloudFrontDistribution.Jsonize());

  }

  if(m_awsEc2InstanceHasBeenSet)
  {
   payload.WithObject("AwsEc2Instance", m_awsEc2Instance.Jsonize());

  }

  if(m_awsEc2NetworkInterfaceHasBeenSet)
  {
   payload.WithObject("AwsEc2NetworkInterface", m_awsEc2NetworkInterface.Jsonize());

  }

  if(m_awsEc2SecurityGroupHasBeenSet)
  {
   payload.WithObject("AwsEc2SecurityGroup", m_awsEc2SecurityGroup.Jsonize());

  }

  if(m_awsElbv2LoadBalancerHasBeenSet)
  {
   payload.WithObject("AwsElbv2LoadBalancer", m_awsElbv2LoadBalancer.Jsonize());

  }

  if(m_awsElasticsearchDomainHasBeenSet)
  {
   payload.WithObject("AwsElasticsearchDomain", m_awsElasticsearchDomain.Jsonize());

  }

  if(m_awsS3BucketHasBeenSet)
  {
   payload.WithObject("AwsS3Bucket", m_awsS3Bucket.Jsonize());

  }

  if(m_awsS3ObjectHasBeenSet)
  {
   payload.WithObject("AwsS3Object", m_awsS3Object.Jsonize());

  }

  if(m_awsIamAccessKeyHasBeenSet)
  {
   payload.WithObject("AwsIamAccessKey", m_awsIamAccessKey.Jsonize());

  }

  if(m_awsIamRoleHasBeenSet)
  {
   payload.WithObject("AwsIamRole", m_awsIamRole.Jsonize());

  }

  if(m_awsKmsKeyHasBeenSet)
  {
   payload.WithObject("AwsKmsKey", m_awsKmsKey.Jsonize());

  }

  if(m_awsLambdaFunctionHasBeenSet)
  {
   payload.WithObject("AwsLambdaFunction", m_awsLambdaFunction.Jsonize());

  }

  if(m_awsLambdaLayerVersionHasBeenSet)
  {
   payload.WithObject("AwsLambdaLayerVersion", m_awsLambdaLayerVersion.Jsonize());

  }

  if(m_awsRdsDbInstanceHasBeenSet)
  {
   payload.WithObject("AwsRdsDbInstance", m_awsRdsDbInstance.Jsonize());

  }

  if(m_awsSnsTopicHasBeenSet)
  {
   payload.WithObject("AwsSnsTopic", m_awsSnsTopic.Jsonize());

  }

  if(m_awsSqsQueueHasBeenSet)
  {
   payload.WithObject("AwsSqsQueue", m_awsSqsQueue.Jsonize());

  }

  if(m_awsWafWebAclHasBeenSet)
  {
   payload.WithObject("AwsWafWebAcl", m_awsWafWebAcl.Jsonize());

  }

  if(m_containerHasBeenSet)
  {
   payload.WithObject("Container", m_container.Jsonize());

  }

  if(m_otherHasBeenSet)
  {
   JsonValue otherJsonMap;
   for(auto& otherItem : m_other)
   {
     otherJsonMap.WithString(otherItem.first, otherItem.second);
   }
   payload.WithObject("Other", std::move(otherJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
