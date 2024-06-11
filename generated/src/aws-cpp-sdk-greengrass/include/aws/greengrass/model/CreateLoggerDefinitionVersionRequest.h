/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateLoggerDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API CreateLoggerDefinitionVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLoggerDefinitionVersion"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;

    AWS_GREENGRASS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * A client token used to correlate requests and responses.
     */
    inline const Aws::String& GetAmznClientToken() const{ return m_amznClientToken; }
    inline bool AmznClientTokenHasBeenSet() const { return m_amznClientTokenHasBeenSet; }
    inline void SetAmznClientToken(const Aws::String& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = value; }
    inline void SetAmznClientToken(Aws::String&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::move(value); }
    inline void SetAmznClientToken(const char* value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken.assign(value); }
    inline CreateLoggerDefinitionVersionRequest& WithAmznClientToken(const Aws::String& value) { SetAmznClientToken(value); return *this;}
    inline CreateLoggerDefinitionVersionRequest& WithAmznClientToken(Aws::String&& value) { SetAmznClientToken(std::move(value)); return *this;}
    inline CreateLoggerDefinitionVersionRequest& WithAmznClientToken(const char* value) { SetAmznClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the logger definition.
     */
    inline const Aws::String& GetLoggerDefinitionId() const{ return m_loggerDefinitionId; }
    inline bool LoggerDefinitionIdHasBeenSet() const { return m_loggerDefinitionIdHasBeenSet; }
    inline void SetLoggerDefinitionId(const Aws::String& value) { m_loggerDefinitionIdHasBeenSet = true; m_loggerDefinitionId = value; }
    inline void SetLoggerDefinitionId(Aws::String&& value) { m_loggerDefinitionIdHasBeenSet = true; m_loggerDefinitionId = std::move(value); }
    inline void SetLoggerDefinitionId(const char* value) { m_loggerDefinitionIdHasBeenSet = true; m_loggerDefinitionId.assign(value); }
    inline CreateLoggerDefinitionVersionRequest& WithLoggerDefinitionId(const Aws::String& value) { SetLoggerDefinitionId(value); return *this;}
    inline CreateLoggerDefinitionVersionRequest& WithLoggerDefinitionId(Aws::String&& value) { SetLoggerDefinitionId(std::move(value)); return *this;}
    inline CreateLoggerDefinitionVersionRequest& WithLoggerDefinitionId(const char* value) { SetLoggerDefinitionId(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of loggers.
     */
    inline const Aws::Vector<Logger>& GetLoggers() const{ return m_loggers; }
    inline bool LoggersHasBeenSet() const { return m_loggersHasBeenSet; }
    inline void SetLoggers(const Aws::Vector<Logger>& value) { m_loggersHasBeenSet = true; m_loggers = value; }
    inline void SetLoggers(Aws::Vector<Logger>&& value) { m_loggersHasBeenSet = true; m_loggers = std::move(value); }
    inline CreateLoggerDefinitionVersionRequest& WithLoggers(const Aws::Vector<Logger>& value) { SetLoggers(value); return *this;}
    inline CreateLoggerDefinitionVersionRequest& WithLoggers(Aws::Vector<Logger>&& value) { SetLoggers(std::move(value)); return *this;}
    inline CreateLoggerDefinitionVersionRequest& AddLoggers(const Logger& value) { m_loggersHasBeenSet = true; m_loggers.push_back(value); return *this; }
    inline CreateLoggerDefinitionVersionRequest& AddLoggers(Logger&& value) { m_loggersHasBeenSet = true; m_loggers.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet = false;

    Aws::String m_loggerDefinitionId;
    bool m_loggerDefinitionIdHasBeenSet = false;

    Aws::Vector<Logger> m_loggers;
    bool m_loggersHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
