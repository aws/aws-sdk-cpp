/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/CommandPluginStatus.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * Describes plugin details.
   */
  class AWS_SSM_API CommandPlugin
  {
  public:
    CommandPlugin();
    CommandPlugin(const Aws::Utils::Json::JsonValue& jsonValue);
    CommandPlugin& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * The name of the plugin. Must be one of the following: aws:updateAgent,
     * aws:domainjoin, aws:applications, aws:runPowerShellScript, aws:psmodule,
     * aws:cloudWatch, aws:runShellScript, or aws:updateSSMAgent.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the plugin. Must be one of the following: aws:updateAgent,
     * aws:domainjoin, aws:applications, aws:runPowerShellScript, aws:psmodule,
     * aws:cloudWatch, aws:runShellScript, or aws:updateSSMAgent.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the plugin. Must be one of the following: aws:updateAgent,
     * aws:domainjoin, aws:applications, aws:runPowerShellScript, aws:psmodule,
     * aws:cloudWatch, aws:runShellScript, or aws:updateSSMAgent.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the plugin. Must be one of the following: aws:updateAgent,
     * aws:domainjoin, aws:applications, aws:runPowerShellScript, aws:psmodule,
     * aws:cloudWatch, aws:runShellScript, or aws:updateSSMAgent.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the plugin. Must be one of the following: aws:updateAgent,
     * aws:domainjoin, aws:applications, aws:runPowerShellScript, aws:psmodule,
     * aws:cloudWatch, aws:runShellScript, or aws:updateSSMAgent.
     */
    inline CommandPlugin& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the plugin. Must be one of the following: aws:updateAgent,
     * aws:domainjoin, aws:applications, aws:runPowerShellScript, aws:psmodule,
     * aws:cloudWatch, aws:runShellScript, or aws:updateSSMAgent.
     */
    inline CommandPlugin& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * The name of the plugin. Must be one of the following: aws:updateAgent,
     * aws:domainjoin, aws:applications, aws:runPowerShellScript, aws:psmodule,
     * aws:cloudWatch, aws:runShellScript, or aws:updateSSMAgent.
     */
    inline CommandPlugin& WithName(const char* value) { SetName(value); return *this;}

    /**
     * The status of this plugin. You can execute a document with multiple plugins.
     */
    inline const CommandPluginStatus& GetStatus() const{ return m_status; }

    /**
     * The status of this plugin. You can execute a document with multiple plugins.
     */
    inline void SetStatus(const CommandPluginStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * The status of this plugin. You can execute a document with multiple plugins.
     */
    inline void SetStatus(CommandPluginStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * The status of this plugin. You can execute a document with multiple plugins.
     */
    inline CommandPlugin& WithStatus(const CommandPluginStatus& value) { SetStatus(value); return *this;}

    /**
     * The status of this plugin. You can execute a document with multiple plugins.
     */
    inline CommandPlugin& WithStatus(CommandPluginStatus&& value) { SetStatus(value); return *this;}

    /**
     * A numeric response code generated after executing the plugin.
     */
    inline long GetResponseCode() const{ return m_responseCode; }

    /**
     * A numeric response code generated after executing the plugin.
     */
    inline void SetResponseCode(long value) { m_responseCodeHasBeenSet = true; m_responseCode = value; }

    /**
     * A numeric response code generated after executing the plugin.
     */
    inline CommandPlugin& WithResponseCode(long value) { SetResponseCode(value); return *this;}

    /**
     * The time the plugin started executing.
     */
    inline const Aws::Utils::DateTime& GetResponseStartDateTime() const{ return m_responseStartDateTime; }

    /**
     * The time the plugin started executing.
     */
    inline void SetResponseStartDateTime(const Aws::Utils::DateTime& value) { m_responseStartDateTimeHasBeenSet = true; m_responseStartDateTime = value; }

    /**
     * The time the plugin started executing.
     */
    inline void SetResponseStartDateTime(Aws::Utils::DateTime&& value) { m_responseStartDateTimeHasBeenSet = true; m_responseStartDateTime = value; }

    /**
     * The time the plugin started executing.
     */
    inline CommandPlugin& WithResponseStartDateTime(const Aws::Utils::DateTime& value) { SetResponseStartDateTime(value); return *this;}

    /**
     * The time the plugin started executing.
     */
    inline CommandPlugin& WithResponseStartDateTime(Aws::Utils::DateTime&& value) { SetResponseStartDateTime(value); return *this;}

    /**
     * The time the plugin stopped executing. Could stop prematurely if, for example, a
     * cancel command was sent.
     */
    inline const Aws::Utils::DateTime& GetResponseFinishDateTime() const{ return m_responseFinishDateTime; }

    /**
     * The time the plugin stopped executing. Could stop prematurely if, for example, a
     * cancel command was sent.
     */
    inline void SetResponseFinishDateTime(const Aws::Utils::DateTime& value) { m_responseFinishDateTimeHasBeenSet = true; m_responseFinishDateTime = value; }

    /**
     * The time the plugin stopped executing. Could stop prematurely if, for example, a
     * cancel command was sent.
     */
    inline void SetResponseFinishDateTime(Aws::Utils::DateTime&& value) { m_responseFinishDateTimeHasBeenSet = true; m_responseFinishDateTime = value; }

    /**
     * The time the plugin stopped executing. Could stop prematurely if, for example, a
     * cancel command was sent.
     */
    inline CommandPlugin& WithResponseFinishDateTime(const Aws::Utils::DateTime& value) { SetResponseFinishDateTime(value); return *this;}

    /**
     * The time the plugin stopped executing. Could stop prematurely if, for example, a
     * cancel command was sent.
     */
    inline CommandPlugin& WithResponseFinishDateTime(Aws::Utils::DateTime&& value) { SetResponseFinishDateTime(value); return *this;}

    /**
     * Output of the plugin execution.
     */
    inline const Aws::String& GetOutput() const{ return m_output; }

    /**
     * Output of the plugin execution.
     */
    inline void SetOutput(const Aws::String& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * Output of the plugin execution.
     */
    inline void SetOutput(Aws::String&& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * Output of the plugin execution.
     */
    inline void SetOutput(const char* value) { m_outputHasBeenSet = true; m_output.assign(value); }

    /**
     * Output of the plugin execution.
     */
    inline CommandPlugin& WithOutput(const Aws::String& value) { SetOutput(value); return *this;}

    /**
     * Output of the plugin execution.
     */
    inline CommandPlugin& WithOutput(Aws::String&& value) { SetOutput(value); return *this;}

    /**
     * Output of the plugin execution.
     */
    inline CommandPlugin& WithOutput(const char* value) { SetOutput(value); return *this;}

    /**
     * The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.
     */
    inline const Aws::String& GetOutputS3BucketName() const{ return m_outputS3BucketName; }

    /**
     * The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.
     */
    inline void SetOutputS3BucketName(const Aws::String& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }

    /**
     * The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.
     */
    inline void SetOutputS3BucketName(Aws::String&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }

    /**
     * The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.
     */
    inline void SetOutputS3BucketName(const char* value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName.assign(value); }

    /**
     * The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.
     */
    inline CommandPlugin& WithOutputS3BucketName(const Aws::String& value) { SetOutputS3BucketName(value); return *this;}

    /**
     * The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.
     */
    inline CommandPlugin& WithOutputS3BucketName(Aws::String&& value) { SetOutputS3BucketName(value); return *this;}

    /**
     * The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.
     */
    inline CommandPlugin& WithOutputS3BucketName(const char* value) { SetOutputS3BucketName(value); return *this;}

    /**
     * The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.
     */
    inline const Aws::String& GetOutputS3KeyPrefix() const{ return m_outputS3KeyPrefix; }

    /**
     * The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.
     */
    inline void SetOutputS3KeyPrefix(const Aws::String& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }

    /**
     * The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.
     */
    inline void SetOutputS3KeyPrefix(Aws::String&& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }

    /**
     * The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.
     */
    inline void SetOutputS3KeyPrefix(const char* value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix.assign(value); }

    /**
     * The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.
     */
    inline CommandPlugin& WithOutputS3KeyPrefix(const Aws::String& value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.
     */
    inline CommandPlugin& WithOutputS3KeyPrefix(Aws::String&& value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.
     */
    inline CommandPlugin& WithOutputS3KeyPrefix(const char* value) { SetOutputS3KeyPrefix(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    CommandPluginStatus m_status;
    bool m_statusHasBeenSet;
    long m_responseCode;
    bool m_responseCodeHasBeenSet;
    Aws::Utils::DateTime m_responseStartDateTime;
    bool m_responseStartDateTimeHasBeenSet;
    Aws::Utils::DateTime m_responseFinishDateTime;
    bool m_responseFinishDateTimeHasBeenSet;
    Aws::String m_output;
    bool m_outputHasBeenSet;
    Aws::String m_outputS3BucketName;
    bool m_outputS3BucketNameHasBeenSet;
    Aws::String m_outputS3KeyPrefix;
    bool m_outputS3KeyPrefixHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
