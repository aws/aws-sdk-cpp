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
#include <aws/ssm/model/InstanceAssociationOutputLocation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API UpdateAssociationRequest : public SSMRequest
  {
  public:
    UpdateAssociationRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the association you want to update. </p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The ID of the association you want to update. </p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The ID of the association you want to update. </p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The ID of the association you want to update. </p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The ID of the association you want to update. </p>
     */
    inline UpdateAssociationRequest& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The ID of the association you want to update. </p>
     */
    inline UpdateAssociationRequest& WithAssociationId(Aws::String&& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The ID of the association you want to update. </p>
     */
    inline UpdateAssociationRequest& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}

    /**
     * <p>The parameters you want to update for the association. If you create a
     * parameter using Parameter Store, you can reference the parameter using
     * {{ssm:parameter-name}}</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters you want to update for the association. If you create a
     * parameter using Parameter Store, you can reference the parameter using
     * {{ssm:parameter-name}}</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters you want to update for the association. If you create a
     * parameter using Parameter Store, you can reference the parameter using
     * {{ssm:parameter-name}}</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters you want to update for the association. If you create a
     * parameter using Parameter Store, you can reference the parameter using
     * {{ssm:parameter-name}}</p>
     */
    inline UpdateAssociationRequest& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters you want to update for the association. If you create a
     * parameter using Parameter Store, you can reference the parameter using
     * {{ssm:parameter-name}}</p>
     */
    inline UpdateAssociationRequest& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters you want to update for the association. If you create a
     * parameter using Parameter Store, you can reference the parameter using
     * {{ssm:parameter-name}}</p>
     */
    inline UpdateAssociationRequest& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The parameters you want to update for the association. If you create a
     * parameter using Parameter Store, you can reference the parameter using
     * {{ssm:parameter-name}}</p>
     */
    inline UpdateAssociationRequest& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The parameters you want to update for the association. If you create a
     * parameter using Parameter Store, you can reference the parameter using
     * {{ssm:parameter-name}}</p>
     */
    inline UpdateAssociationRequest& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The parameters you want to update for the association. If you create a
     * parameter using Parameter Store, you can reference the parameter using
     * {{ssm:parameter-name}}</p>
     */
    inline UpdateAssociationRequest& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The parameters you want to update for the association. If you create a
     * parameter using Parameter Store, you can reference the parameter using
     * {{ssm:parameter-name}}</p>
     */
    inline UpdateAssociationRequest& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The parameters you want to update for the association. If you create a
     * parameter using Parameter Store, you can reference the parameter using
     * {{ssm:parameter-name}}</p>
     */
    inline UpdateAssociationRequest& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The document version you want update for the association. </p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The document version you want update for the association. </p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The document version you want update for the association. </p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The document version you want update for the association. </p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The document version you want update for the association. </p>
     */
    inline UpdateAssociationRequest& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The document version you want update for the association. </p>
     */
    inline UpdateAssociationRequest& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The document version you want update for the association. </p>
     */
    inline UpdateAssociationRequest& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The cron expression used to schedule the association that you want to update.
     * Supported expressions are every half, 1, 2, 4, 8 or 12 hour(s); every specified
     * day and time of the week. For example: cron(0 0/30 * 1/1 * ? *) to run every
     * thirty minutes; cron(0 0 0/4 1/1 * ? *) to run every four hours; and cron(0 0 10
     * ? * SUN *) to run every Sunday at 10 a.m.</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>The cron expression used to schedule the association that you want to update.
     * Supported expressions are every half, 1, 2, 4, 8 or 12 hour(s); every specified
     * day and time of the week. For example: cron(0 0/30 * 1/1 * ? *) to run every
     * thirty minutes; cron(0 0 0/4 1/1 * ? *) to run every four hours; and cron(0 0 10
     * ? * SUN *) to run every Sunday at 10 a.m.</p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>The cron expression used to schedule the association that you want to update.
     * Supported expressions are every half, 1, 2, 4, 8 or 12 hour(s); every specified
     * day and time of the week. For example: cron(0 0/30 * 1/1 * ? *) to run every
     * thirty minutes; cron(0 0 0/4 1/1 * ? *) to run every four hours; and cron(0 0 10
     * ? * SUN *) to run every Sunday at 10 a.m.</p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>The cron expression used to schedule the association that you want to update.
     * Supported expressions are every half, 1, 2, 4, 8 or 12 hour(s); every specified
     * day and time of the week. For example: cron(0 0/30 * 1/1 * ? *) to run every
     * thirty minutes; cron(0 0 0/4 1/1 * ? *) to run every four hours; and cron(0 0 10
     * ? * SUN *) to run every Sunday at 10 a.m.</p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>The cron expression used to schedule the association that you want to update.
     * Supported expressions are every half, 1, 2, 4, 8 or 12 hour(s); every specified
     * day and time of the week. For example: cron(0 0/30 * 1/1 * ? *) to run every
     * thirty minutes; cron(0 0 0/4 1/1 * ? *) to run every four hours; and cron(0 0 10
     * ? * SUN *) to run every Sunday at 10 a.m.</p>
     */
    inline UpdateAssociationRequest& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>The cron expression used to schedule the association that you want to update.
     * Supported expressions are every half, 1, 2, 4, 8 or 12 hour(s); every specified
     * day and time of the week. For example: cron(0 0/30 * 1/1 * ? *) to run every
     * thirty minutes; cron(0 0 0/4 1/1 * ? *) to run every four hours; and cron(0 0 10
     * ? * SUN *) to run every Sunday at 10 a.m.</p>
     */
    inline UpdateAssociationRequest& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>The cron expression used to schedule the association that you want to update.
     * Supported expressions are every half, 1, 2, 4, 8 or 12 hour(s); every specified
     * day and time of the week. For example: cron(0 0/30 * 1/1 * ? *) to run every
     * thirty minutes; cron(0 0 0/4 1/1 * ? *) to run every four hours; and cron(0 0 10
     * ? * SUN *) to run every Sunday at 10 a.m.</p>
     */
    inline UpdateAssociationRequest& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>An Amazon S3 bucket where you want to store the results of this request.</p>
     * <p> <code>"{ \"S3Location\": { \"OutputS3Region\": \"&lt;region&gt;\",
     * \"OutputS3BucketName\": \"bucket name\", \"OutputS3KeyPrefix\": \"folder name\"
     * } }"</code> </p>
     */
    inline const InstanceAssociationOutputLocation& GetOutputLocation() const{ return m_outputLocation; }

    /**
     * <p>An Amazon S3 bucket where you want to store the results of this request.</p>
     * <p> <code>"{ \"S3Location\": { \"OutputS3Region\": \"&lt;region&gt;\",
     * \"OutputS3BucketName\": \"bucket name\", \"OutputS3KeyPrefix\": \"folder name\"
     * } }"</code> </p>
     */
    inline void SetOutputLocation(const InstanceAssociationOutputLocation& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }

    /**
     * <p>An Amazon S3 bucket where you want to store the results of this request.</p>
     * <p> <code>"{ \"S3Location\": { \"OutputS3Region\": \"&lt;region&gt;\",
     * \"OutputS3BucketName\": \"bucket name\", \"OutputS3KeyPrefix\": \"folder name\"
     * } }"</code> </p>
     */
    inline void SetOutputLocation(InstanceAssociationOutputLocation&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }

    /**
     * <p>An Amazon S3 bucket where you want to store the results of this request.</p>
     * <p> <code>"{ \"S3Location\": { \"OutputS3Region\": \"&lt;region&gt;\",
     * \"OutputS3BucketName\": \"bucket name\", \"OutputS3KeyPrefix\": \"folder name\"
     * } }"</code> </p>
     */
    inline UpdateAssociationRequest& WithOutputLocation(const InstanceAssociationOutputLocation& value) { SetOutputLocation(value); return *this;}

    /**
     * <p>An Amazon S3 bucket where you want to store the results of this request.</p>
     * <p> <code>"{ \"S3Location\": { \"OutputS3Region\": \"&lt;region&gt;\",
     * \"OutputS3BucketName\": \"bucket name\", \"OutputS3KeyPrefix\": \"folder name\"
     * } }"</code> </p>
     */
    inline UpdateAssociationRequest& WithOutputLocation(InstanceAssociationOutputLocation&& value) { SetOutputLocation(value); return *this;}

  private:
    Aws::String m_associationId;
    bool m_associationIdHasBeenSet;
    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet;
    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet;
    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet;
    InstanceAssociationOutputLocation m_outputLocation;
    bool m_outputLocationHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
