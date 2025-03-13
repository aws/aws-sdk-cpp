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
  class GetCoreDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API GetCoreDefinitionVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCoreDefinitionVersion"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The ID of the core definition.
     */
    inline const Aws::String& GetCoreDefinitionId() const { return m_coreDefinitionId; }
    inline bool CoreDefinitionIdHasBeenSet() const { return m_coreDefinitionIdHasBeenSet; }
    template<typename CoreDefinitionIdT = Aws::String>
    void SetCoreDefinitionId(CoreDefinitionIdT&& value) { m_coreDefinitionIdHasBeenSet = true; m_coreDefinitionId = std::forward<CoreDefinitionIdT>(value); }
    template<typename CoreDefinitionIdT = Aws::String>
    GetCoreDefinitionVersionRequest& WithCoreDefinitionId(CoreDefinitionIdT&& value) { SetCoreDefinitionId(std::forward<CoreDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the core definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListCoreDefinitionVersions'' requests. If the version is the last one that
     * was associated with a core definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline const Aws::String& GetCoreDefinitionVersionId() const { return m_coreDefinitionVersionId; }
    inline bool CoreDefinitionVersionIdHasBeenSet() const { return m_coreDefinitionVersionIdHasBeenSet; }
    template<typename CoreDefinitionVersionIdT = Aws::String>
    void SetCoreDefinitionVersionId(CoreDefinitionVersionIdT&& value) { m_coreDefinitionVersionIdHasBeenSet = true; m_coreDefinitionVersionId = std::forward<CoreDefinitionVersionIdT>(value); }
    template<typename CoreDefinitionVersionIdT = Aws::String>
    GetCoreDefinitionVersionRequest& WithCoreDefinitionVersionId(CoreDefinitionVersionIdT&& value) { SetCoreDefinitionVersionId(std::forward<CoreDefinitionVersionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_coreDefinitionId;
    bool m_coreDefinitionIdHasBeenSet = false;

    Aws::String m_coreDefinitionVersionId;
    bool m_coreDefinitionVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
