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
#include <aws/chime/Chime_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Chime
{
namespace Model
{

  /**
   * <p>The logging configuration associated with an Amazon Chime Voice Connector.
   * Specifies whether SIP message logs are enabled for sending to Amazon CloudWatch
   * Logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/LoggingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_CHIME_API LoggingConfiguration
  {
  public:
    LoggingConfiguration();
    LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When true, enables SIP message logs for sending to Amazon CloudWatch
     * Logs.</p>
     */
    inline bool GetEnableSIPLogs() const{ return m_enableSIPLogs; }

    /**
     * <p>When true, enables SIP message logs for sending to Amazon CloudWatch
     * Logs.</p>
     */
    inline bool EnableSIPLogsHasBeenSet() const { return m_enableSIPLogsHasBeenSet; }

    /**
     * <p>When true, enables SIP message logs for sending to Amazon CloudWatch
     * Logs.</p>
     */
    inline void SetEnableSIPLogs(bool value) { m_enableSIPLogsHasBeenSet = true; m_enableSIPLogs = value; }

    /**
     * <p>When true, enables SIP message logs for sending to Amazon CloudWatch
     * Logs.</p>
     */
    inline LoggingConfiguration& WithEnableSIPLogs(bool value) { SetEnableSIPLogs(value); return *this;}

  private:

    bool m_enableSIPLogs;
    bool m_enableSIPLogsHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
