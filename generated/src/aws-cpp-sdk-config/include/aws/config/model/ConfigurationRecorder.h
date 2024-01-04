/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/RecordingGroup.h>
#include <aws/config/model/RecordingMode.h>
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
   * <p>Records configuration changes to your specified resource types. For more
   * information about the configuration recorder, see <a
   * href="https://docs.aws.amazon.com/config/latest/developerguide/stop-start-recorder.html">
   * <b>Managing the Configuration Recorder</b> </a> in the <i>Config Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
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
     * <p>The name of the configuration recorder. Config automatically assigns the name
     * of "default" when creating the configuration recorder.</p>  <p>You cannot
     * change the name of the configuration recorder after it has been created. To
     * change the configuration recorder name, you must delete it and create a new
     * configuration recorder with a new name. </p> 
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the configuration recorder. Config automatically assigns the name
     * of "default" when creating the configuration recorder.</p>  <p>You cannot
     * change the name of the configuration recorder after it has been created. To
     * change the configuration recorder name, you must delete it and create a new
     * configuration recorder with a new name. </p> 
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the configuration recorder. Config automatically assigns the name
     * of "default" when creating the configuration recorder.</p>  <p>You cannot
     * change the name of the configuration recorder after it has been created. To
     * change the configuration recorder name, you must delete it and create a new
     * configuration recorder with a new name. </p> 
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the configuration recorder. Config automatically assigns the name
     * of "default" when creating the configuration recorder.</p>  <p>You cannot
     * change the name of the configuration recorder after it has been created. To
     * change the configuration recorder name, you must delete it and create a new
     * configuration recorder with a new name. </p> 
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the configuration recorder. Config automatically assigns the name
     * of "default" when creating the configuration recorder.</p>  <p>You cannot
     * change the name of the configuration recorder after it has been created. To
     * change the configuration recorder name, you must delete it and create a new
     * configuration recorder with a new name. </p> 
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the configuration recorder. Config automatically assigns the name
     * of "default" when creating the configuration recorder.</p>  <p>You cannot
     * change the name of the configuration recorder after it has been created. To
     * change the configuration recorder name, you must delete it and create a new
     * configuration recorder with a new name. </p> 
     */
    inline ConfigurationRecorder& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the configuration recorder. Config automatically assigns the name
     * of "default" when creating the configuration recorder.</p>  <p>You cannot
     * change the name of the configuration recorder after it has been created. To
     * change the configuration recorder name, you must delete it and create a new
     * configuration recorder with a new name. </p> 
     */
    inline ConfigurationRecorder& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration recorder. Config automatically assigns the name
     * of "default" when creating the configuration recorder.</p>  <p>You cannot
     * change the name of the configuration recorder after it has been created. To
     * change the configuration recorder name, you must delete it and create a new
     * configuration recorder with a new name. </p> 
     */
    inline ConfigurationRecorder& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of the IAM role assumed by Config and used by the
     * configuration recorder.</p>  <p>While the API model does not require this
     * field, the server will reject a request without a defined <code>roleARN</code>
     * for the configuration recorder.</p>   <p> <b>Pre-existing Config
     * role</b> </p> <p>If you have used an Amazon Web Services service that uses
     * Config, such as Security Hub or Control Tower, and an Config role has already
     * been created, make sure that the IAM role that you use when setting up Config
     * keeps the same minimum permissions as the already created Config role. You must
     * do this so that the other Amazon Web Services service continues to run as
     * expected. </p> <p>For example, if Control Tower has an IAM role that allows
     * Config to read Amazon Simple Storage Service (Amazon S3) objects, make sure that
     * the same permissions are granted within the IAM role you use when setting up
     * Config. Otherwise, it may interfere with how Control Tower operates. For more
     * information about IAM roles for Config, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/security-iam.html">
     * <b>Identity and Access Management for Config</b> </a> in the <i>Config Developer
     * Guide</i>. </p> 
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>Amazon Resource Name (ARN) of the IAM role assumed by Config and used by the
     * configuration recorder.</p>  <p>While the API model does not require this
     * field, the server will reject a request without a defined <code>roleARN</code>
     * for the configuration recorder.</p>   <p> <b>Pre-existing Config
     * role</b> </p> <p>If you have used an Amazon Web Services service that uses
     * Config, such as Security Hub or Control Tower, and an Config role has already
     * been created, make sure that the IAM role that you use when setting up Config
     * keeps the same minimum permissions as the already created Config role. You must
     * do this so that the other Amazon Web Services service continues to run as
     * expected. </p> <p>For example, if Control Tower has an IAM role that allows
     * Config to read Amazon Simple Storage Service (Amazon S3) objects, make sure that
     * the same permissions are granted within the IAM role you use when setting up
     * Config. Otherwise, it may interfere with how Control Tower operates. For more
     * information about IAM roles for Config, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/security-iam.html">
     * <b>Identity and Access Management for Config</b> </a> in the <i>Config Developer
     * Guide</i>. </p> 
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the IAM role assumed by Config and used by the
     * configuration recorder.</p>  <p>While the API model does not require this
     * field, the server will reject a request without a defined <code>roleARN</code>
     * for the configuration recorder.</p>   <p> <b>Pre-existing Config
     * role</b> </p> <p>If you have used an Amazon Web Services service that uses
     * Config, such as Security Hub or Control Tower, and an Config role has already
     * been created, make sure that the IAM role that you use when setting up Config
     * keeps the same minimum permissions as the already created Config role. You must
     * do this so that the other Amazon Web Services service continues to run as
     * expected. </p> <p>For example, if Control Tower has an IAM role that allows
     * Config to read Amazon Simple Storage Service (Amazon S3) objects, make sure that
     * the same permissions are granted within the IAM role you use when setting up
     * Config. Otherwise, it may interfere with how Control Tower operates. For more
     * information about IAM roles for Config, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/security-iam.html">
     * <b>Identity and Access Management for Config</b> </a> in the <i>Config Developer
     * Guide</i>. </p> 
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the IAM role assumed by Config and used by the
     * configuration recorder.</p>  <p>While the API model does not require this
     * field, the server will reject a request without a defined <code>roleARN</code>
     * for the configuration recorder.</p>   <p> <b>Pre-existing Config
     * role</b> </p> <p>If you have used an Amazon Web Services service that uses
     * Config, such as Security Hub or Control Tower, and an Config role has already
     * been created, make sure that the IAM role that you use when setting up Config
     * keeps the same minimum permissions as the already created Config role. You must
     * do this so that the other Amazon Web Services service continues to run as
     * expected. </p> <p>For example, if Control Tower has an IAM role that allows
     * Config to read Amazon Simple Storage Service (Amazon S3) objects, make sure that
     * the same permissions are granted within the IAM role you use when setting up
     * Config. Otherwise, it may interfere with how Control Tower operates. For more
     * information about IAM roles for Config, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/security-iam.html">
     * <b>Identity and Access Management for Config</b> </a> in the <i>Config Developer
     * Guide</i>. </p> 
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the IAM role assumed by Config and used by the
     * configuration recorder.</p>  <p>While the API model does not require this
     * field, the server will reject a request without a defined <code>roleARN</code>
     * for the configuration recorder.</p>   <p> <b>Pre-existing Config
     * role</b> </p> <p>If you have used an Amazon Web Services service that uses
     * Config, such as Security Hub or Control Tower, and an Config role has already
     * been created, make sure that the IAM role that you use when setting up Config
     * keeps the same minimum permissions as the already created Config role. You must
     * do this so that the other Amazon Web Services service continues to run as
     * expected. </p> <p>For example, if Control Tower has an IAM role that allows
     * Config to read Amazon Simple Storage Service (Amazon S3) objects, make sure that
     * the same permissions are granted within the IAM role you use when setting up
     * Config. Otherwise, it may interfere with how Control Tower operates. For more
     * information about IAM roles for Config, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/security-iam.html">
     * <b>Identity and Access Management for Config</b> </a> in the <i>Config Developer
     * Guide</i>. </p> 
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the IAM role assumed by Config and used by the
     * configuration recorder.</p>  <p>While the API model does not require this
     * field, the server will reject a request without a defined <code>roleARN</code>
     * for the configuration recorder.</p>   <p> <b>Pre-existing Config
     * role</b> </p> <p>If you have used an Amazon Web Services service that uses
     * Config, such as Security Hub or Control Tower, and an Config role has already
     * been created, make sure that the IAM role that you use when setting up Config
     * keeps the same minimum permissions as the already created Config role. You must
     * do this so that the other Amazon Web Services service continues to run as
     * expected. </p> <p>For example, if Control Tower has an IAM role that allows
     * Config to read Amazon Simple Storage Service (Amazon S3) objects, make sure that
     * the same permissions are granted within the IAM role you use when setting up
     * Config. Otherwise, it may interfere with how Control Tower operates. For more
     * information about IAM roles for Config, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/security-iam.html">
     * <b>Identity and Access Management for Config</b> </a> in the <i>Config Developer
     * Guide</i>. </p> 
     */
    inline ConfigurationRecorder& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the IAM role assumed by Config and used by the
     * configuration recorder.</p>  <p>While the API model does not require this
     * field, the server will reject a request without a defined <code>roleARN</code>
     * for the configuration recorder.</p>   <p> <b>Pre-existing Config
     * role</b> </p> <p>If you have used an Amazon Web Services service that uses
     * Config, such as Security Hub or Control Tower, and an Config role has already
     * been created, make sure that the IAM role that you use when setting up Config
     * keeps the same minimum permissions as the already created Config role. You must
     * do this so that the other Amazon Web Services service continues to run as
     * expected. </p> <p>For example, if Control Tower has an IAM role that allows
     * Config to read Amazon Simple Storage Service (Amazon S3) objects, make sure that
     * the same permissions are granted within the IAM role you use when setting up
     * Config. Otherwise, it may interfere with how Control Tower operates. For more
     * information about IAM roles for Config, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/security-iam.html">
     * <b>Identity and Access Management for Config</b> </a> in the <i>Config Developer
     * Guide</i>. </p> 
     */
    inline ConfigurationRecorder& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the IAM role assumed by Config and used by the
     * configuration recorder.</p>  <p>While the API model does not require this
     * field, the server will reject a request without a defined <code>roleARN</code>
     * for the configuration recorder.</p>   <p> <b>Pre-existing Config
     * role</b> </p> <p>If you have used an Amazon Web Services service that uses
     * Config, such as Security Hub or Control Tower, and an Config role has already
     * been created, make sure that the IAM role that you use when setting up Config
     * keeps the same minimum permissions as the already created Config role. You must
     * do this so that the other Amazon Web Services service continues to run as
     * expected. </p> <p>For example, if Control Tower has an IAM role that allows
     * Config to read Amazon Simple Storage Service (Amazon S3) objects, make sure that
     * the same permissions are granted within the IAM role you use when setting up
     * Config. Otherwise, it may interfere with how Control Tower operates. For more
     * information about IAM roles for Config, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/security-iam.html">
     * <b>Identity and Access Management for Config</b> </a> in the <i>Config Developer
     * Guide</i>. </p> 
     */
    inline ConfigurationRecorder& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>Specifies which resource types Config records for configuration changes.</p>
     *  <p> <b> High Number of Config Evaluations</b> </p> <p>You may notice
     * increased activity in your account during your initial month recording with
     * Config when compared to subsequent months. During the initial bootstrapping
     * process, Config runs evaluations on all the resources in your account that you
     * have selected for Config to record.</p> <p>If you are running ephemeral
     * workloads, you may see increased activity from Config as it records
     * configuration changes associated with creating and deleting these temporary
     * resources. An <i>ephemeral workload</i> is a temporary use of computing
     * resources that are loaded and run when needed. Examples include Amazon Elastic
     * Compute Cloud (Amazon EC2) Spot Instances, Amazon EMR jobs, and Auto Scaling. If
     * you want to avoid the increased activity from running ephemeral workloads, you
     * can run these types of workloads in a separate account with Config turned off to
     * avoid increased configuration recording and rule evaluations.</p> 
     */
    inline const RecordingGroup& GetRecordingGroup() const{ return m_recordingGroup; }

    /**
     * <p>Specifies which resource types Config records for configuration changes.</p>
     *  <p> <b> High Number of Config Evaluations</b> </p> <p>You may notice
     * increased activity in your account during your initial month recording with
     * Config when compared to subsequent months. During the initial bootstrapping
     * process, Config runs evaluations on all the resources in your account that you
     * have selected for Config to record.</p> <p>If you are running ephemeral
     * workloads, you may see increased activity from Config as it records
     * configuration changes associated with creating and deleting these temporary
     * resources. An <i>ephemeral workload</i> is a temporary use of computing
     * resources that are loaded and run when needed. Examples include Amazon Elastic
     * Compute Cloud (Amazon EC2) Spot Instances, Amazon EMR jobs, and Auto Scaling. If
     * you want to avoid the increased activity from running ephemeral workloads, you
     * can run these types of workloads in a separate account with Config turned off to
     * avoid increased configuration recording and rule evaluations.</p> 
     */
    inline bool RecordingGroupHasBeenSet() const { return m_recordingGroupHasBeenSet; }

    /**
     * <p>Specifies which resource types Config records for configuration changes.</p>
     *  <p> <b> High Number of Config Evaluations</b> </p> <p>You may notice
     * increased activity in your account during your initial month recording with
     * Config when compared to subsequent months. During the initial bootstrapping
     * process, Config runs evaluations on all the resources in your account that you
     * have selected for Config to record.</p> <p>If you are running ephemeral
     * workloads, you may see increased activity from Config as it records
     * configuration changes associated with creating and deleting these temporary
     * resources. An <i>ephemeral workload</i> is a temporary use of computing
     * resources that are loaded and run when needed. Examples include Amazon Elastic
     * Compute Cloud (Amazon EC2) Spot Instances, Amazon EMR jobs, and Auto Scaling. If
     * you want to avoid the increased activity from running ephemeral workloads, you
     * can run these types of workloads in a separate account with Config turned off to
     * avoid increased configuration recording and rule evaluations.</p> 
     */
    inline void SetRecordingGroup(const RecordingGroup& value) { m_recordingGroupHasBeenSet = true; m_recordingGroup = value; }

    /**
     * <p>Specifies which resource types Config records for configuration changes.</p>
     *  <p> <b> High Number of Config Evaluations</b> </p> <p>You may notice
     * increased activity in your account during your initial month recording with
     * Config when compared to subsequent months. During the initial bootstrapping
     * process, Config runs evaluations on all the resources in your account that you
     * have selected for Config to record.</p> <p>If you are running ephemeral
     * workloads, you may see increased activity from Config as it records
     * configuration changes associated with creating and deleting these temporary
     * resources. An <i>ephemeral workload</i> is a temporary use of computing
     * resources that are loaded and run when needed. Examples include Amazon Elastic
     * Compute Cloud (Amazon EC2) Spot Instances, Amazon EMR jobs, and Auto Scaling. If
     * you want to avoid the increased activity from running ephemeral workloads, you
     * can run these types of workloads in a separate account with Config turned off to
     * avoid increased configuration recording and rule evaluations.</p> 
     */
    inline void SetRecordingGroup(RecordingGroup&& value) { m_recordingGroupHasBeenSet = true; m_recordingGroup = std::move(value); }

    /**
     * <p>Specifies which resource types Config records for configuration changes.</p>
     *  <p> <b> High Number of Config Evaluations</b> </p> <p>You may notice
     * increased activity in your account during your initial month recording with
     * Config when compared to subsequent months. During the initial bootstrapping
     * process, Config runs evaluations on all the resources in your account that you
     * have selected for Config to record.</p> <p>If you are running ephemeral
     * workloads, you may see increased activity from Config as it records
     * configuration changes associated with creating and deleting these temporary
     * resources. An <i>ephemeral workload</i> is a temporary use of computing
     * resources that are loaded and run when needed. Examples include Amazon Elastic
     * Compute Cloud (Amazon EC2) Spot Instances, Amazon EMR jobs, and Auto Scaling. If
     * you want to avoid the increased activity from running ephemeral workloads, you
     * can run these types of workloads in a separate account with Config turned off to
     * avoid increased configuration recording and rule evaluations.</p> 
     */
    inline ConfigurationRecorder& WithRecordingGroup(const RecordingGroup& value) { SetRecordingGroup(value); return *this;}

    /**
     * <p>Specifies which resource types Config records for configuration changes.</p>
     *  <p> <b> High Number of Config Evaluations</b> </p> <p>You may notice
     * increased activity in your account during your initial month recording with
     * Config when compared to subsequent months. During the initial bootstrapping
     * process, Config runs evaluations on all the resources in your account that you
     * have selected for Config to record.</p> <p>If you are running ephemeral
     * workloads, you may see increased activity from Config as it records
     * configuration changes associated with creating and deleting these temporary
     * resources. An <i>ephemeral workload</i> is a temporary use of computing
     * resources that are loaded and run when needed. Examples include Amazon Elastic
     * Compute Cloud (Amazon EC2) Spot Instances, Amazon EMR jobs, and Auto Scaling. If
     * you want to avoid the increased activity from running ephemeral workloads, you
     * can run these types of workloads in a separate account with Config turned off to
     * avoid increased configuration recording and rule evaluations.</p> 
     */
    inline ConfigurationRecorder& WithRecordingGroup(RecordingGroup&& value) { SetRecordingGroup(std::move(value)); return *this;}


    /**
     * <p>Specifies the default recording frequency that Config uses to record
     * configuration changes. Config supports <i>Continuous recording</i> and <i>Daily
     * recording</i>.</p> <ul> <li> <p>Continuous recording allows you to record
     * configuration changes continuously whenever a change occurs.</p> </li> <li>
     * <p>Daily recording allows you to receive a configuration item (CI) representing
     * the most recent state of your resources over the last 24-hour period, only if
     * it’s different from the previous CI recorded. </p> </li> </ul> 
     * <p>Firewall Manager depends on continuous recording to monitor your resources.
     * If you are using Firewall Manager, it is recommended that you set the recording
     * frequency to Continuous.</p>  <p>You can also override the recording
     * frequency for specific resource types.</p>
     */
    inline const RecordingMode& GetRecordingMode() const{ return m_recordingMode; }

    /**
     * <p>Specifies the default recording frequency that Config uses to record
     * configuration changes. Config supports <i>Continuous recording</i> and <i>Daily
     * recording</i>.</p> <ul> <li> <p>Continuous recording allows you to record
     * configuration changes continuously whenever a change occurs.</p> </li> <li>
     * <p>Daily recording allows you to receive a configuration item (CI) representing
     * the most recent state of your resources over the last 24-hour period, only if
     * it’s different from the previous CI recorded. </p> </li> </ul> 
     * <p>Firewall Manager depends on continuous recording to monitor your resources.
     * If you are using Firewall Manager, it is recommended that you set the recording
     * frequency to Continuous.</p>  <p>You can also override the recording
     * frequency for specific resource types.</p>
     */
    inline bool RecordingModeHasBeenSet() const { return m_recordingModeHasBeenSet; }

    /**
     * <p>Specifies the default recording frequency that Config uses to record
     * configuration changes. Config supports <i>Continuous recording</i> and <i>Daily
     * recording</i>.</p> <ul> <li> <p>Continuous recording allows you to record
     * configuration changes continuously whenever a change occurs.</p> </li> <li>
     * <p>Daily recording allows you to receive a configuration item (CI) representing
     * the most recent state of your resources over the last 24-hour period, only if
     * it’s different from the previous CI recorded. </p> </li> </ul> 
     * <p>Firewall Manager depends on continuous recording to monitor your resources.
     * If you are using Firewall Manager, it is recommended that you set the recording
     * frequency to Continuous.</p>  <p>You can also override the recording
     * frequency for specific resource types.</p>
     */
    inline void SetRecordingMode(const RecordingMode& value) { m_recordingModeHasBeenSet = true; m_recordingMode = value; }

    /**
     * <p>Specifies the default recording frequency that Config uses to record
     * configuration changes. Config supports <i>Continuous recording</i> and <i>Daily
     * recording</i>.</p> <ul> <li> <p>Continuous recording allows you to record
     * configuration changes continuously whenever a change occurs.</p> </li> <li>
     * <p>Daily recording allows you to receive a configuration item (CI) representing
     * the most recent state of your resources over the last 24-hour period, only if
     * it’s different from the previous CI recorded. </p> </li> </ul> 
     * <p>Firewall Manager depends on continuous recording to monitor your resources.
     * If you are using Firewall Manager, it is recommended that you set the recording
     * frequency to Continuous.</p>  <p>You can also override the recording
     * frequency for specific resource types.</p>
     */
    inline void SetRecordingMode(RecordingMode&& value) { m_recordingModeHasBeenSet = true; m_recordingMode = std::move(value); }

    /**
     * <p>Specifies the default recording frequency that Config uses to record
     * configuration changes. Config supports <i>Continuous recording</i> and <i>Daily
     * recording</i>.</p> <ul> <li> <p>Continuous recording allows you to record
     * configuration changes continuously whenever a change occurs.</p> </li> <li>
     * <p>Daily recording allows you to receive a configuration item (CI) representing
     * the most recent state of your resources over the last 24-hour period, only if
     * it’s different from the previous CI recorded. </p> </li> </ul> 
     * <p>Firewall Manager depends on continuous recording to monitor your resources.
     * If you are using Firewall Manager, it is recommended that you set the recording
     * frequency to Continuous.</p>  <p>You can also override the recording
     * frequency for specific resource types.</p>
     */
    inline ConfigurationRecorder& WithRecordingMode(const RecordingMode& value) { SetRecordingMode(value); return *this;}

    /**
     * <p>Specifies the default recording frequency that Config uses to record
     * configuration changes. Config supports <i>Continuous recording</i> and <i>Daily
     * recording</i>.</p> <ul> <li> <p>Continuous recording allows you to record
     * configuration changes continuously whenever a change occurs.</p> </li> <li>
     * <p>Daily recording allows you to receive a configuration item (CI) representing
     * the most recent state of your resources over the last 24-hour period, only if
     * it’s different from the previous CI recorded. </p> </li> </ul> 
     * <p>Firewall Manager depends on continuous recording to monitor your resources.
     * If you are using Firewall Manager, it is recommended that you set the recording
     * frequency to Continuous.</p>  <p>You can also override the recording
     * frequency for specific resource types.</p>
     */
    inline ConfigurationRecorder& WithRecordingMode(RecordingMode&& value) { SetRecordingMode(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    RecordingGroup m_recordingGroup;
    bool m_recordingGroupHasBeenSet = false;

    RecordingMode m_recordingMode;
    bool m_recordingModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
