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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrass/model/Resource.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API CreateResourceDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    CreateResourceDefinitionVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResourceDefinitionVersion"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * A client token used to correlate requests and responses.
     */
    inline const Aws::String& GetAmznClientToken() const{ return m_amznClientToken; }

    /**
     * A client token used to correlate requests and responses.
     */
    inline bool AmznClientTokenHasBeenSet() const { return m_amznClientTokenHasBeenSet; }

    /**
     * A client token used to correlate requests and responses.
     */
    inline void SetAmznClientToken(const Aws::String& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = value; }

    /**
     * A client token used to correlate requests and responses.
     */
    inline void SetAmznClientToken(Aws::String&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::move(value); }

    /**
     * A client token used to correlate requests and responses.
     */
    inline void SetAmznClientToken(const char* value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken.assign(value); }

    /**
     * A client token used to correlate requests and responses.
     */
    inline CreateResourceDefinitionVersionRequest& WithAmznClientToken(const Aws::String& value) { SetAmznClientToken(value); return *this;}

    /**
     * A client token used to correlate requests and responses.
     */
    inline CreateResourceDefinitionVersionRequest& WithAmznClientToken(Aws::String&& value) { SetAmznClientToken(std::move(value)); return *this;}

    /**
     * A client token used to correlate requests and responses.
     */
    inline CreateResourceDefinitionVersionRequest& WithAmznClientToken(const char* value) { SetAmznClientToken(value); return *this;}


    /**
     * The ID of the resource definition.
     */
    inline const Aws::String& GetResourceDefinitionId() const{ return m_resourceDefinitionId; }

    /**
     * The ID of the resource definition.
     */
    inline bool ResourceDefinitionIdHasBeenSet() const { return m_resourceDefinitionIdHasBeenSet; }

    /**
     * The ID of the resource definition.
     */
    inline void SetResourceDefinitionId(const Aws::String& value) { m_resourceDefinitionIdHasBeenSet = true; m_resourceDefinitionId = value; }

    /**
     * The ID of the resource definition.
     */
    inline void SetResourceDefinitionId(Aws::String&& value) { m_resourceDefinitionIdHasBeenSet = true; m_resourceDefinitionId = std::move(value); }

    /**
     * The ID of the resource definition.
     */
    inline void SetResourceDefinitionId(const char* value) { m_resourceDefinitionIdHasBeenSet = true; m_resourceDefinitionId.assign(value); }

    /**
     * The ID of the resource definition.
     */
    inline CreateResourceDefinitionVersionRequest& WithResourceDefinitionId(const Aws::String& value) { SetResourceDefinitionId(value); return *this;}

    /**
     * The ID of the resource definition.
     */
    inline CreateResourceDefinitionVersionRequest& WithResourceDefinitionId(Aws::String&& value) { SetResourceDefinitionId(std::move(value)); return *this;}

    /**
     * The ID of the resource definition.
     */
    inline CreateResourceDefinitionVersionRequest& WithResourceDefinitionId(const char* value) { SetResourceDefinitionId(value); return *this;}


    /**
     * A list of resources.
     */
    inline const Aws::Vector<Resource>& GetResources() const{ return m_resources; }

    /**
     * A list of resources.
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * A list of resources.
     */
    inline void SetResources(const Aws::Vector<Resource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * A list of resources.
     */
    inline void SetResources(Aws::Vector<Resource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * A list of resources.
     */
    inline CreateResourceDefinitionVersionRequest& WithResources(const Aws::Vector<Resource>& value) { SetResources(value); return *this;}

    /**
     * A list of resources.
     */
    inline CreateResourceDefinitionVersionRequest& WithResources(Aws::Vector<Resource>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * A list of resources.
     */
    inline CreateResourceDefinitionVersionRequest& AddResources(const Resource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * A list of resources.
     */
    inline CreateResourceDefinitionVersionRequest& AddResources(Resource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet;

    Aws::String m_resourceDefinitionId;
    bool m_resourceDefinitionIdHasBeenSet;

    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
