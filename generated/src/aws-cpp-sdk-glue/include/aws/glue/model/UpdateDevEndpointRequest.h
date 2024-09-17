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
    AWS_GLUE_API UpdateDevEndpointRequest();

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
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }
    inline UpdateDevEndpointRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}
    inline UpdateDevEndpointRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}
    inline UpdateDevEndpointRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public key for the <code>DevEndpoint</code> to use.</p>
     */
    inline const Aws::String& GetPublicKey() const{ return m_publicKey; }
    inline bool PublicKeyHasBeenSet() const { return m_publicKeyHasBeenSet; }
    inline void SetPublicKey(const Aws::String& value) { m_publicKeyHasBeenSet = true; m_publicKey = value; }
    inline void SetPublicKey(Aws::String&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::move(value); }
    inline void SetPublicKey(const char* value) { m_publicKeyHasBeenSet = true; m_publicKey.assign(value); }
    inline UpdateDevEndpointRequest& WithPublicKey(const Aws::String& value) { SetPublicKey(value); return *this;}
    inline UpdateDevEndpointRequest& WithPublicKey(Aws::String&& value) { SetPublicKey(std::move(value)); return *this;}
    inline UpdateDevEndpointRequest& WithPublicKey(const char* value) { SetPublicKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of public keys for the <code>DevEndpoint</code> to use.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddPublicKeys() const{ return m_addPublicKeys; }
    inline bool AddPublicKeysHasBeenSet() const { return m_addPublicKeysHasBeenSet; }
    inline void SetAddPublicKeys(const Aws::Vector<Aws::String>& value) { m_addPublicKeysHasBeenSet = true; m_addPublicKeys = value; }
    inline void SetAddPublicKeys(Aws::Vector<Aws::String>&& value) { m_addPublicKeysHasBeenSet = true; m_addPublicKeys = std::move(value); }
    inline UpdateDevEndpointRequest& WithAddPublicKeys(const Aws::Vector<Aws::String>& value) { SetAddPublicKeys(value); return *this;}
    inline UpdateDevEndpointRequest& WithAddPublicKeys(Aws::Vector<Aws::String>&& value) { SetAddPublicKeys(std::move(value)); return *this;}
    inline UpdateDevEndpointRequest& AddAddPublicKeys(const Aws::String& value) { m_addPublicKeysHasBeenSet = true; m_addPublicKeys.push_back(value); return *this; }
    inline UpdateDevEndpointRequest& AddAddPublicKeys(Aws::String&& value) { m_addPublicKeysHasBeenSet = true; m_addPublicKeys.push_back(std::move(value)); return *this; }
    inline UpdateDevEndpointRequest& AddAddPublicKeys(const char* value) { m_addPublicKeysHasBeenSet = true; m_addPublicKeys.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of public keys to be deleted from the <code>DevEndpoint</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeletePublicKeys() const{ return m_deletePublicKeys; }
    inline bool DeletePublicKeysHasBeenSet() const { return m_deletePublicKeysHasBeenSet; }
    inline void SetDeletePublicKeys(const Aws::Vector<Aws::String>& value) { m_deletePublicKeysHasBeenSet = true; m_deletePublicKeys = value; }
    inline void SetDeletePublicKeys(Aws::Vector<Aws::String>&& value) { m_deletePublicKeysHasBeenSet = true; m_deletePublicKeys = std::move(value); }
    inline UpdateDevEndpointRequest& WithDeletePublicKeys(const Aws::Vector<Aws::String>& value) { SetDeletePublicKeys(value); return *this;}
    inline UpdateDevEndpointRequest& WithDeletePublicKeys(Aws::Vector<Aws::String>&& value) { SetDeletePublicKeys(std::move(value)); return *this;}
    inline UpdateDevEndpointRequest& AddDeletePublicKeys(const Aws::String& value) { m_deletePublicKeysHasBeenSet = true; m_deletePublicKeys.push_back(value); return *this; }
    inline UpdateDevEndpointRequest& AddDeletePublicKeys(Aws::String&& value) { m_deletePublicKeysHasBeenSet = true; m_deletePublicKeys.push_back(std::move(value)); return *this; }
    inline UpdateDevEndpointRequest& AddDeletePublicKeys(const char* value) { m_deletePublicKeysHasBeenSet = true; m_deletePublicKeys.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Custom Python or Java libraries to be loaded in the
     * <code>DevEndpoint</code>.</p>
     */
    inline const DevEndpointCustomLibraries& GetCustomLibraries() const{ return m_customLibraries; }
    inline bool CustomLibrariesHasBeenSet() const { return m_customLibrariesHasBeenSet; }
    inline void SetCustomLibraries(const DevEndpointCustomLibraries& value) { m_customLibrariesHasBeenSet = true; m_customLibraries = value; }
    inline void SetCustomLibraries(DevEndpointCustomLibraries&& value) { m_customLibrariesHasBeenSet = true; m_customLibraries = std::move(value); }
    inline UpdateDevEndpointRequest& WithCustomLibraries(const DevEndpointCustomLibraries& value) { SetCustomLibraries(value); return *this;}
    inline UpdateDevEndpointRequest& WithCustomLibraries(DevEndpointCustomLibraries&& value) { SetCustomLibraries(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>True</code> if the list of custom libraries to be loaded in the
     * development endpoint needs to be updated, or <code>False</code> if
     * otherwise.</p>
     */
    inline bool GetUpdateEtlLibraries() const{ return m_updateEtlLibraries; }
    inline bool UpdateEtlLibrariesHasBeenSet() const { return m_updateEtlLibrariesHasBeenSet; }
    inline void SetUpdateEtlLibraries(bool value) { m_updateEtlLibrariesHasBeenSet = true; m_updateEtlLibraries = value; }
    inline UpdateDevEndpointRequest& WithUpdateEtlLibraries(bool value) { SetUpdateEtlLibraries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of argument keys to be deleted from the map of arguments used to
     * configure the <code>DevEndpoint</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeleteArguments() const{ return m_deleteArguments; }
    inline bool DeleteArgumentsHasBeenSet() const { return m_deleteArgumentsHasBeenSet; }
    inline void SetDeleteArguments(const Aws::Vector<Aws::String>& value) { m_deleteArgumentsHasBeenSet = true; m_deleteArguments = value; }
    inline void SetDeleteArguments(Aws::Vector<Aws::String>&& value) { m_deleteArgumentsHasBeenSet = true; m_deleteArguments = std::move(value); }
    inline UpdateDevEndpointRequest& WithDeleteArguments(const Aws::Vector<Aws::String>& value) { SetDeleteArguments(value); return *this;}
    inline UpdateDevEndpointRequest& WithDeleteArguments(Aws::Vector<Aws::String>&& value) { SetDeleteArguments(std::move(value)); return *this;}
    inline UpdateDevEndpointRequest& AddDeleteArguments(const Aws::String& value) { m_deleteArgumentsHasBeenSet = true; m_deleteArguments.push_back(value); return *this; }
    inline UpdateDevEndpointRequest& AddDeleteArguments(Aws::String&& value) { m_deleteArgumentsHasBeenSet = true; m_deleteArguments.push_back(std::move(value)); return *this; }
    inline UpdateDevEndpointRequest& AddDeleteArguments(const char* value) { m_deleteArgumentsHasBeenSet = true; m_deleteArguments.push_back(value); return *this; }
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
    inline const Aws::Map<Aws::String, Aws::String>& GetAddArguments() const{ return m_addArguments; }
    inline bool AddArgumentsHasBeenSet() const { return m_addArgumentsHasBeenSet; }
    inline void SetAddArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_addArgumentsHasBeenSet = true; m_addArguments = value; }
    inline void SetAddArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_addArgumentsHasBeenSet = true; m_addArguments = std::move(value); }
    inline UpdateDevEndpointRequest& WithAddArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetAddArguments(value); return *this;}
    inline UpdateDevEndpointRequest& WithAddArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetAddArguments(std::move(value)); return *this;}
    inline UpdateDevEndpointRequest& AddAddArguments(const Aws::String& key, const Aws::String& value) { m_addArgumentsHasBeenSet = true; m_addArguments.emplace(key, value); return *this; }
    inline UpdateDevEndpointRequest& AddAddArguments(Aws::String&& key, const Aws::String& value) { m_addArgumentsHasBeenSet = true; m_addArguments.emplace(std::move(key), value); return *this; }
    inline UpdateDevEndpointRequest& AddAddArguments(const Aws::String& key, Aws::String&& value) { m_addArgumentsHasBeenSet = true; m_addArguments.emplace(key, std::move(value)); return *this; }
    inline UpdateDevEndpointRequest& AddAddArguments(Aws::String&& key, Aws::String&& value) { m_addArgumentsHasBeenSet = true; m_addArguments.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateDevEndpointRequest& AddAddArguments(const char* key, Aws::String&& value) { m_addArgumentsHasBeenSet = true; m_addArguments.emplace(key, std::move(value)); return *this; }
    inline UpdateDevEndpointRequest& AddAddArguments(Aws::String&& key, const char* value) { m_addArgumentsHasBeenSet = true; m_addArguments.emplace(std::move(key), value); return *this; }
    inline UpdateDevEndpointRequest& AddAddArguments(const char* key, const char* value) { m_addArgumentsHasBeenSet = true; m_addArguments.emplace(key, value); return *this; }
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

    bool m_updateEtlLibraries;
    bool m_updateEtlLibrariesHasBeenSet = false;

    Aws::Vector<Aws::String> m_deleteArguments;
    bool m_deleteArgumentsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_addArguments;
    bool m_addArgumentsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
