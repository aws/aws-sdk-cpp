/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Logging configuration of the SIP media application.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/SipMediaApplicationLoggingConfiguration">AWS
   * API Reference</a></p>
   */
  class SipMediaApplicationLoggingConfiguration
  {
  public:
    AWS_CHIME_API SipMediaApplicationLoggingConfiguration();
    AWS_CHIME_API SipMediaApplicationLoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API SipMediaApplicationLoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables application message logs for the SIP media application.</p>
     */
    inline bool GetEnableSipMediaApplicationMessageLogs() const{ return m_enableSipMediaApplicationMessageLogs; }

    /**
     * <p>Enables application message logs for the SIP media application.</p>
     */
    inline bool EnableSipMediaApplicationMessageLogsHasBeenSet() const { return m_enableSipMediaApplicationMessageLogsHasBeenSet; }

    /**
     * <p>Enables application message logs for the SIP media application.</p>
     */
    inline void SetEnableSipMediaApplicationMessageLogs(bool value) { m_enableSipMediaApplicationMessageLogsHasBeenSet = true; m_enableSipMediaApplicationMessageLogs = value; }

    /**
     * <p>Enables application message logs for the SIP media application.</p>
     */
    inline SipMediaApplicationLoggingConfiguration& WithEnableSipMediaApplicationMessageLogs(bool value) { SetEnableSipMediaApplicationMessageLogs(value); return *this;}

  private:

    bool m_enableSipMediaApplicationMessageLogs;
    bool m_enableSipMediaApplicationMessageLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
