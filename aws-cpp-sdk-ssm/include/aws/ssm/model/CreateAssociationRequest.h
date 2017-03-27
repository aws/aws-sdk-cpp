/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/InstanceAssociationOutputLocation.h>
#include <aws/ssm/model/Target.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API CreateAssociationRequest : public SSMRequest
  {
  public:
    CreateAssociationRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline CreateAssociationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline CreateAssociationRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline CreateAssociationRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The document version you want to associate with the target(s). Can be a
     * specific version or the default version.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The document version you want to associate with the target(s). Can be a
     * specific version or the default version.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The document version you want to associate with the target(s). Can be a
     * specific version or the default version.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The document version you want to associate with the target(s). Can be a
     * specific version or the default version.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The document version you want to associate with the target(s). Can be a
     * specific version or the default version.</p>
     */
    inline CreateAssociationRequest& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The document version you want to associate with the target(s). Can be a
     * specific version or the default version.</p>
     */
    inline CreateAssociationRequest& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The document version you want to associate with the target(s). Can be a
     * specific version or the default version.</p>
     */
    inline CreateAssociationRequest& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline CreateAssociationRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline CreateAssociationRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline CreateAssociationRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The parameters for the documents runtime configuration. </p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters for the documents runtime configuration. </p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters for the documents runtime configuration. </p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters for the documents runtime configuration. </p>
     */
    inline CreateAssociationRequest& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters for the documents runtime configuration. </p>
     */
    inline CreateAssociationRequest& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters for the documents runtime configuration. </p>
     */
    inline CreateAssociationRequest& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The parameters for the documents runtime configuration. </p>
     */
    inline CreateAssociationRequest& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The parameters for the documents runtime configuration. </p>
     */
    inline CreateAssociationRequest& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The parameters for the documents runtime configuration. </p>
     */
    inline CreateAssociationRequest& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The parameters for the documents runtime configuration. </p>
     */
    inline CreateAssociationRequest& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The parameters for the documents runtime configuration. </p>
     */
    inline CreateAssociationRequest& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The targets (either instances or tags) for the association. Instances are
     * specified using Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;.
     * Tags are specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets (either instances or tags) for the association. Instances are
     * specified using Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;.
     * Tags are specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets (either instances or tags) for the association. Instances are
     * specified using Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;.
     * Tags are specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets (either instances or tags) for the association. Instances are
     * specified using Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;.
     * Tags are specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline CreateAssociationRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets (either instances or tags) for the association. Instances are
     * specified using Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;.
     * Tags are specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline CreateAssociationRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets (either instances or tags) for the association. Instances are
     * specified using Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;.
     * Tags are specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline CreateAssociationRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The targets (either instances or tags) for the association. Instances are
     * specified using Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;.
     * Tags are specified using Key=&lt;tag name&gt;,Values=&lt;tag value&gt;.</p>
     */
    inline CreateAssociationRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>A cron expression when the association will be applied to the target(s).
     * Supported expressions are every half, 1, 2, 4, 8 or 12 hour(s); every specified
     * day and time of the week. For example: cron(0 0/30 * 1/1 * ? *) to run every
     * thirty minutes; cron(0 0 0/4 1/1 * ? *) to run every four hours; and cron(0 0 10
     * ? * SUN *) to run every Sunday at 10 a.m.</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>A cron expression when the association will be applied to the target(s).
     * Supported expressions are every half, 1, 2, 4, 8 or 12 hour(s); every specified
     * day and time of the week. For example: cron(0 0/30 * 1/1 * ? *) to run every
     * thirty minutes; cron(0 0 0/4 1/1 * ? *) to run every four hours; and cron(0 0 10
     * ? * SUN *) to run every Sunday at 10 a.m.</p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>A cron expression when the association will be applied to the target(s).
     * Supported expressions are every half, 1, 2, 4, 8 or 12 hour(s); every specified
     * day and time of the week. For example: cron(0 0/30 * 1/1 * ? *) to run every
     * thirty minutes; cron(0 0 0/4 1/1 * ? *) to run every four hours; and cron(0 0 10
     * ? * SUN *) to run every Sunday at 10 a.m.</p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>A cron expression when the association will be applied to the target(s).
     * Supported expressions are every half, 1, 2, 4, 8 or 12 hour(s); every specified
     * day and time of the week. For example: cron(0 0/30 * 1/1 * ? *) to run every
     * thirty minutes; cron(0 0 0/4 1/1 * ? *) to run every four hours; and cron(0 0 10
     * ? * SUN *) to run every Sunday at 10 a.m.</p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>A cron expression when the association will be applied to the target(s).
     * Supported expressions are every half, 1, 2, 4, 8 or 12 hour(s); every specified
     * day and time of the week. For example: cron(0 0/30 * 1/1 * ? *) to run every
     * thirty minutes; cron(0 0 0/4 1/1 * ? *) to run every four hours; and cron(0 0 10
     * ? * SUN *) to run every Sunday at 10 a.m.</p>
     */
    inline CreateAssociationRequest& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>A cron expression when the association will be applied to the target(s).
     * Supported expressions are every half, 1, 2, 4, 8 or 12 hour(s); every specified
     * day and time of the week. For example: cron(0 0/30 * 1/1 * ? *) to run every
     * thirty minutes; cron(0 0 0/4 1/1 * ? *) to run every four hours; and cron(0 0 10
     * ? * SUN *) to run every Sunday at 10 a.m.</p>
     */
    inline CreateAssociationRequest& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>A cron expression when the association will be applied to the target(s).
     * Supported expressions are every half, 1, 2, 4, 8 or 12 hour(s); every specified
     * day and time of the week. For example: cron(0 0/30 * 1/1 * ? *) to run every
     * thirty minutes; cron(0 0 0/4 1/1 * ? *) to run every four hours; and cron(0 0 10
     * ? * SUN *) to run every Sunday at 10 a.m.</p>
     */
    inline CreateAssociationRequest& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>An Amazon S3 bucket where you want to store the output details of the
     * request. For example:</p> <p> <code>"{ \"S3Location\": { \"OutputS3Region\":
     * \"&lt;region&gt;\", \"OutputS3BucketName\": \"bucket name\",
     * \"OutputS3KeyPrefix\": \"folder name\" } }"</code> </p>
     */
    inline const InstanceAssociationOutputLocation& GetOutputLocation() const{ return m_outputLocation; }

    /**
     * <p>An Amazon S3 bucket where you want to store the output details of the
     * request. For example:</p> <p> <code>"{ \"S3Location\": { \"OutputS3Region\":
     * \"&lt;region&gt;\", \"OutputS3BucketName\": \"bucket name\",
     * \"OutputS3KeyPrefix\": \"folder name\" } }"</code> </p>
     */
    inline void SetOutputLocation(const InstanceAssociationOutputLocation& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }

    /**
     * <p>An Amazon S3 bucket where you want to store the output details of the
     * request. For example:</p> <p> <code>"{ \"S3Location\": { \"OutputS3Region\":
     * \"&lt;region&gt;\", \"OutputS3BucketName\": \"bucket name\",
     * \"OutputS3KeyPrefix\": \"folder name\" } }"</code> </p>
     */
    inline void SetOutputLocation(InstanceAssociationOutputLocation&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }

    /**
     * <p>An Amazon S3 bucket where you want to store the output details of the
     * request. For example:</p> <p> <code>"{ \"S3Location\": { \"OutputS3Region\":
     * \"&lt;region&gt;\", \"OutputS3BucketName\": \"bucket name\",
     * \"OutputS3KeyPrefix\": \"folder name\" } }"</code> </p>
     */
    inline CreateAssociationRequest& WithOutputLocation(const InstanceAssociationOutputLocation& value) { SetOutputLocation(value); return *this;}

    /**
     * <p>An Amazon S3 bucket where you want to store the output details of the
     * request. For example:</p> <p> <code>"{ \"S3Location\": { \"OutputS3Region\":
     * \"&lt;region&gt;\", \"OutputS3BucketName\": \"bucket name\",
     * \"OutputS3KeyPrefix\": \"folder name\" } }"</code> </p>
     */
    inline CreateAssociationRequest& WithOutputLocation(InstanceAssociationOutputLocation&& value) { SetOutputLocation(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet;
    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet;
    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet;
    InstanceAssociationOutputLocation m_outputLocation;
    bool m_outputLocationHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
