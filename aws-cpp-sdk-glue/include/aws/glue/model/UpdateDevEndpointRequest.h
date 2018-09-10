﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/DevEndpointCustomLibraries.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API UpdateDevEndpointRequest : public GlueRequest
  {
  public:
    UpdateDevEndpointRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDevEndpoint"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the DevEndpoint to be updated.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The name of the DevEndpoint to be updated.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>The name of the DevEndpoint to be updated.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>The name of the DevEndpoint to be updated.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>The name of the DevEndpoint to be updated.</p>
     */
    inline UpdateDevEndpointRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The name of the DevEndpoint to be updated.</p>
     */
    inline UpdateDevEndpointRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name of the DevEndpoint to be updated.</p>
     */
    inline UpdateDevEndpointRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>The public key for the DevEndpoint to use.</p>
     */
    inline const Aws::String& GetPublicKey() const{ return m_publicKey; }

    /**
     * <p>The public key for the DevEndpoint to use.</p>
     */
    inline void SetPublicKey(const Aws::String& value) { m_publicKeyHasBeenSet = true; m_publicKey = value; }

    /**
     * <p>The public key for the DevEndpoint to use.</p>
     */
    inline void SetPublicKey(Aws::String&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::move(value); }

    /**
     * <p>The public key for the DevEndpoint to use.</p>
     */
    inline void SetPublicKey(const char* value) { m_publicKeyHasBeenSet = true; m_publicKey.assign(value); }

    /**
     * <p>The public key for the DevEndpoint to use.</p>
     */
    inline UpdateDevEndpointRequest& WithPublicKey(const Aws::String& value) { SetPublicKey(value); return *this;}

    /**
     * <p>The public key for the DevEndpoint to use.</p>
     */
    inline UpdateDevEndpointRequest& WithPublicKey(Aws::String&& value) { SetPublicKey(std::move(value)); return *this;}

    /**
     * <p>The public key for the DevEndpoint to use.</p>
     */
    inline UpdateDevEndpointRequest& WithPublicKey(const char* value) { SetPublicKey(value); return *this;}


    /**
     * <p>The list of public keys for the DevEndpoint to use.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddPublicKeys() const{ return m_addPublicKeys; }

    /**
     * <p>The list of public keys for the DevEndpoint to use.</p>
     */
    inline void SetAddPublicKeys(const Aws::Vector<Aws::String>& value) { m_addPublicKeysHasBeenSet = true; m_addPublicKeys = value; }

    /**
     * <p>The list of public keys for the DevEndpoint to use.</p>
     */
    inline void SetAddPublicKeys(Aws::Vector<Aws::String>&& value) { m_addPublicKeysHasBeenSet = true; m_addPublicKeys = std::move(value); }

    /**
     * <p>The list of public keys for the DevEndpoint to use.</p>
     */
    inline UpdateDevEndpointRequest& WithAddPublicKeys(const Aws::Vector<Aws::String>& value) { SetAddPublicKeys(value); return *this;}

    /**
     * <p>The list of public keys for the DevEndpoint to use.</p>
     */
    inline UpdateDevEndpointRequest& WithAddPublicKeys(Aws::Vector<Aws::String>&& value) { SetAddPublicKeys(std::move(value)); return *this;}

    /**
     * <p>The list of public keys for the DevEndpoint to use.</p>
     */
    inline UpdateDevEndpointRequest& AddAddPublicKeys(const Aws::String& value) { m_addPublicKeysHasBeenSet = true; m_addPublicKeys.push_back(value); return *this; }

    /**
     * <p>The list of public keys for the DevEndpoint to use.</p>
     */
    inline UpdateDevEndpointRequest& AddAddPublicKeys(Aws::String&& value) { m_addPublicKeysHasBeenSet = true; m_addPublicKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of public keys for the DevEndpoint to use.</p>
     */
    inline UpdateDevEndpointRequest& AddAddPublicKeys(const char* value) { m_addPublicKeysHasBeenSet = true; m_addPublicKeys.push_back(value); return *this; }


    /**
     * <p>The list of public keys to be deleted from the DevEndpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeletePublicKeys() const{ return m_deletePublicKeys; }

    /**
     * <p>The list of public keys to be deleted from the DevEndpoint.</p>
     */
    inline void SetDeletePublicKeys(const Aws::Vector<Aws::String>& value) { m_deletePublicKeysHasBeenSet = true; m_deletePublicKeys = value; }

    /**
     * <p>The list of public keys to be deleted from the DevEndpoint.</p>
     */
    inline void SetDeletePublicKeys(Aws::Vector<Aws::String>&& value) { m_deletePublicKeysHasBeenSet = true; m_deletePublicKeys = std::move(value); }

    /**
     * <p>The list of public keys to be deleted from the DevEndpoint.</p>
     */
    inline UpdateDevEndpointRequest& WithDeletePublicKeys(const Aws::Vector<Aws::String>& value) { SetDeletePublicKeys(value); return *this;}

    /**
     * <p>The list of public keys to be deleted from the DevEndpoint.</p>
     */
    inline UpdateDevEndpointRequest& WithDeletePublicKeys(Aws::Vector<Aws::String>&& value) { SetDeletePublicKeys(std::move(value)); return *this;}

    /**
     * <p>The list of public keys to be deleted from the DevEndpoint.</p>
     */
    inline UpdateDevEndpointRequest& AddDeletePublicKeys(const Aws::String& value) { m_deletePublicKeysHasBeenSet = true; m_deletePublicKeys.push_back(value); return *this; }

    /**
     * <p>The list of public keys to be deleted from the DevEndpoint.</p>
     */
    inline UpdateDevEndpointRequest& AddDeletePublicKeys(Aws::String&& value) { m_deletePublicKeysHasBeenSet = true; m_deletePublicKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of public keys to be deleted from the DevEndpoint.</p>
     */
    inline UpdateDevEndpointRequest& AddDeletePublicKeys(const char* value) { m_deletePublicKeysHasBeenSet = true; m_deletePublicKeys.push_back(value); return *this; }


    /**
     * <p>Custom Python or Java libraries to be loaded in the DevEndpoint.</p>
     */
    inline const DevEndpointCustomLibraries& GetCustomLibraries() const{ return m_customLibraries; }

    /**
     * <p>Custom Python or Java libraries to be loaded in the DevEndpoint.</p>
     */
    inline void SetCustomLibraries(const DevEndpointCustomLibraries& value) { m_customLibrariesHasBeenSet = true; m_customLibraries = value; }

    /**
     * <p>Custom Python or Java libraries to be loaded in the DevEndpoint.</p>
     */
    inline void SetCustomLibraries(DevEndpointCustomLibraries&& value) { m_customLibrariesHasBeenSet = true; m_customLibraries = std::move(value); }

    /**
     * <p>Custom Python or Java libraries to be loaded in the DevEndpoint.</p>
     */
    inline UpdateDevEndpointRequest& WithCustomLibraries(const DevEndpointCustomLibraries& value) { SetCustomLibraries(value); return *this;}

    /**
     * <p>Custom Python or Java libraries to be loaded in the DevEndpoint.</p>
     */
    inline UpdateDevEndpointRequest& WithCustomLibraries(DevEndpointCustomLibraries&& value) { SetCustomLibraries(std::move(value)); return *this;}


    /**
     * <p>True if the list of custom libraries to be loaded in the development endpoint
     * needs to be updated, or False otherwise.</p>
     */
    inline bool GetUpdateEtlLibraries() const{ return m_updateEtlLibraries; }

    /**
     * <p>True if the list of custom libraries to be loaded in the development endpoint
     * needs to be updated, or False otherwise.</p>
     */
    inline void SetUpdateEtlLibraries(bool value) { m_updateEtlLibrariesHasBeenSet = true; m_updateEtlLibraries = value; }

    /**
     * <p>True if the list of custom libraries to be loaded in the development endpoint
     * needs to be updated, or False otherwise.</p>
     */
    inline UpdateDevEndpointRequest& WithUpdateEtlLibraries(bool value) { SetUpdateEtlLibraries(value); return *this;}

  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet;

    Aws::String m_publicKey;
    bool m_publicKeyHasBeenSet;

    Aws::Vector<Aws::String> m_addPublicKeys;
    bool m_addPublicKeysHasBeenSet;

    Aws::Vector<Aws::String> m_deletePublicKeys;
    bool m_deletePublicKeysHasBeenSet;

    DevEndpointCustomLibraries m_customLibraries;
    bool m_customLibrariesHasBeenSet;

    bool m_updateEtlLibraries;
    bool m_updateEtlLibrariesHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
