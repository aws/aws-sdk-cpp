/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateResourceDefinitionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API UpdateResourceDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResourceDefinition"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The name of the definition.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateResourceDefinitionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateResourceDefinitionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateResourceDefinitionRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the resource definition.
     */
    inline const Aws::String& GetResourceDefinitionId() const{ return m_resourceDefinitionId; }
    inline bool ResourceDefinitionIdHasBeenSet() const { return m_resourceDefinitionIdHasBeenSet; }
    inline void SetResourceDefinitionId(const Aws::String& value) { m_resourceDefinitionIdHasBeenSet = true; m_resourceDefinitionId = value; }
    inline void SetResourceDefinitionId(Aws::String&& value) { m_resourceDefinitionIdHasBeenSet = true; m_resourceDefinitionId = std::move(value); }
    inline void SetResourceDefinitionId(const char* value) { m_resourceDefinitionIdHasBeenSet = true; m_resourceDefinitionId.assign(value); }
    inline UpdateResourceDefinitionRequest& WithResourceDefinitionId(const Aws::String& value) { SetResourceDefinitionId(value); return *this;}
    inline UpdateResourceDefinitionRequest& WithResourceDefinitionId(Aws::String&& value) { SetResourceDefinitionId(std::move(value)); return *this;}
    inline UpdateResourceDefinitionRequest& WithResourceDefinitionId(const char* value) { SetResourceDefinitionId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_resourceDefinitionId;
    bool m_resourceDefinitionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
