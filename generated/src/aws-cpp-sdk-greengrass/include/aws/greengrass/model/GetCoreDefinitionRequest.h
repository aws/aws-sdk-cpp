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
  class GetCoreDefinitionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API GetCoreDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCoreDefinition"; }

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
    GetCoreDefinitionRequest& WithCoreDefinitionId(CoreDefinitionIdT&& value) { SetCoreDefinitionId(std::forward<CoreDefinitionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_coreDefinitionId;
    bool m_coreDefinitionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
