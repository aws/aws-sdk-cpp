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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/RecordingGroup.h>
#include <utility>

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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>An object that represents the recording of configuration changes of an AWS
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConfigurationRecorder">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API ConfigurationRecorder
  {
  public:
    ConfigurationRecorder();
    ConfigurationRecorder(Aws::Utils::Json::JsonView jsonValue);
    ConfigurationRecorder& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the recorder. By default, AWS Config automatically assigns the
     * name "default" when creating the configuration recorder. You cannot change the
     * assigned name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the recorder. By default, AWS Config automatically assigns the
     * name "default" when creating the configuration recorder. You cannot change the
     * assigned name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the recorder. By default, AWS Config automatically assigns the
     * name "default" when creating the configuration recorder. You cannot change the
     * assigned name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the recorder. By default, AWS Config automatically assigns the
     * name "default" when creating the configuration recorder. You cannot change the
     * assigned name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the recorder. By default, AWS Config automatically assigns the
     * name "default" when creating the configuration recorder. You cannot change the
     * assigned name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the recorder. By default, AWS Config automatically assigns the
     * name "default" when creating the configuration recorder. You cannot change the
     * assigned name.</p>
     */
    inline ConfigurationRecorder& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the recorder. By default, AWS Config automatically assigns the
     * name "default" when creating the configuration recorder. You cannot change the
     * assigned name.</p>
     */
    inline ConfigurationRecorder& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the recorder. By default, AWS Config automatically assigns the
     * name "default" when creating the configuration recorder. You cannot change the
     * assigned name.</p>
     */
    inline ConfigurationRecorder& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of the IAM role used to describe the AWS resources
     * associated with the account.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>Amazon Resource Name (ARN) of the IAM role used to describe the AWS resources
     * associated with the account.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the IAM role used to describe the AWS resources
     * associated with the account.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the IAM role used to describe the AWS resources
     * associated with the account.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the IAM role used to describe the AWS resources
     * associated with the account.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the IAM role used to describe the AWS resources
     * associated with the account.</p>
     */
    inline ConfigurationRecorder& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the IAM role used to describe the AWS resources
     * associated with the account.</p>
     */
    inline ConfigurationRecorder& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the IAM role used to describe the AWS resources
     * associated with the account.</p>
     */
    inline ConfigurationRecorder& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>Specifies the types of AWS resources for which AWS Config records
     * configuration changes.</p>
     */
    inline const RecordingGroup& GetRecordingGroup() const{ return m_recordingGroup; }

    /**
     * <p>Specifies the types of AWS resources for which AWS Config records
     * configuration changes.</p>
     */
    inline bool RecordingGroupHasBeenSet() const { return m_recordingGroupHasBeenSet; }

    /**
     * <p>Specifies the types of AWS resources for which AWS Config records
     * configuration changes.</p>
     */
    inline void SetRecordingGroup(const RecordingGroup& value) { m_recordingGroupHasBeenSet = true; m_recordingGroup = value; }

    /**
     * <p>Specifies the types of AWS resources for which AWS Config records
     * configuration changes.</p>
     */
    inline void SetRecordingGroup(RecordingGroup&& value) { m_recordingGroupHasBeenSet = true; m_recordingGroup = std::move(value); }

    /**
     * <p>Specifies the types of AWS resources for which AWS Config records
     * configuration changes.</p>
     */
    inline ConfigurationRecorder& WithRecordingGroup(const RecordingGroup& value) { SetRecordingGroup(value); return *this;}

    /**
     * <p>Specifies the types of AWS resources for which AWS Config records
     * configuration changes.</p>
     */
    inline ConfigurationRecorder& WithRecordingGroup(RecordingGroup&& value) { SetRecordingGroup(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;

    RecordingGroup m_recordingGroup;
    bool m_recordingGroupHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
