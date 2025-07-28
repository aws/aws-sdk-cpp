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
  class CreateComputationModelRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API CreateComputationModelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateComputationModel"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the computation model.</p>
     */
    inline const Aws::String& GetComputationModelName() const { return m_computationModelName; }
    inline bool ComputationModelNameHasBeenSet() const { return m_computationModelNameHasBeenSet; }
    template<typename ComputationModelNameT = Aws::String>
    void SetComputationModelName(ComputationModelNameT&& value) { m_computationModelNameHasBeenSet = true; m_computationModelName = std::forward<ComputationModelNameT>(value); }
    template<typename ComputationModelNameT = Aws::String>
    CreateComputationModelRequest& WithComputationModelName(ComputationModelNameT&& value) { SetComputationModelName(std::forward<ComputationModelNameT>(value)); return *this;}
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
    CreateComputationModelRequest& WithComputationModelDescription(ComputationModelDescriptionT&& value) { SetComputationModelDescription(std::forward<ComputationModelDescriptionT>(value)); return *this;}
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
    CreateComputationModelRequest& WithComputationModelConfiguration(ComputationModelConfigurationT&& value) { SetComputationModelConfiguration(std::forward<ComputationModelConfigurationT>(value)); return *this;}
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
    CreateComputationModelRequest& WithComputationModelDataBinding(ComputationModelDataBindingT&& value) { SetComputationModelDataBinding(std::forward<ComputationModelDataBindingT>(value)); return *this;}
    template<typename ComputationModelDataBindingKeyT = Aws::String, typename ComputationModelDataBindingValueT = ComputationModelDataBindingValue>
    CreateComputationModelRequest& AddComputationModelDataBinding(ComputationModelDataBindingKeyT&& key, ComputationModelDataBindingValueT&& value) {
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
    CreateComputationModelRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that contain metadata for the asset. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateComputationModelRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateComputationModelRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
