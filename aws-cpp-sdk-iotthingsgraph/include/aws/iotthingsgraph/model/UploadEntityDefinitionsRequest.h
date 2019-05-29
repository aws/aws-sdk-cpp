/*
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
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/IoTThingsGraphRequest.h>
#include <aws/iotthingsgraph/model/DefinitionDocument.h>
#include <utility>

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

  /**
   */
  class AWS_IOTTHINGSGRAPH_API UploadEntityDefinitionsRequest : public IoTThingsGraphRequest
  {
  public:
    UploadEntityDefinitionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UploadEntityDefinitions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>DefinitionDocument</code> that defines the updated entities.</p>
     */
    inline const DefinitionDocument& GetDocument() const{ return m_document; }

    /**
     * <p>The <code>DefinitionDocument</code> that defines the updated entities.</p>
     */
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }

    /**
     * <p>The <code>DefinitionDocument</code> that defines the updated entities.</p>
     */
    inline void SetDocument(const DefinitionDocument& value) { m_documentHasBeenSet = true; m_document = value; }

    /**
     * <p>The <code>DefinitionDocument</code> that defines the updated entities.</p>
     */
    inline void SetDocument(DefinitionDocument&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }

    /**
     * <p>The <code>DefinitionDocument</code> that defines the updated entities.</p>
     */
    inline UploadEntityDefinitionsRequest& WithDocument(const DefinitionDocument& value) { SetDocument(value); return *this;}

    /**
     * <p>The <code>DefinitionDocument</code> that defines the updated entities.</p>
     */
    inline UploadEntityDefinitionsRequest& WithDocument(DefinitionDocument&& value) { SetDocument(std::move(value)); return *this;}


    /**
     * <p>A Boolean that specifies whether to synchronize with the latest version of
     * the public namespace. If set to <code>true</code>, the upload will create a new
     * namespace version.</p>
     */
    inline bool GetSyncWithPublicNamespace() const{ return m_syncWithPublicNamespace; }

    /**
     * <p>A Boolean that specifies whether to synchronize with the latest version of
     * the public namespace. If set to <code>true</code>, the upload will create a new
     * namespace version.</p>
     */
    inline bool SyncWithPublicNamespaceHasBeenSet() const { return m_syncWithPublicNamespaceHasBeenSet; }

    /**
     * <p>A Boolean that specifies whether to synchronize with the latest version of
     * the public namespace. If set to <code>true</code>, the upload will create a new
     * namespace version.</p>
     */
    inline void SetSyncWithPublicNamespace(bool value) { m_syncWithPublicNamespaceHasBeenSet = true; m_syncWithPublicNamespace = value; }

    /**
     * <p>A Boolean that specifies whether to synchronize with the latest version of
     * the public namespace. If set to <code>true</code>, the upload will create a new
     * namespace version.</p>
     */
    inline UploadEntityDefinitionsRequest& WithSyncWithPublicNamespace(bool value) { SetSyncWithPublicNamespace(value); return *this;}


    /**
     * <p>A Boolean that specifies whether to deprecate all entities in the latest
     * version before uploading the new <code>DefinitionDocument</code>. If set to
     * <code>true</code>, the upload will create a new namespace version.</p>
     */
    inline bool GetDeprecateExistingEntities() const{ return m_deprecateExistingEntities; }

    /**
     * <p>A Boolean that specifies whether to deprecate all entities in the latest
     * version before uploading the new <code>DefinitionDocument</code>. If set to
     * <code>true</code>, the upload will create a new namespace version.</p>
     */
    inline bool DeprecateExistingEntitiesHasBeenSet() const { return m_deprecateExistingEntitiesHasBeenSet; }

    /**
     * <p>A Boolean that specifies whether to deprecate all entities in the latest
     * version before uploading the new <code>DefinitionDocument</code>. If set to
     * <code>true</code>, the upload will create a new namespace version.</p>
     */
    inline void SetDeprecateExistingEntities(bool value) { m_deprecateExistingEntitiesHasBeenSet = true; m_deprecateExistingEntities = value; }

    /**
     * <p>A Boolean that specifies whether to deprecate all entities in the latest
     * version before uploading the new <code>DefinitionDocument</code>. If set to
     * <code>true</code>, the upload will create a new namespace version.</p>
     */
    inline UploadEntityDefinitionsRequest& WithDeprecateExistingEntities(bool value) { SetDeprecateExistingEntities(value); return *this;}

  private:

    DefinitionDocument m_document;
    bool m_documentHasBeenSet;

    bool m_syncWithPublicNamespace;
    bool m_syncWithPublicNamespaceHasBeenSet;

    bool m_deprecateExistingEntities;
    bool m_deprecateExistingEntitiesHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
