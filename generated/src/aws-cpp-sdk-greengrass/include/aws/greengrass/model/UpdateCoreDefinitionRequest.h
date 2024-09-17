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
  class UpdateCoreDefinitionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API UpdateCoreDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCoreDefinition"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The ID of the core definition.
     */
    inline const Aws::String& GetCoreDefinitionId() const{ return m_coreDefinitionId; }
    inline bool CoreDefinitionIdHasBeenSet() const { return m_coreDefinitionIdHasBeenSet; }
    inline void SetCoreDefinitionId(const Aws::String& value) { m_coreDefinitionIdHasBeenSet = true; m_coreDefinitionId = value; }
    inline void SetCoreDefinitionId(Aws::String&& value) { m_coreDefinitionIdHasBeenSet = true; m_coreDefinitionId = std::move(value); }
    inline void SetCoreDefinitionId(const char* value) { m_coreDefinitionIdHasBeenSet = true; m_coreDefinitionId.assign(value); }
    inline UpdateCoreDefinitionRequest& WithCoreDefinitionId(const Aws::String& value) { SetCoreDefinitionId(value); return *this;}
    inline UpdateCoreDefinitionRequest& WithCoreDefinitionId(Aws::String&& value) { SetCoreDefinitionId(std::move(value)); return *this;}
    inline UpdateCoreDefinitionRequest& WithCoreDefinitionId(const char* value) { SetCoreDefinitionId(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the definition.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateCoreDefinitionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateCoreDefinitionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateCoreDefinitionRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_coreDefinitionId;
    bool m_coreDefinitionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
