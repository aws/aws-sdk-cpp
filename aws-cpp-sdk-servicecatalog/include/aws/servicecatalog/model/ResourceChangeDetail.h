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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ResourceTargetDefinition.h>
#include <aws/servicecatalog/model/EvaluationType.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a change to a resource attribute.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ResourceChangeDetail">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API ResourceChangeDetail
  {
  public:
    ResourceChangeDetail();
    ResourceChangeDetail(Aws::Utils::Json::JsonView jsonValue);
    ResourceChangeDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the resource attribute to be modified.</p>
     */
    inline const ResourceTargetDefinition& GetTarget() const{ return m_target; }

    /**
     * <p>Information about the resource attribute to be modified.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>Information about the resource attribute to be modified.</p>
     */
    inline void SetTarget(const ResourceTargetDefinition& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>Information about the resource attribute to be modified.</p>
     */
    inline void SetTarget(ResourceTargetDefinition&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>Information about the resource attribute to be modified.</p>
     */
    inline ResourceChangeDetail& WithTarget(const ResourceTargetDefinition& value) { SetTarget(value); return *this;}

    /**
     * <p>Information about the resource attribute to be modified.</p>
     */
    inline ResourceChangeDetail& WithTarget(ResourceTargetDefinition&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p>For static evaluations, the value of the resource attribute will change and
     * the new value is known. For dynamic evaluations, the value might change, and any
     * new value will be determined when the plan is updated.</p>
     */
    inline const EvaluationType& GetEvaluation() const{ return m_evaluation; }

    /**
     * <p>For static evaluations, the value of the resource attribute will change and
     * the new value is known. For dynamic evaluations, the value might change, and any
     * new value will be determined when the plan is updated.</p>
     */
    inline bool EvaluationHasBeenSet() const { return m_evaluationHasBeenSet; }

    /**
     * <p>For static evaluations, the value of the resource attribute will change and
     * the new value is known. For dynamic evaluations, the value might change, and any
     * new value will be determined when the plan is updated.</p>
     */
    inline void SetEvaluation(const EvaluationType& value) { m_evaluationHasBeenSet = true; m_evaluation = value; }

    /**
     * <p>For static evaluations, the value of the resource attribute will change and
     * the new value is known. For dynamic evaluations, the value might change, and any
     * new value will be determined when the plan is updated.</p>
     */
    inline void SetEvaluation(EvaluationType&& value) { m_evaluationHasBeenSet = true; m_evaluation = std::move(value); }

    /**
     * <p>For static evaluations, the value of the resource attribute will change and
     * the new value is known. For dynamic evaluations, the value might change, and any
     * new value will be determined when the plan is updated.</p>
     */
    inline ResourceChangeDetail& WithEvaluation(const EvaluationType& value) { SetEvaluation(value); return *this;}

    /**
     * <p>For static evaluations, the value of the resource attribute will change and
     * the new value is known. For dynamic evaluations, the value might change, and any
     * new value will be determined when the plan is updated.</p>
     */
    inline ResourceChangeDetail& WithEvaluation(EvaluationType&& value) { SetEvaluation(std::move(value)); return *this;}


    /**
     * <p>The ID of the entity that caused the change.</p>
     */
    inline const Aws::String& GetCausingEntity() const{ return m_causingEntity; }

    /**
     * <p>The ID of the entity that caused the change.</p>
     */
    inline bool CausingEntityHasBeenSet() const { return m_causingEntityHasBeenSet; }

    /**
     * <p>The ID of the entity that caused the change.</p>
     */
    inline void SetCausingEntity(const Aws::String& value) { m_causingEntityHasBeenSet = true; m_causingEntity = value; }

    /**
     * <p>The ID of the entity that caused the change.</p>
     */
    inline void SetCausingEntity(Aws::String&& value) { m_causingEntityHasBeenSet = true; m_causingEntity = std::move(value); }

    /**
     * <p>The ID of the entity that caused the change.</p>
     */
    inline void SetCausingEntity(const char* value) { m_causingEntityHasBeenSet = true; m_causingEntity.assign(value); }

    /**
     * <p>The ID of the entity that caused the change.</p>
     */
    inline ResourceChangeDetail& WithCausingEntity(const Aws::String& value) { SetCausingEntity(value); return *this;}

    /**
     * <p>The ID of the entity that caused the change.</p>
     */
    inline ResourceChangeDetail& WithCausingEntity(Aws::String&& value) { SetCausingEntity(std::move(value)); return *this;}

    /**
     * <p>The ID of the entity that caused the change.</p>
     */
    inline ResourceChangeDetail& WithCausingEntity(const char* value) { SetCausingEntity(value); return *this;}

  private:

    ResourceTargetDefinition m_target;
    bool m_targetHasBeenSet;

    EvaluationType m_evaluation;
    bool m_evaluationHasBeenSet;

    Aws::String m_causingEntity;
    bool m_causingEntityHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
