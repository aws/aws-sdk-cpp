﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/RecordingGroup.h>
#include <aws/config/model/RecordingMode.h>
#include <aws/config/model/RecordingScope.h>
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
   * <p>Records configuration changes to the resource types in scope.</p> <p>For more
   * information about the configuration recorder, see <a
   * href="https://docs.aws.amazon.com/config/latest/developerguide/stop-start-recorder.html">
   * <b>Working with the Configuration Recorder</b> </a> in the <i>Config Developer
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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the specified configuration recorder.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ConfigurationRecorder& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ConfigurationRecorder& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ConfigurationRecorder& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration recorder.</p> <p>For customer managed
     * configuration recorders, Config automatically assigns the name of "default" when
     * creating a configuration recorder if you do not specify a name at creation
     * time.</p> <p>For service-linked configuration recorders, Config automatically
     * assigns a name that has the prefix "<code>AWS</code>" to a new service-linked
     * configuration recorder.</p>  <p> <b>Changing the name of a configuration
     * recorder</b> </p> <p>To change the name of the customer managed configuration
     * recorder, you must delete it and create a new customer managed configuration
     * recorder with a new name.</p> <p>You cannot change the name of a service-linked
     * configuration recorder.</p> 
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ConfigurationRecorder& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ConfigurationRecorder& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ConfigurationRecorder& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role assumed by Config and used by
     * the specified configuration recorder.</p>  <p> <b>The server will reject a
     * request without a defined <code>roleARN</code> for the configuration
     * recorder</b> </p> <p>While the API model does not require this field, the server
     * will reject a request without a defined <code>roleARN</code> for the
     * configuration recorder.</p> <p> <b>Policies and compliance results</b> </p> <p>
     * <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html">IAM
     * policies</a> and <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies.html">other
     * policies managed in Organizations</a> can impact whether Config has permissions
     * to record configuration changes for your resources. Additionally, rules directly
     * evaluate the configuration of a resource and rules don't take into account these
     * policies when running evaluations. Make sure that the policies in effect align
     * with how you intend to use Config.</p> <p> <b>Keep Minimum Permisions When
     * Reusing an IAM role</b> </p> <p>If you use an Amazon Web Services service that
     * uses Config, such as Security Hub or Control Tower, and an IAM role has already
     * been created, make sure that the IAM role that you use when setting up Config
     * keeps the same minimum permissions as the pre-existing IAM role. You must do
     * this to ensure that the other Amazon Web Services service continues to run as
     * expected. </p> <p>For example, if Control Tower has an IAM role that allows
     * Config to read S3 objects, make sure that the same permissions are granted to
     * the IAM role you use when setting up Config. Otherwise, it may interfere with
     * how Control Tower operates.</p> <p> <b>The service-linked IAM role for Config
     * must be used for service-linked configuration recorders</b> </p> <p>For
     * service-linked configuration recorders, you must use the service-linked IAM role
     * for Config: <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/using-service-linked-roles.html">AWSServiceRoleForConfig</a>.</p>
     * 
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }
    inline ConfigurationRecorder& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}
    inline ConfigurationRecorder& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}
    inline ConfigurationRecorder& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies which resource types are in scope for the configuration recorder to
     * record.</p>  <p> <b> High Number of Config Evaluations</b> </p> <p>You
     * might notice increased activity in your account during your initial month
     * recording with Config when compared to subsequent months. During the initial
     * bootstrapping process, Config runs evaluations on all the resources in your
     * account that you have selected for Config to record.</p> <p>If you are running
     * ephemeral workloads, you may see increased activity from Config as it records
     * configuration changes associated with creating and deleting these temporary
     * resources. An <i>ephemeral workload</i> is a temporary use of computing
     * resources that are loaded and run when needed. Examples include Amazon Elastic
     * Compute Cloud (Amazon EC2) Spot Instances, Amazon EMR jobs, and Auto
     * Scaling.</p> <p>If you want to avoid the increased activity from running
     * ephemeral workloads, you can set up the configuration recorder to exclude these
     * resource types from being recorded, or run these types of workloads in a
     * separate account with Config turned off to avoid increased configuration
     * recording and rule evaluations.</p> 
     */
    inline const RecordingGroup& GetRecordingGroup() const{ return m_recordingGroup; }
    inline bool RecordingGroupHasBeenSet() const { return m_recordingGroupHasBeenSet; }
    inline void SetRecordingGroup(const RecordingGroup& value) { m_recordingGroupHasBeenSet = true; m_recordingGroup = value; }
    inline void SetRecordingGroup(RecordingGroup&& value) { m_recordingGroupHasBeenSet = true; m_recordingGroup = std::move(value); }
    inline ConfigurationRecorder& WithRecordingGroup(const RecordingGroup& value) { SetRecordingGroup(value); return *this;}
    inline ConfigurationRecorder& WithRecordingGroup(RecordingGroup&& value) { SetRecordingGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the default recording frequency for the configuration recorder.
     * Config supports <i>Continuous recording</i> and <i>Daily recording</i>.</p> <ul>
     * <li> <p>Continuous recording allows you to record configuration changes
     * continuously whenever a change occurs.</p> </li> <li> <p>Daily recording allows
     * you to receive a configuration item (CI) representing the most recent state of
     * your resources over the last 24-hour period, only if it’s different from the
     * previous CI recorded. </p> </li> </ul>  <p> <b>Some resource types require
     * continuous recording</b> </p> <p>Firewall Manager depends on continuous
     * recording to monitor your resources. If you are using Firewall Manager, it is
     * recommended that you set the recording frequency to Continuous.</p> 
     * <p>You can also override the recording frequency for specific resource
     * types.</p>
     */
    inline const RecordingMode& GetRecordingMode() const{ return m_recordingMode; }
    inline bool RecordingModeHasBeenSet() const { return m_recordingModeHasBeenSet; }
    inline void SetRecordingMode(const RecordingMode& value) { m_recordingModeHasBeenSet = true; m_recordingMode = value; }
    inline void SetRecordingMode(RecordingMode&& value) { m_recordingModeHasBeenSet = true; m_recordingMode = std::move(value); }
    inline ConfigurationRecorder& WithRecordingMode(const RecordingMode& value) { SetRecordingMode(value); return *this;}
    inline ConfigurationRecorder& WithRecordingMode(RecordingMode&& value) { SetRecordingMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ConfigurationItem.html">ConfigurationItems</a>
     * in scope for the specified configuration recorder are recorded for free
     * (<code>INTERNAL</code>) or if it impacts the costs to your bill
     * (<code>PAID</code>).</p>
     */
    inline const RecordingScope& GetRecordingScope() const{ return m_recordingScope; }
    inline bool RecordingScopeHasBeenSet() const { return m_recordingScopeHasBeenSet; }
    inline void SetRecordingScope(const RecordingScope& value) { m_recordingScopeHasBeenSet = true; m_recordingScope = value; }
    inline void SetRecordingScope(RecordingScope&& value) { m_recordingScopeHasBeenSet = true; m_recordingScope = std::move(value); }
    inline ConfigurationRecorder& WithRecordingScope(const RecordingScope& value) { SetRecordingScope(value); return *this;}
    inline ConfigurationRecorder& WithRecordingScope(RecordingScope&& value) { SetRecordingScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For service-linked configuration recorders, specifies the linked Amazon Web
     * Services service for the configuration recorder.</p>
     */
    inline const Aws::String& GetServicePrincipal() const{ return m_servicePrincipal; }
    inline bool ServicePrincipalHasBeenSet() const { return m_servicePrincipalHasBeenSet; }
    inline void SetServicePrincipal(const Aws::String& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = value; }
    inline void SetServicePrincipal(Aws::String&& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = std::move(value); }
    inline void SetServicePrincipal(const char* value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal.assign(value); }
    inline ConfigurationRecorder& WithServicePrincipal(const Aws::String& value) { SetServicePrincipal(value); return *this;}
    inline ConfigurationRecorder& WithServicePrincipal(Aws::String&& value) { SetServicePrincipal(std::move(value)); return *this;}
    inline ConfigurationRecorder& WithServicePrincipal(const char* value) { SetServicePrincipal(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    RecordingGroup m_recordingGroup;
    bool m_recordingGroupHasBeenSet = false;

    RecordingMode m_recordingMode;
    bool m_recordingModeHasBeenSet = false;

    RecordingScope m_recordingScope;
    bool m_recordingScopeHasBeenSet = false;

    Aws::String m_servicePrincipal;
    bool m_servicePrincipalHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
