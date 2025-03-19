/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/DevEndpointCustomLibraries.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class UpdateDevEndpointRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API UpdateDevEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDevEndpoint"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the <code>DevEndpoint</code> to be updated.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    UpdateDevEndpointRequest& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public key for the <code>DevEndpoint</code> to use.</p>
     */
    inline const Aws::String& GetPublicKey() const { return m_publicKey; }
    inline bool PublicKeyHasBeenSet() const { return m_publicKeyHasBeenSet; }
    template<typename PublicKeyT = Aws::String>
    void SetPublicKey(PublicKeyT&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::forward<PublicKeyT>(value); }
    template<typename PublicKeyT = Aws::String>
    UpdateDevEndpointRequest& WithPublicKey(PublicKeyT&& value) { SetPublicKey(std::forward<PublicKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of public keys for the <code>DevEndpoint</code> to use.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddPublicKeys() const { return m_addPublicKeys; }
    inline bool AddPublicKeysHasBeenSet() const { return m_addPublicKeysHasBeenSet; }
    template<typename AddPublicKeysT = Aws::Vector<Aws::String>>
    void SetAddPublicKeys(AddPublicKeysT&& value) { m_addPublicKeysHasBeenSet = true; m_addPublicKeys = std::forward<AddPublicKeysT>(value); }
    template<typename AddPublicKeysT = Aws::Vector<Aws::String>>
    UpdateDevEndpointRequest& WithAddPublicKeys(AddPublicKeysT&& value) { SetAddPublicKeys(std::forward<AddPublicKeysT>(value)); return *this;}
    template<typename AddPublicKeysT = Aws::String>
    UpdateDevEndpointRequest& AddAddPublicKeys(AddPublicKeysT&& value) { m_addPublicKeysHasBeenSet = true; m_addPublicKeys.emplace_back(std::forward<AddPublicKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of public keys to be deleted from the <code>DevEndpoint</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeletePublicKeys() const { return m_deletePublicKeys; }
    inline bool DeletePublicKeysHasBeenSet() const { return m_deletePublicKeysHasBeenSet; }
    template<typename DeletePublicKeysT = Aws::Vector<Aws::String>>
    void SetDeletePublicKeys(DeletePublicKeysT&& value) { m_deletePublicKeysHasBeenSet = true; m_deletePublicKeys = std::forward<DeletePublicKeysT>(value); }
    template<typename DeletePublicKeysT = Aws::Vector<Aws::String>>
    UpdateDevEndpointRequest& WithDeletePublicKeys(DeletePublicKeysT&& value) { SetDeletePublicKeys(std::forward<DeletePublicKeysT>(value)); return *this;}
    template<typename DeletePublicKeysT = Aws::String>
    UpdateDevEndpointRequest& AddDeletePublicKeys(DeletePublicKeysT&& value) { m_deletePublicKeysHasBeenSet = true; m_deletePublicKeys.emplace_back(std::forward<DeletePublicKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Custom Python or Java libraries to be loaded in the
     * <code>DevEndpoint</code>.</p>
     */
    inline const DevEndpointCustomLibraries& GetCustomLibraries() const { return m_customLibraries; }
    inline bool CustomLibrariesHasBeenSet() const { return m_customLibrariesHasBeenSet; }
    template<typename CustomLibrariesT = DevEndpointCustomLibraries>
    void SetCustomLibraries(CustomLibrariesT&& value) { m_customLibrariesHasBeenSet = true; m_customLibraries = std::forward<CustomLibrariesT>(value); }
    template<typename CustomLibrariesT = DevEndpointCustomLibraries>
    UpdateDevEndpointRequest& WithCustomLibraries(CustomLibrariesT&& value) { SetCustomLibraries(std::forward<CustomLibrariesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>True</code> if the list of custom libraries to be loaded in the
     * development endpoint needs to be updated, or <code>False</code> if
     * otherwise.</p>
     */
    inline bool GetUpdateEtlLibraries() const { return m_updateEtlLibraries; }
    inline bool UpdateEtlLibrariesHasBeenSet() const { return m_updateEtlLibrariesHasBeenSet; }
    inline void SetUpdateEtlLibraries(bool value) { m_updateEtlLibrariesHasBeenSet = true; m_updateEtlLibraries = value; }
    inline UpdateDevEndpointRequest& WithUpdateEtlLibraries(bool value) { SetUpdateEtlLibraries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of argument keys to be deleted from the map of arguments used to
     * configure the <code>DevEndpoint</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeleteArguments() const { return m_deleteArguments; }
    inline bool DeleteArgumentsHasBeenSet() const { return m_deleteArgumentsHasBeenSet; }
    template<typename DeleteArgumentsT = Aws::Vector<Aws::String>>
    void SetDeleteArguments(DeleteArgumentsT&& value) { m_deleteArgumentsHasBeenSet = true; m_deleteArguments = std::forward<DeleteArgumentsT>(value); }
    template<typename DeleteArgumentsT = Aws::Vector<Aws::String>>
    UpdateDevEndpointRequest& WithDeleteArguments(DeleteArgumentsT&& value) { SetDeleteArguments(std::forward<DeleteArgumentsT>(value)); return *this;}
    template<typename DeleteArgumentsT = Aws::String>
    UpdateDevEndpointRequest& AddDeleteArguments(DeleteArgumentsT&& value) { m_deleteArgumentsHasBeenSet = true; m_deleteArguments.emplace_back(std::forward<DeleteArgumentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The map of arguments to add the map of arguments used to configure the
     * <code>DevEndpoint</code>.</p> <p>Valid arguments are:</p> <ul> <li> <p>
     * <code>"--enable-glue-datacatalog": ""</code> </p> </li> </ul> <p>You can specify
     * a version of Python support for development endpoints by using the
     * <code>Arguments</code> parameter in the <code>CreateDevEndpoint</code> or
     * <code>UpdateDevEndpoint</code> APIs. If no arguments are provided, the version
     * defaults to Python 2.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAddArguments() const { return m_addArguments; }
    inline bool AddArgumentsHasBeenSet() const { return m_addArgumentsHasBeenSet; }
    template<typename AddArgumentsT = Aws::Map<Aws::String, Aws::String>>
    void SetAddArguments(AddArgumentsT&& value) { m_addArgumentsHasBeenSet = true; m_addArguments = std::forward<AddArgumentsT>(value); }
    template<typename AddArgumentsT = Aws::Map<Aws::String, Aws::String>>
    UpdateDevEndpointRequest& WithAddArguments(AddArgumentsT&& value) { SetAddArguments(std::forward<AddArgumentsT>(value)); return *this;}
    template<typename AddArgumentsKeyT = Aws::String, typename AddArgumentsValueT = Aws::String>
    UpdateDevEndpointRequest& AddAddArguments(AddArgumentsKeyT&& key, AddArgumentsValueT&& value) {
      m_addArgumentsHasBeenSet = true; m_addArguments.emplace(std::forward<AddArgumentsKeyT>(key), std::forward<AddArgumentsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_publicKey;
    bool m_publicKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_addPublicKeys;
    bool m_addPublicKeysHasBeenSet = false;

    Aws::Vector<Aws::String> m_deletePublicKeys;
    bool m_deletePublicKeysHasBeenSet = false;

    DevEndpointCustomLibraries m_customLibraries;
    bool m_customLibrariesHasBeenSet = false;

    bool m_updateEtlLibraries{false};
    bool m_updateEtlLibrariesHasBeenSet = false;

    Aws::Vector<Aws::String> m_deleteArguments;
    bool m_deleteArgumentsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_addArguments;
    bool m_addArgumentsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
