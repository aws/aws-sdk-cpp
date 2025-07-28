/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ComputationModelConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iotsitewise/model/ComputationModelDataBindingValue.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class UpdateComputationModelRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API UpdateComputationModelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateComputationModel"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the computation model.</p>
     */
    inline const Aws::String& GetComputationModelId() const { return m_computationModelId; }
    inline bool ComputationModelIdHasBeenSet() const { return m_computationModelIdHasBeenSet; }
    template<typename ComputationModelIdT = Aws::String>
    void SetComputationModelId(ComputationModelIdT&& value) { m_computationModelIdHasBeenSet = true; m_computationModelId = std::forward<ComputationModelIdT>(value); }
    template<typename ComputationModelIdT = Aws::String>
    UpdateComputationModelRequest& WithComputationModelId(ComputationModelIdT&& value) { SetComputationModelId(std::forward<ComputationModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the computation model.</p>
     */
    inline const Aws::String& GetComputationModelName() const { return m_computationModelName; }
    inline bool ComputationModelNameHasBeenSet() const { return m_computationModelNameHasBeenSet; }
    template<typename ComputationModelNameT = Aws::String>
    void SetComputationModelName(ComputationModelNameT&& value) { m_computationModelNameHasBeenSet = true; m_computationModelName = std::forward<ComputationModelNameT>(value); }
    template<typename ComputationModelNameT = Aws::String>
    UpdateComputationModelRequest& WithComputationModelName(ComputationModelNameT&& value) { SetComputationModelName(std::forward<ComputationModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the computation model.</p>
     */
    inline const Aws::String& GetComputationModelDescription() const { return m_computationModelDescription; }
    inline bool ComputationModelDescriptionHasBeenSet() const { return m_computationModelDescriptionHasBeenSet; }
    template<typename ComputationModelDescriptionT = Aws::String>
    void SetComputationModelDescription(ComputationModelDescriptionT&& value) { m_computationModelDescriptionHasBeenSet = true; m_computationModelDescription = std::forward<ComputationModelDescriptionT>(value); }
    template<typename ComputationModelDescriptionT = Aws::String>
    UpdateComputationModelRequest& WithComputationModelDescription(ComputationModelDescriptionT&& value) { SetComputationModelDescription(std::forward<ComputationModelDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the computation model.</p>
     */
    inline const ComputationModelConfiguration& GetComputationModelConfiguration() const { return m_computationModelConfiguration; }
    inline bool ComputationModelConfigurationHasBeenSet() const { return m_computationModelConfigurationHasBeenSet; }
    template<typename ComputationModelConfigurationT = ComputationModelConfiguration>
    void SetComputationModelConfiguration(ComputationModelConfigurationT&& value) { m_computationModelConfigurationHasBeenSet = true; m_computationModelConfiguration = std::forward<ComputationModelConfigurationT>(value); }
    template<typename ComputationModelConfigurationT = ComputationModelConfiguration>
    UpdateComputationModelRequest& WithComputationModelConfiguration(ComputationModelConfigurationT&& value) { SetComputationModelConfiguration(std::forward<ComputationModelConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data binding for the computation model. Key is a variable name defined in
     * configuration. Value is a <code>ComputationModelDataBindingValue</code>
     * referenced by the variable.</p>
     */
    inline const Aws::Map<Aws::String, ComputationModelDataBindingValue>& GetComputationModelDataBinding() const { return m_computationModelDataBinding; }
    inline bool ComputationModelDataBindingHasBeenSet() const { return m_computationModelDataBindingHasBeenSet; }
    template<typename ComputationModelDataBindingT = Aws::Map<Aws::String, ComputationModelDataBindingValue>>
    void SetComputationModelDataBinding(ComputationModelDataBindingT&& value) { m_computationModelDataBindingHasBeenSet = true; m_computationModelDataBinding = std::forward<ComputationModelDataBindingT>(value); }
    template<typename ComputationModelDataBindingT = Aws::Map<Aws::String, ComputationModelDataBindingValue>>
    UpdateComputationModelRequest& WithComputationModelDataBinding(ComputationModelDataBindingT&& value) { SetComputationModelDataBinding(std::forward<ComputationModelDataBindingT>(value)); return *this;}
    template<typename ComputationModelDataBindingKeyT = Aws::String, typename ComputationModelDataBindingValueT = ComputationModelDataBindingValue>
    UpdateComputationModelRequest& AddComputationModelDataBinding(ComputationModelDataBindingKeyT&& key, ComputationModelDataBindingValueT&& value) {
      m_computationModelDataBindingHasBeenSet = true; m_computationModelDataBinding.emplace(std::forward<ComputationModelDataBindingKeyT>(key), std::forward<ComputationModelDataBindingValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateComputationModelRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_computationModelId;
    bool m_computationModelIdHasBeenSet = false;

    Aws::String m_computationModelName;
    bool m_computationModelNameHasBeenSet = false;

    Aws::String m_computationModelDescription;
    bool m_computationModelDescriptionHasBeenSet = false;

    ComputationModelConfiguration m_computationModelConfiguration;
    bool m_computationModelConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, ComputationModelDataBindingValue> m_computationModelDataBinding;
    bool m_computationModelDataBindingHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
