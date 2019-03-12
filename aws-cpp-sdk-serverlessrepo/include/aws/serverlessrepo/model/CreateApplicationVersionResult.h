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

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/serverlessrepo/model/ParameterDefinition.h>
#include <aws/serverlessrepo/model/Capability.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServerlessApplicationRepository
{
namespace Model
{
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API CreateApplicationVersionResult
  {
  public:
    CreateApplicationVersionResult();
    CreateApplicationVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateApplicationVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline CreateApplicationVersionResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline CreateApplicationVersionResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline CreateApplicationVersionResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The date and time this resource was created.</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTime = value; }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline void SetCreationTime(const char* value) { m_creationTime.assign(value); }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline CreateApplicationVersionResult& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline CreateApplicationVersionResult& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline CreateApplicationVersionResult& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * <p>An array of parameter types supported by the application.</p>
     */
    inline const Aws::Vector<ParameterDefinition>& GetParameterDefinitions() const{ return m_parameterDefinitions; }

    /**
     * <p>An array of parameter types supported by the application.</p>
     */
    inline void SetParameterDefinitions(const Aws::Vector<ParameterDefinition>& value) { m_parameterDefinitions = value; }

    /**
     * <p>An array of parameter types supported by the application.</p>
     */
    inline void SetParameterDefinitions(Aws::Vector<ParameterDefinition>&& value) { m_parameterDefinitions = std::move(value); }

    /**
     * <p>An array of parameter types supported by the application.</p>
     */
    inline CreateApplicationVersionResult& WithParameterDefinitions(const Aws::Vector<ParameterDefinition>& value) { SetParameterDefinitions(value); return *this;}

    /**
     * <p>An array of parameter types supported by the application.</p>
     */
    inline CreateApplicationVersionResult& WithParameterDefinitions(Aws::Vector<ParameterDefinition>&& value) { SetParameterDefinitions(std::move(value)); return *this;}

    /**
     * <p>An array of parameter types supported by the application.</p>
     */
    inline CreateApplicationVersionResult& AddParameterDefinitions(const ParameterDefinition& value) { m_parameterDefinitions.push_back(value); return *this; }

    /**
     * <p>An array of parameter types supported by the application.</p>
     */
    inline CreateApplicationVersionResult& AddParameterDefinitions(ParameterDefinition&& value) { m_parameterDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of values that you must specify before you can deploy certain
     * applications.
 Some applications might include resources that can affect
     * permissions in your AWS
 account, for example, by creating new AWS Identity and
     * Access Management (IAM) users.
 For those applications, you must explicitly
     * acknowledge their capabilities by
 specifying this parameter.</p><p>The only
     * valid values are CAPABILITY_IAM, CAPABILITY_NAMED_IAM,

     * CAPABILITY_RESOURCE_POLICY, and CAPABILITY_AUTO_EXPAND.</p><p>The following
     * resources require you to specify CAPABILITY_IAM or
 CAPABILITY_NAMED_IAM:
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">AWS::IAM::Group</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">AWS::IAM::InstanceProfile</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-policy.html">AWS::IAM::Policy</a>,
     * and
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">AWS::IAM::Role</a>.

     * If the application contains IAM resources, you can specify either
     * CAPABILITY_IAM
 or CAPABILITY_NAMED_IAM. If the application contains IAM
     * resources
 with custom names, you must specify CAPABILITY_NAMED_IAM.</p><p>The
     * following resources require you to specify CAPABILITY_RESOURCE_POLICY:
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-lambda-permission.html">AWS::Lambda::Permission</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-policy.html">AWS::IAM:Policy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-applicationautoscaling-scalingpolicy.html">AWS::ApplicationAutoScaling::ScalingPolicy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-s3-policy.html">AWS::S3::BucketPolicy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-sqs-policy.html">AWS::SQS::QueuePolicy</a>,
     * and
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-sns-policy.html">AWS::SNS::TopicPolicy</a>.</p><p>Applications
     * that contain one or more nested applications require you to specify

     * CAPABILITY_AUTO_EXPAND.</p><p>If your application template contains any of the
     * above resources, we recommend that you review
 all permissions associated with
     * the application before deploying. If you don't specify
 this parameter for an
     * application that requires capabilities, the call will fail.</p>
     */
    inline const Aws::Vector<Capability>& GetRequiredCapabilities() const{ return m_requiredCapabilities; }

    /**
     * <p>A list of values that you must specify before you can deploy certain
     * applications.
 Some applications might include resources that can affect
     * permissions in your AWS
 account, for example, by creating new AWS Identity and
     * Access Management (IAM) users.
 For those applications, you must explicitly
     * acknowledge their capabilities by
 specifying this parameter.</p><p>The only
     * valid values are CAPABILITY_IAM, CAPABILITY_NAMED_IAM,

     * CAPABILITY_RESOURCE_POLICY, and CAPABILITY_AUTO_EXPAND.</p><p>The following
     * resources require you to specify CAPABILITY_IAM or
 CAPABILITY_NAMED_IAM:
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">AWS::IAM::Group</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">AWS::IAM::InstanceProfile</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-policy.html">AWS::IAM::Policy</a>,
     * and
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">AWS::IAM::Role</a>.

     * If the application contains IAM resources, you can specify either
     * CAPABILITY_IAM
 or CAPABILITY_NAMED_IAM. If the application contains IAM
     * resources
 with custom names, you must specify CAPABILITY_NAMED_IAM.</p><p>The
     * following resources require you to specify CAPABILITY_RESOURCE_POLICY:
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-lambda-permission.html">AWS::Lambda::Permission</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-policy.html">AWS::IAM:Policy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-applicationautoscaling-scalingpolicy.html">AWS::ApplicationAutoScaling::ScalingPolicy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-s3-policy.html">AWS::S3::BucketPolicy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-sqs-policy.html">AWS::SQS::QueuePolicy</a>,
     * and
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-sns-policy.html">AWS::SNS::TopicPolicy</a>.</p><p>Applications
     * that contain one or more nested applications require you to specify

     * CAPABILITY_AUTO_EXPAND.</p><p>If your application template contains any of the
     * above resources, we recommend that you review
 all permissions associated with
     * the application before deploying. If you don't specify
 this parameter for an
     * application that requires capabilities, the call will fail.</p>
     */
    inline void SetRequiredCapabilities(const Aws::Vector<Capability>& value) { m_requiredCapabilities = value; }

    /**
     * <p>A list of values that you must specify before you can deploy certain
     * applications.
 Some applications might include resources that can affect
     * permissions in your AWS
 account, for example, by creating new AWS Identity and
     * Access Management (IAM) users.
 For those applications, you must explicitly
     * acknowledge their capabilities by
 specifying this parameter.</p><p>The only
     * valid values are CAPABILITY_IAM, CAPABILITY_NAMED_IAM,

     * CAPABILITY_RESOURCE_POLICY, and CAPABILITY_AUTO_EXPAND.</p><p>The following
     * resources require you to specify CAPABILITY_IAM or
 CAPABILITY_NAMED_IAM:
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">AWS::IAM::Group</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">AWS::IAM::InstanceProfile</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-policy.html">AWS::IAM::Policy</a>,
     * and
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">AWS::IAM::Role</a>.

     * If the application contains IAM resources, you can specify either
     * CAPABILITY_IAM
 or CAPABILITY_NAMED_IAM. If the application contains IAM
     * resources
 with custom names, you must specify CAPABILITY_NAMED_IAM.</p><p>The
     * following resources require you to specify CAPABILITY_RESOURCE_POLICY:
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-lambda-permission.html">AWS::Lambda::Permission</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-policy.html">AWS::IAM:Policy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-applicationautoscaling-scalingpolicy.html">AWS::ApplicationAutoScaling::ScalingPolicy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-s3-policy.html">AWS::S3::BucketPolicy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-sqs-policy.html">AWS::SQS::QueuePolicy</a>,
     * and
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-sns-policy.html">AWS::SNS::TopicPolicy</a>.</p><p>Applications
     * that contain one or more nested applications require you to specify

     * CAPABILITY_AUTO_EXPAND.</p><p>If your application template contains any of the
     * above resources, we recommend that you review
 all permissions associated with
     * the application before deploying. If you don't specify
 this parameter for an
     * application that requires capabilities, the call will fail.</p>
     */
    inline void SetRequiredCapabilities(Aws::Vector<Capability>&& value) { m_requiredCapabilities = std::move(value); }

    /**
     * <p>A list of values that you must specify before you can deploy certain
     * applications.
 Some applications might include resources that can affect
     * permissions in your AWS
 account, for example, by creating new AWS Identity and
     * Access Management (IAM) users.
 For those applications, you must explicitly
     * acknowledge their capabilities by
 specifying this parameter.</p><p>The only
     * valid values are CAPABILITY_IAM, CAPABILITY_NAMED_IAM,

     * CAPABILITY_RESOURCE_POLICY, and CAPABILITY_AUTO_EXPAND.</p><p>The following
     * resources require you to specify CAPABILITY_IAM or
 CAPABILITY_NAMED_IAM:
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">AWS::IAM::Group</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">AWS::IAM::InstanceProfile</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-policy.html">AWS::IAM::Policy</a>,
     * and
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">AWS::IAM::Role</a>.

     * If the application contains IAM resources, you can specify either
     * CAPABILITY_IAM
 or CAPABILITY_NAMED_IAM. If the application contains IAM
     * resources
 with custom names, you must specify CAPABILITY_NAMED_IAM.</p><p>The
     * following resources require you to specify CAPABILITY_RESOURCE_POLICY:
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-lambda-permission.html">AWS::Lambda::Permission</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-policy.html">AWS::IAM:Policy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-applicationautoscaling-scalingpolicy.html">AWS::ApplicationAutoScaling::ScalingPolicy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-s3-policy.html">AWS::S3::BucketPolicy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-sqs-policy.html">AWS::SQS::QueuePolicy</a>,
     * and
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-sns-policy.html">AWS::SNS::TopicPolicy</a>.</p><p>Applications
     * that contain one or more nested applications require you to specify

     * CAPABILITY_AUTO_EXPAND.</p><p>If your application template contains any of the
     * above resources, we recommend that you review
 all permissions associated with
     * the application before deploying. If you don't specify
 this parameter for an
     * application that requires capabilities, the call will fail.</p>
     */
    inline CreateApplicationVersionResult& WithRequiredCapabilities(const Aws::Vector<Capability>& value) { SetRequiredCapabilities(value); return *this;}

    /**
     * <p>A list of values that you must specify before you can deploy certain
     * applications.
 Some applications might include resources that can affect
     * permissions in your AWS
 account, for example, by creating new AWS Identity and
     * Access Management (IAM) users.
 For those applications, you must explicitly
     * acknowledge their capabilities by
 specifying this parameter.</p><p>The only
     * valid values are CAPABILITY_IAM, CAPABILITY_NAMED_IAM,

     * CAPABILITY_RESOURCE_POLICY, and CAPABILITY_AUTO_EXPAND.</p><p>The following
     * resources require you to specify CAPABILITY_IAM or
 CAPABILITY_NAMED_IAM:
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">AWS::IAM::Group</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">AWS::IAM::InstanceProfile</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-policy.html">AWS::IAM::Policy</a>,
     * and
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">AWS::IAM::Role</a>.

     * If the application contains IAM resources, you can specify either
     * CAPABILITY_IAM
 or CAPABILITY_NAMED_IAM. If the application contains IAM
     * resources
 with custom names, you must specify CAPABILITY_NAMED_IAM.</p><p>The
     * following resources require you to specify CAPABILITY_RESOURCE_POLICY:
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-lambda-permission.html">AWS::Lambda::Permission</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-policy.html">AWS::IAM:Policy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-applicationautoscaling-scalingpolicy.html">AWS::ApplicationAutoScaling::ScalingPolicy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-s3-policy.html">AWS::S3::BucketPolicy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-sqs-policy.html">AWS::SQS::QueuePolicy</a>,
     * and
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-sns-policy.html">AWS::SNS::TopicPolicy</a>.</p><p>Applications
     * that contain one or more nested applications require you to specify

     * CAPABILITY_AUTO_EXPAND.</p><p>If your application template contains any of the
     * above resources, we recommend that you review
 all permissions associated with
     * the application before deploying. If you don't specify
 this parameter for an
     * application that requires capabilities, the call will fail.</p>
     */
    inline CreateApplicationVersionResult& WithRequiredCapabilities(Aws::Vector<Capability>&& value) { SetRequiredCapabilities(std::move(value)); return *this;}

    /**
     * <p>A list of values that you must specify before you can deploy certain
     * applications.
 Some applications might include resources that can affect
     * permissions in your AWS
 account, for example, by creating new AWS Identity and
     * Access Management (IAM) users.
 For those applications, you must explicitly
     * acknowledge their capabilities by
 specifying this parameter.</p><p>The only
     * valid values are CAPABILITY_IAM, CAPABILITY_NAMED_IAM,

     * CAPABILITY_RESOURCE_POLICY, and CAPABILITY_AUTO_EXPAND.</p><p>The following
     * resources require you to specify CAPABILITY_IAM or
 CAPABILITY_NAMED_IAM:
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">AWS::IAM::Group</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">AWS::IAM::InstanceProfile</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-policy.html">AWS::IAM::Policy</a>,
     * and
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">AWS::IAM::Role</a>.

     * If the application contains IAM resources, you can specify either
     * CAPABILITY_IAM
 or CAPABILITY_NAMED_IAM. If the application contains IAM
     * resources
 with custom names, you must specify CAPABILITY_NAMED_IAM.</p><p>The
     * following resources require you to specify CAPABILITY_RESOURCE_POLICY:
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-lambda-permission.html">AWS::Lambda::Permission</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-policy.html">AWS::IAM:Policy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-applicationautoscaling-scalingpolicy.html">AWS::ApplicationAutoScaling::ScalingPolicy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-s3-policy.html">AWS::S3::BucketPolicy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-sqs-policy.html">AWS::SQS::QueuePolicy</a>,
     * and
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-sns-policy.html">AWS::SNS::TopicPolicy</a>.</p><p>Applications
     * that contain one or more nested applications require you to specify

     * CAPABILITY_AUTO_EXPAND.</p><p>If your application template contains any of the
     * above resources, we recommend that you review
 all permissions associated with
     * the application before deploying. If you don't specify
 this parameter for an
     * application that requires capabilities, the call will fail.</p>
     */
    inline CreateApplicationVersionResult& AddRequiredCapabilities(const Capability& value) { m_requiredCapabilities.push_back(value); return *this; }

    /**
     * <p>A list of values that you must specify before you can deploy certain
     * applications.
 Some applications might include resources that can affect
     * permissions in your AWS
 account, for example, by creating new AWS Identity and
     * Access Management (IAM) users.
 For those applications, you must explicitly
     * acknowledge their capabilities by
 specifying this parameter.</p><p>The only
     * valid values are CAPABILITY_IAM, CAPABILITY_NAMED_IAM,

     * CAPABILITY_RESOURCE_POLICY, and CAPABILITY_AUTO_EXPAND.</p><p>The following
     * resources require you to specify CAPABILITY_IAM or
 CAPABILITY_NAMED_IAM:
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">AWS::IAM::Group</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">AWS::IAM::InstanceProfile</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-policy.html">AWS::IAM::Policy</a>,
     * and
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">AWS::IAM::Role</a>.

     * If the application contains IAM resources, you can specify either
     * CAPABILITY_IAM
 or CAPABILITY_NAMED_IAM. If the application contains IAM
     * resources
 with custom names, you must specify CAPABILITY_NAMED_IAM.</p><p>The
     * following resources require you to specify CAPABILITY_RESOURCE_POLICY:
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-lambda-permission.html">AWS::Lambda::Permission</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-policy.html">AWS::IAM:Policy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-applicationautoscaling-scalingpolicy.html">AWS::ApplicationAutoScaling::ScalingPolicy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-s3-policy.html">AWS::S3::BucketPolicy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-sqs-policy.html">AWS::SQS::QueuePolicy</a>,
     * and
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-sns-policy.html">AWS::SNS::TopicPolicy</a>.</p><p>Applications
     * that contain one or more nested applications require you to specify

     * CAPABILITY_AUTO_EXPAND.</p><p>If your application template contains any of the
     * above resources, we recommend that you review
 all permissions associated with
     * the application before deploying. If you don't specify
 this parameter for an
     * application that requires capabilities, the call will fail.</p>
     */
    inline CreateApplicationVersionResult& AddRequiredCapabilities(Capability&& value) { m_requiredCapabilities.push_back(std::move(value)); return *this; }


    /**
     * <p>Whether all of the AWS resources contained in this application are supported
     * in the region
 in which it is being retrieved.</p>
     */
    inline bool GetResourcesSupported() const{ return m_resourcesSupported; }

    /**
     * <p>Whether all of the AWS resources contained in this application are supported
     * in the region
 in which it is being retrieved.</p>
     */
    inline void SetResourcesSupported(bool value) { m_resourcesSupported = value; }

    /**
     * <p>Whether all of the AWS resources contained in this application are supported
     * in the region
 in which it is being retrieved.</p>
     */
    inline CreateApplicationVersionResult& WithResourcesSupported(bool value) { SetResourcesSupported(value); return *this;}


    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersion = value; }

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersion = std::move(value); }

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline void SetSemanticVersion(const char* value) { m_semanticVersion.assign(value); }

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline CreateApplicationVersionResult& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline CreateApplicationVersionResult& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline CreateApplicationVersionResult& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}


    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline const Aws::String& GetSourceCodeArchiveUrl() const{ return m_sourceCodeArchiveUrl; }

    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline void SetSourceCodeArchiveUrl(const Aws::String& value) { m_sourceCodeArchiveUrl = value; }

    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline void SetSourceCodeArchiveUrl(Aws::String&& value) { m_sourceCodeArchiveUrl = std::move(value); }

    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline void SetSourceCodeArchiveUrl(const char* value) { m_sourceCodeArchiveUrl.assign(value); }

    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline CreateApplicationVersionResult& WithSourceCodeArchiveUrl(const Aws::String& value) { SetSourceCodeArchiveUrl(value); return *this;}

    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline CreateApplicationVersionResult& WithSourceCodeArchiveUrl(Aws::String&& value) { SetSourceCodeArchiveUrl(std::move(value)); return *this;}

    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline CreateApplicationVersionResult& WithSourceCodeArchiveUrl(const char* value) { SetSourceCodeArchiveUrl(value); return *this;}


    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline const Aws::String& GetSourceCodeUrl() const{ return m_sourceCodeUrl; }

    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline void SetSourceCodeUrl(const Aws::String& value) { m_sourceCodeUrl = value; }

    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline void SetSourceCodeUrl(Aws::String&& value) { m_sourceCodeUrl = std::move(value); }

    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline void SetSourceCodeUrl(const char* value) { m_sourceCodeUrl.assign(value); }

    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline CreateApplicationVersionResult& WithSourceCodeUrl(const Aws::String& value) { SetSourceCodeUrl(value); return *this;}

    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline CreateApplicationVersionResult& WithSourceCodeUrl(Aws::String&& value) { SetSourceCodeUrl(std::move(value)); return *this;}

    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline CreateApplicationVersionResult& WithSourceCodeUrl(const char* value) { SetSourceCodeUrl(value); return *this;}


    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline const Aws::String& GetTemplateUrl() const{ return m_templateUrl; }

    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline void SetTemplateUrl(const Aws::String& value) { m_templateUrl = value; }

    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline void SetTemplateUrl(Aws::String&& value) { m_templateUrl = std::move(value); }

    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline void SetTemplateUrl(const char* value) { m_templateUrl.assign(value); }

    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline CreateApplicationVersionResult& WithTemplateUrl(const Aws::String& value) { SetTemplateUrl(value); return *this;}

    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline CreateApplicationVersionResult& WithTemplateUrl(Aws::String&& value) { SetTemplateUrl(std::move(value)); return *this;}

    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline CreateApplicationVersionResult& WithTemplateUrl(const char* value) { SetTemplateUrl(value); return *this;}

  private:

    Aws::String m_applicationId;

    Aws::String m_creationTime;

    Aws::Vector<ParameterDefinition> m_parameterDefinitions;

    Aws::Vector<Capability> m_requiredCapabilities;

    bool m_resourcesSupported;

    Aws::String m_semanticVersion;

    Aws::String m_sourceCodeArchiveUrl;

    Aws::String m_sourceCodeUrl;

    Aws::String m_templateUrl;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
