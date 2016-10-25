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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/JobFlowInstancesConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/StepConfig.h>
#include <aws/elasticmapreduce/model/BootstrapActionConfig.h>
#include <aws/elasticmapreduce/model/SupportedProductConfig.h>
#include <aws/elasticmapreduce/model/Application.h>
#include <aws/elasticmapreduce/model/Configuration.h>
#include <aws/elasticmapreduce/model/Tag.h>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p> Input to the <a>RunJobFlow</a> operation. </p>
   */
  class AWS_EMR_API RunJobFlowRequest : public EMRRequest
  {
  public:
    RunJobFlowRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the job flow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the job flow.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the job flow.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

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
    inline RunJobFlowRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

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
    inline void SetLogUri(const Aws::String& value) { m_logUriHasBeenSet = true; m_logUri = value; }

    /**
     * <p>The location in Amazon S3 to write the log files of the job flow. If a value
     * is not provided, logs are not created.</p>
     */
    inline void SetLogUri(Aws::String&& value) { m_logUriHasBeenSet = true; m_logUri = value; }

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
    inline RunJobFlowRequest& WithLogUri(Aws::String&& value) { SetLogUri(value); return *this;}

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
    inline void SetAdditionalInfo(const Aws::String& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = value; }

    /**
     * <p>A JSON string for selecting additional features.</p>
     */
    inline void SetAdditionalInfo(Aws::String&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = value; }

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
    inline RunJobFlowRequest& WithAdditionalInfo(Aws::String&& value) { SetAdditionalInfo(value); return *this;}

    /**
     * <p>A JSON string for selecting additional features.</p>
     */
    inline RunJobFlowRequest& WithAdditionalInfo(const char* value) { SetAdditionalInfo(value); return *this;}

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * greater, use ReleaseLabel.</p> </note> <p>The version of the Amazon Machine
     * Image (AMI) to use when launching Amazon EC2 instances in the job flow. The
     * following values are valid:</p> <ul> <li> <p>The version number of the AMI to
     * use, for example, "2.0."</p> </li> </ul> <p>If the AMI supports multiple
     * versions of Hadoop (for example, AMI 1.0 supports both Hadoop 0.18 and 0.20) you
     * can use the <a>JobFlowInstancesConfig</a> <code>HadoopVersion</code> parameter
     * to modify the version of Hadoop from the defaults shown above.</p> <p>For
     * details about the AMI versions currently supported by Amazon Elastic MapReduce,
     * go to <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/EnvironmentConfig_AMIVersion.html#ami-versions-supported">AMI
     * Versions Supported in Elastic MapReduce</a> in the <i>Amazon Elastic MapReduce
     * Developer's Guide.</i> </p>
     */
    inline const Aws::String& GetAmiVersion() const{ return m_amiVersion; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * greater, use ReleaseLabel.</p> </note> <p>The version of the Amazon Machine
     * Image (AMI) to use when launching Amazon EC2 instances in the job flow. The
     * following values are valid:</p> <ul> <li> <p>The version number of the AMI to
     * use, for example, "2.0."</p> </li> </ul> <p>If the AMI supports multiple
     * versions of Hadoop (for example, AMI 1.0 supports both Hadoop 0.18 and 0.20) you
     * can use the <a>JobFlowInstancesConfig</a> <code>HadoopVersion</code> parameter
     * to modify the version of Hadoop from the defaults shown above.</p> <p>For
     * details about the AMI versions currently supported by Amazon Elastic MapReduce,
     * go to <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/EnvironmentConfig_AMIVersion.html#ami-versions-supported">AMI
     * Versions Supported in Elastic MapReduce</a> in the <i>Amazon Elastic MapReduce
     * Developer's Guide.</i> </p>
     */
    inline void SetAmiVersion(const Aws::String& value) { m_amiVersionHasBeenSet = true; m_amiVersion = value; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * greater, use ReleaseLabel.</p> </note> <p>The version of the Amazon Machine
     * Image (AMI) to use when launching Amazon EC2 instances in the job flow. The
     * following values are valid:</p> <ul> <li> <p>The version number of the AMI to
     * use, for example, "2.0."</p> </li> </ul> <p>If the AMI supports multiple
     * versions of Hadoop (for example, AMI 1.0 supports both Hadoop 0.18 and 0.20) you
     * can use the <a>JobFlowInstancesConfig</a> <code>HadoopVersion</code> parameter
     * to modify the version of Hadoop from the defaults shown above.</p> <p>For
     * details about the AMI versions currently supported by Amazon Elastic MapReduce,
     * go to <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/EnvironmentConfig_AMIVersion.html#ami-versions-supported">AMI
     * Versions Supported in Elastic MapReduce</a> in the <i>Amazon Elastic MapReduce
     * Developer's Guide.</i> </p>
     */
    inline void SetAmiVersion(Aws::String&& value) { m_amiVersionHasBeenSet = true; m_amiVersion = value; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * greater, use ReleaseLabel.</p> </note> <p>The version of the Amazon Machine
     * Image (AMI) to use when launching Amazon EC2 instances in the job flow. The
     * following values are valid:</p> <ul> <li> <p>The version number of the AMI to
     * use, for example, "2.0."</p> </li> </ul> <p>If the AMI supports multiple
     * versions of Hadoop (for example, AMI 1.0 supports both Hadoop 0.18 and 0.20) you
     * can use the <a>JobFlowInstancesConfig</a> <code>HadoopVersion</code> parameter
     * to modify the version of Hadoop from the defaults shown above.</p> <p>For
     * details about the AMI versions currently supported by Amazon Elastic MapReduce,
     * go to <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/EnvironmentConfig_AMIVersion.html#ami-versions-supported">AMI
     * Versions Supported in Elastic MapReduce</a> in the <i>Amazon Elastic MapReduce
     * Developer's Guide.</i> </p>
     */
    inline void SetAmiVersion(const char* value) { m_amiVersionHasBeenSet = true; m_amiVersion.assign(value); }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * greater, use ReleaseLabel.</p> </note> <p>The version of the Amazon Machine
     * Image (AMI) to use when launching Amazon EC2 instances in the job flow. The
     * following values are valid:</p> <ul> <li> <p>The version number of the AMI to
     * use, for example, "2.0."</p> </li> </ul> <p>If the AMI supports multiple
     * versions of Hadoop (for example, AMI 1.0 supports both Hadoop 0.18 and 0.20) you
     * can use the <a>JobFlowInstancesConfig</a> <code>HadoopVersion</code> parameter
     * to modify the version of Hadoop from the defaults shown above.</p> <p>For
     * details about the AMI versions currently supported by Amazon Elastic MapReduce,
     * go to <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/EnvironmentConfig_AMIVersion.html#ami-versions-supported">AMI
     * Versions Supported in Elastic MapReduce</a> in the <i>Amazon Elastic MapReduce
     * Developer's Guide.</i> </p>
     */
    inline RunJobFlowRequest& WithAmiVersion(const Aws::String& value) { SetAmiVersion(value); return *this;}

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * greater, use ReleaseLabel.</p> </note> <p>The version of the Amazon Machine
     * Image (AMI) to use when launching Amazon EC2 instances in the job flow. The
     * following values are valid:</p> <ul> <li> <p>The version number of the AMI to
     * use, for example, "2.0."</p> </li> </ul> <p>If the AMI supports multiple
     * versions of Hadoop (for example, AMI 1.0 supports both Hadoop 0.18 and 0.20) you
     * can use the <a>JobFlowInstancesConfig</a> <code>HadoopVersion</code> parameter
     * to modify the version of Hadoop from the defaults shown above.</p> <p>For
     * details about the AMI versions currently supported by Amazon Elastic MapReduce,
     * go to <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/EnvironmentConfig_AMIVersion.html#ami-versions-supported">AMI
     * Versions Supported in Elastic MapReduce</a> in the <i>Amazon Elastic MapReduce
     * Developer's Guide.</i> </p>
     */
    inline RunJobFlowRequest& WithAmiVersion(Aws::String&& value) { SetAmiVersion(value); return *this;}

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * greater, use ReleaseLabel.</p> </note> <p>The version of the Amazon Machine
     * Image (AMI) to use when launching Amazon EC2 instances in the job flow. The
     * following values are valid:</p> <ul> <li> <p>The version number of the AMI to
     * use, for example, "2.0."</p> </li> </ul> <p>If the AMI supports multiple
     * versions of Hadoop (for example, AMI 1.0 supports both Hadoop 0.18 and 0.20) you
     * can use the <a>JobFlowInstancesConfig</a> <code>HadoopVersion</code> parameter
     * to modify the version of Hadoop from the defaults shown above.</p> <p>For
     * details about the AMI versions currently supported by Amazon Elastic MapReduce,
     * go to <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/EnvironmentConfig_AMIVersion.html#ami-versions-supported">AMI
     * Versions Supported in Elastic MapReduce</a> in the <i>Amazon Elastic MapReduce
     * Developer's Guide.</i> </p>
     */
    inline RunJobFlowRequest& WithAmiVersion(const char* value) { SetAmiVersion(value); return *this;}

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The release label for
     * the Amazon EMR release. For Amazon EMR 3.x and 2.x AMIs, use amiVersion instead
     * instead of ReleaseLabel.</p>
     */
    inline const Aws::String& GetReleaseLabel() const{ return m_releaseLabel; }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The release label for
     * the Amazon EMR release. For Amazon EMR 3.x and 2.x AMIs, use amiVersion instead
     * instead of ReleaseLabel.</p>
     */
    inline void SetReleaseLabel(const Aws::String& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = value; }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The release label for
     * the Amazon EMR release. For Amazon EMR 3.x and 2.x AMIs, use amiVersion instead
     * instead of ReleaseLabel.</p>
     */
    inline void SetReleaseLabel(Aws::String&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = value; }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The release label for
     * the Amazon EMR release. For Amazon EMR 3.x and 2.x AMIs, use amiVersion instead
     * instead of ReleaseLabel.</p>
     */
    inline void SetReleaseLabel(const char* value) { m_releaseLabelHasBeenSet = true; m_releaseLabel.assign(value); }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The release label for
     * the Amazon EMR release. For Amazon EMR 3.x and 2.x AMIs, use amiVersion instead
     * instead of ReleaseLabel.</p>
     */
    inline RunJobFlowRequest& WithReleaseLabel(const Aws::String& value) { SetReleaseLabel(value); return *this;}

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The release label for
     * the Amazon EMR release. For Amazon EMR 3.x and 2.x AMIs, use amiVersion instead
     * instead of ReleaseLabel.</p>
     */
    inline RunJobFlowRequest& WithReleaseLabel(Aws::String&& value) { SetReleaseLabel(value); return *this;}

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The release label for
     * the Amazon EMR release. For Amazon EMR 3.x and 2.x AMIs, use amiVersion instead
     * instead of ReleaseLabel.</p>
     */
    inline RunJobFlowRequest& WithReleaseLabel(const char* value) { SetReleaseLabel(value); return *this;}

    /**
     * <p>A specification of the number and type of Amazon EC2 instances on which to
     * run the job flow.</p>
     */
    inline const JobFlowInstancesConfig& GetInstances() const{ return m_instances; }

    /**
     * <p>A specification of the number and type of Amazon EC2 instances on which to
     * run the job flow.</p>
     */
    inline void SetInstances(const JobFlowInstancesConfig& value) { m_instancesHasBeenSet = true; m_instances = value; }

    /**
     * <p>A specification of the number and type of Amazon EC2 instances on which to
     * run the job flow.</p>
     */
    inline void SetInstances(JobFlowInstancesConfig&& value) { m_instancesHasBeenSet = true; m_instances = value; }

    /**
     * <p>A specification of the number and type of Amazon EC2 instances on which to
     * run the job flow.</p>
     */
    inline RunJobFlowRequest& WithInstances(const JobFlowInstancesConfig& value) { SetInstances(value); return *this;}

    /**
     * <p>A specification of the number and type of Amazon EC2 instances on which to
     * run the job flow.</p>
     */
    inline RunJobFlowRequest& WithInstances(JobFlowInstancesConfig&& value) { SetInstances(value); return *this;}

    /**
     * <p>A list of steps to be executed by the job flow.</p>
     */
    inline const Aws::Vector<StepConfig>& GetSteps() const{ return m_steps; }

    /**
     * <p>A list of steps to be executed by the job flow.</p>
     */
    inline void SetSteps(const Aws::Vector<StepConfig>& value) { m_stepsHasBeenSet = true; m_steps = value; }

    /**
     * <p>A list of steps to be executed by the job flow.</p>
     */
    inline void SetSteps(Aws::Vector<StepConfig>&& value) { m_stepsHasBeenSet = true; m_steps = value; }

    /**
     * <p>A list of steps to be executed by the job flow.</p>
     */
    inline RunJobFlowRequest& WithSteps(const Aws::Vector<StepConfig>& value) { SetSteps(value); return *this;}

    /**
     * <p>A list of steps to be executed by the job flow.</p>
     */
    inline RunJobFlowRequest& WithSteps(Aws::Vector<StepConfig>&& value) { SetSteps(value); return *this;}

    /**
     * <p>A list of steps to be executed by the job flow.</p>
     */
    inline RunJobFlowRequest& AddSteps(const StepConfig& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }

    /**
     * <p>A list of steps to be executed by the job flow.</p>
     */
    inline RunJobFlowRequest& AddSteps(StepConfig&& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }

    /**
     * <p>A list of bootstrap actions that will be run before Hadoop is started on the
     * cluster nodes.</p>
     */
    inline const Aws::Vector<BootstrapActionConfig>& GetBootstrapActions() const{ return m_bootstrapActions; }

    /**
     * <p>A list of bootstrap actions that will be run before Hadoop is started on the
     * cluster nodes.</p>
     */
    inline void SetBootstrapActions(const Aws::Vector<BootstrapActionConfig>& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions = value; }

    /**
     * <p>A list of bootstrap actions that will be run before Hadoop is started on the
     * cluster nodes.</p>
     */
    inline void SetBootstrapActions(Aws::Vector<BootstrapActionConfig>&& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions = value; }

    /**
     * <p>A list of bootstrap actions that will be run before Hadoop is started on the
     * cluster nodes.</p>
     */
    inline RunJobFlowRequest& WithBootstrapActions(const Aws::Vector<BootstrapActionConfig>& value) { SetBootstrapActions(value); return *this;}

    /**
     * <p>A list of bootstrap actions that will be run before Hadoop is started on the
     * cluster nodes.</p>
     */
    inline RunJobFlowRequest& WithBootstrapActions(Aws::Vector<BootstrapActionConfig>&& value) { SetBootstrapActions(value); return *this;}

    /**
     * <p>A list of bootstrap actions that will be run before Hadoop is started on the
     * cluster nodes.</p>
     */
    inline RunJobFlowRequest& AddBootstrapActions(const BootstrapActionConfig& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions.push_back(value); return *this; }

    /**
     * <p>A list of bootstrap actions that will be run before Hadoop is started on the
     * cluster nodes.</p>
     */
    inline RunJobFlowRequest& AddBootstrapActions(BootstrapActionConfig&& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions.push_back(value); return *this; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * greater, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow. For more information, go to <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-supported-products.html">Use
     * Third Party Applications with Amazon EMR</a>. Currently supported values
     * are:</p> <ul> <li> <p>"mapr-m3" - launch the job flow using MapR M3 Edition.</p>
     * </li> <li> <p>"mapr-m5" - launch the job flow using MapR M5 Edition.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedProducts() const{ return m_supportedProducts; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * greater, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow. For more information, go to <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-supported-products.html">Use
     * Third Party Applications with Amazon EMR</a>. Currently supported values
     * are:</p> <ul> <li> <p>"mapr-m3" - launch the job flow using MapR M3 Edition.</p>
     * </li> <li> <p>"mapr-m5" - launch the job flow using MapR M5 Edition.</p> </li>
     * </ul>
     */
    inline void SetSupportedProducts(const Aws::Vector<Aws::String>& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts = value; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * greater, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow. For more information, go to <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-supported-products.html">Use
     * Third Party Applications with Amazon EMR</a>. Currently supported values
     * are:</p> <ul> <li> <p>"mapr-m3" - launch the job flow using MapR M3 Edition.</p>
     * </li> <li> <p>"mapr-m5" - launch the job flow using MapR M5 Edition.</p> </li>
     * </ul>
     */
    inline void SetSupportedProducts(Aws::Vector<Aws::String>&& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts = value; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * greater, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow. For more information, go to <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-supported-products.html">Use
     * Third Party Applications with Amazon EMR</a>. Currently supported values
     * are:</p> <ul> <li> <p>"mapr-m3" - launch the job flow using MapR M3 Edition.</p>
     * </li> <li> <p>"mapr-m5" - launch the job flow using MapR M5 Edition.</p> </li>
     * </ul>
     */
    inline RunJobFlowRequest& WithSupportedProducts(const Aws::Vector<Aws::String>& value) { SetSupportedProducts(value); return *this;}

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * greater, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow. For more information, go to <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-supported-products.html">Use
     * Third Party Applications with Amazon EMR</a>. Currently supported values
     * are:</p> <ul> <li> <p>"mapr-m3" - launch the job flow using MapR M3 Edition.</p>
     * </li> <li> <p>"mapr-m5" - launch the job flow using MapR M5 Edition.</p> </li>
     * </ul>
     */
    inline RunJobFlowRequest& WithSupportedProducts(Aws::Vector<Aws::String>&& value) { SetSupportedProducts(value); return *this;}

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * greater, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow. For more information, go to <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-supported-products.html">Use
     * Third Party Applications with Amazon EMR</a>. Currently supported values
     * are:</p> <ul> <li> <p>"mapr-m3" - launch the job flow using MapR M3 Edition.</p>
     * </li> <li> <p>"mapr-m5" - launch the job flow using MapR M5 Edition.</p> </li>
     * </ul>
     */
    inline RunJobFlowRequest& AddSupportedProducts(const Aws::String& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts.push_back(value); return *this; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * greater, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow. For more information, go to <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-supported-products.html">Use
     * Third Party Applications with Amazon EMR</a>. Currently supported values
     * are:</p> <ul> <li> <p>"mapr-m3" - launch the job flow using MapR M3 Edition.</p>
     * </li> <li> <p>"mapr-m5" - launch the job flow using MapR M5 Edition.</p> </li>
     * </ul>
     */
    inline RunJobFlowRequest& AddSupportedProducts(Aws::String&& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts.push_back(value); return *this; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * greater, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow. For more information, go to <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-supported-products.html">Use
     * Third Party Applications with Amazon EMR</a>. Currently supported values
     * are:</p> <ul> <li> <p>"mapr-m3" - launch the job flow using MapR M3 Edition.</p>
     * </li> <li> <p>"mapr-m5" - launch the job flow using MapR M5 Edition.</p> </li>
     * </ul>
     */
    inline RunJobFlowRequest& AddSupportedProducts(const char* value) { m_supportedProductsHasBeenSet = true; m_supportedProducts.push_back(value); return *this; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * greater, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow that accepts a user argument list.
     * EMR accepts and forwards the argument list to the corresponding installation
     * script as bootstrap action arguments. For more information, see <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-mapr.html">Launch
     * a Job Flow on the MapR Distribution for Hadoop</a>. Currently supported values
     * are:</p> <ul> <li> <p>"mapr-m3" - launch the cluster using MapR M3 Edition.</p>
     * </li> <li> <p>"mapr-m5" - launch the cluster using MapR M5 Edition.</p> </li>
     * <li> <p>"mapr" with the user arguments specifying "--edition,m3" or
     * "--edition,m5" - launch the job flow using MapR M3 or M5 Edition
     * respectively.</p> </li> <li> <p>"mapr-m7" - launch the cluster using MapR M7
     * Edition.</p> </li> <li> <p>"hunk" - launch the cluster with the Hunk Big Data
     * Analtics Platform.</p> </li> <li> <p>"hue"- launch the cluster with Hue
     * installed.</p> </li> <li> <p>"spark" - launch the cluster with Apache Spark
     * installed.</p> </li> <li> <p>"ganglia" - launch the cluster with the Ganglia
     * Monitoring System installed.</p> </li> </ul>
     */
    inline const Aws::Vector<SupportedProductConfig>& GetNewSupportedProducts() const{ return m_newSupportedProducts; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * greater, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow that accepts a user argument list.
     * EMR accepts and forwards the argument list to the corresponding installation
     * script as bootstrap action arguments. For more information, see <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-mapr.html">Launch
     * a Job Flow on the MapR Distribution for Hadoop</a>. Currently supported values
     * are:</p> <ul> <li> <p>"mapr-m3" - launch the cluster using MapR M3 Edition.</p>
     * </li> <li> <p>"mapr-m5" - launch the cluster using MapR M5 Edition.</p> </li>
     * <li> <p>"mapr" with the user arguments specifying "--edition,m3" or
     * "--edition,m5" - launch the job flow using MapR M3 or M5 Edition
     * respectively.</p> </li> <li> <p>"mapr-m7" - launch the cluster using MapR M7
     * Edition.</p> </li> <li> <p>"hunk" - launch the cluster with the Hunk Big Data
     * Analtics Platform.</p> </li> <li> <p>"hue"- launch the cluster with Hue
     * installed.</p> </li> <li> <p>"spark" - launch the cluster with Apache Spark
     * installed.</p> </li> <li> <p>"ganglia" - launch the cluster with the Ganglia
     * Monitoring System installed.</p> </li> </ul>
     */
    inline void SetNewSupportedProducts(const Aws::Vector<SupportedProductConfig>& value) { m_newSupportedProductsHasBeenSet = true; m_newSupportedProducts = value; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * greater, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow that accepts a user argument list.
     * EMR accepts and forwards the argument list to the corresponding installation
     * script as bootstrap action arguments. For more information, see <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-mapr.html">Launch
     * a Job Flow on the MapR Distribution for Hadoop</a>. Currently supported values
     * are:</p> <ul> <li> <p>"mapr-m3" - launch the cluster using MapR M3 Edition.</p>
     * </li> <li> <p>"mapr-m5" - launch the cluster using MapR M5 Edition.</p> </li>
     * <li> <p>"mapr" with the user arguments specifying "--edition,m3" or
     * "--edition,m5" - launch the job flow using MapR M3 or M5 Edition
     * respectively.</p> </li> <li> <p>"mapr-m7" - launch the cluster using MapR M7
     * Edition.</p> </li> <li> <p>"hunk" - launch the cluster with the Hunk Big Data
     * Analtics Platform.</p> </li> <li> <p>"hue"- launch the cluster with Hue
     * installed.</p> </li> <li> <p>"spark" - launch the cluster with Apache Spark
     * installed.</p> </li> <li> <p>"ganglia" - launch the cluster with the Ganglia
     * Monitoring System installed.</p> </li> </ul>
     */
    inline void SetNewSupportedProducts(Aws::Vector<SupportedProductConfig>&& value) { m_newSupportedProductsHasBeenSet = true; m_newSupportedProducts = value; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * greater, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow that accepts a user argument list.
     * EMR accepts and forwards the argument list to the corresponding installation
     * script as bootstrap action arguments. For more information, see <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-mapr.html">Launch
     * a Job Flow on the MapR Distribution for Hadoop</a>. Currently supported values
     * are:</p> <ul> <li> <p>"mapr-m3" - launch the cluster using MapR M3 Edition.</p>
     * </li> <li> <p>"mapr-m5" - launch the cluster using MapR M5 Edition.</p> </li>
     * <li> <p>"mapr" with the user arguments specifying "--edition,m3" or
     * "--edition,m5" - launch the job flow using MapR M3 or M5 Edition
     * respectively.</p> </li> <li> <p>"mapr-m7" - launch the cluster using MapR M7
     * Edition.</p> </li> <li> <p>"hunk" - launch the cluster with the Hunk Big Data
     * Analtics Platform.</p> </li> <li> <p>"hue"- launch the cluster with Hue
     * installed.</p> </li> <li> <p>"spark" - launch the cluster with Apache Spark
     * installed.</p> </li> <li> <p>"ganglia" - launch the cluster with the Ganglia
     * Monitoring System installed.</p> </li> </ul>
     */
    inline RunJobFlowRequest& WithNewSupportedProducts(const Aws::Vector<SupportedProductConfig>& value) { SetNewSupportedProducts(value); return *this;}

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * greater, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow that accepts a user argument list.
     * EMR accepts and forwards the argument list to the corresponding installation
     * script as bootstrap action arguments. For more information, see <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-mapr.html">Launch
     * a Job Flow on the MapR Distribution for Hadoop</a>. Currently supported values
     * are:</p> <ul> <li> <p>"mapr-m3" - launch the cluster using MapR M3 Edition.</p>
     * </li> <li> <p>"mapr-m5" - launch the cluster using MapR M5 Edition.</p> </li>
     * <li> <p>"mapr" with the user arguments specifying "--edition,m3" or
     * "--edition,m5" - launch the job flow using MapR M3 or M5 Edition
     * respectively.</p> </li> <li> <p>"mapr-m7" - launch the cluster using MapR M7
     * Edition.</p> </li> <li> <p>"hunk" - launch the cluster with the Hunk Big Data
     * Analtics Platform.</p> </li> <li> <p>"hue"- launch the cluster with Hue
     * installed.</p> </li> <li> <p>"spark" - launch the cluster with Apache Spark
     * installed.</p> </li> <li> <p>"ganglia" - launch the cluster with the Ganglia
     * Monitoring System installed.</p> </li> </ul>
     */
    inline RunJobFlowRequest& WithNewSupportedProducts(Aws::Vector<SupportedProductConfig>&& value) { SetNewSupportedProducts(value); return *this;}

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * greater, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow that accepts a user argument list.
     * EMR accepts and forwards the argument list to the corresponding installation
     * script as bootstrap action arguments. For more information, see <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-mapr.html">Launch
     * a Job Flow on the MapR Distribution for Hadoop</a>. Currently supported values
     * are:</p> <ul> <li> <p>"mapr-m3" - launch the cluster using MapR M3 Edition.</p>
     * </li> <li> <p>"mapr-m5" - launch the cluster using MapR M5 Edition.</p> </li>
     * <li> <p>"mapr" with the user arguments specifying "--edition,m3" or
     * "--edition,m5" - launch the job flow using MapR M3 or M5 Edition
     * respectively.</p> </li> <li> <p>"mapr-m7" - launch the cluster using MapR M7
     * Edition.</p> </li> <li> <p>"hunk" - launch the cluster with the Hunk Big Data
     * Analtics Platform.</p> </li> <li> <p>"hue"- launch the cluster with Hue
     * installed.</p> </li> <li> <p>"spark" - launch the cluster with Apache Spark
     * installed.</p> </li> <li> <p>"ganglia" - launch the cluster with the Ganglia
     * Monitoring System installed.</p> </li> </ul>
     */
    inline RunJobFlowRequest& AddNewSupportedProducts(const SupportedProductConfig& value) { m_newSupportedProductsHasBeenSet = true; m_newSupportedProducts.push_back(value); return *this; }

    /**
     * <note> <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * greater, use Applications.</p> </note> <p>A list of strings that indicates
     * third-party software to use with the job flow that accepts a user argument list.
     * EMR accepts and forwards the argument list to the corresponding installation
     * script as bootstrap action arguments. For more information, see <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-mapr.html">Launch
     * a Job Flow on the MapR Distribution for Hadoop</a>. Currently supported values
     * are:</p> <ul> <li> <p>"mapr-m3" - launch the cluster using MapR M3 Edition.</p>
     * </li> <li> <p>"mapr-m5" - launch the cluster using MapR M5 Edition.</p> </li>
     * <li> <p>"mapr" with the user arguments specifying "--edition,m3" or
     * "--edition,m5" - launch the job flow using MapR M3 or M5 Edition
     * respectively.</p> </li> <li> <p>"mapr-m7" - launch the cluster using MapR M7
     * Edition.</p> </li> <li> <p>"hunk" - launch the cluster with the Hunk Big Data
     * Analtics Platform.</p> </li> <li> <p>"hue"- launch the cluster with Hue
     * installed.</p> </li> <li> <p>"spark" - launch the cluster with Apache Spark
     * installed.</p> </li> <li> <p>"ganglia" - launch the cluster with the Ganglia
     * Monitoring System installed.</p> </li> </ul>
     */
    inline RunJobFlowRequest& AddNewSupportedProducts(SupportedProductConfig&& value) { m_newSupportedProductsHasBeenSet = true; m_newSupportedProducts.push_back(value); return *this; }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>A list of
     * applications for the cluster. Valid values are: "Hadoop", "Hive", "Mahout",
     * "Pig", and "Spark." They are case insensitive.</p>
     */
    inline const Aws::Vector<Application>& GetApplications() const{ return m_applications; }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>A list of
     * applications for the cluster. Valid values are: "Hadoop", "Hive", "Mahout",
     * "Pig", and "Spark." They are case insensitive.</p>
     */
    inline void SetApplications(const Aws::Vector<Application>& value) { m_applicationsHasBeenSet = true; m_applications = value; }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>A list of
     * applications for the cluster. Valid values are: "Hadoop", "Hive", "Mahout",
     * "Pig", and "Spark." They are case insensitive.</p>
     */
    inline void SetApplications(Aws::Vector<Application>&& value) { m_applicationsHasBeenSet = true; m_applications = value; }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>A list of
     * applications for the cluster. Valid values are: "Hadoop", "Hive", "Mahout",
     * "Pig", and "Spark." They are case insensitive.</p>
     */
    inline RunJobFlowRequest& WithApplications(const Aws::Vector<Application>& value) { SetApplications(value); return *this;}

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>A list of
     * applications for the cluster. Valid values are: "Hadoop", "Hive", "Mahout",
     * "Pig", and "Spark." They are case insensitive.</p>
     */
    inline RunJobFlowRequest& WithApplications(Aws::Vector<Application>&& value) { SetApplications(value); return *this;}

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>A list of
     * applications for the cluster. Valid values are: "Hadoop", "Hive", "Mahout",
     * "Pig", and "Spark." They are case insensitive.</p>
     */
    inline RunJobFlowRequest& AddApplications(const Application& value) { m_applicationsHasBeenSet = true; m_applications.push_back(value); return *this; }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>A list of
     * applications for the cluster. Valid values are: "Hadoop", "Hive", "Mahout",
     * "Pig", and "Spark." They are case insensitive.</p>
     */
    inline RunJobFlowRequest& AddApplications(Application&& value) { m_applicationsHasBeenSet = true; m_applications.push_back(value); return *this; }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * configurations supplied for the EMR cluster you are creating.</p>
     */
    inline const Aws::Vector<Configuration>& GetConfigurations() const{ return m_configurations; }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * configurations supplied for the EMR cluster you are creating.</p>
     */
    inline void SetConfigurations(const Aws::Vector<Configuration>& value) { m_configurationsHasBeenSet = true; m_configurations = value; }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * configurations supplied for the EMR cluster you are creating.</p>
     */
    inline void SetConfigurations(Aws::Vector<Configuration>&& value) { m_configurationsHasBeenSet = true; m_configurations = value; }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * configurations supplied for the EMR cluster you are creating.</p>
     */
    inline RunJobFlowRequest& WithConfigurations(const Aws::Vector<Configuration>& value) { SetConfigurations(value); return *this;}

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * configurations supplied for the EMR cluster you are creating.</p>
     */
    inline RunJobFlowRequest& WithConfigurations(Aws::Vector<Configuration>&& value) { SetConfigurations(value); return *this;}

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * configurations supplied for the EMR cluster you are creating.</p>
     */
    inline RunJobFlowRequest& AddConfigurations(const Configuration& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(value); return *this; }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * configurations supplied for the EMR cluster you are creating.</p>
     */
    inline RunJobFlowRequest& AddConfigurations(Configuration&& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(value); return *this; }

    /**
     * <p>Whether the job flow is visible to all IAM users of the AWS account
     * associated with the job flow. If this value is set to <code>true</code>, all IAM
     * users of that AWS account can view and (if they have the proper policy
     * permissions set) manage the job flow. If it is set to <code>false</code>, only
     * the IAM user that created the job flow can view and manage it.</p>
     */
    inline bool GetVisibleToAllUsers() const{ return m_visibleToAllUsers; }

    /**
     * <p>Whether the job flow is visible to all IAM users of the AWS account
     * associated with the job flow. If this value is set to <code>true</code>, all IAM
     * users of that AWS account can view and (if they have the proper policy
     * permissions set) manage the job flow. If it is set to <code>false</code>, only
     * the IAM user that created the job flow can view and manage it.</p>
     */
    inline void SetVisibleToAllUsers(bool value) { m_visibleToAllUsersHasBeenSet = true; m_visibleToAllUsers = value; }

    /**
     * <p>Whether the job flow is visible to all IAM users of the AWS account
     * associated with the job flow. If this value is set to <code>true</code>, all IAM
     * users of that AWS account can view and (if they have the proper policy
     * permissions set) manage the job flow. If it is set to <code>false</code>, only
     * the IAM user that created the job flow can view and manage it.</p>
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
    inline void SetJobFlowRole(const Aws::String& value) { m_jobFlowRoleHasBeenSet = true; m_jobFlowRole = value; }

    /**
     * <p>Also called instance profile and EC2 role. An IAM role for an EMR cluster.
     * The EC2 instances of the cluster assume this role. The default role is
     * <code>EMR_EC2_DefaultRole</code>. In order to use the default role, you must
     * have already created it using the CLI or console.</p>
     */
    inline void SetJobFlowRole(Aws::String&& value) { m_jobFlowRoleHasBeenSet = true; m_jobFlowRole = value; }

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
    inline RunJobFlowRequest& WithJobFlowRole(Aws::String&& value) { SetJobFlowRole(value); return *this;}

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
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

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
    inline RunJobFlowRequest& WithServiceRole(Aws::String&& value) { SetServiceRole(value); return *this;}

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
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to associate with a cluster and propagate to Amazon EC2
     * instances.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to associate with a cluster and propagate to Amazon EC2
     * instances.</p>
     */
    inline RunJobFlowRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to associate with a cluster and propagate to Amazon EC2
     * instances.</p>
     */
    inline RunJobFlowRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to associate with a cluster and propagate to Amazon EC2
     * instances.</p>
     */
    inline RunJobFlowRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to associate with a cluster and propagate to Amazon EC2
     * instances.</p>
     */
    inline RunJobFlowRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The name of a security configuration to apply to the cluster.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const{ return m_securityConfiguration; }

    /**
     * <p>The name of a security configuration to apply to the cluster.</p>
     */
    inline void SetSecurityConfiguration(const Aws::String& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = value; }

    /**
     * <p>The name of a security configuration to apply to the cluster.</p>
     */
    inline void SetSecurityConfiguration(Aws::String&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = value; }

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
    inline RunJobFlowRequest& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(value); return *this;}

    /**
     * <p>The name of a security configuration to apply to the cluster.</p>
     */
    inline RunJobFlowRequest& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}

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
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
