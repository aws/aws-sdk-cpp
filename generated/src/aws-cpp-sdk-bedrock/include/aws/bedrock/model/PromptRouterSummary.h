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
    AWS_BEDROCK_API PromptRouterSummary() = default;
    AWS_BEDROCK_API PromptRouterSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API PromptRouterSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The router's name.</p>
     */
    inline const Aws::String& GetPromptRouterName() const { return m_promptRouterName; }
    inline bool PromptRouterNameHasBeenSet() const { return m_promptRouterNameHasBeenSet; }
    template<typename PromptRouterNameT = Aws::String>
    void SetPromptRouterName(PromptRouterNameT&& value) { m_promptRouterNameHasBeenSet = true; m_promptRouterName = std::forward<PromptRouterNameT>(value); }
    template<typename PromptRouterNameT = Aws::String>
    PromptRouterSummary& WithPromptRouterName(PromptRouterNameT&& value) { SetPromptRouterName(std::forward<PromptRouterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The router's routing criteria.</p>
     */
    inline const RoutingCriteria& GetRoutingCriteria() const { return m_routingCriteria; }
    inline bool RoutingCriteriaHasBeenSet() const { return m_routingCriteriaHasBeenSet; }
    template<typename RoutingCriteriaT = RoutingCriteria>
    void SetRoutingCriteria(RoutingCriteriaT&& value) { m_routingCriteriaHasBeenSet = true; m_routingCriteria = std::forward<RoutingCriteriaT>(value); }
    template<typename RoutingCriteriaT = RoutingCriteria>
    PromptRouterSummary& WithRoutingCriteria(RoutingCriteriaT&& value) { SetRoutingCriteria(std::forward<RoutingCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The router's description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PromptRouterSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the router was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    PromptRouterSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the router was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    PromptRouterSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The router's ARN.</p>
     */
    inline const Aws::String& GetPromptRouterArn() const { return m_promptRouterArn; }
    inline bool PromptRouterArnHasBeenSet() const { return m_promptRouterArnHasBeenSet; }
    template<typename PromptRouterArnT = Aws::String>
    void SetPromptRouterArn(PromptRouterArnT&& value) { m_promptRouterArnHasBeenSet = true; m_promptRouterArn = std::forward<PromptRouterArnT>(value); }
    template<typename PromptRouterArnT = Aws::String>
    PromptRouterSummary& WithPromptRouterArn(PromptRouterArnT&& value) { SetPromptRouterArn(std::forward<PromptRouterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The router's models.</p>
     */
    inline const Aws::Vector<PromptRouterTargetModel>& GetModels() const { return m_models; }
    inline bool ModelsHasBeenSet() const { return m_modelsHasBeenSet; }
    template<typename ModelsT = Aws::Vector<PromptRouterTargetModel>>
    void SetModels(ModelsT&& value) { m_modelsHasBeenSet = true; m_models = std::forward<ModelsT>(value); }
    template<typename ModelsT = Aws::Vector<PromptRouterTargetModel>>
    PromptRouterSummary& WithModels(ModelsT&& value) { SetModels(std::forward<ModelsT>(value)); return *this;}
    template<typename ModelsT = PromptRouterTargetModel>
    PromptRouterSummary& AddModels(ModelsT&& value) { m_modelsHasBeenSet = true; m_models.emplace_back(std::forward<ModelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The router's fallback model.</p>
     */
    inline const PromptRouterTargetModel& GetFallbackModel() const { return m_fallbackModel; }
    inline bool FallbackModelHasBeenSet() const { return m_fallbackModelHasBeenSet; }
    template<typename FallbackModelT = PromptRouterTargetModel>
    void SetFallbackModel(FallbackModelT&& value) { m_fallbackModelHasBeenSet = true; m_fallbackModel = std::forward<FallbackModelT>(value); }
    template<typename FallbackModelT = PromptRouterTargetModel>
    PromptRouterSummary& WithFallbackModel(FallbackModelT&& value) { SetFallbackModel(std::forward<FallbackModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The router's status.</p>
     */
    inline PromptRouterStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PromptRouterStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline PromptRouterSummary& WithStatus(PromptRouterStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary's type.</p>
     */
    inline PromptRouterType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(PromptRouterType value) { m_typeHasBeenSet = true; m_type = value; }
    inline PromptRouterSummary& WithType(PromptRouterType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_promptRouterName;
    bool m_promptRouterNameHasBeenSet = false;

    RoutingCriteria m_routingCriteria;
    bool m_routingCriteriaHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_promptRouterArn;
    bool m_promptRouterArnHasBeenSet = false;

    Aws::Vector<PromptRouterTargetModel> m_models;
    bool m_modelsHasBeenSet = false;

    PromptRouterTargetModel m_fallbackModel;
    bool m_fallbackModelHasBeenSet = false;

    PromptRouterStatus m_status{PromptRouterStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    PromptRouterType m_type{PromptRouterType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
