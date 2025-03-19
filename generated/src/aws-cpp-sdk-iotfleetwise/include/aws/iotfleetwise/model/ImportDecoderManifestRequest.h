/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotfleetwise/model/NetworkFileDefinition.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class ImportDecoderManifestRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API ImportDecoderManifestRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportDecoderManifest"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The name of the decoder manifest to import. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ImportDecoderManifestRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The file to load into an Amazon Web Services account. </p>
     */
    inline const Aws::Vector<NetworkFileDefinition>& GetNetworkFileDefinitions() const { return m_networkFileDefinitions; }
    inline bool NetworkFileDefinitionsHasBeenSet() const { return m_networkFileDefinitionsHasBeenSet; }
    template<typename NetworkFileDefinitionsT = Aws::Vector<NetworkFileDefinition>>
    void SetNetworkFileDefinitions(NetworkFileDefinitionsT&& value) { m_networkFileDefinitionsHasBeenSet = true; m_networkFileDefinitions = std::forward<NetworkFileDefinitionsT>(value); }
    template<typename NetworkFileDefinitionsT = Aws::Vector<NetworkFileDefinition>>
    ImportDecoderManifestRequest& WithNetworkFileDefinitions(NetworkFileDefinitionsT&& value) { SetNetworkFileDefinitions(std::forward<NetworkFileDefinitionsT>(value)); return *this;}
    template<typename NetworkFileDefinitionsT = NetworkFileDefinition>
    ImportDecoderManifestRequest& AddNetworkFileDefinitions(NetworkFileDefinitionsT&& value) { m_networkFileDefinitionsHasBeenSet = true; m_networkFileDefinitions.emplace_back(std::forward<NetworkFileDefinitionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<NetworkFileDefinition> m_networkFileDefinitions;
    bool m_networkFileDefinitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
