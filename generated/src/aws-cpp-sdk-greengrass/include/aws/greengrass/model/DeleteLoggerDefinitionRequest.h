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
  class DeleteLoggerDefinitionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API DeleteLoggerDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteLoggerDefinition"; }

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
    DeleteLoggerDefinitionRequest& WithLoggerDefinitionId(LoggerDefinitionIdT&& value) { SetLoggerDefinitionId(std::forward<LoggerDefinitionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_loggerDefinitionId;
    bool m_loggerDefinitionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
