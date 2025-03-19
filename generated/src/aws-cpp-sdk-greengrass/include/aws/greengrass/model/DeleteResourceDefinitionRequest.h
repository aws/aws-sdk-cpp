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
  class DeleteResourceDefinitionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API DeleteResourceDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResourceDefinition"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The ID of the resource definition.
     */
    inline const Aws::String& GetResourceDefinitionId() const { return m_resourceDefinitionId; }
    inline bool ResourceDefinitionIdHasBeenSet() const { return m_resourceDefinitionIdHasBeenSet; }
    template<typename ResourceDefinitionIdT = Aws::String>
    void SetResourceDefinitionId(ResourceDefinitionIdT&& value) { m_resourceDefinitionIdHasBeenSet = true; m_resourceDefinitionId = std::forward<ResourceDefinitionIdT>(value); }
    template<typename ResourceDefinitionIdT = Aws::String>
    DeleteResourceDefinitionRequest& WithResourceDefinitionId(ResourceDefinitionIdT&& value) { SetResourceDefinitionId(std::forward<ResourceDefinitionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceDefinitionId;
    bool m_resourceDefinitionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
