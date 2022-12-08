/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>An object that represents the recording of configuration changes of an Amazon
   * Web Services resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConfigurationRecorder">AWS
   * API Reference</a></p>
   */
  class ConfigurationRecorder
  {
  public:
    AWS_CONFIGSERVICE_API ConfigurationRecorder();
    AWS_CONFIGSERVICE_API ConfigurationRecorder(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConfigurationRecorder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the recorder. By default, Config automatically assigns the name
     * "default" when creating the configuration recorder. You cannot change the
     * assigned name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the recorder. By default, Config automatically assigns the name
     * "default" when creating the configuration recorder. You cannot change the
     * assigned name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the recorder. By default, Config automatically assigns the name
     * "default" when creating the configuration recorder. You cannot change the
     * assigned name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the recorder. By default, Config automatically assigns the name
     * "default" when creating the configuration recorder. You cannot change the
     * assigned name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the recorder. By default, Config automatically assigns the name
     * "default" when creating the configuration recorder. You cannot change the
     * assigned name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the recorder. By default, Config automatically assigns the name
     * "default" when creating the configuration recorder. You cannot change the
     * assigned name.</p>
     */
    inline ConfigurationRecorder& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the recorder. By default, Config automatically assigns the name
     * "default" when creating the configuration recorder. You cannot change the
     * assigned name.</p>
     */
    inline ConfigurationRecorder& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the recorder. By default, Config automatically assigns the name
     * "default" when creating the configuration recorder. You cannot change the
     * assigned name.</p>
     */
    inline ConfigurationRecorder& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of the IAM role used to describe the Amazon Web
     * Services resources associated with the account.</p>  <p>While the API
     * model does not require this field, the server will reject a request without a
     * defined roleARN for the configuration recorder.</p> 
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>Amazon Resource Name (ARN) of the IAM role used to describe the Amazon Web
     * Services resources associated with the account.</p>  <p>While the API
     * model does not require this field, the server will reject a request without a
     * defined roleARN for the configuration recorder.</p> 
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the IAM role used to describe the Amazon Web
     * Services resources associated with the account.</p>  <p>While the API
     * model does not require this field, the server will reject a request without a
     * defined roleARN for the configuration recorder.</p> 
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the IAM role used to describe the Amazon Web
     * Services resources associated with the account.</p>  <p>While the API
     * model does not require this field, the server will reject a request without a
     * defined roleARN for the configuration recorder.</p> 
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the IAM role used to describe the Amazon Web
     * Services resources associated with the account.</p>  <p>While the API
     * model does not require this field, the server will reject a request without a
     * defined roleARN for the configuration recorder.</p> 
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the IAM role used to describe the Amazon Web
     * Services resources associated with the account.</p>  <p>While the API
     * model does not require this field, the server will reject a request without a
     * defined roleARN for the configuration recorder.</p> 
     */
    inline ConfigurationRecorder& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the IAM role used to describe the Amazon Web
     * Services resources associated with the account.</p>  <p>While the API
     * model does not require this field, the server will reject a request without a
     * defined roleARN for the configuration recorder.</p> 
     */
    inline ConfigurationRecorder& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the IAM role used to describe the Amazon Web
     * Services resources associated with the account.</p>  <p>While the API
     * model does not require this field, the server will reject a request without a
     * defined roleARN for the configuration recorder.</p> 
     */
    inline ConfigurationRecorder& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>Specifies the types of Amazon Web Services resources for which Config records
     * configuration changes.</p>
     */
    inline const RecordingGroup& GetRecordingGroup() const{ return m_recordingGroup; }

    /**
     * <p>Specifies the types of Amazon Web Services resources for which Config records
     * configuration changes.</p>
     */
    inline bool RecordingGroupHasBeenSet() const { return m_recordingGroupHasBeenSet; }

    /**
     * <p>Specifies the types of Amazon Web Services resources for which Config records
     * configuration changes.</p>
     */
    inline void SetRecordingGroup(const RecordingGroup& value) { m_recordingGroupHasBeenSet = true; m_recordingGroup = value; }

    /**
     * <p>Specifies the types of Amazon Web Services resources for which Config records
     * configuration changes.</p>
     */
    inline void SetRecordingGroup(RecordingGroup&& value) { m_recordingGroupHasBeenSet = true; m_recordingGroup = std::move(value); }

    /**
     * <p>Specifies the types of Amazon Web Services resources for which Config records
     * configuration changes.</p>
     */
    inline ConfigurationRecorder& WithRecordingGroup(const RecordingGroup& value) { SetRecordingGroup(value); return *this;}

    /**
     * <p>Specifies the types of Amazon Web Services resources for which Config records
     * configuration changes.</p>
     */
    inline ConfigurationRecorder& WithRecordingGroup(RecordingGroup&& value) { SetRecordingGroup(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    RecordingGroup m_recordingGroup;
    bool m_recordingGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
