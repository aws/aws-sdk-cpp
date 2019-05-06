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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicecatalog/model/ServiceActionDefinitionKey.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API UpdateServiceActionRequest : public ServiceCatalogRequest
  {
  public:
    UpdateServiceActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceAction"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The self-service action identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The self-service action identifier.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The self-service action identifier.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The self-service action identifier.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The self-service action identifier.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The self-service action identifier.</p>
     */
    inline UpdateServiceActionRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The self-service action identifier.</p>
     */
    inline UpdateServiceActionRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The self-service action identifier.</p>
     */
    inline UpdateServiceActionRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The self-service action name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The self-service action name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The self-service action name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The self-service action name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The self-service action name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The self-service action name.</p>
     */
    inline UpdateServiceActionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The self-service action name.</p>
     */
    inline UpdateServiceActionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The self-service action name.</p>
     */
    inline UpdateServiceActionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A map that defines the self-service action.</p>
     */
    inline const Aws::Map<ServiceActionDefinitionKey, Aws::String>& GetDefinition() const{ return m_definition; }

    /**
     * <p>A map that defines the self-service action.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>A map that defines the self-service action.</p>
     */
    inline void SetDefinition(const Aws::Map<ServiceActionDefinitionKey, Aws::String>& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>A map that defines the self-service action.</p>
     */
    inline void SetDefinition(Aws::Map<ServiceActionDefinitionKey, Aws::String>&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>A map that defines the self-service action.</p>
     */
    inline UpdateServiceActionRequest& WithDefinition(const Aws::Map<ServiceActionDefinitionKey, Aws::String>& value) { SetDefinition(value); return *this;}

    /**
     * <p>A map that defines the self-service action.</p>
     */
    inline UpdateServiceActionRequest& WithDefinition(Aws::Map<ServiceActionDefinitionKey, Aws::String>&& value) { SetDefinition(std::move(value)); return *this;}

    /**
     * <p>A map that defines the self-service action.</p>
     */
    inline UpdateServiceActionRequest& AddDefinition(const ServiceActionDefinitionKey& key, const Aws::String& value) { m_definitionHasBeenSet = true; m_definition.emplace(key, value); return *this; }

    /**
     * <p>A map that defines the self-service action.</p>
     */
    inline UpdateServiceActionRequest& AddDefinition(ServiceActionDefinitionKey&& key, const Aws::String& value) { m_definitionHasBeenSet = true; m_definition.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that defines the self-service action.</p>
     */
    inline UpdateServiceActionRequest& AddDefinition(const ServiceActionDefinitionKey& key, Aws::String&& value) { m_definitionHasBeenSet = true; m_definition.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that defines the self-service action.</p>
     */
    inline UpdateServiceActionRequest& AddDefinition(ServiceActionDefinitionKey&& key, Aws::String&& value) { m_definitionHasBeenSet = true; m_definition.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that defines the self-service action.</p>
     */
    inline UpdateServiceActionRequest& AddDefinition(ServiceActionDefinitionKey&& key, const char* value) { m_definitionHasBeenSet = true; m_definition.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that defines the self-service action.</p>
     */
    inline UpdateServiceActionRequest& AddDefinition(const ServiceActionDefinitionKey& key, const char* value) { m_definitionHasBeenSet = true; m_definition.emplace(key, value); return *this; }


    /**
     * <p>The self-service action description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The self-service action description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The self-service action description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The self-service action description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The self-service action description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The self-service action description.</p>
     */
    inline UpdateServiceActionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The self-service action description.</p>
     */
    inline UpdateServiceActionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The self-service action description.</p>
     */
    inline UpdateServiceActionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline UpdateServiceActionRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline UpdateServiceActionRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline UpdateServiceActionRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Map<ServiceActionDefinitionKey, Aws::String> m_definition;
    bool m_definitionHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
