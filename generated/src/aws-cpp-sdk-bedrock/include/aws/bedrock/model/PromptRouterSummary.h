/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/RoutingCriteria.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/PromptRouterTargetModel.h>
#include <aws/bedrock/model/PromptRouterStatus.h>
#include <aws/bedrock/model/PromptRouterType.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Details about a prompt router.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/PromptRouterSummary">AWS
   * API Reference</a></p>
   */
  class PromptRouterSummary
  {
  public:
    AWS_BEDROCK_API PromptRouterSummary();
    AWS_BEDROCK_API PromptRouterSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API PromptRouterSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The router's name.</p>
     */
    inline const Aws::String& GetPromptRouterName() const{ return m_promptRouterName; }
    inline bool PromptRouterNameHasBeenSet() const { return m_promptRouterNameHasBeenSet; }
    inline void SetPromptRouterName(const Aws::String& value) { m_promptRouterNameHasBeenSet = true; m_promptRouterName = value; }
    inline void SetPromptRouterName(Aws::String&& value) { m_promptRouterNameHasBeenSet = true; m_promptRouterName = std::move(value); }
    inline void SetPromptRouterName(const char* value) { m_promptRouterNameHasBeenSet = true; m_promptRouterName.assign(value); }
    inline PromptRouterSummary& WithPromptRouterName(const Aws::String& value) { SetPromptRouterName(value); return *this;}
    inline PromptRouterSummary& WithPromptRouterName(Aws::String&& value) { SetPromptRouterName(std::move(value)); return *this;}
    inline PromptRouterSummary& WithPromptRouterName(const char* value) { SetPromptRouterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The router's routing criteria.</p>
     */
    inline const RoutingCriteria& GetRoutingCriteria() const{ return m_routingCriteria; }
    inline bool RoutingCriteriaHasBeenSet() const { return m_routingCriteriaHasBeenSet; }
    inline void SetRoutingCriteria(const RoutingCriteria& value) { m_routingCriteriaHasBeenSet = true; m_routingCriteria = value; }
    inline void SetRoutingCriteria(RoutingCriteria&& value) { m_routingCriteriaHasBeenSet = true; m_routingCriteria = std::move(value); }
    inline PromptRouterSummary& WithRoutingCriteria(const RoutingCriteria& value) { SetRoutingCriteria(value); return *this;}
    inline PromptRouterSummary& WithRoutingCriteria(RoutingCriteria&& value) { SetRoutingCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The router's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PromptRouterSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PromptRouterSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PromptRouterSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the router was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline PromptRouterSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline PromptRouterSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the router was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline PromptRouterSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline PromptRouterSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The router's ARN.</p>
     */
    inline const Aws::String& GetPromptRouterArn() const{ return m_promptRouterArn; }
    inline bool PromptRouterArnHasBeenSet() const { return m_promptRouterArnHasBeenSet; }
    inline void SetPromptRouterArn(const Aws::String& value) { m_promptRouterArnHasBeenSet = true; m_promptRouterArn = value; }
    inline void SetPromptRouterArn(Aws::String&& value) { m_promptRouterArnHasBeenSet = true; m_promptRouterArn = std::move(value); }
    inline void SetPromptRouterArn(const char* value) { m_promptRouterArnHasBeenSet = true; m_promptRouterArn.assign(value); }
    inline PromptRouterSummary& WithPromptRouterArn(const Aws::String& value) { SetPromptRouterArn(value); return *this;}
    inline PromptRouterSummary& WithPromptRouterArn(Aws::String&& value) { SetPromptRouterArn(std::move(value)); return *this;}
    inline PromptRouterSummary& WithPromptRouterArn(const char* value) { SetPromptRouterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The router's models.</p>
     */
    inline const Aws::Vector<PromptRouterTargetModel>& GetModels() const{ return m_models; }
    inline bool ModelsHasBeenSet() const { return m_modelsHasBeenSet; }
    inline void SetModels(const Aws::Vector<PromptRouterTargetModel>& value) { m_modelsHasBeenSet = true; m_models = value; }
    inline void SetModels(Aws::Vector<PromptRouterTargetModel>&& value) { m_modelsHasBeenSet = true; m_models = std::move(value); }
    inline PromptRouterSummary& WithModels(const Aws::Vector<PromptRouterTargetModel>& value) { SetModels(value); return *this;}
    inline PromptRouterSummary& WithModels(Aws::Vector<PromptRouterTargetModel>&& value) { SetModels(std::move(value)); return *this;}
    inline PromptRouterSummary& AddModels(const PromptRouterTargetModel& value) { m_modelsHasBeenSet = true; m_models.push_back(value); return *this; }
    inline PromptRouterSummary& AddModels(PromptRouterTargetModel&& value) { m_modelsHasBeenSet = true; m_models.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The router's fallback model.</p>
     */
    inline const PromptRouterTargetModel& GetFallbackModel() const{ return m_fallbackModel; }
    inline bool FallbackModelHasBeenSet() const { return m_fallbackModelHasBeenSet; }
    inline void SetFallbackModel(const PromptRouterTargetModel& value) { m_fallbackModelHasBeenSet = true; m_fallbackModel = value; }
    inline void SetFallbackModel(PromptRouterTargetModel&& value) { m_fallbackModelHasBeenSet = true; m_fallbackModel = std::move(value); }
    inline PromptRouterSummary& WithFallbackModel(const PromptRouterTargetModel& value) { SetFallbackModel(value); return *this;}
    inline PromptRouterSummary& WithFallbackModel(PromptRouterTargetModel&& value) { SetFallbackModel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The router's status.</p>
     */
    inline const PromptRouterStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const PromptRouterStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(PromptRouterStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline PromptRouterSummary& WithStatus(const PromptRouterStatus& value) { SetStatus(value); return *this;}
    inline PromptRouterSummary& WithStatus(PromptRouterStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary's type.</p>
     */
    inline const PromptRouterType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const PromptRouterType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(PromptRouterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline PromptRouterSummary& WithType(const PromptRouterType& value) { SetType(value); return *this;}
    inline PromptRouterSummary& WithType(PromptRouterType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_promptRouterName;
    bool m_promptRouterNameHasBeenSet = false;

    RoutingCriteria m_routingCriteria;
    bool m_routingCriteriaHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_promptRouterArn;
    bool m_promptRouterArnHasBeenSet = false;

    Aws::Vector<PromptRouterTargetModel> m_models;
    bool m_modelsHasBeenSet = false;

    PromptRouterTargetModel m_fallbackModel;
    bool m_fallbackModelHasBeenSet = false;

    PromptRouterStatus m_status;
    bool m_statusHasBeenSet = false;

    PromptRouterType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
