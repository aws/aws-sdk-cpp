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
  class UpdateLoggerDefinitionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API UpdateLoggerDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLoggerDefinition"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The ID of the logger definition.
     */
    inline const Aws::String& GetLoggerDefinitionId() const { return m_loggerDefinitionId; }
    inline bool LoggerDefinitionIdHasBeenSet() const { return m_loggerDefinitionIdHasBeenSet; }
    template<typename LoggerDefinitionIdT = Aws::String>
    void SetLoggerDefinitionId(LoggerDefinitionIdT&& value) { m_loggerDefinitionIdHasBeenSet = true; m_loggerDefinitionId = std::forward<LoggerDefinitionIdT>(value); }
    template<typename LoggerDefinitionIdT = Aws::String>
    UpdateLoggerDefinitionRequest& WithLoggerDefinitionId(LoggerDefinitionIdT&& value) { SetLoggerDefinitionId(std::forward<LoggerDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the definition.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateLoggerDefinitionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_loggerDefinitionId;
    bool m_loggerDefinitionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
