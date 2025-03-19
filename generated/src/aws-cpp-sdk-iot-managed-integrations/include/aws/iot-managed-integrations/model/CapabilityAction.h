/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Action for an Amazon Web Services capability, containing the action
   * parameters for control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/CapabilityAction">AWS
   * API Reference</a></p>
   */
  class CapabilityAction
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API CapabilityAction() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API CapabilityAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API CapabilityAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describe a capability action with a name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CapabilityAction& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describe a capability action with an reference.</p>
     */
    inline const Aws::String& GetRef() const { return m_ref; }
    inline bool RefHasBeenSet() const { return m_refHasBeenSet; }
    template<typename RefT = Aws::String>
    void SetRef(RefT&& value) { m_refHasBeenSet = true; m_ref = std::forward<RefT>(value); }
    template<typename RefT = Aws::String>
    CapabilityAction& WithRef(RefT&& value) { SetRef(std::forward<RefT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describe a capability action with an <code>actionTraceId</code> for a
     * response command.</p>
     */
    inline const Aws::String& GetActionTraceId() const { return m_actionTraceId; }
    inline bool ActionTraceIdHasBeenSet() const { return m_actionTraceIdHasBeenSet; }
    template<typename ActionTraceIdT = Aws::String>
    void SetActionTraceId(ActionTraceIdT&& value) { m_actionTraceIdHasBeenSet = true; m_actionTraceId = std::forward<ActionTraceIdT>(value); }
    template<typename ActionTraceIdT = Aws::String>
    CapabilityAction& WithActionTraceId(ActionTraceIdT&& value) { SetActionTraceId(std::forward<ActionTraceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describe a capability action with a capability property.</p>
     */
    inline Aws::Utils::DocumentView GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Utils::Document>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Utils::Document>
    CapabilityAction& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ref;
    bool m_refHasBeenSet = false;

    Aws::String m_actionTraceId;
    bool m_actionTraceIdHasBeenSet = false;

    Aws::Utils::Document m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
