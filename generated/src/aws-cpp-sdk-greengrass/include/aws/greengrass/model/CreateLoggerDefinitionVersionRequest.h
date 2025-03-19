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
    AWS_GREENGRASS_API CreateLoggerDefinitionVersionRequest() = default;

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
    inline const Aws::String& GetAmznClientToken() const { return m_amznClientToken; }
    inline bool AmznClientTokenHasBeenSet() const { return m_amznClientTokenHasBeenSet; }
    template<typename AmznClientTokenT = Aws::String>
    void SetAmznClientToken(AmznClientTokenT&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::forward<AmznClientTokenT>(value); }
    template<typename AmznClientTokenT = Aws::String>
    CreateLoggerDefinitionVersionRequest& WithAmznClientToken(AmznClientTokenT&& value) { SetAmznClientToken(std::forward<AmznClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the logger definition.
     */
    inline const Aws::String& GetLoggerDefinitionId() const { return m_loggerDefinitionId; }
    inline bool LoggerDefinitionIdHasBeenSet() const { return m_loggerDefinitionIdHasBeenSet; }
    template<typename LoggerDefinitionIdT = Aws::String>
    void SetLoggerDefinitionId(LoggerDefinitionIdT&& value) { m_loggerDefinitionIdHasBeenSet = true; m_loggerDefinitionId = std::forward<LoggerDefinitionIdT>(value); }
    template<typename LoggerDefinitionIdT = Aws::String>
    CreateLoggerDefinitionVersionRequest& WithLoggerDefinitionId(LoggerDefinitionIdT&& value) { SetLoggerDefinitionId(std::forward<LoggerDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A list of loggers.
     */
    inline const Aws::Vector<Logger>& GetLoggers() const { return m_loggers; }
    inline bool LoggersHasBeenSet() const { return m_loggersHasBeenSet; }
    template<typename LoggersT = Aws::Vector<Logger>>
    void SetLoggers(LoggersT&& value) { m_loggersHasBeenSet = true; m_loggers = std::forward<LoggersT>(value); }
    template<typename LoggersT = Aws::Vector<Logger>>
    CreateLoggerDefinitionVersionRequest& WithLoggers(LoggersT&& value) { SetLoggers(std::forward<LoggersT>(value)); return *this;}
    template<typename LoggersT = Logger>
    CreateLoggerDefinitionVersionRequest& AddLoggers(LoggersT&& value) { m_loggersHasBeenSet = true; m_loggers.emplace_back(std::forward<LoggersT>(value)); return *this; }
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
