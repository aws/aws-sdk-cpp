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
  class GetResourceDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API GetResourceDefinitionVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceDefinitionVersion"; }

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
    GetResourceDefinitionVersionRequest& WithResourceDefinitionId(ResourceDefinitionIdT&& value) { SetResourceDefinitionId(std::forward<ResourceDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the resource definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListResourceDefinitionVersions'' requests. If the version is the last one
     * that was associated with a resource definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline const Aws::String& GetResourceDefinitionVersionId() const { return m_resourceDefinitionVersionId; }
    inline bool ResourceDefinitionVersionIdHasBeenSet() const { return m_resourceDefinitionVersionIdHasBeenSet; }
    template<typename ResourceDefinitionVersionIdT = Aws::String>
    void SetResourceDefinitionVersionId(ResourceDefinitionVersionIdT&& value) { m_resourceDefinitionVersionIdHasBeenSet = true; m_resourceDefinitionVersionId = std::forward<ResourceDefinitionVersionIdT>(value); }
    template<typename ResourceDefinitionVersionIdT = Aws::String>
    GetResourceDefinitionVersionRequest& WithResourceDefinitionVersionId(ResourceDefinitionVersionIdT&& value) { SetResourceDefinitionVersionId(std::forward<ResourceDefinitionVersionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceDefinitionId;
    bool m_resourceDefinitionIdHasBeenSet = false;

    Aws::String m_resourceDefinitionVersionId;
    bool m_resourceDefinitionVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
