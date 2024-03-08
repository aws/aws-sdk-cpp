/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dlm/model/ExecutionHandlerServiceValues.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dlm/model/StageValues.h>
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
namespace DLM
{
namespace Model
{

  /**
   * <p> <b>[Custom snapshot policies that target instances only]</b> Information
   * about pre and/or post scripts for a snapshot lifecycle policy that targets
   * instances. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/automate-app-consistent-backups.html">
   * Automating application-consistent snapshots with pre and post
   * scripts</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/Script">AWS API
   * Reference</a></p>
   */
  class Script
  {
  public:
    AWS_DLM_API Script();
    AWS_DLM_API Script(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Script& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicate which scripts Amazon Data Lifecycle Manager should run on target
     * instances. Pre scripts run before Amazon Data Lifecycle Manager initiates
     * snapshot creation. Post scripts run after Amazon Data Lifecycle Manager
     * initiates snapshot creation.</p> <ul> <li> <p>To run a pre script only, specify
     * <code>PRE</code>. In this case, Amazon Data Lifecycle Manager calls the SSM
     * document with the <code>pre-script</code> parameter before initiating snapshot
     * creation.</p> </li> <li> <p>To run a post script only, specify
     * <code>POST</code>. In this case, Amazon Data Lifecycle Manager calls the SSM
     * document with the <code>post-script</code> parameter after initiating snapshot
     * creation.</p> </li> <li> <p>To run both pre and post scripts, specify both
     * <code>PRE</code> and <code>POST</code>. In this case, Amazon Data Lifecycle
     * Manager calls the SSM document with the <code>pre-script</code> parameter before
     * initiating snapshot creation, and then it calls the SSM document again with the
     * <code>post-script</code> parameter after initiating snapshot creation.</p> </li>
     * </ul> <p>If you are automating VSS Backups, omit this parameter.</p> <p>Default:
     * PRE and POST</p>
     */
    inline const Aws::Vector<StageValues>& GetStages() const{ return m_stages; }

    /**
     * <p>Indicate which scripts Amazon Data Lifecycle Manager should run on target
     * instances. Pre scripts run before Amazon Data Lifecycle Manager initiates
     * snapshot creation. Post scripts run after Amazon Data Lifecycle Manager
     * initiates snapshot creation.</p> <ul> <li> <p>To run a pre script only, specify
     * <code>PRE</code>. In this case, Amazon Data Lifecycle Manager calls the SSM
     * document with the <code>pre-script</code> parameter before initiating snapshot
     * creation.</p> </li> <li> <p>To run a post script only, specify
     * <code>POST</code>. In this case, Amazon Data Lifecycle Manager calls the SSM
     * document with the <code>post-script</code> parameter after initiating snapshot
     * creation.</p> </li> <li> <p>To run both pre and post scripts, specify both
     * <code>PRE</code> and <code>POST</code>. In this case, Amazon Data Lifecycle
     * Manager calls the SSM document with the <code>pre-script</code> parameter before
     * initiating snapshot creation, and then it calls the SSM document again with the
     * <code>post-script</code> parameter after initiating snapshot creation.</p> </li>
     * </ul> <p>If you are automating VSS Backups, omit this parameter.</p> <p>Default:
     * PRE and POST</p>
     */
    inline bool StagesHasBeenSet() const { return m_stagesHasBeenSet; }

    /**
     * <p>Indicate which scripts Amazon Data Lifecycle Manager should run on target
     * instances. Pre scripts run before Amazon Data Lifecycle Manager initiates
     * snapshot creation. Post scripts run after Amazon Data Lifecycle Manager
     * initiates snapshot creation.</p> <ul> <li> <p>To run a pre script only, specify
     * <code>PRE</code>. In this case, Amazon Data Lifecycle Manager calls the SSM
     * document with the <code>pre-script</code> parameter before initiating snapshot
     * creation.</p> </li> <li> <p>To run a post script only, specify
     * <code>POST</code>. In this case, Amazon Data Lifecycle Manager calls the SSM
     * document with the <code>post-script</code> parameter after initiating snapshot
     * creation.</p> </li> <li> <p>To run both pre and post scripts, specify both
     * <code>PRE</code> and <code>POST</code>. In this case, Amazon Data Lifecycle
     * Manager calls the SSM document with the <code>pre-script</code> parameter before
     * initiating snapshot creation, and then it calls the SSM document again with the
     * <code>post-script</code> parameter after initiating snapshot creation.</p> </li>
     * </ul> <p>If you are automating VSS Backups, omit this parameter.</p> <p>Default:
     * PRE and POST</p>
     */
    inline void SetStages(const Aws::Vector<StageValues>& value) { m_stagesHasBeenSet = true; m_stages = value; }

    /**
     * <p>Indicate which scripts Amazon Data Lifecycle Manager should run on target
     * instances. Pre scripts run before Amazon Data Lifecycle Manager initiates
     * snapshot creation. Post scripts run after Amazon Data Lifecycle Manager
     * initiates snapshot creation.</p> <ul> <li> <p>To run a pre script only, specify
     * <code>PRE</code>. In this case, Amazon Data Lifecycle Manager calls the SSM
     * document with the <code>pre-script</code> parameter before initiating snapshot
     * creation.</p> </li> <li> <p>To run a post script only, specify
     * <code>POST</code>. In this case, Amazon Data Lifecycle Manager calls the SSM
     * document with the <code>post-script</code> parameter after initiating snapshot
     * creation.</p> </li> <li> <p>To run both pre and post scripts, specify both
     * <code>PRE</code> and <code>POST</code>. In this case, Amazon Data Lifecycle
     * Manager calls the SSM document with the <code>pre-script</code> parameter before
     * initiating snapshot creation, and then it calls the SSM document again with the
     * <code>post-script</code> parameter after initiating snapshot creation.</p> </li>
     * </ul> <p>If you are automating VSS Backups, omit this parameter.</p> <p>Default:
     * PRE and POST</p>
     */
    inline void SetStages(Aws::Vector<StageValues>&& value) { m_stagesHasBeenSet = true; m_stages = std::move(value); }

    /**
     * <p>Indicate which scripts Amazon Data Lifecycle Manager should run on target
     * instances. Pre scripts run before Amazon Data Lifecycle Manager initiates
     * snapshot creation. Post scripts run after Amazon Data Lifecycle Manager
     * initiates snapshot creation.</p> <ul> <li> <p>To run a pre script only, specify
     * <code>PRE</code>. In this case, Amazon Data Lifecycle Manager calls the SSM
     * document with the <code>pre-script</code> parameter before initiating snapshot
     * creation.</p> </li> <li> <p>To run a post script only, specify
     * <code>POST</code>. In this case, Amazon Data Lifecycle Manager calls the SSM
     * document with the <code>post-script</code> parameter after initiating snapshot
     * creation.</p> </li> <li> <p>To run both pre and post scripts, specify both
     * <code>PRE</code> and <code>POST</code>. In this case, Amazon Data Lifecycle
     * Manager calls the SSM document with the <code>pre-script</code> parameter before
     * initiating snapshot creation, and then it calls the SSM document again with the
     * <code>post-script</code> parameter after initiating snapshot creation.</p> </li>
     * </ul> <p>If you are automating VSS Backups, omit this parameter.</p> <p>Default:
     * PRE and POST</p>
     */
    inline Script& WithStages(const Aws::Vector<StageValues>& value) { SetStages(value); return *this;}

    /**
     * <p>Indicate which scripts Amazon Data Lifecycle Manager should run on target
     * instances. Pre scripts run before Amazon Data Lifecycle Manager initiates
     * snapshot creation. Post scripts run after Amazon Data Lifecycle Manager
     * initiates snapshot creation.</p> <ul> <li> <p>To run a pre script only, specify
     * <code>PRE</code>. In this case, Amazon Data Lifecycle Manager calls the SSM
     * document with the <code>pre-script</code> parameter before initiating snapshot
     * creation.</p> </li> <li> <p>To run a post script only, specify
     * <code>POST</code>. In this case, Amazon Data Lifecycle Manager calls the SSM
     * document with the <code>post-script</code> parameter after initiating snapshot
     * creation.</p> </li> <li> <p>To run both pre and post scripts, specify both
     * <code>PRE</code> and <code>POST</code>. In this case, Amazon Data Lifecycle
     * Manager calls the SSM document with the <code>pre-script</code> parameter before
     * initiating snapshot creation, and then it calls the SSM document again with the
     * <code>post-script</code> parameter after initiating snapshot creation.</p> </li>
     * </ul> <p>If you are automating VSS Backups, omit this parameter.</p> <p>Default:
     * PRE and POST</p>
     */
    inline Script& WithStages(Aws::Vector<StageValues>&& value) { SetStages(std::move(value)); return *this;}

    /**
     * <p>Indicate which scripts Amazon Data Lifecycle Manager should run on target
     * instances. Pre scripts run before Amazon Data Lifecycle Manager initiates
     * snapshot creation. Post scripts run after Amazon Data Lifecycle Manager
     * initiates snapshot creation.</p> <ul> <li> <p>To run a pre script only, specify
     * <code>PRE</code>. In this case, Amazon Data Lifecycle Manager calls the SSM
     * document with the <code>pre-script</code> parameter before initiating snapshot
     * creation.</p> </li> <li> <p>To run a post script only, specify
     * <code>POST</code>. In this case, Amazon Data Lifecycle Manager calls the SSM
     * document with the <code>post-script</code> parameter after initiating snapshot
     * creation.</p> </li> <li> <p>To run both pre and post scripts, specify both
     * <code>PRE</code> and <code>POST</code>. In this case, Amazon Data Lifecycle
     * Manager calls the SSM document with the <code>pre-script</code> parameter before
     * initiating snapshot creation, and then it calls the SSM document again with the
     * <code>post-script</code> parameter after initiating snapshot creation.</p> </li>
     * </ul> <p>If you are automating VSS Backups, omit this parameter.</p> <p>Default:
     * PRE and POST</p>
     */
    inline Script& AddStages(const StageValues& value) { m_stagesHasBeenSet = true; m_stages.push_back(value); return *this; }

    /**
     * <p>Indicate which scripts Amazon Data Lifecycle Manager should run on target
     * instances. Pre scripts run before Amazon Data Lifecycle Manager initiates
     * snapshot creation. Post scripts run after Amazon Data Lifecycle Manager
     * initiates snapshot creation.</p> <ul> <li> <p>To run a pre script only, specify
     * <code>PRE</code>. In this case, Amazon Data Lifecycle Manager calls the SSM
     * document with the <code>pre-script</code> parameter before initiating snapshot
     * creation.</p> </li> <li> <p>To run a post script only, specify
     * <code>POST</code>. In this case, Amazon Data Lifecycle Manager calls the SSM
     * document with the <code>post-script</code> parameter after initiating snapshot
     * creation.</p> </li> <li> <p>To run both pre and post scripts, specify both
     * <code>PRE</code> and <code>POST</code>. In this case, Amazon Data Lifecycle
     * Manager calls the SSM document with the <code>pre-script</code> parameter before
     * initiating snapshot creation, and then it calls the SSM document again with the
     * <code>post-script</code> parameter after initiating snapshot creation.</p> </li>
     * </ul> <p>If you are automating VSS Backups, omit this parameter.</p> <p>Default:
     * PRE and POST</p>
     */
    inline Script& AddStages(StageValues&& value) { m_stagesHasBeenSet = true; m_stages.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates the service used to execute the pre and/or post scripts.</p> <ul>
     * <li> <p>If you are using custom SSM documents or automating
     * application-consistent snapshots of SAP HANA workloads, specify
     * <code>AWS_SYSTEMS_MANAGER</code>.</p> </li> <li> <p>If you are automating VSS
     * Backups, omit this parameter.</p> </li> </ul> <p>Default:
     * AWS_SYSTEMS_MANAGER</p>
     */
    inline const ExecutionHandlerServiceValues& GetExecutionHandlerService() const{ return m_executionHandlerService; }

    /**
     * <p>Indicates the service used to execute the pre and/or post scripts.</p> <ul>
     * <li> <p>If you are using custom SSM documents or automating
     * application-consistent snapshots of SAP HANA workloads, specify
     * <code>AWS_SYSTEMS_MANAGER</code>.</p> </li> <li> <p>If you are automating VSS
     * Backups, omit this parameter.</p> </li> </ul> <p>Default:
     * AWS_SYSTEMS_MANAGER</p>
     */
    inline bool ExecutionHandlerServiceHasBeenSet() const { return m_executionHandlerServiceHasBeenSet; }

    /**
     * <p>Indicates the service used to execute the pre and/or post scripts.</p> <ul>
     * <li> <p>If you are using custom SSM documents or automating
     * application-consistent snapshots of SAP HANA workloads, specify
     * <code>AWS_SYSTEMS_MANAGER</code>.</p> </li> <li> <p>If you are automating VSS
     * Backups, omit this parameter.</p> </li> </ul> <p>Default:
     * AWS_SYSTEMS_MANAGER</p>
     */
    inline void SetExecutionHandlerService(const ExecutionHandlerServiceValues& value) { m_executionHandlerServiceHasBeenSet = true; m_executionHandlerService = value; }

    /**
     * <p>Indicates the service used to execute the pre and/or post scripts.</p> <ul>
     * <li> <p>If you are using custom SSM documents or automating
     * application-consistent snapshots of SAP HANA workloads, specify
     * <code>AWS_SYSTEMS_MANAGER</code>.</p> </li> <li> <p>If you are automating VSS
     * Backups, omit this parameter.</p> </li> </ul> <p>Default:
     * AWS_SYSTEMS_MANAGER</p>
     */
    inline void SetExecutionHandlerService(ExecutionHandlerServiceValues&& value) { m_executionHandlerServiceHasBeenSet = true; m_executionHandlerService = std::move(value); }

    /**
     * <p>Indicates the service used to execute the pre and/or post scripts.</p> <ul>
     * <li> <p>If you are using custom SSM documents or automating
     * application-consistent snapshots of SAP HANA workloads, specify
     * <code>AWS_SYSTEMS_MANAGER</code>.</p> </li> <li> <p>If you are automating VSS
     * Backups, omit this parameter.</p> </li> </ul> <p>Default:
     * AWS_SYSTEMS_MANAGER</p>
     */
    inline Script& WithExecutionHandlerService(const ExecutionHandlerServiceValues& value) { SetExecutionHandlerService(value); return *this;}

    /**
     * <p>Indicates the service used to execute the pre and/or post scripts.</p> <ul>
     * <li> <p>If you are using custom SSM documents or automating
     * application-consistent snapshots of SAP HANA workloads, specify
     * <code>AWS_SYSTEMS_MANAGER</code>.</p> </li> <li> <p>If you are automating VSS
     * Backups, omit this parameter.</p> </li> </ul> <p>Default:
     * AWS_SYSTEMS_MANAGER</p>
     */
    inline Script& WithExecutionHandlerService(ExecutionHandlerServiceValues&& value) { SetExecutionHandlerService(std::move(value)); return *this;}


    /**
     * <p>The SSM document that includes the pre and/or post scripts to run.</p> <ul>
     * <li> <p>If you are automating VSS backups, specify <code>AWS_VSS_BACKUP</code>.
     * In this case, Amazon Data Lifecycle Manager automatically uses the
     * <code>AWSEC2-CreateVssSnapshot</code> SSM document.</p> </li> <li> <p>If you are
     * automating application-consistent snapshots for SAP HANA workloads, specify
     * <code>AWSSystemsManagerSAP-CreateDLMSnapshotForSAPHANA</code>.</p> </li> <li>
     * <p>If you are using a custom SSM document that you own, specify either the name
     * or ARN of the SSM document. If you are using a custom SSM document that is
     * shared with you, specify the ARN of the SSM document.</p> </li> </ul>
     */
    inline const Aws::String& GetExecutionHandler() const{ return m_executionHandler; }

    /**
     * <p>The SSM document that includes the pre and/or post scripts to run.</p> <ul>
     * <li> <p>If you are automating VSS backups, specify <code>AWS_VSS_BACKUP</code>.
     * In this case, Amazon Data Lifecycle Manager automatically uses the
     * <code>AWSEC2-CreateVssSnapshot</code> SSM document.</p> </li> <li> <p>If you are
     * automating application-consistent snapshots for SAP HANA workloads, specify
     * <code>AWSSystemsManagerSAP-CreateDLMSnapshotForSAPHANA</code>.</p> </li> <li>
     * <p>If you are using a custom SSM document that you own, specify either the name
     * or ARN of the SSM document. If you are using a custom SSM document that is
     * shared with you, specify the ARN of the SSM document.</p> </li> </ul>
     */
    inline bool ExecutionHandlerHasBeenSet() const { return m_executionHandlerHasBeenSet; }

    /**
     * <p>The SSM document that includes the pre and/or post scripts to run.</p> <ul>
     * <li> <p>If you are automating VSS backups, specify <code>AWS_VSS_BACKUP</code>.
     * In this case, Amazon Data Lifecycle Manager automatically uses the
     * <code>AWSEC2-CreateVssSnapshot</code> SSM document.</p> </li> <li> <p>If you are
     * automating application-consistent snapshots for SAP HANA workloads, specify
     * <code>AWSSystemsManagerSAP-CreateDLMSnapshotForSAPHANA</code>.</p> </li> <li>
     * <p>If you are using a custom SSM document that you own, specify either the name
     * or ARN of the SSM document. If you are using a custom SSM document that is
     * shared with you, specify the ARN of the SSM document.</p> </li> </ul>
     */
    inline void SetExecutionHandler(const Aws::String& value) { m_executionHandlerHasBeenSet = true; m_executionHandler = value; }

    /**
     * <p>The SSM document that includes the pre and/or post scripts to run.</p> <ul>
     * <li> <p>If you are automating VSS backups, specify <code>AWS_VSS_BACKUP</code>.
     * In this case, Amazon Data Lifecycle Manager automatically uses the
     * <code>AWSEC2-CreateVssSnapshot</code> SSM document.</p> </li> <li> <p>If you are
     * automating application-consistent snapshots for SAP HANA workloads, specify
     * <code>AWSSystemsManagerSAP-CreateDLMSnapshotForSAPHANA</code>.</p> </li> <li>
     * <p>If you are using a custom SSM document that you own, specify either the name
     * or ARN of the SSM document. If you are using a custom SSM document that is
     * shared with you, specify the ARN of the SSM document.</p> </li> </ul>
     */
    inline void SetExecutionHandler(Aws::String&& value) { m_executionHandlerHasBeenSet = true; m_executionHandler = std::move(value); }

    /**
     * <p>The SSM document that includes the pre and/or post scripts to run.</p> <ul>
     * <li> <p>If you are automating VSS backups, specify <code>AWS_VSS_BACKUP</code>.
     * In this case, Amazon Data Lifecycle Manager automatically uses the
     * <code>AWSEC2-CreateVssSnapshot</code> SSM document.</p> </li> <li> <p>If you are
     * automating application-consistent snapshots for SAP HANA workloads, specify
     * <code>AWSSystemsManagerSAP-CreateDLMSnapshotForSAPHANA</code>.</p> </li> <li>
     * <p>If you are using a custom SSM document that you own, specify either the name
     * or ARN of the SSM document. If you are using a custom SSM document that is
     * shared with you, specify the ARN of the SSM document.</p> </li> </ul>
     */
    inline void SetExecutionHandler(const char* value) { m_executionHandlerHasBeenSet = true; m_executionHandler.assign(value); }

    /**
     * <p>The SSM document that includes the pre and/or post scripts to run.</p> <ul>
     * <li> <p>If you are automating VSS backups, specify <code>AWS_VSS_BACKUP</code>.
     * In this case, Amazon Data Lifecycle Manager automatically uses the
     * <code>AWSEC2-CreateVssSnapshot</code> SSM document.</p> </li> <li> <p>If you are
     * automating application-consistent snapshots for SAP HANA workloads, specify
     * <code>AWSSystemsManagerSAP-CreateDLMSnapshotForSAPHANA</code>.</p> </li> <li>
     * <p>If you are using a custom SSM document that you own, specify either the name
     * or ARN of the SSM document. If you are using a custom SSM document that is
     * shared with you, specify the ARN of the SSM document.</p> </li> </ul>
     */
    inline Script& WithExecutionHandler(const Aws::String& value) { SetExecutionHandler(value); return *this;}

    /**
     * <p>The SSM document that includes the pre and/or post scripts to run.</p> <ul>
     * <li> <p>If you are automating VSS backups, specify <code>AWS_VSS_BACKUP</code>.
     * In this case, Amazon Data Lifecycle Manager automatically uses the
     * <code>AWSEC2-CreateVssSnapshot</code> SSM document.</p> </li> <li> <p>If you are
     * automating application-consistent snapshots for SAP HANA workloads, specify
     * <code>AWSSystemsManagerSAP-CreateDLMSnapshotForSAPHANA</code>.</p> </li> <li>
     * <p>If you are using a custom SSM document that you own, specify either the name
     * or ARN of the SSM document. If you are using a custom SSM document that is
     * shared with you, specify the ARN of the SSM document.</p> </li> </ul>
     */
    inline Script& WithExecutionHandler(Aws::String&& value) { SetExecutionHandler(std::move(value)); return *this;}

    /**
     * <p>The SSM document that includes the pre and/or post scripts to run.</p> <ul>
     * <li> <p>If you are automating VSS backups, specify <code>AWS_VSS_BACKUP</code>.
     * In this case, Amazon Data Lifecycle Manager automatically uses the
     * <code>AWSEC2-CreateVssSnapshot</code> SSM document.</p> </li> <li> <p>If you are
     * automating application-consistent snapshots for SAP HANA workloads, specify
     * <code>AWSSystemsManagerSAP-CreateDLMSnapshotForSAPHANA</code>.</p> </li> <li>
     * <p>If you are using a custom SSM document that you own, specify either the name
     * or ARN of the SSM document. If you are using a custom SSM document that is
     * shared with you, specify the ARN of the SSM document.</p> </li> </ul>
     */
    inline Script& WithExecutionHandler(const char* value) { SetExecutionHandler(value); return *this;}


    /**
     * <p>Indicates whether Amazon Data Lifecycle Manager should default to
     * crash-consistent snapshots if the pre script fails.</p> <ul> <li> <p>To default
     * to crash consistent snapshot if the pre script fails, specify
     * <code>true</code>.</p> </li> <li> <p>To skip the instance for snapshot creation
     * if the pre script fails, specify <code>false</code>.</p> </li> </ul> <p>This
     * parameter is supported only if you run a pre script. If you run a post script
     * only, omit this parameter.</p> <p>Default: true</p>
     */
    inline bool GetExecuteOperationOnScriptFailure() const{ return m_executeOperationOnScriptFailure; }

    /**
     * <p>Indicates whether Amazon Data Lifecycle Manager should default to
     * crash-consistent snapshots if the pre script fails.</p> <ul> <li> <p>To default
     * to crash consistent snapshot if the pre script fails, specify
     * <code>true</code>.</p> </li> <li> <p>To skip the instance for snapshot creation
     * if the pre script fails, specify <code>false</code>.</p> </li> </ul> <p>This
     * parameter is supported only if you run a pre script. If you run a post script
     * only, omit this parameter.</p> <p>Default: true</p>
     */
    inline bool ExecuteOperationOnScriptFailureHasBeenSet() const { return m_executeOperationOnScriptFailureHasBeenSet; }

    /**
     * <p>Indicates whether Amazon Data Lifecycle Manager should default to
     * crash-consistent snapshots if the pre script fails.</p> <ul> <li> <p>To default
     * to crash consistent snapshot if the pre script fails, specify
     * <code>true</code>.</p> </li> <li> <p>To skip the instance for snapshot creation
     * if the pre script fails, specify <code>false</code>.</p> </li> </ul> <p>This
     * parameter is supported only if you run a pre script. If you run a post script
     * only, omit this parameter.</p> <p>Default: true</p>
     */
    inline void SetExecuteOperationOnScriptFailure(bool value) { m_executeOperationOnScriptFailureHasBeenSet = true; m_executeOperationOnScriptFailure = value; }

    /**
     * <p>Indicates whether Amazon Data Lifecycle Manager should default to
     * crash-consistent snapshots if the pre script fails.</p> <ul> <li> <p>To default
     * to crash consistent snapshot if the pre script fails, specify
     * <code>true</code>.</p> </li> <li> <p>To skip the instance for snapshot creation
     * if the pre script fails, specify <code>false</code>.</p> </li> </ul> <p>This
     * parameter is supported only if you run a pre script. If you run a post script
     * only, omit this parameter.</p> <p>Default: true</p>
     */
    inline Script& WithExecuteOperationOnScriptFailure(bool value) { SetExecuteOperationOnScriptFailure(value); return *this;}


    /**
     * <p>Specifies a timeout period, in seconds, after which Amazon Data Lifecycle
     * Manager fails the script run attempt if it has not completed. If a script does
     * not complete within its timeout period, Amazon Data Lifecycle Manager fails the
     * attempt. The timeout period applies to the pre and post scripts individually.
     * </p> <p>If you are automating VSS Backups, omit this parameter.</p> <p>Default:
     * 10</p>
     */
    inline int GetExecutionTimeout() const{ return m_executionTimeout; }

    /**
     * <p>Specifies a timeout period, in seconds, after which Amazon Data Lifecycle
     * Manager fails the script run attempt if it has not completed. If a script does
     * not complete within its timeout period, Amazon Data Lifecycle Manager fails the
     * attempt. The timeout period applies to the pre and post scripts individually.
     * </p> <p>If you are automating VSS Backups, omit this parameter.</p> <p>Default:
     * 10</p>
     */
    inline bool ExecutionTimeoutHasBeenSet() const { return m_executionTimeoutHasBeenSet; }

    /**
     * <p>Specifies a timeout period, in seconds, after which Amazon Data Lifecycle
     * Manager fails the script run attempt if it has not completed. If a script does
     * not complete within its timeout period, Amazon Data Lifecycle Manager fails the
     * attempt. The timeout period applies to the pre and post scripts individually.
     * </p> <p>If you are automating VSS Backups, omit this parameter.</p> <p>Default:
     * 10</p>
     */
    inline void SetExecutionTimeout(int value) { m_executionTimeoutHasBeenSet = true; m_executionTimeout = value; }

    /**
     * <p>Specifies a timeout period, in seconds, after which Amazon Data Lifecycle
     * Manager fails the script run attempt if it has not completed. If a script does
     * not complete within its timeout period, Amazon Data Lifecycle Manager fails the
     * attempt. The timeout period applies to the pre and post scripts individually.
     * </p> <p>If you are automating VSS Backups, omit this parameter.</p> <p>Default:
     * 10</p>
     */
    inline Script& WithExecutionTimeout(int value) { SetExecutionTimeout(value); return *this;}


    /**
     * <p>Specifies the number of times Amazon Data Lifecycle Manager should retry
     * scripts that fail.</p> <ul> <li> <p>If the pre script fails, Amazon Data
     * Lifecycle Manager retries the entire snapshot creation process, including
     * running the pre and post scripts.</p> </li> <li> <p>If the post script fails,
     * Amazon Data Lifecycle Manager retries the post script only; in this case, the
     * pre script will have completed and the snapshot might have been created.</p>
     * </li> </ul> <p>If you do not want Amazon Data Lifecycle Manager to retry failed
     * scripts, specify <code>0</code>.</p> <p>Default: 0</p>
     */
    inline int GetMaximumRetryCount() const{ return m_maximumRetryCount; }

    /**
     * <p>Specifies the number of times Amazon Data Lifecycle Manager should retry
     * scripts that fail.</p> <ul> <li> <p>If the pre script fails, Amazon Data
     * Lifecycle Manager retries the entire snapshot creation process, including
     * running the pre and post scripts.</p> </li> <li> <p>If the post script fails,
     * Amazon Data Lifecycle Manager retries the post script only; in this case, the
     * pre script will have completed and the snapshot might have been created.</p>
     * </li> </ul> <p>If you do not want Amazon Data Lifecycle Manager to retry failed
     * scripts, specify <code>0</code>.</p> <p>Default: 0</p>
     */
    inline bool MaximumRetryCountHasBeenSet() const { return m_maximumRetryCountHasBeenSet; }

    /**
     * <p>Specifies the number of times Amazon Data Lifecycle Manager should retry
     * scripts that fail.</p> <ul> <li> <p>If the pre script fails, Amazon Data
     * Lifecycle Manager retries the entire snapshot creation process, including
     * running the pre and post scripts.</p> </li> <li> <p>If the post script fails,
     * Amazon Data Lifecycle Manager retries the post script only; in this case, the
     * pre script will have completed and the snapshot might have been created.</p>
     * </li> </ul> <p>If you do not want Amazon Data Lifecycle Manager to retry failed
     * scripts, specify <code>0</code>.</p> <p>Default: 0</p>
     */
    inline void SetMaximumRetryCount(int value) { m_maximumRetryCountHasBeenSet = true; m_maximumRetryCount = value; }

    /**
     * <p>Specifies the number of times Amazon Data Lifecycle Manager should retry
     * scripts that fail.</p> <ul> <li> <p>If the pre script fails, Amazon Data
     * Lifecycle Manager retries the entire snapshot creation process, including
     * running the pre and post scripts.</p> </li> <li> <p>If the post script fails,
     * Amazon Data Lifecycle Manager retries the post script only; in this case, the
     * pre script will have completed and the snapshot might have been created.</p>
     * </li> </ul> <p>If you do not want Amazon Data Lifecycle Manager to retry failed
     * scripts, specify <code>0</code>.</p> <p>Default: 0</p>
     */
    inline Script& WithMaximumRetryCount(int value) { SetMaximumRetryCount(value); return *this;}

  private:

    Aws::Vector<StageValues> m_stages;
    bool m_stagesHasBeenSet = false;

    ExecutionHandlerServiceValues m_executionHandlerService;
    bool m_executionHandlerServiceHasBeenSet = false;

    Aws::String m_executionHandler;
    bool m_executionHandlerHasBeenSet = false;

    bool m_executeOperationOnScriptFailure;
    bool m_executeOperationOnScriptFailureHasBeenSet = false;

    int m_executionTimeout;
    bool m_executionTimeoutHasBeenSet = false;

    int m_maximumRetryCount;
    bool m_maximumRetryCountHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
