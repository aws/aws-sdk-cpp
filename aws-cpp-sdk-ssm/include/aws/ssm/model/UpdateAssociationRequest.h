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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/InstanceAssociationOutputLocation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/Target.h>
#include <utility>

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
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAssociation"; }

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
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

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
    inline UpdateAssociationRequest& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

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
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

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
    inline UpdateAssociationRequest& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters you want to update for the association. If you create a
     * parameter using Parameter Store, you can reference the parameter using
     * {{ssm:parameter-name}}</p>
     */
    inline UpdateAssociationRequest& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The parameters you want to update for the association. If you create a
     * parameter using Parameter Store, you can reference the parameter using
     * {{ssm:parameter-name}}</p>
     */
    inline UpdateAssociationRequest& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters you want to update for the association. If you create a
     * parameter using Parameter Store, you can reference the parameter using
     * {{ssm:parameter-name}}</p>
     */
    inline UpdateAssociationRequest& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters you want to update for the association. If you create a
     * parameter using Parameter Store, you can reference the parameter using
     * {{ssm:parameter-name}}</p>
     */
    inline UpdateAssociationRequest& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parameters you want to update for the association. If you create a
     * parameter using Parameter Store, you can reference the parameter using
     * {{ssm:parameter-name}}</p>
     */
    inline UpdateAssociationRequest& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters you want to update for the association. If you create a
     * parameter using Parameter Store, you can reference the parameter using
     * {{ssm:parameter-name}}</p>
     */
    inline UpdateAssociationRequest& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


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
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

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
    inline UpdateAssociationRequest& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The document version you want update for the association. </p>
     */
    inline UpdateAssociationRequest& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>The cron expression used to schedule the association that you want to
     * update.</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>The cron expression used to schedule the association that you want to
     * update.</p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>The cron expression used to schedule the association that you want to
     * update.</p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <p>The cron expression used to schedule the association that you want to
     * update.</p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>The cron expression used to schedule the association that you want to
     * update.</p>
     */
    inline UpdateAssociationRequest& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>The cron expression used to schedule the association that you want to
     * update.</p>
     */
    inline UpdateAssociationRequest& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>The cron expression used to schedule the association that you want to
     * update.</p>
     */
    inline UpdateAssociationRequest& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}


    /**
     * <p>An Amazon S3 bucket where you want to store the results of this request.</p>
     */
    inline const InstanceAssociationOutputLocation& GetOutputLocation() const{ return m_outputLocation; }

    /**
     * <p>An Amazon S3 bucket where you want to store the results of this request.</p>
     */
    inline void SetOutputLocation(const InstanceAssociationOutputLocation& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }

    /**
     * <p>An Amazon S3 bucket where you want to store the results of this request.</p>
     */
    inline void SetOutputLocation(InstanceAssociationOutputLocation&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }

    /**
     * <p>An Amazon S3 bucket where you want to store the results of this request.</p>
     */
    inline UpdateAssociationRequest& WithOutputLocation(const InstanceAssociationOutputLocation& value) { SetOutputLocation(value); return *this;}

    /**
     * <p>An Amazon S3 bucket where you want to store the results of this request.</p>
     */
    inline UpdateAssociationRequest& WithOutputLocation(InstanceAssociationOutputLocation&& value) { SetOutputLocation(std::move(value)); return *this;}


    /**
     * <p>The name of the association document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the association document.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the association document.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the association document.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the association document.</p>
     */
    inline UpdateAssociationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the association document.</p>
     */
    inline UpdateAssociationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the association document.</p>
     */
    inline UpdateAssociationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The targets of the association.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets of the association.</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets of the association.</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The targets of the association.</p>
     */
    inline UpdateAssociationRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets of the association.</p>
     */
    inline UpdateAssociationRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The targets of the association.</p>
     */
    inline UpdateAssociationRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The targets of the association.</p>
     */
    inline UpdateAssociationRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the association that you want to update.</p>
     */
    inline const Aws::String& GetAssociationName() const{ return m_associationName; }

    /**
     * <p>The name of the association that you want to update.</p>
     */
    inline void SetAssociationName(const Aws::String& value) { m_associationNameHasBeenSet = true; m_associationName = value; }

    /**
     * <p>The name of the association that you want to update.</p>
     */
    inline void SetAssociationName(Aws::String&& value) { m_associationNameHasBeenSet = true; m_associationName = std::move(value); }

    /**
     * <p>The name of the association that you want to update.</p>
     */
    inline void SetAssociationName(const char* value) { m_associationNameHasBeenSet = true; m_associationName.assign(value); }

    /**
     * <p>The name of the association that you want to update.</p>
     */
    inline UpdateAssociationRequest& WithAssociationName(const Aws::String& value) { SetAssociationName(value); return *this;}

    /**
     * <p>The name of the association that you want to update.</p>
     */
    inline UpdateAssociationRequest& WithAssociationName(Aws::String&& value) { SetAssociationName(std::move(value)); return *this;}

    /**
     * <p>The name of the association that you want to update.</p>
     */
    inline UpdateAssociationRequest& WithAssociationName(const char* value) { SetAssociationName(value); return *this;}


    /**
     * <p>This parameter is provided for concurrency control purposes. You must specify
     * the latest association version in the service. If you want to ensure that this
     * request succeeds, either specify <code>$LATEST</code>, or omit this
     * parameter.</p>
     */
    inline const Aws::String& GetAssociationVersion() const{ return m_associationVersion; }

    /**
     * <p>This parameter is provided for concurrency control purposes. You must specify
     * the latest association version in the service. If you want to ensure that this
     * request succeeds, either specify <code>$LATEST</code>, or omit this
     * parameter.</p>
     */
    inline void SetAssociationVersion(const Aws::String& value) { m_associationVersionHasBeenSet = true; m_associationVersion = value; }

    /**
     * <p>This parameter is provided for concurrency control purposes. You must specify
     * the latest association version in the service. If you want to ensure that this
     * request succeeds, either specify <code>$LATEST</code>, or omit this
     * parameter.</p>
     */
    inline void SetAssociationVersion(Aws::String&& value) { m_associationVersionHasBeenSet = true; m_associationVersion = std::move(value); }

    /**
     * <p>This parameter is provided for concurrency control purposes. You must specify
     * the latest association version in the service. If you want to ensure that this
     * request succeeds, either specify <code>$LATEST</code>, or omit this
     * parameter.</p>
     */
    inline void SetAssociationVersion(const char* value) { m_associationVersionHasBeenSet = true; m_associationVersion.assign(value); }

    /**
     * <p>This parameter is provided for concurrency control purposes. You must specify
     * the latest association version in the service. If you want to ensure that this
     * request succeeds, either specify <code>$LATEST</code>, or omit this
     * parameter.</p>
     */
    inline UpdateAssociationRequest& WithAssociationVersion(const Aws::String& value) { SetAssociationVersion(value); return *this;}

    /**
     * <p>This parameter is provided for concurrency control purposes. You must specify
     * the latest association version in the service. If you want to ensure that this
     * request succeeds, either specify <code>$LATEST</code>, or omit this
     * parameter.</p>
     */
    inline UpdateAssociationRequest& WithAssociationVersion(Aws::String&& value) { SetAssociationVersion(std::move(value)); return *this;}

    /**
     * <p>This parameter is provided for concurrency control purposes. You must specify
     * the latest association version in the service. If you want to ensure that this
     * request succeeds, either specify <code>$LATEST</code>, or omit this
     * parameter.</p>
     */
    inline UpdateAssociationRequest& WithAssociationVersion(const char* value) { SetAssociationVersion(value); return *this;}

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

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet;

    Aws::String m_associationName;
    bool m_associationNameHasBeenSet;

    Aws::String m_associationVersion;
    bool m_associationVersionHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
