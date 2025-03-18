﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controlcatalog/model/ControlBehavior.h>
#include <aws/controlcatalog/model/RegionConfiguration.h>
#include <aws/controlcatalog/model/ImplementationDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetControlResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ControlBehavior m_behavior{ControlBehavior::NOT_SET};
    bool m_behaviorHasBeenSet = false;

    RegionConfiguration m_regionConfiguration;
    bool m_regionConfigurationHasBeenSet = false;

    ImplementationDetails m_implementation;
    bool m_implementationHasBeenSet = false;

    Aws::Vector<ControlParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
