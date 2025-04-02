/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/application-signals/model/DependencyConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/application-signals/model/EvaluationType.h>
#include <aws/application-signals/model/MetricSourceType.h>
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
namespace ApplicationSignals
{
namespace Model
{

  /**
   * <p>A structure that contains information about one service level objective (SLO)
   * created in Application Signals.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ServiceLevelObjectiveSummary">AWS
   * API Reference</a></p>
   */
  class ServiceLevelObjectiveSummary
  {
  public:
    AWS_APPLICATIONSIGNALS_API ServiceLevelObjectiveSummary() = default;
    AWS_APPLICATIONSIGNALS_API ServiceLevelObjectiveSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API ServiceLevelObjectiveSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of this service level objective.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ServiceLevelObjectiveSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service level objective.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ServiceLevelObjectiveSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a string-to-string map. It can include the following fields.</p> <ul>
     * <li> <p> <code>Type</code> designates the type of object this service level
     * objective is for.</p> </li> <li> <p> <code>ResourceType</code> specifies the
     * type of the resource. This field is used only when the value of the
     * <code>Type</code> field is <code>Resource</code> or
     * <code>AWS::Resource</code>.</p> </li> <li> <p> <code>Name</code> specifies the
     * name of the object. This is used only if the value of the <code>Type</code>
     * field is <code>Service</code>, <code>RemoteService</code>, or
     * <code>AWS::Service</code>.</p> </li> <li> <p> <code>Identifier</code> identifies
     * the resource objects of this resource. This is used only if the value of the
     * <code>Type</code> field is <code>Resource</code> or
     * <code>AWS::Resource</code>.</p> </li> <li> <p> <code>Environment</code>
     * specifies the location where this object is hosted, or what it belongs to.</p>
     * </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetKeyAttributes() const { return m_keyAttributes; }
    inline bool KeyAttributesHasBeenSet() const { return m_keyAttributesHasBeenSet; }
    template<typename KeyAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetKeyAttributes(KeyAttributesT&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = std::forward<KeyAttributesT>(value); }
    template<typename KeyAttributesT = Aws::Map<Aws::String, Aws::String>>
    ServiceLevelObjectiveSummary& WithKeyAttributes(KeyAttributesT&& value) { SetKeyAttributes(std::forward<KeyAttributesT>(value)); return *this;}
    template<typename KeyAttributesKeyT = Aws::String, typename KeyAttributesValueT = Aws::String>
    ServiceLevelObjectiveSummary& AddKeyAttributes(KeyAttributesKeyT&& key, KeyAttributesValueT&& value) {
      m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(std::forward<KeyAttributesKeyT>(key), std::forward<KeyAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>If this service level objective is specific to a single operation, this field
     * displays the name of that operation.</p>
     */
    inline const Aws::String& GetOperationName() const { return m_operationName; }
    inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }
    template<typename OperationNameT = Aws::String>
    void SetOperationName(OperationNameT&& value) { m_operationNameHasBeenSet = true; m_operationName = std::forward<OperationNameT>(value); }
    template<typename OperationNameT = Aws::String>
    ServiceLevelObjectiveSummary& WithOperationName(OperationNameT&& value) { SetOperationName(std::forward<OperationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the dependency using the <code>DependencyKeyAttributes</code> and
     * <code>DependencyOperationName</code>. </p>
     */
    inline const DependencyConfig& GetDependencyConfig() const { return m_dependencyConfig; }
    inline bool DependencyConfigHasBeenSet() const { return m_dependencyConfigHasBeenSet; }
    template<typename DependencyConfigT = DependencyConfig>
    void SetDependencyConfig(DependencyConfigT&& value) { m_dependencyConfigHasBeenSet = true; m_dependencyConfig = std::forward<DependencyConfigT>(value); }
    template<typename DependencyConfigT = DependencyConfig>
    ServiceLevelObjectiveSummary& WithDependencyConfig(DependencyConfigT&& value) { SetDependencyConfig(std::forward<DependencyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that this service level objective was created. It is
     * expressed as the number of milliseconds since Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    ServiceLevelObjectiveSummary& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays whether this is a period-based SLO or a request-based SLO.</p>
     */
    inline EvaluationType GetEvaluationType() const { return m_evaluationType; }
    inline bool EvaluationTypeHasBeenSet() const { return m_evaluationTypeHasBeenSet; }
    inline void SetEvaluationType(EvaluationType value) { m_evaluationTypeHasBeenSet = true; m_evaluationType = value; }
    inline ServiceLevelObjectiveSummary& WithEvaluationType(EvaluationType value) { SetEvaluationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the SLI metric source type for this SLO. Supported types are:</p>
     * <ul> <li> <p>Service operation</p> </li> <li> <p>Service dependency</p> </li>
     * <li> <p>CloudWatch metric</p> </li> </ul>
     */
    inline MetricSourceType GetMetricSourceType() const { return m_metricSourceType; }
    inline bool MetricSourceTypeHasBeenSet() const { return m_metricSourceTypeHasBeenSet; }
    inline void SetMetricSourceType(MetricSourceType value) { m_metricSourceTypeHasBeenSet = true; m_metricSourceType = value; }
    inline ServiceLevelObjectiveSummary& WithMetricSourceType(MetricSourceType value) { SetMetricSourceType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_keyAttributes;
    bool m_keyAttributesHasBeenSet = false;

    Aws::String m_operationName;
    bool m_operationNameHasBeenSet = false;

    DependencyConfig m_dependencyConfig;
    bool m_dependencyConfigHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    EvaluationType m_evaluationType{EvaluationType::NOT_SET};
    bool m_evaluationTypeHasBeenSet = false;

    MetricSourceType m_metricSourceType{MetricSourceType::NOT_SET};
    bool m_metricSourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
