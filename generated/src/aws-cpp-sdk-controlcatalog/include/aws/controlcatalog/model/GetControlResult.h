/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/controlcatalog/model/ControlBehavior.h>
#include <aws/controlcatalog/model/ControlSeverity.h>
#include <aws/controlcatalog/model/RegionConfiguration.h>
#include <aws/controlcatalog/model/ImplementationDetails.h>
#include <aws/core/utils/DateTime.h>
#include <aws/controlcatalog/model/ControlParameter.h>
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
namespace ControlCatalog
{
namespace Model
{
  class GetControlResult
  {
  public:
    AWS_CONTROLCATALOG_API GetControlResult() = default;
    AWS_CONTROLCATALOG_API GetControlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLCATALOG_API GetControlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the control.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetControlResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of alternative identifiers for the control. These are human-readable
     * designators, such as <code>SH.S3.1</code>. Several aliases can refer to the same
     * control across different Amazon Web Services services or compliance
     * frameworks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAliases() const { return m_aliases; }
    template<typename AliasesT = Aws::Vector<Aws::String>>
    void SetAliases(AliasesT&& value) { m_aliasesHasBeenSet = true; m_aliases = std::forward<AliasesT>(value); }
    template<typename AliasesT = Aws::Vector<Aws::String>>
    GetControlResult& WithAliases(AliasesT&& value) { SetAliases(std::forward<AliasesT>(value)); return *this;}
    template<typename AliasesT = Aws::String>
    GetControlResult& AddAliases(AliasesT&& value) { m_aliasesHasBeenSet = true; m_aliases.emplace_back(std::forward<AliasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The display name of the control.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetControlResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of what the control does.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetControlResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A term that identifies the control's functional behavior. One of
     * <code>Preventive</code>, <code>Detective</code>, <code>Proactive</code> </p>
     */
    inline ControlBehavior GetBehavior() const { return m_behavior; }
    inline void SetBehavior(ControlBehavior value) { m_behaviorHasBeenSet = true; m_behavior = value; }
    inline GetControlResult& WithBehavior(ControlBehavior value) { SetBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An enumerated type, with the following possible values:</p>
     */
    inline ControlSeverity GetSeverity() const { return m_severity; }
    inline void SetSeverity(ControlSeverity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline GetControlResult& WithSeverity(ControlSeverity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    
    inline const RegionConfiguration& GetRegionConfiguration() const { return m_regionConfiguration; }
    template<typename RegionConfigurationT = RegionConfiguration>
    void SetRegionConfiguration(RegionConfigurationT&& value) { m_regionConfigurationHasBeenSet = true; m_regionConfiguration = std::forward<RegionConfigurationT>(value); }
    template<typename RegionConfigurationT = RegionConfiguration>
    GetControlResult& WithRegionConfiguration(RegionConfigurationT&& value) { SetRegionConfiguration(std::forward<RegionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns information about the control, as an
     * <code>ImplementationDetails</code> object that shows the underlying
     * implementation type for a control.</p>
     */
    inline const ImplementationDetails& GetImplementation() const { return m_implementation; }
    template<typename ImplementationT = ImplementationDetails>
    void SetImplementation(ImplementationT&& value) { m_implementationHasBeenSet = true; m_implementation = std::forward<ImplementationT>(value); }
    template<typename ImplementationT = ImplementationDetails>
    GetControlResult& WithImplementation(ImplementationT&& value) { SetImplementation(std::forward<ImplementationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an array of <code>ControlParameter</code> objects that specify the
     * parameters a control supports. An empty list is returned for controls that don’t
     * support parameters. </p>
     */
    inline const Aws::Vector<ControlParameter>& GetParameters() const { return m_parameters; }
    template<typename ParametersT = Aws::Vector<ControlParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<ControlParameter>>
    GetControlResult& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = ControlParameter>
    GetControlResult& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A timestamp that notes the time when the control was released (start of its
     * life) as a governance capability in Amazon Web Services.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    GetControlResult& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Web Services resource types that are governed by this
     * control. This information helps you understand which controls can govern certain
     * types of resources, and conversely, which resources are affected when the
     * control is implemented. The resources are represented as Amazon Web Services
     * CloudFormation resource types. If <code>GovernedResources</code> cannot be
     * represented by available CloudFormation resource types, it’s returned as an
     * empty list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGovernedResources() const { return m_governedResources; }
    template<typename GovernedResourcesT = Aws::Vector<Aws::String>>
    void SetGovernedResources(GovernedResourcesT&& value) { m_governedResourcesHasBeenSet = true; m_governedResources = std::forward<GovernedResourcesT>(value); }
    template<typename GovernedResourcesT = Aws::Vector<Aws::String>>
    GetControlResult& WithGovernedResources(GovernedResourcesT&& value) { SetGovernedResources(std::forward<GovernedResourcesT>(value)); return *this;}
    template<typename GovernedResourcesT = Aws::String>
    GetControlResult& AddGovernedResources(GovernedResourcesT&& value) { m_governedResourcesHasBeenSet = true; m_governedResources.emplace_back(std::forward<GovernedResourcesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetControlResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_aliases;
    bool m_aliasesHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ControlBehavior m_behavior{ControlBehavior::NOT_SET};
    bool m_behaviorHasBeenSet = false;

    ControlSeverity m_severity{ControlSeverity::NOT_SET};
    bool m_severityHasBeenSet = false;

    RegionConfiguration m_regionConfiguration;
    bool m_regionConfigurationHasBeenSet = false;

    ImplementationDetails m_implementation;
    bool m_implementationHasBeenSet = false;

    Aws::Vector<ControlParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_governedResources;
    bool m_governedResourcesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
