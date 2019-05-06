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
#include <aws/greengrass/model/Core.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API CreateCoreDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    CreateCoreDefinitionVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCoreDefinitionVersion"; }

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
    inline CreateCoreDefinitionVersionRequest& WithAmznClientToken(const Aws::String& value) { SetAmznClientToken(value); return *this;}

    /**
     * A client token used to correlate requests and responses.
     */
    inline CreateCoreDefinitionVersionRequest& WithAmznClientToken(Aws::String&& value) { SetAmznClientToken(std::move(value)); return *this;}

    /**
     * A client token used to correlate requests and responses.
     */
    inline CreateCoreDefinitionVersionRequest& WithAmznClientToken(const char* value) { SetAmznClientToken(value); return *this;}


    /**
     * The ID of the core definition.
     */
    inline const Aws::String& GetCoreDefinitionId() const{ return m_coreDefinitionId; }

    /**
     * The ID of the core definition.
     */
    inline bool CoreDefinitionIdHasBeenSet() const { return m_coreDefinitionIdHasBeenSet; }

    /**
     * The ID of the core definition.
     */
    inline void SetCoreDefinitionId(const Aws::String& value) { m_coreDefinitionIdHasBeenSet = true; m_coreDefinitionId = value; }

    /**
     * The ID of the core definition.
     */
    inline void SetCoreDefinitionId(Aws::String&& value) { m_coreDefinitionIdHasBeenSet = true; m_coreDefinitionId = std::move(value); }

    /**
     * The ID of the core definition.
     */
    inline void SetCoreDefinitionId(const char* value) { m_coreDefinitionIdHasBeenSet = true; m_coreDefinitionId.assign(value); }

    /**
     * The ID of the core definition.
     */
    inline CreateCoreDefinitionVersionRequest& WithCoreDefinitionId(const Aws::String& value) { SetCoreDefinitionId(value); return *this;}

    /**
     * The ID of the core definition.
     */
    inline CreateCoreDefinitionVersionRequest& WithCoreDefinitionId(Aws::String&& value) { SetCoreDefinitionId(std::move(value)); return *this;}

    /**
     * The ID of the core definition.
     */
    inline CreateCoreDefinitionVersionRequest& WithCoreDefinitionId(const char* value) { SetCoreDefinitionId(value); return *this;}


    /**
     * A list of cores in the core definition version.
     */
    inline const Aws::Vector<Core>& GetCores() const{ return m_cores; }

    /**
     * A list of cores in the core definition version.
     */
    inline bool CoresHasBeenSet() const { return m_coresHasBeenSet; }

    /**
     * A list of cores in the core definition version.
     */
    inline void SetCores(const Aws::Vector<Core>& value) { m_coresHasBeenSet = true; m_cores = value; }

    /**
     * A list of cores in the core definition version.
     */
    inline void SetCores(Aws::Vector<Core>&& value) { m_coresHasBeenSet = true; m_cores = std::move(value); }

    /**
     * A list of cores in the core definition version.
     */
    inline CreateCoreDefinitionVersionRequest& WithCores(const Aws::Vector<Core>& value) { SetCores(value); return *this;}

    /**
     * A list of cores in the core definition version.
     */
    inline CreateCoreDefinitionVersionRequest& WithCores(Aws::Vector<Core>&& value) { SetCores(std::move(value)); return *this;}

    /**
     * A list of cores in the core definition version.
     */
    inline CreateCoreDefinitionVersionRequest& AddCores(const Core& value) { m_coresHasBeenSet = true; m_cores.push_back(value); return *this; }

    /**
     * A list of cores in the core definition version.
     */
    inline CreateCoreDefinitionVersionRequest& AddCores(Core&& value) { m_coresHasBeenSet = true; m_cores.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet;

    Aws::String m_coreDefinitionId;
    bool m_coreDefinitionIdHasBeenSet;

    Aws::Vector<Core> m_cores;
    bool m_coresHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
