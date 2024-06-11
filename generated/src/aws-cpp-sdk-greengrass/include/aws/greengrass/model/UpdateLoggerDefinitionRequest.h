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
    AWS_GREENGRASS_API UpdateLoggerDefinitionRequest();

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
    inline const Aws::String& GetLoggerDefinitionId() const{ return m_loggerDefinitionId; }
    inline bool LoggerDefinitionIdHasBeenSet() const { return m_loggerDefinitionIdHasBeenSet; }
    inline void SetLoggerDefinitionId(const Aws::String& value) { m_loggerDefinitionIdHasBeenSet = true; m_loggerDefinitionId = value; }
    inline void SetLoggerDefinitionId(Aws::String&& value) { m_loggerDefinitionIdHasBeenSet = true; m_loggerDefinitionId = std::move(value); }
    inline void SetLoggerDefinitionId(const char* value) { m_loggerDefinitionIdHasBeenSet = true; m_loggerDefinitionId.assign(value); }
    inline UpdateLoggerDefinitionRequest& WithLoggerDefinitionId(const Aws::String& value) { SetLoggerDefinitionId(value); return *this;}
    inline UpdateLoggerDefinitionRequest& WithLoggerDefinitionId(Aws::String&& value) { SetLoggerDefinitionId(std::move(value)); return *this;}
    inline UpdateLoggerDefinitionRequest& WithLoggerDefinitionId(const char* value) { SetLoggerDefinitionId(value); return *this;}
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
    inline UpdateLoggerDefinitionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateLoggerDefinitionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateLoggerDefinitionRequest& WithName(const char* value) { SetName(value); return *this;}
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
