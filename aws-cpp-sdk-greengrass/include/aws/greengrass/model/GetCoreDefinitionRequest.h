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
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API GetCoreDefinitionRequest : public GreengrassRequest
  {
  public:
    GetCoreDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCoreDefinition"; }

    Aws::String SerializePayload() const override;


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
    inline GetCoreDefinitionRequest& WithCoreDefinitionId(const Aws::String& value) { SetCoreDefinitionId(value); return *this;}

    /**
     * The ID of the core definition.
     */
    inline GetCoreDefinitionRequest& WithCoreDefinitionId(Aws::String&& value) { SetCoreDefinitionId(std::move(value)); return *this;}

    /**
     * The ID of the core definition.
     */
    inline GetCoreDefinitionRequest& WithCoreDefinitionId(const char* value) { SetCoreDefinitionId(value); return *this;}

  private:

    Aws::String m_coreDefinitionId;
    bool m_coreDefinitionIdHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
