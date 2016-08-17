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
   * <p>Describes plugin details.</p>
   */
  class AWS_SSM_API CommandPlugin
  {
  public:
    CommandPlugin();
    CommandPlugin(const Aws::Utils::Json::JsonValue& jsonValue);
    CommandPlugin& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the plugin. Must be one of the following: aws:updateAgent,
     * aws:domainjoin, aws:applications, aws:runPowerShellScript, aws:psmodule,
     * aws:cloudWatch, aws:runShellScript, or aws:updateSSMAgent. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the plugin. Must be one of the following: aws:updateAgent,
     * aws:domainjoin, aws:applications, aws:runPowerShellScript, aws:psmodule,
     * aws:cloudWatch, aws:runShellScript, or aws:updateSSMAgent. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the plugin. Must be one of the following: aws:updateAgent,
     * aws:domainjoin, aws:applications, aws:runPowerShellScript, aws:psmodule,
     * aws:cloudWatch, aws:runShellScript, or aws:updateSSMAgent. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the plugin. Must be one of the following: aws:updateAgent,
     * aws:domainjoin, aws:applications, aws:runPowerShellScript, aws:psmodule,
     * aws:cloudWatch, aws:runShellScript, or aws:updateSSMAgent. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the plugin. Must be one of the following: aws:updateAgent,
     * aws:domainjoin, aws:applications, aws:runPowerShellScript, aws:psmodule,
     * aws:cloudWatch, aws:runShellScript, or aws:updateSSMAgent. </p>
     */
    inline CommandPlugin& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the plugin. Must be one of the following: aws:updateAgent,
     * aws:domainjoin, aws:applications, aws:runPowerShellScript, aws:psmodule,
     * aws:cloudWatch, aws:runShellScript, or aws:updateSSMAgent. </p>
     */
    inline CommandPlugin& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the plugin. Must be one of the following: aws:updateAgent,
     * aws:domainjoin, aws:applications, aws:runPowerShellScript, aws:psmodule,
     * aws:cloudWatch, aws:runShellScript, or aws:updateSSMAgent. </p>
     */
    inline CommandPlugin& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The status of this plugin. You can execute a document with multiple
     * plugins.</p>
     */
    inline const CommandPluginStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of this plugin. You can execute a document with multiple
     * plugins.</p>
     */
    inline void SetStatus(const CommandPluginStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of this plugin. You can execute a document with multiple
     * plugins.</p>
     */
    inline void SetStatus(CommandPluginStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of this plugin. You can execute a document with multiple
     * plugins.</p>
     */
    inline CommandPlugin& WithStatus(const CommandPluginStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of this plugin. You can execute a document with multiple
     * plugins.</p>
     */
    inline CommandPlugin& WithStatus(CommandPluginStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>A numeric response code generated after executing the plugin. </p>
     */
    inline int GetResponseCode() const{ return m_responseCode; }

    /**
     * <p>A numeric response code generated after executing the plugin. </p>
     */
    inline void SetResponseCode(int value) { m_responseCodeHasBeenSet = true; m_responseCode = value; }

    /**
     * <p>A numeric response code generated after executing the plugin. </p>
     */
    inline CommandPlugin& WithResponseCode(int value) { SetResponseCode(value); return *this;}

    /**
     * <p>The time the plugin started executing. </p>
     */
    inline const Aws::Utils::DateTime& GetResponseStartDateTime() const{ return m_responseStartDateTime; }

    /**
     * <p>The time the plugin started executing. </p>
     */
    inline void SetResponseStartDateTime(const Aws::Utils::DateTime& value) { m_responseStartDateTimeHasBeenSet = true; m_responseStartDateTime = value; }

    /**
     * <p>The time the plugin started executing. </p>
     */
    inline void SetResponseStartDateTime(Aws::Utils::DateTime&& value) { m_responseStartDateTimeHasBeenSet = true; m_responseStartDateTime = value; }

    /**
     * <p>The time the plugin started executing. </p>
     */
    inline CommandPlugin& WithResponseStartDateTime(const Aws::Utils::DateTime& value) { SetResponseStartDateTime(value); return *this;}

    /**
     * <p>The time the plugin started executing. </p>
     */
    inline CommandPlugin& WithResponseStartDateTime(Aws::Utils::DateTime&& value) { SetResponseStartDateTime(value); return *this;}

    /**
     * <p>The time the plugin stopped executing. Could stop prematurely if, for
     * example, a cancel command was sent. </p>
     */
    inline const Aws::Utils::DateTime& GetResponseFinishDateTime() const{ return m_responseFinishDateTime; }

    /**
     * <p>The time the plugin stopped executing. Could stop prematurely if, for
     * example, a cancel command was sent. </p>
     */
    inline void SetResponseFinishDateTime(const Aws::Utils::DateTime& value) { m_responseFinishDateTimeHasBeenSet = true; m_responseFinishDateTime = value; }

    /**
     * <p>The time the plugin stopped executing. Could stop prematurely if, for
     * example, a cancel command was sent. </p>
     */
    inline void SetResponseFinishDateTime(Aws::Utils::DateTime&& value) { m_responseFinishDateTimeHasBeenSet = true; m_responseFinishDateTime = value; }

    /**
     * <p>The time the plugin stopped executing. Could stop prematurely if, for
     * example, a cancel command was sent. </p>
     */
    inline CommandPlugin& WithResponseFinishDateTime(const Aws::Utils::DateTime& value) { SetResponseFinishDateTime(value); return *this;}

    /**
     * <p>The time the plugin stopped executing. Could stop prematurely if, for
     * example, a cancel command was sent. </p>
     */
    inline CommandPlugin& WithResponseFinishDateTime(Aws::Utils::DateTime&& value) { SetResponseFinishDateTime(value); return *this;}

    /**
     * <p>Output of the plugin execution.</p>
     */
    inline const Aws::String& GetOutput() const{ return m_output; }

    /**
     * <p>Output of the plugin execution.</p>
     */
    inline void SetOutput(const Aws::String& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>Output of the plugin execution.</p>
     */
    inline void SetOutput(Aws::String&& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>Output of the plugin execution.</p>
     */
    inline void SetOutput(const char* value) { m_outputHasBeenSet = true; m_output.assign(value); }

    /**
     * <p>Output of the plugin execution.</p>
     */
    inline CommandPlugin& WithOutput(const Aws::String& value) { SetOutput(value); return *this;}

    /**
     * <p>Output of the plugin execution.</p>
     */
    inline CommandPlugin& WithOutput(Aws::String&& value) { SetOutput(value); return *this;}

    /**
     * <p>Output of the plugin execution.</p>
     */
    inline CommandPlugin& WithOutput(const char* value) { SetOutput(value); return *this;}

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline const Aws::String& GetOutputS3BucketName() const{ return m_outputS3BucketName; }

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline void SetOutputS3BucketName(const Aws::String& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline void SetOutputS3BucketName(Aws::String&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline void SetOutputS3BucketName(const char* value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName.assign(value); }

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline CommandPlugin& WithOutputS3BucketName(const Aws::String& value) { SetOutputS3BucketName(value); return *this;}

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline CommandPlugin& WithOutputS3BucketName(Aws::String&& value) { SetOutputS3BucketName(value); return *this;}

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline CommandPlugin& WithOutputS3BucketName(const char* value) { SetOutputS3BucketName(value); return *this;}

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. </p>
     */
    inline const Aws::String& GetOutputS3KeyPrefix() const{ return m_outputS3KeyPrefix; }

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. </p>
     */
    inline void SetOutputS3KeyPrefix(const Aws::String& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. </p>
     */
    inline void SetOutputS3KeyPrefix(Aws::String&& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. </p>
     */
    inline void SetOutputS3KeyPrefix(const char* value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix.assign(value); }

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. </p>
     */
    inline CommandPlugin& WithOutputS3KeyPrefix(const Aws::String& value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. </p>
     */
    inline CommandPlugin& WithOutputS3KeyPrefix(Aws::String&& value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. </p>
     */
    inline CommandPlugin& WithOutputS3KeyPrefix(const char* value) { SetOutputS3KeyPrefix(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    CommandPluginStatus m_status;
    bool m_statusHasBeenSet;
    int m_responseCode;
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
