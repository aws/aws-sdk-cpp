/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrass/model/Logger.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API CreateLoggerDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    CreateLoggerDefinitionVersionRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLoggerDefinitionVersion"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * The client token used to request idempotent operations.
     */
    inline const Aws::String& GetAmznClientToken() const{ return m_amznClientToken; }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(const Aws::String& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = value; }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(Aws::String&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::move(value); }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(const char* value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken.assign(value); }

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateLoggerDefinitionVersionRequest& WithAmznClientToken(const Aws::String& value) { SetAmznClientToken(value); return *this;}

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateLoggerDefinitionVersionRequest& WithAmznClientToken(Aws::String&& value) { SetAmznClientToken(std::move(value)); return *this;}

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateLoggerDefinitionVersionRequest& WithAmznClientToken(const char* value) { SetAmznClientToken(value); return *this;}


    /**
     * logger definition Id
     */
    inline const Aws::String& GetLoggerDefinitionId() const{ return m_loggerDefinitionId; }

    /**
     * logger definition Id
     */
    inline void SetLoggerDefinitionId(const Aws::String& value) { m_loggerDefinitionIdHasBeenSet = true; m_loggerDefinitionId = value; }

    /**
     * logger definition Id
     */
    inline void SetLoggerDefinitionId(Aws::String&& value) { m_loggerDefinitionIdHasBeenSet = true; m_loggerDefinitionId = std::move(value); }

    /**
     * logger definition Id
     */
    inline void SetLoggerDefinitionId(const char* value) { m_loggerDefinitionIdHasBeenSet = true; m_loggerDefinitionId.assign(value); }

    /**
     * logger definition Id
     */
    inline CreateLoggerDefinitionVersionRequest& WithLoggerDefinitionId(const Aws::String& value) { SetLoggerDefinitionId(value); return *this;}

    /**
     * logger definition Id
     */
    inline CreateLoggerDefinitionVersionRequest& WithLoggerDefinitionId(Aws::String&& value) { SetLoggerDefinitionId(std::move(value)); return *this;}

    /**
     * logger definition Id
     */
    inline CreateLoggerDefinitionVersionRequest& WithLoggerDefinitionId(const char* value) { SetLoggerDefinitionId(value); return *this;}


    /**
     * List of loggers.
     */
    inline const Aws::Vector<Logger>& GetLoggers() const{ return m_loggers; }

    /**
     * List of loggers.
     */
    inline void SetLoggers(const Aws::Vector<Logger>& value) { m_loggersHasBeenSet = true; m_loggers = value; }

    /**
     * List of loggers.
     */
    inline void SetLoggers(Aws::Vector<Logger>&& value) { m_loggersHasBeenSet = true; m_loggers = std::move(value); }

    /**
     * List of loggers.
     */
    inline CreateLoggerDefinitionVersionRequest& WithLoggers(const Aws::Vector<Logger>& value) { SetLoggers(value); return *this;}

    /**
     * List of loggers.
     */
    inline CreateLoggerDefinitionVersionRequest& WithLoggers(Aws::Vector<Logger>&& value) { SetLoggers(std::move(value)); return *this;}

    /**
     * List of loggers.
     */
    inline CreateLoggerDefinitionVersionRequest& AddLoggers(const Logger& value) { m_loggersHasBeenSet = true; m_loggers.push_back(value); return *this; }

    /**
     * List of loggers.
     */
    inline CreateLoggerDefinitionVersionRequest& AddLoggers(Logger&& value) { m_loggersHasBeenSet = true; m_loggers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet;

    Aws::String m_loggerDefinitionId;
    bool m_loggerDefinitionIdHasBeenSet;

    Aws::Vector<Logger> m_loggers;
    bool m_loggersHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
