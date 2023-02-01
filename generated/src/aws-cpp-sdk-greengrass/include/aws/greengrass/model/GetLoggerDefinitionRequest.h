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
  class GetLoggerDefinitionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API GetLoggerDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLoggerDefinition"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;


    /**
     * The ID of the logger definition.
     */
    inline const Aws::String& GetLoggerDefinitionId() const{ return m_loggerDefinitionId; }

    /**
     * The ID of the logger definition.
     */
    inline bool LoggerDefinitionIdHasBeenSet() const { return m_loggerDefinitionIdHasBeenSet; }

    /**
     * The ID of the logger definition.
     */
    inline void SetLoggerDefinitionId(const Aws::String& value) { m_loggerDefinitionIdHasBeenSet = true; m_loggerDefinitionId = value; }

    /**
     * The ID of the logger definition.
     */
    inline void SetLoggerDefinitionId(Aws::String&& value) { m_loggerDefinitionIdHasBeenSet = true; m_loggerDefinitionId = std::move(value); }

    /**
     * The ID of the logger definition.
     */
    inline void SetLoggerDefinitionId(const char* value) { m_loggerDefinitionIdHasBeenSet = true; m_loggerDefinitionId.assign(value); }

    /**
     * The ID of the logger definition.
     */
    inline GetLoggerDefinitionRequest& WithLoggerDefinitionId(const Aws::String& value) { SetLoggerDefinitionId(value); return *this;}

    /**
     * The ID of the logger definition.
     */
    inline GetLoggerDefinitionRequest& WithLoggerDefinitionId(Aws::String&& value) { SetLoggerDefinitionId(std::move(value)); return *this;}

    /**
     * The ID of the logger definition.
     */
    inline GetLoggerDefinitionRequest& WithLoggerDefinitionId(const char* value) { SetLoggerDefinitionId(value); return *this;}

  private:

    Aws::String m_loggerDefinitionId;
    bool m_loggerDefinitionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
