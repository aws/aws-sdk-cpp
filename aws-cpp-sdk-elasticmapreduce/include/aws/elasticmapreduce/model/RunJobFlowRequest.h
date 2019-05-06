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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/JobFlowInstancesConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/ScaleDownBehavior.h>
#include <aws/elasticmapreduce/model/RepoUpgradeOnBoot.h>
#include <aws/elasticmapreduce/model/KerberosAttributes.h>
#include <aws/elasticmapreduce/model/StepConfig.h>
#include <aws/elasticmapreduce/model/BootstrapActionConfig.h>
#include <aws/elasticmapreduce/model/SupportedProductConfig.h>
#include <aws/elasticmapreduce/model/Application.h>
#include <aws/elasticmapreduce/model/Configuration.h>
#include <aws/elasticmapreduce/model/Tag.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p> Input to the <a>RunJobFlow</a> operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RunJobFlowInput">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API RunJobFlowRequest : public EMRRequest
  {
  public:
    RunJobFlowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RunJobFlow"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the job flow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the job flow.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the job flow.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the job flow.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the job flow.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the job flow.</p>
     */
    inline RunJobFlowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the job flow.</p>
     */
    inline RunJobFlowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the job flow.</p>
     */
    inline RunJobFlowRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The location in Amazon S3 to write the log files of the job flow. If a value
     * is not provided, logs are not created.</p>
     */
    inline const Aws::String& GetLogUri() const{ return m_logUri; }

    /**
     * <p>The location in Amazon S3 to write the log files of the job flow. If a value
     * is not provided, logs are not created.</p>
     */
    inline bool LogUriHasBeenSet() const { return m_logUriHasBeenSet; }

    /**
     * <p>The location in Amazon S3 to write the log files of the job flow. If a value
     * is not provided, logs are not created.</p>
     */
    inline void SetLogUri(const Aws::String& value) { m_logUriHasBeenSet = true; m_logUri = value; }

    /**
     * <p>The location in Amazon S3 to write the log files of the job flow. If a value
     * is not provided, logs are not created.</p>
     */
    inline void SetLogUri(Aws::String&& value) { m_logUriHasBeenSet = true; m_logUri = std::move(value); }

    /**
     * <p>The location in Amazon S3 to write the log files of the job flow. If a value
     * is not provided, logs are not created.</p>
     */
    inline void SetLogUri(const char* value) { m_logUriHasBeenSet = true; m_logUri.assign(value); }

    /**
     * <p>The location in Amazon S3 to write the log files of the job flow. If a value
     * is not provided, logs are not created.</p>
     */
    inline RunJobFlowRequest& WithLogUri(const Aws::String& value) { SetLogUri(value); return *this;}

    /**
     * <p>The location in Amazon S3 to write the log files of the job flow. If a value
     * is not provided, logs are not created.</p>
     */
    inline RunJobFlowRequest& WithLogUri(Aws::String&& value) { SetLogUri(std::move(value)); return *this;}

    /**
     * <p>The location in Amazon S3 to write the log files of the job flow. If a value
     * is not provided, logs are not created.</p>
     */
    inline RunJobFlowRequest& WithLogUri(const char* value) { SetLogUri(value); return *this;}


    /**
     * <p>A JSON string for selecting additional features.</p>
     */
    inline const Aws::String& GetAdditionalInfo() const{ return m_additionalInfo; }

    /**
     * <p>A JSON string for selecting additional features.</p>
     */
    inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }

    /**
     * <p>A JSON string for selecting additional features.</p>
     */
    inline void SetAdditionalInfo(const Aws::String& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = value; }

    /**
     * <p>A JSON string for selecting additional features.</p>
     */
    inline void SetAdditionalInfo(Aws::String&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::move(value); }

    /**
     * <p>A JSON string for selecting additional features.</p>
     */
    inline void SetAdditionalInfo(const char* value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.assign(value); }

    /**
     * <p>A JSON string for selecting additional features.</p>
     */
    inline RunJobFlowRequest& WithAdditionalInfo(const Aws::String& value) { SetAdditionalInfo(value); return *this;}

    /**
     * <p>A JSON string for selecting additional features.</p>
     */
    inline RunJobFlowRequest& WithAdditionalInfo(Aws::String&& value) { SetAdditionalInfo(std::move(value)); return *this;}

    /**
     * <p>A JSON string for selecting additional features.</p>
     */
    inline RunJobFlowRequest& WithAdditionalInfo(const char* value) { SetAdditionalInfo(value); return *this;}


    /**
     * <p>Applies only to Amazon EMR AMI versions 3.x and 2.x. For Amazon EMR releases
     * 4.0 and later, <code>ReleaseLabel</code> is used. To specify a custom AMI, use
     * <code>CustomAmiID</code>.</p>
     */
    inline const Aws::String& GetAmiVersion() const{ return m_amiVersion; }

    /**
     * <p>Applies only to Amazon EMR AMI versions 3.x and 2.x. For Amazon EMR releases
     * 4.0 and later, <code>ReleaseLabel</code> is used. To specify a custom AMI, use
     * <code>CustomAmiID</code>.</p>
     */
    inline bool AmiVersionHasBeenSet() const { return m_amiVersionHasBeenSet; }

    /**
     * <p>Applies only to Amazon EMR AMI versions 3.x and 2.x. For Amazon EMR releases
     * 4.0 and later, <code>ReleaseLabel</code> is used. To specify a custom AMI, use
     * <code>CustomAmiID</code>.</p>
     */
    inline void SetAmiVersion(const Aws::String& value) { m_amiVersionHasBeenSet = true; m_amiVersion = value; }

    /**
     * <p>Applies only to Amazon EMR AMI versions 3.x and 2.x. For Amazon EMR releases
     * 4.0 and later, <code>ReleaseLabel</code> is used. To specify a custom AMI, use
     * <code>CustomAmiID</code>.</p>
     */
    inline void SetAmiVersion(Aws::String&& value) { m_amiVersionHasBeenSet = true; m_amiVersion = std::move(value); }

    /**
     * <p>Applies only to Amazon EMR AMI versions 3.x and 2.x. For Amazon EMR releases
     * 4.0 and later, <code>ReleaseLabel</code> is used. To specify a custom AMI, use
     * <code>CustomAmiID</code>.</p>
     */
    inline void SetAmiVersion(const char* value) { m_amiVersionHasBeenSet = true; m_amiVersion.assign(value); }

    /**
     * <p>Applies only to Amazon EMR AMI versions 3.x and 2.x. For Amazon EMR releases
     * 4.0 and later, <code>ReleaseLabel</code> is used. To specify a custom AMI, use
     * <code>CustomAmiID</code>.</p>
     */
    inline RunJobFlowRequest& WithAmiVersion(const Aws::String& value) { SetAmiVersion(value); return *this;}

    /**
     * <p>Applies only to Amazon EMR AMI versions 3.x and 2.x. For Amazon EMR releases
     * 4.0 and later, <code>ReleaseLabel</code> is used. To specify a custom AMI, use
     * <code>CustomAmiID</code>.</p>
     */
    inline RunJobFlowRequest& WithAmiVersion(Aws::String&& value) { SetAmiVersion(std::move(value)); return *this;}

    /**
     * <p>Applies only to Amazon EMR AMI versions 3.x and 2.x. For Amazon EMR releases
     * 4.0 and later, <code>ReleaseLabel</code> is used. To specify a custom AMI, use
     * <code>CustomAmiID</code>.</p>
     */
    inline RunJobFlowRequest& WithAmiVersion(const char* value) { SetAmiVersion(value); return *this;}


    /**
     * <p>The Amazon EMR release label, which determines the version of open-source
     * application packages installed on the cluster. Release labels are in the form
     * <code>emr-x.x.x</code>, where x.x.x is an Amazon EMR release version, for
     * example, <code>emr-5.14.0</code>. For more information about Amazon EMR release
     * versions and included application versions and features, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">https://docs.aws.amazon.com/emr/latest/ReleaseGuide/</a>.
     * The release label applies only to Amazon EMR releases versions 4.x and later.
     * Earlier versions use <code>AmiVersion</code>.</p>
     */
    inline const Aws::String& GetReleaseLabel() const{ return m_releaseLabel; }

    /**
     * <p>The Amazon EMR release label, which determines the version of open-source
     * application packages installed on the cluster. Release labels are in the form
     * <code>emr-x.x.x</code>, where x.x.x is an Amazon EMR release version, for
     * example, <code>emr-5.14.0</code>. For more information about Amazon EMR release
     * versions and included application versions and features, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">https://docs.aws.amazon.com/emr/latest/ReleaseGuide/</a>.
     * The release label applies only to Amazon EMR releases versions 4.x and later.
     * Earlier versions use <code>AmiVersion</code>.</p>
     */
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }

    /**
     * <p>The Amazon EMR release label, which determines the version of open-source
     * application packages installed on the cluster. Release labels are in the form
     * <code>emr-x.x.x</code>, where x.x.x is an Amazon EMR release version, for
     * example, <code>emr-5.14.0</code>. For more information about Amazon EMR release
     * versions and included application versions and features, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">https://docs.aws.amazon.com/emr/latest/ReleaseGuide/</a>.
     * The release label applies only to Amazon EMR releases versions 4.x and later.
     * Earlier versions use <code>AmiVersion</code>.</p>
     */
    inline void SetReleaseLabel(const Aws::String& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = value; }

    /**
     * <p>The Amazon EMR release label, which determines the version of open-source
     * application packages installed on the cluster. Release labels are in the form
     * <code>emr-x.x.x</code>, where x.x.x is an Amazon EMR release version, for
     * example, <code>emr-5.14.0</code>. For more information about Amazon EMR release
     * versions and included application versions and features, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">https://docs.aws.amazon.com/emr/latest/ReleaseGuide/</a>.
     * The release label applies only to Amazon EMR releases versions 4.x and later.
     * Earlier versions use <code>AmiVersion</code>.</p>
     */
    inline void SetReleaseLabel(Aws::String&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::move(value); }

    /**
     * <p>The Amazon EMR release label, which determines the version of open-source
     * application packages installed on the cluster. Release labels are in the form
     * <code>emr-x.x.x</code>, where x.x.x is an Amazon EMR release version, for
     * example, <code>emr-5.14.0</code>. For more information about Amazon EMR release
     * versions and included application versions and features, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">https://docs.aws.amazon.com/emr/latest/ReleaseGuide/</a>.
     * The release label applies only to Amazon EMR releases versions 4.x and later.
     * Earlier versions use <code>AmiVersion</code>.</p>
     */
    inline void SetReleaseLabel(const char* value) { m_releaseLabelHasBeenSet = true; m_releaseLabel.assign(value); }

    /**
     * <p>The Amazon EMR release label, which determines the version of open-source
     * application packages installed on the cluster. Release labels are in the form
     * <code>emr-x.x.x</code>, where x.x.x is an Amazon EMR release version, for
     * example, <code>emr-5.14.0</code>. For more information about Amazon EMR release
     * versions and included application versions and features, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">https://docs.aws.amazon.com/emr/latest/ReleaseGuide/</a>.
     * The release label applies only to Amazon EMR releases versions 4.x and later.
     * Earlier versions use <code>AmiVersion</code>.</p>
     */
    inline RunJobFlowRequest& WithReleaseLabel(const Aws::String& value) { SetReleaseLabel(value); return *this;}

    /**
     * <p>The Amazon EMR release label, which determines the version of open-source
     * application packages installed on the cluster. Release labels are in the form
     * <code>emr-x.x.x</code>, where x.x.x is an Amazon EMR release version, for
     * example, <code>emr-5.14.0</code>. For more information about Amazon EMR release
     * versions and included application versions and features, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">https://docs.aws.amazon.com/emr/latest/ReleaseGuide/</a>.
     * The release label applies only to Amazon EMR releases versions 4.x and later.
     * Earlier versions use <code>AmiVersion</code>.</p>
     */
    inline RunJobFlowRequest& WithReleaseLabel(Aws::String&& value) { SetReleaseLabel(std::move(value)); return *this;}

    /**
     * <p>The Amazon EMR release label, which determines the version of open-source
     * application packages installed on the cluster. Release labels are in the form
     * <code>emr-x.x.x</code>, where x.x.x is an Amazon EMR release version, for
     * example, <code>emr-5.14.0</code>. For more information about Amazon EMR release
     * versions and included application versions and features, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">https://docs.aws.amazon.com/emr/latest/ReleaseGuide/</a>.
     * The release label applies only to Amazon EMR releases versions 4.x and later.
     * Earlier versions use <code>AmiVersion</code>.</p>
     */
    inline RunJobFlowRequest& WithReleaseLabel(const char* value) { SetReleaseLabel(value); return *this;}


    /**
     * <p>A specification of the number and type of Amazon EC2 instances.</p>
     */
    inline const JobFlowInstancesConfig& GetInstances() const{ return m_instances; }

    /**
     * <p>A specification of the number and type of Amazon EC2 instances.</p>
     */
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }

    /**
     * <p>A specification of the number and type of Amazon EC2 instances.</p>
     */
    inline void SetInstances(const JobFlowInstancesConfig& value) { m_instancesHasBeenSet = true; m_instances = value; }

    /**
     * <p>A specification of the number and type of Amazon EC2 instances.</p>
     */
    inline void SetInstances(JobFlowInstancesConfig&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }

    /**
     * <p>A specification of the number and type of Amazon EC2 instances.</p>
     */
    inline RunJobFlowRequest& WithInstances(const JobFlowInstancesConfig& value) { SetInstances(value); return *this;}

    /**
     * <p>A specification of the number and type of Amazon EC2 instances.</p>
     */
    inline RunJobFlowRequest& WithInstances(JobFlowInstancesConfig&& value) { SetInstances(std::move(value)); return *this;}


    /**
     * <p>A list of steps to run.</p>
     */
    inline const Aws::Vector<StepConfig>& GetSteps() const{ return m_steps; }

    /**
     * <p>A list of steps to run.</p>
     */
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }

    /**
     * <p>A list of steps to run.</p>
     */
    inline void SetSteps(const Aws::Vector<StepConfig>& value) { m_stepsHasBeenSet = true; m_steps = value; }

    /**
     * <p>A list of steps to run.</p>
     */
    inline void SetSteps(Aws::Vector<StepConfig>&& value) { m_stepsHasBeenSet = true; m_steps = std::move(value); }

    /**
     * <p>A list of steps to run.</p>
     */
    inline RunJobFlowRequest& WithSteps(const Aws::Vector<StepConfig>& value) { SetSteps(value); return *this;}

    /**
     * <p>A list of steps to run.</p>
     */
    inline RunJobFlowRequest& WithSteps(Aws::Vector<StepConfig>&& value) { SetSteps(std::move(value)); return *this;}

    /**
     * <p>A list of steps to run.</p>
     */
    inline RunJobFlowRequest& AddSteps(const StepConfig& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }

    /**
     * <p>A list of steps to run.</p>
     */
    inline RunJobFlowRequest& AddSteps(StepConfig&& value) { m_stepsHasBeenSet = true; m_steps.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of bootstrap actions to run before Hadoop starts on the cluster
     * nodes.</p>
     */
    inline const Aws::Vector<BootstrapActionConfig>& GetBootstrapActions() const{ return m_bootstrapActions; }

    /**
     * <p>A list of bootstrap actions to run before Hadoop starts on the cluster
     * nodes.</p>
     */
    inline bool BootstrapActionsHasBeenSet() const { return m_bootstrapActionsHasBeenSet; }

    /**
     * <p>A list of bootstrap actions to run before Hadoop starts on the cluster
     * nodes.</p>
     */
    inline void SetBootstrapActions(const Aws::Vector<BootstrapActionConfig>& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions = value; }

    /**
     * <p>A list of bootstrap actions to run before Hadoop starts on the cluster
     * nodes.</p>
     */
    inline void SetBootstrapActions(Aws::Vector<BootstrapActionConfig>&& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions = std::move(value); }

    /**
     * <p>A list of bootstrap actions to run before Hadoop starts on the cluster
     * nodes.</p>
     */
    inline RunJobFlowRequest& WithBootstrapActions(const Aws::Vector<BootstrapActionConfig>& value) { SetBootstrapActions(value); return *this;}

    /**
     * <p>A list of bootstrap actions to run before Hadoop starts on the cluster
     * nodes.</p>
     */
    inline RunJobFlowRequest& WithBootstrapActions(Aws::Vector<BootstrapActionConfig>&& value) { SetBootstrapActions(std::move(value)); return *this;}

    /**
     * <p>A list of bootstrap actions to run before Hadoop starts on the cluster
     * nodes.</p>
     */
    inline RunJobFlowRequest& AddBootstrapActions(const BootstrapActionConfig& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions.push_back(value); return *this; }

    /**
     * <p>A list of bootstrap actions to run before Hadoop starts on the cluster
     * nodes.</p>
     */
    inline RunJobFlowRequest& AddBootstrapActions(BootstrapActionConfig&& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions.push_back(std::move(value)); return *this; }


    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * later, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use. For more information, see the <a
     * href="https://docs.aws.amazon.com/emr/latest/DeveloperGuide/emr-dg.pdf">Amazon
     * EMR Developer Guide</a>. Currently supported values are:</p> <ul> <li>
     * <p>"mapr-m3" - launch the job flow using MapR M3 Edition.</p> </li> <li>
     * <p>"mapr-m5" - launch the job flow using MapR M5 Edition.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedProducts() const{ return m_supportedProducts; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * later, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use. For more information, see the <a
     * href="https://docs.aws.amazon.com/emr/latest/DeveloperGuide/emr-dg.pdf">Amazon
     * EMR Developer Guide</a>. Currently supported values are:</p> <ul> <li>
     * <p>"mapr-m3" - launch the job flow using MapR M3 Edition.</p> </li> <li>
     * <p>"mapr-m5" - launch the job flow using MapR M5 Edition.</p> </li> </ul>
     */
    inline bool SupportedProductsHasBeenSet() const { return m_supportedProductsHasBeenSet; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * later, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use. For more information, see the <a
     * href="https://docs.aws.amazon.com/emr/latest/DeveloperGuide/emr-dg.pdf">Amazon
     * EMR Developer Guide</a>. Currently supported values are:</p> <ul> <li>
     * <p>"mapr-m3" - launch the job flow using MapR M3 Edition.</p> </li> <li>
     * <p>"mapr-m5" - launch the job flow using MapR M5 Edition.</p> </li> </ul>
     */
    inline void SetSupportedProducts(const Aws::Vector<Aws::String>& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts = value; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * later, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use. For more information, see the <a
     * href="https://docs.aws.amazon.com/emr/latest/DeveloperGuide/emr-dg.pdf">Amazon
     * EMR Developer Guide</a>. Currently supported values are:</p> <ul> <li>
     * <p>"mapr-m3" - launch the job flow using MapR M3 Edition.</p> </li> <li>
     * <p>"mapr-m5" - launch the job flow using MapR M5 Edition.</p> </li> </ul>
     */
    inline void SetSupportedProducts(Aws::Vector<Aws::String>&& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts = std::move(value); }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * later, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use. For more information, see the <a
     * href="https://docs.aws.amazon.com/emr/latest/DeveloperGuide/emr-dg.pdf">Amazon
     * EMR Developer Guide</a>. Currently supported values are:</p> <ul> <li>
     * <p>"mapr-m3" - launch the job flow using MapR M3 Edition.</p> </li> <li>
     * <p>"mapr-m5" - launch the job flow using MapR M5 Edition.</p> </li> </ul>
     */
    inline RunJobFlowRequest& WithSupportedProducts(const Aws::Vector<Aws::String>& value) { SetSupportedProducts(value); return *this;}

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * later, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use. For more information, see the <a
     * href="https://docs.aws.amazon.com/emr/latest/DeveloperGuide/emr-dg.pdf">Amazon
     * EMR Developer Guide</a>. Currently supported values are:</p> <ul> <li>
     * <p>"mapr-m3" - launch the job flow using MapR M3 Edition.</p> </li> <li>
     * <p>"mapr-m5" - launch the job flow using MapR M5 Edition.</p> </li> </ul>
     */
    inline RunJobFlowRequest& WithSupportedProducts(Aws::Vector<Aws::String>&& value) { SetSupportedProducts(std::move(value)); return *this;}

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * later, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use. For more information, see the <a
     * href="https://docs.aws.amazon.com/emr/latest/DeveloperGuide/emr-dg.pdf">Amazon
     * EMR Developer Guide</a>. Currently supported values are:</p> <ul> <li>
     * <p>"mapr-m3" - launch the job flow using MapR M3 Edition.</p> </li> <li>
     * <p>"mapr-m5" - launch the job flow using MapR M5 Edition.</p> </li> </ul>
     */
    inline RunJobFlowRequest& AddSupportedProducts(const Aws::String& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts.push_back(value); return *this; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * later, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use. For more information, see the <a
     * href="https://docs.aws.amazon.com/emr/latest/DeveloperGuide/emr-dg.pdf">Amazon
     * EMR Developer Guide</a>. Currently supported values are:</p> <ul> <li>
     * <p>"mapr-m3" - launch the job flow using MapR M3 Edition.</p> </li> <li>
     * <p>"mapr-m5" - launch the job flow using MapR M5 Edition.</p> </li> </ul>
     */
    inline RunJobFlowRequest& AddSupportedProducts(Aws::String&& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts.push_back(std::move(value)); return *this; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * later, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use. For more information, see the <a
     * href="https://docs.aws.amazon.com/emr/latest/DeveloperGuide/emr-dg.pdf">Amazon
     * EMR Developer Guide</a>. Currently supported values are:</p> <ul> <li>
     * <p>"mapr-m3" - launch the job flow using MapR M3 Edition.</p> </li> <li>
     * <p>"mapr-m5" - launch the job flow using MapR M5 Edition.</p> </li> </ul>
     */
    inline RunJobFlowRequest& AddSupportedProducts(const char* value) { m_supportedProductsHasBeenSet = true; m_supportedProducts.push_back(value); return *this; }


    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * later, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow that accepts a user argument list.
     * EMR accepts and forwards the argument list to the corresponding installation
     * script as bootstrap action arguments. For more information, see "Launch a Job
     * Flow on the MapR Distribution for Hadoop" in the <a
     * href="https://docs.aws.amazon.com/emr/latest/DeveloperGuide/emr-dg.pdf">Amazon
     * EMR Developer Guide</a>. Supported values are:</p> <ul> <li> <p>"mapr-m3" -
     * launch the cluster using MapR M3 Edition.</p> </li> <li> <p>"mapr-m5" - launch
     * the cluster using MapR M5 Edition.</p> </li> <li> <p>"mapr" with the user
     * arguments specifying "--edition,m3" or "--edition,m5" - launch the job flow
     * using MapR M3 or M5 Edition respectively.</p> </li> <li> <p>"mapr-m7" - launch
     * the cluster using MapR M7 Edition.</p> </li> <li> <p>"hunk" - launch the cluster
     * with the Hunk Big Data Analtics Platform.</p> </li> <li> <p>"hue"- launch the
     * cluster with Hue installed.</p> </li> <li> <p>"spark" - launch the cluster with
     * Apache Spark installed.</p> </li> <li> <p>"ganglia" - launch the cluster with
     * the Ganglia Monitoring System installed.</p> </li> </ul>
     */
    inline const Aws::Vector<SupportedProductConfig>& GetNewSupportedProducts() const{ return m_newSupportedProducts; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * later, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow that accepts a user argument list.
     * EMR accepts and forwards the argument list to the corresponding installation
     * script as bootstrap action arguments. For more information, see "Launch a Job
     * Flow on the MapR Distribution for Hadoop" in the <a
     * href="https://docs.aws.amazon.com/emr/latest/DeveloperGuide/emr-dg.pdf">Amazon
     * EMR Developer Guide</a>. Supported values are:</p> <ul> <li> <p>"mapr-m3" -
     * launch the cluster using MapR M3 Edition.</p> </li> <li> <p>"mapr-m5" - launch
     * the cluster using MapR M5 Edition.</p> </li> <li> <p>"mapr" with the user
     * arguments specifying "--edition,m3" or "--edition,m5" - launch the job flow
     * using MapR M3 or M5 Edition respectively.</p> </li> <li> <p>"mapr-m7" - launch
     * the cluster using MapR M7 Edition.</p> </li> <li> <p>"hunk" - launch the cluster
     * with the Hunk Big Data Analtics Platform.</p> </li> <li> <p>"hue"- launch the
     * cluster with Hue installed.</p> </li> <li> <p>"spark" - launch the cluster with
     * Apache Spark installed.</p> </li> <li> <p>"ganglia" - launch the cluster with
     * the Ganglia Monitoring System installed.</p> </li> </ul>
     */
    inline bool NewSupportedProductsHasBeenSet() const { return m_newSupportedProductsHasBeenSet; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * later, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow that accepts a user argument list.
     * EMR accepts and forwards the argument list to the corresponding installation
     * script as bootstrap action arguments. For more information, see "Launch a Job
     * Flow on the MapR Distribution for Hadoop" in the <a
     * href="https://docs.aws.amazon.com/emr/latest/DeveloperGuide/emr-dg.pdf">Amazon
     * EMR Developer Guide</a>. Supported values are:</p> <ul> <li> <p>"mapr-m3" -
     * launch the cluster using MapR M3 Edition.</p> </li> <li> <p>"mapr-m5" - launch
     * the cluster using MapR M5 Edition.</p> </li> <li> <p>"mapr" with the user
     * arguments specifying "--edition,m3" or "--edition,m5" - launch the job flow
     * using MapR M3 or M5 Edition respectively.</p> </li> <li> <p>"mapr-m7" - launch
     * the cluster using MapR M7 Edition.</p> </li> <li> <p>"hunk" - launch the cluster
     * with the Hunk Big Data Analtics Platform.</p> </li> <li> <p>"hue"- launch the
     * cluster with Hue installed.</p> </li> <li> <p>"spark" - launch the cluster with
     * Apache Spark installed.</p> </li> <li> <p>"ganglia" - launch the cluster with
     * the Ganglia Monitoring System installed.</p> </li> </ul>
     */
    inline void SetNewSupportedProducts(const Aws::Vector<SupportedProductConfig>& value) { m_newSupportedProductsHasBeenSet = true; m_newSupportedProducts = value; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * later, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow that accepts a user argument list.
     * EMR accepts and forwards the argument list to the corresponding installation
     * script as bootstrap action arguments. For more information, see "Launch a Job
     * Flow on the MapR Distribution for Hadoop" in the <a
     * href="https://docs.aws.amazon.com/emr/latest/DeveloperGuide/emr-dg.pdf">Amazon
     * EMR Developer Guide</a>. Supported values are:</p> <ul> <li> <p>"mapr-m3" -
     * launch the cluster using MapR M3 Edition.</p> </li> <li> <p>"mapr-m5" - launch
     * the cluster using MapR M5 Edition.</p> </li> <li> <p>"mapr" with the user
     * arguments specifying "--edition,m3" or "--edition,m5" - launch the job flow
     * using MapR M3 or M5 Edition respectively.</p> </li> <li> <p>"mapr-m7" - launch
     * the cluster using MapR M7 Edition.</p> </li> <li> <p>"hunk" - launch the cluster
     * with the Hunk Big Data Analtics Platform.</p> </li> <li> <p>"hue"- launch the
     * cluster with Hue installed.</p> </li> <li> <p>"spark" - launch the cluster with
     * Apache Spark installed.</p> </li> <li> <p>"ganglia" - launch the cluster with
     * the Ganglia Monitoring System installed.</p> </li> </ul>
     */
    inline void SetNewSupportedProducts(Aws::Vector<SupportedProductConfig>&& value) { m_newSupportedProductsHasBeenSet = true; m_newSupportedProducts = std::move(value); }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * later, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow that accepts a user argument list.
     * EMR accepts and forwards the argument list to the corresponding installation
     * script as bootstrap action arguments. For more information, see "Launch a Job
     * Flow on the MapR Distribution for Hadoop" in the <a
     * href="https://docs.aws.amazon.com/emr/latest/DeveloperGuide/emr-dg.pdf">Amazon
     * EMR Developer Guide</a>. Supported values are:</p> <ul> <li> <p>"mapr-m3" -
     * launch the cluster using MapR M3 Edition.</p> </li> <li> <p>"mapr-m5" - launch
     * the cluster using MapR M5 Edition.</p> </li> <li> <p>"mapr" with the user
     * arguments specifying "--edition,m3" or "--edition,m5" - launch the job flow
     * using MapR M3 or M5 Edition respectively.</p> </li> <li> <p>"mapr-m7" - launch
     * the cluster using MapR M7 Edition.</p> </li> <li> <p>"hunk" - launch the cluster
     * with the Hunk Big Data Analtics Platform.</p> </li> <li> <p>"hue"- launch the
     * cluster with Hue installed.</p> </li> <li> <p>"spark" - launch the cluster with
     * Apache Spark installed.</p> </li> <li> <p>"ganglia" - launch the cluster with
     * the Ganglia Monitoring System installed.</p> </li> </ul>
     */
    inline RunJobFlowRequest& WithNewSupportedProducts(const Aws::Vector<SupportedProductConfig>& value) { SetNewSupportedProducts(value); return *this;}

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * later, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow that accepts a user argument list.
     * EMR accepts and forwards the argument list to the corresponding installation
     * script as bootstrap action arguments. For more information, see "Launch a Job
     * Flow on the MapR Distribution for Hadoop" in the <a
     * href="https://docs.aws.amazon.com/emr/latest/DeveloperGuide/emr-dg.pdf">Amazon
     * EMR Developer Guide</a>. Supported values are:</p> <ul> <li> <p>"mapr-m3" -
     * launch the cluster using MapR M3 Edition.</p> </li> <li> <p>"mapr-m5" - launch
     * the cluster using MapR M5 Edition.</p> </li> <li> <p>"mapr" with the user
     * arguments specifying "--edition,m3" or "--edition,m5" - launch the job flow
     * using MapR M3 or M5 Edition respectively.</p> </li> <li> <p>"mapr-m7" - launch
     * the cluster using MapR M7 Edition.</p> </li> <li> <p>"hunk" - launch the cluster
     * with the Hunk Big Data Analtics Platform.</p> </li> <li> <p>"hue"- launch the
     * cluster with Hue installed.</p> </li> <li> <p>"spark" - launch the cluster with
     * Apache Spark installed.</p> </li> <li> <p>"ganglia" - launch the cluster with
     * the Ganglia Monitoring System installed.</p> </li> </ul>
     */
    inline RunJobFlowRequest& WithNewSupportedProducts(Aws::Vector<SupportedProductConfig>&& value) { SetNewSupportedProducts(std::move(value)); return *this;}

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * later, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow that accepts a user argument list.
     * EMR accepts and forwards the argument list to the corresponding installation
     * script as bootstrap action arguments. For more information, see "Launch a Job
     * Flow on the MapR Distribution for Hadoop" in the <a
     * href="https://docs.aws.amazon.com/emr/latest/DeveloperGuide/emr-dg.pdf">Amazon
     * EMR Developer Guide</a>. Supported values are:</p> <ul> <li> <p>"mapr-m3" -
     * launch the cluster using MapR M3 Edition.</p> </li> <li> <p>"mapr-m5" - launch
     * the cluster using MapR M5 Edition.</p> </li> <li> <p>"mapr" with the user
     * arguments specifying "--edition,m3" or "--edition,m5" - launch the job flow
     * using MapR M3 or M5 Edition respectively.</p> </li> <li> <p>"mapr-m7" - launch
     * the cluster using MapR M7 Edition.</p> </li> <li> <p>"hunk" - launch the cluster
     * with the Hunk Big Data Analtics Platform.</p> </li> <li> <p>"hue"- launch the
     * cluster with Hue installed.</p> </li> <li> <p>"spark" - launch the cluster with
     * Apache Spark installed.</p> </li> <li> <p>"ganglia" - launch the cluster with
     * the Ganglia Monitoring System installed.</p> </li> </ul>
     */
    inline RunJobFlowRequest& AddNewSupportedProducts(const SupportedProductConfig& value) { m_newSupportedProductsHasBeenSet = true; m_newSupportedProducts.push_back(value); return *this; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * later, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow that accepts a user argument list.
     * EMR accepts and forwards the argument list to the corresponding installation
     * script as bootstrap action arguments. For more information, see "Launch a Job
     * Flow on the MapR Distribution for Hadoop" in the <a
     * href="https://docs.aws.amazon.com/emr/latest/DeveloperGuide/emr-dg.pdf">Amazon
     * EMR Developer Guide</a>. Supported values are:</p> <ul> <li> <p>"mapr-m3" -
     * launch the cluster using MapR M3 Edition.</p> </li> <li> <p>"mapr-m5" - launch
     * the cluster using MapR M5 Edition.</p> </li> <li> <p>"mapr" with the user
     * arguments specifying "--edition,m3" or "--edition,m5" - launch the job flow
     * using MapR M3 or M5 Edition respectively.</p> </li> <li> <p>"mapr-m7" - launch
     * the cluster using MapR M7 Edition.</p> </li> <li> <p>"hunk" - launch the cluster
     * with the Hunk Big Data Analtics Platform.</p> </li> <li> <p>"hue"- launch the
     * cluster with Hue installed.</p> </li> <li> <p>"spark" - launch the cluster with
     * Apache Spark installed.</p> </li> <li> <p>"ganglia" - launch the cluster with
     * the Ganglia Monitoring System installed.</p> </li> </ul>
     */
    inline RunJobFlowRequest& AddNewSupportedProducts(SupportedProductConfig&& value) { m_newSupportedProductsHasBeenSet = true; m_newSupportedProducts.push_back(std::move(value)); return *this; }


    /**
     * <p>Applies to Amazon EMR releases 4.0 and later. A case-insensitive list of
     * applications for Amazon EMR to install and configure when launching the cluster.
     * For a list of applications available for each Amazon EMR release version, see
     * the <a href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">Amazon EMR
     * Release Guide</a>.</p>
     */
    inline const Aws::Vector<Application>& GetApplications() const{ return m_applications; }

    /**
     * <p>Applies to Amazon EMR releases 4.0 and later. A case-insensitive list of
     * applications for Amazon EMR to install and configure when launching the cluster.
     * For a list of applications available for each Amazon EMR release version, see
     * the <a href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">Amazon EMR
     * Release Guide</a>.</p>
     */
    inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }

    /**
     * <p>Applies to Amazon EMR releases 4.0 and later. A case-insensitive list of
     * applications for Amazon EMR to install and configure when launching the cluster.
     * For a list of applications available for each Amazon EMR release version, see
     * the <a href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">Amazon EMR
     * Release Guide</a>.</p>
     */
    inline void SetApplications(const Aws::Vector<Application>& value) { m_applicationsHasBeenSet = true; m_applications = value; }

    /**
     * <p>Applies to Amazon EMR releases 4.0 and later. A case-insensitive list of
     * applications for Amazon EMR to install and configure when launching the cluster.
     * For a list of applications available for each Amazon EMR release version, see
     * the <a href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">Amazon EMR
     * Release Guide</a>.</p>
     */
    inline void SetApplications(Aws::Vector<Application>&& value) { m_applicationsHasBeenSet = true; m_applications = std::move(value); }

    /**
     * <p>Applies to Amazon EMR releases 4.0 and later. A case-insensitive list of
     * applications for Amazon EMR to install and configure when launching the cluster.
     * For a list of applications available for each Amazon EMR release version, see
     * the <a href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">Amazon EMR
     * Release Guide</a>.</p>
     */
    inline RunJobFlowRequest& WithApplications(const Aws::Vector<Application>& value) { SetApplications(value); return *this;}

    /**
     * <p>Applies to Amazon EMR releases 4.0 and later. A case-insensitive list of
     * applications for Amazon EMR to install and configure when launching the cluster.
     * For a list of applications available for each Amazon EMR release version, see
     * the <a href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">Amazon EMR
     * Release Guide</a>.</p>
     */
    inline RunJobFlowRequest& WithApplications(Aws::Vector<Application>&& value) { SetApplications(std::move(value)); return *this;}

    /**
     * <p>Applies to Amazon EMR releases 4.0 and later. A case-insensitive list of
     * applications for Amazon EMR to install and configure when launching the cluster.
     * For a list of applications available for each Amazon EMR release version, see
     * the <a href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">Amazon EMR
     * Release Guide</a>.</p>
     */
    inline RunJobFlowRequest& AddApplications(const Application& value) { m_applicationsHasBeenSet = true; m_applications.push_back(value); return *this; }

    /**
     * <p>Applies to Amazon EMR releases 4.0 and later. A case-insensitive list of
     * applications for Amazon EMR to install and configure when launching the cluster.
     * For a list of applications available for each Amazon EMR release version, see
     * the <a href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">Amazon EMR
     * Release Guide</a>.</p>
     */
    inline RunJobFlowRequest& AddApplications(Application&& value) { m_applicationsHasBeenSet = true; m_applications.push_back(std::move(value)); return *this; }


    /**
     * <p>For Amazon EMR releases 4.0 and later. The list of configurations supplied
     * for the EMR cluster you are creating.</p>
     */
    inline const Aws::Vector<Configuration>& GetConfigurations() const{ return m_configurations; }

    /**
     * <p>For Amazon EMR releases 4.0 and later. The list of configurations supplied
     * for the EMR cluster you are creating.</p>
     */
    inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }

    /**
     * <p>For Amazon EMR releases 4.0 and later. The list of configurations supplied
     * for the EMR cluster you are creating.</p>
     */
    inline void SetConfigurations(const Aws::Vector<Configuration>& value) { m_configurationsHasBeenSet = true; m_configurations = value; }

    /**
     * <p>For Amazon EMR releases 4.0 and later. The list of configurations supplied
     * for the EMR cluster you are creating.</p>
     */
    inline void SetConfigurations(Aws::Vector<Configuration>&& value) { m_configurationsHasBeenSet = true; m_configurations = std::move(value); }

    /**
     * <p>For Amazon EMR releases 4.0 and later. The list of configurations supplied
     * for the EMR cluster you are creating.</p>
     */
    inline RunJobFlowRequest& WithConfigurations(const Aws::Vector<Configuration>& value) { SetConfigurations(value); return *this;}

    /**
     * <p>For Amazon EMR releases 4.0 and later. The list of configurations supplied
     * for the EMR cluster you are creating.</p>
     */
    inline RunJobFlowRequest& WithConfigurations(Aws::Vector<Configuration>&& value) { SetConfigurations(std::move(value)); return *this;}

    /**
     * <p>For Amazon EMR releases 4.0 and later. The list of configurations supplied
     * for the EMR cluster you are creating.</p>
     */
    inline RunJobFlowRequest& AddConfigurations(const Configuration& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(value); return *this; }

    /**
     * <p>For Amazon EMR releases 4.0 and later. The list of configurations supplied
     * for the EMR cluster you are creating.</p>
     */
    inline RunJobFlowRequest& AddConfigurations(Configuration&& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(std::move(value)); return *this; }


    /**
     * <p>Whether the cluster is visible to all IAM users of the AWS account associated
     * with the cluster. If this value is set to <code>true</code>, all IAM users of
     * that AWS account can view and (if they have the proper policy permissions set)
     * manage the cluster. If it is set to <code>false</code>, only the IAM user that
     * created the cluster can view and manage it.</p>
     */
    inline bool GetVisibleToAllUsers() const{ return m_visibleToAllUsers; }

    /**
     * <p>Whether the cluster is visible to all IAM users of the AWS account associated
     * with the cluster. If this value is set to <code>true</code>, all IAM users of
     * that AWS account can view and (if they have the proper policy permissions set)
     * manage the cluster. If it is set to <code>false</code>, only the IAM user that
     * created the cluster can view and manage it.</p>
     */
    inline bool VisibleToAllUsersHasBeenSet() const { return m_visibleToAllUsersHasBeenSet; }

    /**
     * <p>Whether the cluster is visible to all IAM users of the AWS account associated
     * with the cluster. If this value is set to <code>true</code>, all IAM users of
     * that AWS account can view and (if they have the proper policy permissions set)
     * manage the cluster. If it is set to <code>false</code>, only the IAM user that
     * created the cluster can view and manage it.</p>
     */
    inline void SetVisibleToAllUsers(bool value) { m_visibleToAllUsersHasBeenSet = true; m_visibleToAllUsers = value; }

    /**
     * <p>Whether the cluster is visible to all IAM users of the AWS account associated
     * with the cluster. If this value is set to <code>true</code>, all IAM users of
     * that AWS account can view and (if they have the proper policy permissions set)
     * manage the cluster. If it is set to <code>false</code>, only the IAM user that
     * created the cluster can view and manage it.</p>
     */
    inline RunJobFlowRequest& WithVisibleToAllUsers(bool value) { SetVisibleToAllUsers(value); return *this;}


    /**
     * <p>Also called instance profile and EC2 role. An IAM role for an EMR cluster.
     * The EC2 instances of the cluster assume this role. The default role is
     * <code>EMR_EC2_DefaultRole</code>. In order to use the default role, you must
     * have already created it using the CLI or console.</p>
     */
    inline const Aws::String& GetJobFlowRole() const{ return m_jobFlowRole; }

    /**
     * <p>Also called instance profile and EC2 role. An IAM role for an EMR cluster.
     * The EC2 instances of the cluster assume this role. The default role is
     * <code>EMR_EC2_DefaultRole</code>. In order to use the default role, you must
     * have already created it using the CLI or console.</p>
     */
    inline bool JobFlowRoleHasBeenSet() const { return m_jobFlowRoleHasBeenSet; }

    /**
     * <p>Also called instance profile and EC2 role. An IAM role for an EMR cluster.
     * The EC2 instances of the cluster assume this role. The default role is
     * <code>EMR_EC2_DefaultRole</code>. In order to use the default role, you must
     * have already created it using the CLI or console.</p>
     */
    inline void SetJobFlowRole(const Aws::String& value) { m_jobFlowRoleHasBeenSet = true; m_jobFlowRole = value; }

    /**
     * <p>Also called instance profile and EC2 role. An IAM role for an EMR cluster.
     * The EC2 instances of the cluster assume this role. The default role is
     * <code>EMR_EC2_DefaultRole</code>. In order to use the default role, you must
     * have already created it using the CLI or console.</p>
     */
    inline void SetJobFlowRole(Aws::String&& value) { m_jobFlowRoleHasBeenSet = true; m_jobFlowRole = std::move(value); }

    /**
     * <p>Also called instance profile and EC2 role. An IAM role for an EMR cluster.
     * The EC2 instances of the cluster assume this role. The default role is
     * <code>EMR_EC2_DefaultRole</code>. In order to use the default role, you must
     * have already created it using the CLI or console.</p>
     */
    inline void SetJobFlowRole(const char* value) { m_jobFlowRoleHasBeenSet = true; m_jobFlowRole.assign(value); }

    /**
     * <p>Also called instance profile and EC2 role. An IAM role for an EMR cluster.
     * The EC2 instances of the cluster assume this role. The default role is
     * <code>EMR_EC2_DefaultRole</code>. In order to use the default role, you must
     * have already created it using the CLI or console.</p>
     */
    inline RunJobFlowRequest& WithJobFlowRole(const Aws::String& value) { SetJobFlowRole(value); return *this;}

    /**
     * <p>Also called instance profile and EC2 role. An IAM role for an EMR cluster.
     * The EC2 instances of the cluster assume this role. The default role is
     * <code>EMR_EC2_DefaultRole</code>. In order to use the default role, you must
     * have already created it using the CLI or console.</p>
     */
    inline RunJobFlowRequest& WithJobFlowRole(Aws::String&& value) { SetJobFlowRole(std::move(value)); return *this;}

    /**
     * <p>Also called instance profile and EC2 role. An IAM role for an EMR cluster.
     * The EC2 instances of the cluster assume this role. The default role is
     * <code>EMR_EC2_DefaultRole</code>. In order to use the default role, you must
     * have already created it using the CLI or console.</p>
     */
    inline RunJobFlowRequest& WithJobFlowRole(const char* value) { SetJobFlowRole(value); return *this;}


    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline RunJobFlowRequest& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline RunJobFlowRequest& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline RunJobFlowRequest& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p>A list of tags to associate with a cluster and propagate to Amazon EC2
     * instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to associate with a cluster and propagate to Amazon EC2
     * instances.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to associate with a cluster and propagate to Amazon EC2
     * instances.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to associate with a cluster and propagate to Amazon EC2
     * instances.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to associate with a cluster and propagate to Amazon EC2
     * instances.</p>
     */
    inline RunJobFlowRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to associate with a cluster and propagate to Amazon EC2
     * instances.</p>
     */
    inline RunJobFlowRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to associate with a cluster and propagate to Amazon EC2
     * instances.</p>
     */
    inline RunJobFlowRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to associate with a cluster and propagate to Amazon EC2
     * instances.</p>
     */
    inline RunJobFlowRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of a security configuration to apply to the cluster.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const{ return m_securityConfiguration; }

    /**
     * <p>The name of a security configuration to apply to the cluster.</p>
     */
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }

    /**
     * <p>The name of a security configuration to apply to the cluster.</p>
     */
    inline void SetSecurityConfiguration(const Aws::String& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = value; }

    /**
     * <p>The name of a security configuration to apply to the cluster.</p>
     */
    inline void SetSecurityConfiguration(Aws::String&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::move(value); }

    /**
     * <p>The name of a security configuration to apply to the cluster.</p>
     */
    inline void SetSecurityConfiguration(const char* value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration.assign(value); }

    /**
     * <p>The name of a security configuration to apply to the cluster.</p>
     */
    inline RunJobFlowRequest& WithSecurityConfiguration(const Aws::String& value) { SetSecurityConfiguration(value); return *this;}

    /**
     * <p>The name of a security configuration to apply to the cluster.</p>
     */
    inline RunJobFlowRequest& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(std::move(value)); return *this;}

    /**
     * <p>The name of a security configuration to apply to the cluster.</p>
     */
    inline RunJobFlowRequest& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}


    /**
     * <p>An IAM role for automatic scaling policies. The default role is
     * <code>EMR_AutoScaling_DefaultRole</code>. The IAM role provides permissions that
     * the automatic scaling feature requires to launch and terminate EC2 instances in
     * an instance group.</p>
     */
    inline const Aws::String& GetAutoScalingRole() const{ return m_autoScalingRole; }

    /**
     * <p>An IAM role for automatic scaling policies. The default role is
     * <code>EMR_AutoScaling_DefaultRole</code>. The IAM role provides permissions that
     * the automatic scaling feature requires to launch and terminate EC2 instances in
     * an instance group.</p>
     */
    inline bool AutoScalingRoleHasBeenSet() const { return m_autoScalingRoleHasBeenSet; }

    /**
     * <p>An IAM role for automatic scaling policies. The default role is
     * <code>EMR_AutoScaling_DefaultRole</code>. The IAM role provides permissions that
     * the automatic scaling feature requires to launch and terminate EC2 instances in
     * an instance group.</p>
     */
    inline void SetAutoScalingRole(const Aws::String& value) { m_autoScalingRoleHasBeenSet = true; m_autoScalingRole = value; }

    /**
     * <p>An IAM role for automatic scaling policies. The default role is
     * <code>EMR_AutoScaling_DefaultRole</code>. The IAM role provides permissions that
     * the automatic scaling feature requires to launch and terminate EC2 instances in
     * an instance group.</p>
     */
    inline void SetAutoScalingRole(Aws::String&& value) { m_autoScalingRoleHasBeenSet = true; m_autoScalingRole = std::move(value); }

    /**
     * <p>An IAM role for automatic scaling policies. The default role is
     * <code>EMR_AutoScaling_DefaultRole</code>. The IAM role provides permissions that
     * the automatic scaling feature requires to launch and terminate EC2 instances in
     * an instance group.</p>
     */
    inline void SetAutoScalingRole(const char* value) { m_autoScalingRoleHasBeenSet = true; m_autoScalingRole.assign(value); }

    /**
     * <p>An IAM role for automatic scaling policies. The default role is
     * <code>EMR_AutoScaling_DefaultRole</code>. The IAM role provides permissions that
     * the automatic scaling feature requires to launch and terminate EC2 instances in
     * an instance group.</p>
     */
    inline RunJobFlowRequest& WithAutoScalingRole(const Aws::String& value) { SetAutoScalingRole(value); return *this;}

    /**
     * <p>An IAM role for automatic scaling policies. The default role is
     * <code>EMR_AutoScaling_DefaultRole</code>. The IAM role provides permissions that
     * the automatic scaling feature requires to launch and terminate EC2 instances in
     * an instance group.</p>
     */
    inline RunJobFlowRequest& WithAutoScalingRole(Aws::String&& value) { SetAutoScalingRole(std::move(value)); return *this;}

    /**
     * <p>An IAM role for automatic scaling policies. The default role is
     * <code>EMR_AutoScaling_DefaultRole</code>. The IAM role provides permissions that
     * the automatic scaling feature requires to launch and terminate EC2 instances in
     * an instance group.</p>
     */
    inline RunJobFlowRequest& WithAutoScalingRole(const char* value) { SetAutoScalingRole(value); return *this;}


    /**
     * <p>Specifies the way that individual Amazon EC2 instances terminate when an
     * automatic scale-in activity occurs or an instance group is resized.
     * <code>TERMINATE_AT_INSTANCE_HOUR</code> indicates that Amazon EMR terminates
     * nodes at the instance-hour boundary, regardless of when the request to terminate
     * the instance was submitted. This option is only available with Amazon EMR 5.1.0
     * and later and is the default for clusters created using that version.
     * <code>TERMINATE_AT_TASK_COMPLETION</code> indicates that Amazon EMR blacklists
     * and drains tasks from nodes before terminating the Amazon EC2 instances,
     * regardless of the instance-hour boundary. With either behavior, Amazon EMR
     * removes the least active nodes first and blocks instance termination if it could
     * lead to HDFS corruption. <code>TERMINATE_AT_TASK_COMPLETION</code> available
     * only in Amazon EMR version 4.1.0 and later, and is the default for versions of
     * Amazon EMR earlier than 5.1.0.</p>
     */
    inline const ScaleDownBehavior& GetScaleDownBehavior() const{ return m_scaleDownBehavior; }

    /**
     * <p>Specifies the way that individual Amazon EC2 instances terminate when an
     * automatic scale-in activity occurs or an instance group is resized.
     * <code>TERMINATE_AT_INSTANCE_HOUR</code> indicates that Amazon EMR terminates
     * nodes at the instance-hour boundary, regardless of when the request to terminate
     * the instance was submitted. This option is only available with Amazon EMR 5.1.0
     * and later and is the default for clusters created using that version.
     * <code>TERMINATE_AT_TASK_COMPLETION</code> indicates that Amazon EMR blacklists
     * and drains tasks from nodes before terminating the Amazon EC2 instances,
     * regardless of the instance-hour boundary. With either behavior, Amazon EMR
     * removes the least active nodes first and blocks instance termination if it could
     * lead to HDFS corruption. <code>TERMINATE_AT_TASK_COMPLETION</code> available
     * only in Amazon EMR version 4.1.0 and later, and is the default for versions of
     * Amazon EMR earlier than 5.1.0.</p>
     */
    inline bool ScaleDownBehaviorHasBeenSet() const { return m_scaleDownBehaviorHasBeenSet; }

    /**
     * <p>Specifies the way that individual Amazon EC2 instances terminate when an
     * automatic scale-in activity occurs or an instance group is resized.
     * <code>TERMINATE_AT_INSTANCE_HOUR</code> indicates that Amazon EMR terminates
     * nodes at the instance-hour boundary, regardless of when the request to terminate
     * the instance was submitted. This option is only available with Amazon EMR 5.1.0
     * and later and is the default for clusters created using that version.
     * <code>TERMINATE_AT_TASK_COMPLETION</code> indicates that Amazon EMR blacklists
     * and drains tasks from nodes before terminating the Amazon EC2 instances,
     * regardless of the instance-hour boundary. With either behavior, Amazon EMR
     * removes the least active nodes first and blocks instance termination if it could
     * lead to HDFS corruption. <code>TERMINATE_AT_TASK_COMPLETION</code> available
     * only in Amazon EMR version 4.1.0 and later, and is the default for versions of
     * Amazon EMR earlier than 5.1.0.</p>
     */
    inline void SetScaleDownBehavior(const ScaleDownBehavior& value) { m_scaleDownBehaviorHasBeenSet = true; m_scaleDownBehavior = value; }

    /**
     * <p>Specifies the way that individual Amazon EC2 instances terminate when an
     * automatic scale-in activity occurs or an instance group is resized.
     * <code>TERMINATE_AT_INSTANCE_HOUR</code> indicates that Amazon EMR terminates
     * nodes at the instance-hour boundary, regardless of when the request to terminate
     * the instance was submitted. This option is only available with Amazon EMR 5.1.0
     * and later and is the default for clusters created using that version.
     * <code>TERMINATE_AT_TASK_COMPLETION</code> indicates that Amazon EMR blacklists
     * and drains tasks from nodes before terminating the Amazon EC2 instances,
     * regardless of the instance-hour boundary. With either behavior, Amazon EMR
     * removes the least active nodes first and blocks instance termination if it could
     * lead to HDFS corruption. <code>TERMINATE_AT_TASK_COMPLETION</code> available
     * only in Amazon EMR version 4.1.0 and later, and is the default for versions of
     * Amazon EMR earlier than 5.1.0.</p>
     */
    inline void SetScaleDownBehavior(ScaleDownBehavior&& value) { m_scaleDownBehaviorHasBeenSet = true; m_scaleDownBehavior = std::move(value); }

    /**
     * <p>Specifies the way that individual Amazon EC2 instances terminate when an
     * automatic scale-in activity occurs or an instance group is resized.
     * <code>TERMINATE_AT_INSTANCE_HOUR</code> indicates that Amazon EMR terminates
     * nodes at the instance-hour boundary, regardless of when the request to terminate
     * the instance was submitted. This option is only available with Amazon EMR 5.1.0
     * and later and is the default for clusters created using that version.
     * <code>TERMINATE_AT_TASK_COMPLETION</code> indicates that Amazon EMR blacklists
     * and drains tasks from nodes before terminating the Amazon EC2 instances,
     * regardless of the instance-hour boundary. With either behavior, Amazon EMR
     * removes the least active nodes first and blocks instance termination if it could
     * lead to HDFS corruption. <code>TERMINATE_AT_TASK_COMPLETION</code> available
     * only in Amazon EMR version 4.1.0 and later, and is the default for versions of
     * Amazon EMR earlier than 5.1.0.</p>
     */
    inline RunJobFlowRequest& WithScaleDownBehavior(const ScaleDownBehavior& value) { SetScaleDownBehavior(value); return *this;}

    /**
     * <p>Specifies the way that individual Amazon EC2 instances terminate when an
     * automatic scale-in activity occurs or an instance group is resized.
     * <code>TERMINATE_AT_INSTANCE_HOUR</code> indicates that Amazon EMR terminates
     * nodes at the instance-hour boundary, regardless of when the request to terminate
     * the instance was submitted. This option is only available with Amazon EMR 5.1.0
     * and later and is the default for clusters created using that version.
     * <code>TERMINATE_AT_TASK_COMPLETION</code> indicates that Amazon EMR blacklists
     * and drains tasks from nodes before terminating the Amazon EC2 instances,
     * regardless of the instance-hour boundary. With either behavior, Amazon EMR
     * removes the least active nodes first and blocks instance termination if it could
     * lead to HDFS corruption. <code>TERMINATE_AT_TASK_COMPLETION</code> available
     * only in Amazon EMR version 4.1.0 and later, and is the default for versions of
     * Amazon EMR earlier than 5.1.0.</p>
     */
    inline RunJobFlowRequest& WithScaleDownBehavior(ScaleDownBehavior&& value) { SetScaleDownBehavior(std::move(value)); return *this;}


    /**
     * <p>Available only in Amazon EMR version 5.7.0 and later. The ID of a custom
     * Amazon EBS-backed Linux AMI. If specified, Amazon EMR uses this AMI when it
     * launches cluster EC2 instances. For more information about custom AMIs in Amazon
     * EMR, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-custom-ami.html">Using
     * a Custom AMI</a> in the <i>Amazon EMR Management Guide</i>. If omitted, the
     * cluster uses the base Linux AMI for the <code>ReleaseLabel</code> specified. For
     * Amazon EMR versions 2.x and 3.x, use <code>AmiVersion</code> instead.</p> <p>For
     * information about creating a custom AMI, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/creating-an-ami-ebs.html">Creating
     * an Amazon EBS-Backed Linux AMI</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide for Linux Instances</i>. For information about finding an AMI ID, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Finding
     * a Linux AMI</a>. </p>
     */
    inline const Aws::String& GetCustomAmiId() const{ return m_customAmiId; }

    /**
     * <p>Available only in Amazon EMR version 5.7.0 and later. The ID of a custom
     * Amazon EBS-backed Linux AMI. If specified, Amazon EMR uses this AMI when it
     * launches cluster EC2 instances. For more information about custom AMIs in Amazon
     * EMR, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-custom-ami.html">Using
     * a Custom AMI</a> in the <i>Amazon EMR Management Guide</i>. If omitted, the
     * cluster uses the base Linux AMI for the <code>ReleaseLabel</code> specified. For
     * Amazon EMR versions 2.x and 3.x, use <code>AmiVersion</code> instead.</p> <p>For
     * information about creating a custom AMI, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/creating-an-ami-ebs.html">Creating
     * an Amazon EBS-Backed Linux AMI</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide for Linux Instances</i>. For information about finding an AMI ID, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Finding
     * a Linux AMI</a>. </p>
     */
    inline bool CustomAmiIdHasBeenSet() const { return m_customAmiIdHasBeenSet; }

    /**
     * <p>Available only in Amazon EMR version 5.7.0 and later. The ID of a custom
     * Amazon EBS-backed Linux AMI. If specified, Amazon EMR uses this AMI when it
     * launches cluster EC2 instances. For more information about custom AMIs in Amazon
     * EMR, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-custom-ami.html">Using
     * a Custom AMI</a> in the <i>Amazon EMR Management Guide</i>. If omitted, the
     * cluster uses the base Linux AMI for the <code>ReleaseLabel</code> specified. For
     * Amazon EMR versions 2.x and 3.x, use <code>AmiVersion</code> instead.</p> <p>For
     * information about creating a custom AMI, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/creating-an-ami-ebs.html">Creating
     * an Amazon EBS-Backed Linux AMI</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide for Linux Instances</i>. For information about finding an AMI ID, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Finding
     * a Linux AMI</a>. </p>
     */
    inline void SetCustomAmiId(const Aws::String& value) { m_customAmiIdHasBeenSet = true; m_customAmiId = value; }

    /**
     * <p>Available only in Amazon EMR version 5.7.0 and later. The ID of a custom
     * Amazon EBS-backed Linux AMI. If specified, Amazon EMR uses this AMI when it
     * launches cluster EC2 instances. For more information about custom AMIs in Amazon
     * EMR, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-custom-ami.html">Using
     * a Custom AMI</a> in the <i>Amazon EMR Management Guide</i>. If omitted, the
     * cluster uses the base Linux AMI for the <code>ReleaseLabel</code> specified. For
     * Amazon EMR versions 2.x and 3.x, use <code>AmiVersion</code> instead.</p> <p>For
     * information about creating a custom AMI, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/creating-an-ami-ebs.html">Creating
     * an Amazon EBS-Backed Linux AMI</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide for Linux Instances</i>. For information about finding an AMI ID, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Finding
     * a Linux AMI</a>. </p>
     */
    inline void SetCustomAmiId(Aws::String&& value) { m_customAmiIdHasBeenSet = true; m_customAmiId = std::move(value); }

    /**
     * <p>Available only in Amazon EMR version 5.7.0 and later. The ID of a custom
     * Amazon EBS-backed Linux AMI. If specified, Amazon EMR uses this AMI when it
     * launches cluster EC2 instances. For more information about custom AMIs in Amazon
     * EMR, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-custom-ami.html">Using
     * a Custom AMI</a> in the <i>Amazon EMR Management Guide</i>. If omitted, the
     * cluster uses the base Linux AMI for the <code>ReleaseLabel</code> specified. For
     * Amazon EMR versions 2.x and 3.x, use <code>AmiVersion</code> instead.</p> <p>For
     * information about creating a custom AMI, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/creating-an-ami-ebs.html">Creating
     * an Amazon EBS-Backed Linux AMI</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide for Linux Instances</i>. For information about finding an AMI ID, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Finding
     * a Linux AMI</a>. </p>
     */
    inline void SetCustomAmiId(const char* value) { m_customAmiIdHasBeenSet = true; m_customAmiId.assign(value); }

    /**
     * <p>Available only in Amazon EMR version 5.7.0 and later. The ID of a custom
     * Amazon EBS-backed Linux AMI. If specified, Amazon EMR uses this AMI when it
     * launches cluster EC2 instances. For more information about custom AMIs in Amazon
     * EMR, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-custom-ami.html">Using
     * a Custom AMI</a> in the <i>Amazon EMR Management Guide</i>. If omitted, the
     * cluster uses the base Linux AMI for the <code>ReleaseLabel</code> specified. For
     * Amazon EMR versions 2.x and 3.x, use <code>AmiVersion</code> instead.</p> <p>For
     * information about creating a custom AMI, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/creating-an-ami-ebs.html">Creating
     * an Amazon EBS-Backed Linux AMI</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide for Linux Instances</i>. For information about finding an AMI ID, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Finding
     * a Linux AMI</a>. </p>
     */
    inline RunJobFlowRequest& WithCustomAmiId(const Aws::String& value) { SetCustomAmiId(value); return *this;}

    /**
     * <p>Available only in Amazon EMR version 5.7.0 and later. The ID of a custom
     * Amazon EBS-backed Linux AMI. If specified, Amazon EMR uses this AMI when it
     * launches cluster EC2 instances. For more information about custom AMIs in Amazon
     * EMR, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-custom-ami.html">Using
     * a Custom AMI</a> in the <i>Amazon EMR Management Guide</i>. If omitted, the
     * cluster uses the base Linux AMI for the <code>ReleaseLabel</code> specified. For
     * Amazon EMR versions 2.x and 3.x, use <code>AmiVersion</code> instead.</p> <p>For
     * information about creating a custom AMI, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/creating-an-ami-ebs.html">Creating
     * an Amazon EBS-Backed Linux AMI</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide for Linux Instances</i>. For information about finding an AMI ID, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Finding
     * a Linux AMI</a>. </p>
     */
    inline RunJobFlowRequest& WithCustomAmiId(Aws::String&& value) { SetCustomAmiId(std::move(value)); return *this;}

    /**
     * <p>Available only in Amazon EMR version 5.7.0 and later. The ID of a custom
     * Amazon EBS-backed Linux AMI. If specified, Amazon EMR uses this AMI when it
     * launches cluster EC2 instances. For more information about custom AMIs in Amazon
     * EMR, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-custom-ami.html">Using
     * a Custom AMI</a> in the <i>Amazon EMR Management Guide</i>. If omitted, the
     * cluster uses the base Linux AMI for the <code>ReleaseLabel</code> specified. For
     * Amazon EMR versions 2.x and 3.x, use <code>AmiVersion</code> instead.</p> <p>For
     * information about creating a custom AMI, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/creating-an-ami-ebs.html">Creating
     * an Amazon EBS-Backed Linux AMI</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide for Linux Instances</i>. For information about finding an AMI ID, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Finding
     * a Linux AMI</a>. </p>
     */
    inline RunJobFlowRequest& WithCustomAmiId(const char* value) { SetCustomAmiId(value); return *this;}


    /**
     * <p>The size, in GiB, of the EBS root device volume of the Linux AMI that is used
     * for each EC2 instance. Available in Amazon EMR version 4.x and later.</p>
     */
    inline int GetEbsRootVolumeSize() const{ return m_ebsRootVolumeSize; }

    /**
     * <p>The size, in GiB, of the EBS root device volume of the Linux AMI that is used
     * for each EC2 instance. Available in Amazon EMR version 4.x and later.</p>
     */
    inline bool EbsRootVolumeSizeHasBeenSet() const { return m_ebsRootVolumeSizeHasBeenSet; }

    /**
     * <p>The size, in GiB, of the EBS root device volume of the Linux AMI that is used
     * for each EC2 instance. Available in Amazon EMR version 4.x and later.</p>
     */
    inline void SetEbsRootVolumeSize(int value) { m_ebsRootVolumeSizeHasBeenSet = true; m_ebsRootVolumeSize = value; }

    /**
     * <p>The size, in GiB, of the EBS root device volume of the Linux AMI that is used
     * for each EC2 instance. Available in Amazon EMR version 4.x and later.</p>
     */
    inline RunJobFlowRequest& WithEbsRootVolumeSize(int value) { SetEbsRootVolumeSize(value); return *this;}


    /**
     * <p>Applies only when <code>CustomAmiID</code> is used. Specifies which updates
     * from the Amazon Linux AMI package repositories to apply automatically when the
     * instance boots using the AMI. If omitted, the default is <code>SECURITY</code>,
     * which indicates that only security updates are applied. If <code>NONE</code> is
     * specified, no updates are applied, and all updates must be applied manually.</p>
     */
    inline const RepoUpgradeOnBoot& GetRepoUpgradeOnBoot() const{ return m_repoUpgradeOnBoot; }

    /**
     * <p>Applies only when <code>CustomAmiID</code> is used. Specifies which updates
     * from the Amazon Linux AMI package repositories to apply automatically when the
     * instance boots using the AMI. If omitted, the default is <code>SECURITY</code>,
     * which indicates that only security updates are applied. If <code>NONE</code> is
     * specified, no updates are applied, and all updates must be applied manually.</p>
     */
    inline bool RepoUpgradeOnBootHasBeenSet() const { return m_repoUpgradeOnBootHasBeenSet; }

    /**
     * <p>Applies only when <code>CustomAmiID</code> is used. Specifies which updates
     * from the Amazon Linux AMI package repositories to apply automatically when the
     * instance boots using the AMI. If omitted, the default is <code>SECURITY</code>,
     * which indicates that only security updates are applied. If <code>NONE</code> is
     * specified, no updates are applied, and all updates must be applied manually.</p>
     */
    inline void SetRepoUpgradeOnBoot(const RepoUpgradeOnBoot& value) { m_repoUpgradeOnBootHasBeenSet = true; m_repoUpgradeOnBoot = value; }

    /**
     * <p>Applies only when <code>CustomAmiID</code> is used. Specifies which updates
     * from the Amazon Linux AMI package repositories to apply automatically when the
     * instance boots using the AMI. If omitted, the default is <code>SECURITY</code>,
     * which indicates that only security updates are applied. If <code>NONE</code> is
     * specified, no updates are applied, and all updates must be applied manually.</p>
     */
    inline void SetRepoUpgradeOnBoot(RepoUpgradeOnBoot&& value) { m_repoUpgradeOnBootHasBeenSet = true; m_repoUpgradeOnBoot = std::move(value); }

    /**
     * <p>Applies only when <code>CustomAmiID</code> is used. Specifies which updates
     * from the Amazon Linux AMI package repositories to apply automatically when the
     * instance boots using the AMI. If omitted, the default is <code>SECURITY</code>,
     * which indicates that only security updates are applied. If <code>NONE</code> is
     * specified, no updates are applied, and all updates must be applied manually.</p>
     */
    inline RunJobFlowRequest& WithRepoUpgradeOnBoot(const RepoUpgradeOnBoot& value) { SetRepoUpgradeOnBoot(value); return *this;}

    /**
     * <p>Applies only when <code>CustomAmiID</code> is used. Specifies which updates
     * from the Amazon Linux AMI package repositories to apply automatically when the
     * instance boots using the AMI. If omitted, the default is <code>SECURITY</code>,
     * which indicates that only security updates are applied. If <code>NONE</code> is
     * specified, no updates are applied, and all updates must be applied manually.</p>
     */
    inline RunJobFlowRequest& WithRepoUpgradeOnBoot(RepoUpgradeOnBoot&& value) { SetRepoUpgradeOnBoot(std::move(value)); return *this;}


    /**
     * <p>Attributes for Kerberos configuration when Kerberos authentication is enabled
     * using a security configuration. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-kerberos.html">Use
     * Kerberos Authentication</a> in the <i>EMR Management Guide</i>.</p>
     */
    inline const KerberosAttributes& GetKerberosAttributes() const{ return m_kerberosAttributes; }

    /**
     * <p>Attributes for Kerberos configuration when Kerberos authentication is enabled
     * using a security configuration. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-kerberos.html">Use
     * Kerberos Authentication</a> in the <i>EMR Management Guide</i>.</p>
     */
    inline bool KerberosAttributesHasBeenSet() const { return m_kerberosAttributesHasBeenSet; }

    /**
     * <p>Attributes for Kerberos configuration when Kerberos authentication is enabled
     * using a security configuration. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-kerberos.html">Use
     * Kerberos Authentication</a> in the <i>EMR Management Guide</i>.</p>
     */
    inline void SetKerberosAttributes(const KerberosAttributes& value) { m_kerberosAttributesHasBeenSet = true; m_kerberosAttributes = value; }

    /**
     * <p>Attributes for Kerberos configuration when Kerberos authentication is enabled
     * using a security configuration. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-kerberos.html">Use
     * Kerberos Authentication</a> in the <i>EMR Management Guide</i>.</p>
     */
    inline void SetKerberosAttributes(KerberosAttributes&& value) { m_kerberosAttributesHasBeenSet = true; m_kerberosAttributes = std::move(value); }

    /**
     * <p>Attributes for Kerberos configuration when Kerberos authentication is enabled
     * using a security configuration. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-kerberos.html">Use
     * Kerberos Authentication</a> in the <i>EMR Management Guide</i>.</p>
     */
    inline RunJobFlowRequest& WithKerberosAttributes(const KerberosAttributes& value) { SetKerberosAttributes(value); return *this;}

    /**
     * <p>Attributes for Kerberos configuration when Kerberos authentication is enabled
     * using a security configuration. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-kerberos.html">Use
     * Kerberos Authentication</a> in the <i>EMR Management Guide</i>.</p>
     */
    inline RunJobFlowRequest& WithKerberosAttributes(KerberosAttributes&& value) { SetKerberosAttributes(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_logUri;
    bool m_logUriHasBeenSet;

    Aws::String m_additionalInfo;
    bool m_additionalInfoHasBeenSet;

    Aws::String m_amiVersion;
    bool m_amiVersionHasBeenSet;

    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet;

    JobFlowInstancesConfig m_instances;
    bool m_instancesHasBeenSet;

    Aws::Vector<StepConfig> m_steps;
    bool m_stepsHasBeenSet;

    Aws::Vector<BootstrapActionConfig> m_bootstrapActions;
    bool m_bootstrapActionsHasBeenSet;

    Aws::Vector<Aws::String> m_supportedProducts;
    bool m_supportedProductsHasBeenSet;

    Aws::Vector<SupportedProductConfig> m_newSupportedProducts;
    bool m_newSupportedProductsHasBeenSet;

    Aws::Vector<Application> m_applications;
    bool m_applicationsHasBeenSet;

    Aws::Vector<Configuration> m_configurations;
    bool m_configurationsHasBeenSet;

    bool m_visibleToAllUsers;
    bool m_visibleToAllUsersHasBeenSet;

    Aws::String m_jobFlowRole;
    bool m_jobFlowRoleHasBeenSet;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet;

    Aws::String m_autoScalingRole;
    bool m_autoScalingRoleHasBeenSet;

    ScaleDownBehavior m_scaleDownBehavior;
    bool m_scaleDownBehaviorHasBeenSet;

    Aws::String m_customAmiId;
    bool m_customAmiIdHasBeenSet;

    int m_ebsRootVolumeSize;
    bool m_ebsRootVolumeSizeHasBeenSet;

    RepoUpgradeOnBoot m_repoUpgradeOnBoot;
    bool m_repoUpgradeOnBootHasBeenSet;

    KerberosAttributes m_kerberosAttributes;
    bool m_kerberosAttributesHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
