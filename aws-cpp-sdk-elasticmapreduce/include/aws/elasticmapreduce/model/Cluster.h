﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/ClusterStatus.h>
#include <aws/elasticmapreduce/model/Ec2InstanceAttributes.h>
#include <aws/elasticmapreduce/model/InstanceCollectionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/ScaleDownBehavior.h>
#include <aws/elasticmapreduce/model/RepoUpgradeOnBoot.h>
#include <aws/elasticmapreduce/model/KerberosAttributes.h>
#include <aws/elasticmapreduce/model/Application.h>
#include <aws/elasticmapreduce/model/Tag.h>
#include <aws/elasticmapreduce/model/Configuration.h>
#include <aws/elasticmapreduce/model/PlacementGroupConfig.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The detailed description of the cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/Cluster">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API Cluster
  {
  public:
    Cluster();
    Cluster(Aws::Utils::Json::JsonView jsonValue);
    Cluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline Cluster& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline Cluster& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline Cluster& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the cluster.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the cluster.</p>
     */
    inline Cluster& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the cluster.</p>
     */
    inline Cluster& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster.</p>
     */
    inline Cluster& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current status details about the cluster.</p>
     */
    inline const ClusterStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status details about the cluster.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status details about the cluster.</p>
     */
    inline void SetStatus(const ClusterStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status details about the cluster.</p>
     */
    inline void SetStatus(ClusterStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status details about the cluster.</p>
     */
    inline Cluster& WithStatus(const ClusterStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status details about the cluster.</p>
     */
    inline Cluster& WithStatus(ClusterStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Provides information about the EC2 instances in a cluster grouped by
     * category. For example, key name, subnet ID, IAM instance profile, and so on.</p>
     */
    inline const Ec2InstanceAttributes& GetEc2InstanceAttributes() const{ return m_ec2InstanceAttributes; }

    /**
     * <p>Provides information about the EC2 instances in a cluster grouped by
     * category. For example, key name, subnet ID, IAM instance profile, and so on.</p>
     */
    inline bool Ec2InstanceAttributesHasBeenSet() const { return m_ec2InstanceAttributesHasBeenSet; }

    /**
     * <p>Provides information about the EC2 instances in a cluster grouped by
     * category. For example, key name, subnet ID, IAM instance profile, and so on.</p>
     */
    inline void SetEc2InstanceAttributes(const Ec2InstanceAttributes& value) { m_ec2InstanceAttributesHasBeenSet = true; m_ec2InstanceAttributes = value; }

    /**
     * <p>Provides information about the EC2 instances in a cluster grouped by
     * category. For example, key name, subnet ID, IAM instance profile, and so on.</p>
     */
    inline void SetEc2InstanceAttributes(Ec2InstanceAttributes&& value) { m_ec2InstanceAttributesHasBeenSet = true; m_ec2InstanceAttributes = std::move(value); }

    /**
     * <p>Provides information about the EC2 instances in a cluster grouped by
     * category. For example, key name, subnet ID, IAM instance profile, and so on.</p>
     */
    inline Cluster& WithEc2InstanceAttributes(const Ec2InstanceAttributes& value) { SetEc2InstanceAttributes(value); return *this;}

    /**
     * <p>Provides information about the EC2 instances in a cluster grouped by
     * category. For example, key name, subnet ID, IAM instance profile, and so on.</p>
     */
    inline Cluster& WithEc2InstanceAttributes(Ec2InstanceAttributes&& value) { SetEc2InstanceAttributes(std::move(value)); return *this;}


    /**
     *  <p>The instance fleet configuration is available only in Amazon EMR
     * versions 4.8.0 and later, excluding 5.0.x versions.</p>  <p>The instance
     * group configuration of the cluster. A value of <code>INSTANCE_GROUP</code>
     * indicates a uniform instance group configuration. A value of
     * <code>INSTANCE_FLEET</code> indicates an instance fleets configuration.</p>
     */
    inline const InstanceCollectionType& GetInstanceCollectionType() const{ return m_instanceCollectionType; }

    /**
     *  <p>The instance fleet configuration is available only in Amazon EMR
     * versions 4.8.0 and later, excluding 5.0.x versions.</p>  <p>The instance
     * group configuration of the cluster. A value of <code>INSTANCE_GROUP</code>
     * indicates a uniform instance group configuration. A value of
     * <code>INSTANCE_FLEET</code> indicates an instance fleets configuration.</p>
     */
    inline bool InstanceCollectionTypeHasBeenSet() const { return m_instanceCollectionTypeHasBeenSet; }

    /**
     *  <p>The instance fleet configuration is available only in Amazon EMR
     * versions 4.8.0 and later, excluding 5.0.x versions.</p>  <p>The instance
     * group configuration of the cluster. A value of <code>INSTANCE_GROUP</code>
     * indicates a uniform instance group configuration. A value of
     * <code>INSTANCE_FLEET</code> indicates an instance fleets configuration.</p>
     */
    inline void SetInstanceCollectionType(const InstanceCollectionType& value) { m_instanceCollectionTypeHasBeenSet = true; m_instanceCollectionType = value; }

    /**
     *  <p>The instance fleet configuration is available only in Amazon EMR
     * versions 4.8.0 and later, excluding 5.0.x versions.</p>  <p>The instance
     * group configuration of the cluster. A value of <code>INSTANCE_GROUP</code>
     * indicates a uniform instance group configuration. A value of
     * <code>INSTANCE_FLEET</code> indicates an instance fleets configuration.</p>
     */
    inline void SetInstanceCollectionType(InstanceCollectionType&& value) { m_instanceCollectionTypeHasBeenSet = true; m_instanceCollectionType = std::move(value); }

    /**
     *  <p>The instance fleet configuration is available only in Amazon EMR
     * versions 4.8.0 and later, excluding 5.0.x versions.</p>  <p>The instance
     * group configuration of the cluster. A value of <code>INSTANCE_GROUP</code>
     * indicates a uniform instance group configuration. A value of
     * <code>INSTANCE_FLEET</code> indicates an instance fleets configuration.</p>
     */
    inline Cluster& WithInstanceCollectionType(const InstanceCollectionType& value) { SetInstanceCollectionType(value); return *this;}

    /**
     *  <p>The instance fleet configuration is available only in Amazon EMR
     * versions 4.8.0 and later, excluding 5.0.x versions.</p>  <p>The instance
     * group configuration of the cluster. A value of <code>INSTANCE_GROUP</code>
     * indicates a uniform instance group configuration. A value of
     * <code>INSTANCE_FLEET</code> indicates an instance fleets configuration.</p>
     */
    inline Cluster& WithInstanceCollectionType(InstanceCollectionType&& value) { SetInstanceCollectionType(std::move(value)); return *this;}


    /**
     * <p>The path to the Amazon S3 location where logs for this cluster are
     * stored.</p>
     */
    inline const Aws::String& GetLogUri() const{ return m_logUri; }

    /**
     * <p>The path to the Amazon S3 location where logs for this cluster are
     * stored.</p>
     */
    inline bool LogUriHasBeenSet() const { return m_logUriHasBeenSet; }

    /**
     * <p>The path to the Amazon S3 location where logs for this cluster are
     * stored.</p>
     */
    inline void SetLogUri(const Aws::String& value) { m_logUriHasBeenSet = true; m_logUri = value; }

    /**
     * <p>The path to the Amazon S3 location where logs for this cluster are
     * stored.</p>
     */
    inline void SetLogUri(Aws::String&& value) { m_logUriHasBeenSet = true; m_logUri = std::move(value); }

    /**
     * <p>The path to the Amazon S3 location where logs for this cluster are
     * stored.</p>
     */
    inline void SetLogUri(const char* value) { m_logUriHasBeenSet = true; m_logUri.assign(value); }

    /**
     * <p>The path to the Amazon S3 location where logs for this cluster are
     * stored.</p>
     */
    inline Cluster& WithLogUri(const Aws::String& value) { SetLogUri(value); return *this;}

    /**
     * <p>The path to the Amazon S3 location where logs for this cluster are
     * stored.</p>
     */
    inline Cluster& WithLogUri(Aws::String&& value) { SetLogUri(std::move(value)); return *this;}

    /**
     * <p>The path to the Amazon S3 location where logs for this cluster are
     * stored.</p>
     */
    inline Cluster& WithLogUri(const char* value) { SetLogUri(value); return *this;}


    /**
     * <p> The KMS key used for encrypting log files. This attribute is only available
     * with EMR version 5.30.0 and later, excluding EMR 6.0.0. </p>
     */
    inline const Aws::String& GetLogEncryptionKmsKeyId() const{ return m_logEncryptionKmsKeyId; }

    /**
     * <p> The KMS key used for encrypting log files. This attribute is only available
     * with EMR version 5.30.0 and later, excluding EMR 6.0.0. </p>
     */
    inline bool LogEncryptionKmsKeyIdHasBeenSet() const { return m_logEncryptionKmsKeyIdHasBeenSet; }

    /**
     * <p> The KMS key used for encrypting log files. This attribute is only available
     * with EMR version 5.30.0 and later, excluding EMR 6.0.0. </p>
     */
    inline void SetLogEncryptionKmsKeyId(const Aws::String& value) { m_logEncryptionKmsKeyIdHasBeenSet = true; m_logEncryptionKmsKeyId = value; }

    /**
     * <p> The KMS key used for encrypting log files. This attribute is only available
     * with EMR version 5.30.0 and later, excluding EMR 6.0.0. </p>
     */
    inline void SetLogEncryptionKmsKeyId(Aws::String&& value) { m_logEncryptionKmsKeyIdHasBeenSet = true; m_logEncryptionKmsKeyId = std::move(value); }

    /**
     * <p> The KMS key used for encrypting log files. This attribute is only available
     * with EMR version 5.30.0 and later, excluding EMR 6.0.0. </p>
     */
    inline void SetLogEncryptionKmsKeyId(const char* value) { m_logEncryptionKmsKeyIdHasBeenSet = true; m_logEncryptionKmsKeyId.assign(value); }

    /**
     * <p> The KMS key used for encrypting log files. This attribute is only available
     * with EMR version 5.30.0 and later, excluding EMR 6.0.0. </p>
     */
    inline Cluster& WithLogEncryptionKmsKeyId(const Aws::String& value) { SetLogEncryptionKmsKeyId(value); return *this;}

    /**
     * <p> The KMS key used for encrypting log files. This attribute is only available
     * with EMR version 5.30.0 and later, excluding EMR 6.0.0. </p>
     */
    inline Cluster& WithLogEncryptionKmsKeyId(Aws::String&& value) { SetLogEncryptionKmsKeyId(std::move(value)); return *this;}

    /**
     * <p> The KMS key used for encrypting log files. This attribute is only available
     * with EMR version 5.30.0 and later, excluding EMR 6.0.0. </p>
     */
    inline Cluster& WithLogEncryptionKmsKeyId(const char* value) { SetLogEncryptionKmsKeyId(value); return *this;}


    /**
     * <p>The AMI version requested for this cluster.</p>
     */
    inline const Aws::String& GetRequestedAmiVersion() const{ return m_requestedAmiVersion; }

    /**
     * <p>The AMI version requested for this cluster.</p>
     */
    inline bool RequestedAmiVersionHasBeenSet() const { return m_requestedAmiVersionHasBeenSet; }

    /**
     * <p>The AMI version requested for this cluster.</p>
     */
    inline void SetRequestedAmiVersion(const Aws::String& value) { m_requestedAmiVersionHasBeenSet = true; m_requestedAmiVersion = value; }

    /**
     * <p>The AMI version requested for this cluster.</p>
     */
    inline void SetRequestedAmiVersion(Aws::String&& value) { m_requestedAmiVersionHasBeenSet = true; m_requestedAmiVersion = std::move(value); }

    /**
     * <p>The AMI version requested for this cluster.</p>
     */
    inline void SetRequestedAmiVersion(const char* value) { m_requestedAmiVersionHasBeenSet = true; m_requestedAmiVersion.assign(value); }

    /**
     * <p>The AMI version requested for this cluster.</p>
     */
    inline Cluster& WithRequestedAmiVersion(const Aws::String& value) { SetRequestedAmiVersion(value); return *this;}

    /**
     * <p>The AMI version requested for this cluster.</p>
     */
    inline Cluster& WithRequestedAmiVersion(Aws::String&& value) { SetRequestedAmiVersion(std::move(value)); return *this;}

    /**
     * <p>The AMI version requested for this cluster.</p>
     */
    inline Cluster& WithRequestedAmiVersion(const char* value) { SetRequestedAmiVersion(value); return *this;}


    /**
     * <p>The AMI version running on this cluster.</p>
     */
    inline const Aws::String& GetRunningAmiVersion() const{ return m_runningAmiVersion; }

    /**
     * <p>The AMI version running on this cluster.</p>
     */
    inline bool RunningAmiVersionHasBeenSet() const { return m_runningAmiVersionHasBeenSet; }

    /**
     * <p>The AMI version running on this cluster.</p>
     */
    inline void SetRunningAmiVersion(const Aws::String& value) { m_runningAmiVersionHasBeenSet = true; m_runningAmiVersion = value; }

    /**
     * <p>The AMI version running on this cluster.</p>
     */
    inline void SetRunningAmiVersion(Aws::String&& value) { m_runningAmiVersionHasBeenSet = true; m_runningAmiVersion = std::move(value); }

    /**
     * <p>The AMI version running on this cluster.</p>
     */
    inline void SetRunningAmiVersion(const char* value) { m_runningAmiVersionHasBeenSet = true; m_runningAmiVersion.assign(value); }

    /**
     * <p>The AMI version running on this cluster.</p>
     */
    inline Cluster& WithRunningAmiVersion(const Aws::String& value) { SetRunningAmiVersion(value); return *this;}

    /**
     * <p>The AMI version running on this cluster.</p>
     */
    inline Cluster& WithRunningAmiVersion(Aws::String&& value) { SetRunningAmiVersion(std::move(value)); return *this;}

    /**
     * <p>The AMI version running on this cluster.</p>
     */
    inline Cluster& WithRunningAmiVersion(const char* value) { SetRunningAmiVersion(value); return *this;}


    /**
     * <p>The Amazon EMR release label, which determines the version of open-source
     * application packages installed on the cluster. Release labels are in the form
     * <code>emr-x.x.x</code>, where x.x.x is an Amazon EMR release version such as
     * <code>emr-5.14.0</code>. For more information about Amazon EMR release versions
     * and included application versions and features, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">https://docs.aws.amazon.com/emr/latest/ReleaseGuide/</a>.
     * The release label applies only to Amazon EMR releases version 4.0 and later.
     * Earlier versions use <code>AmiVersion</code>.</p>
     */
    inline const Aws::String& GetReleaseLabel() const{ return m_releaseLabel; }

    /**
     * <p>The Amazon EMR release label, which determines the version of open-source
     * application packages installed on the cluster. Release labels are in the form
     * <code>emr-x.x.x</code>, where x.x.x is an Amazon EMR release version such as
     * <code>emr-5.14.0</code>. For more information about Amazon EMR release versions
     * and included application versions and features, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">https://docs.aws.amazon.com/emr/latest/ReleaseGuide/</a>.
     * The release label applies only to Amazon EMR releases version 4.0 and later.
     * Earlier versions use <code>AmiVersion</code>.</p>
     */
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }

    /**
     * <p>The Amazon EMR release label, which determines the version of open-source
     * application packages installed on the cluster. Release labels are in the form
     * <code>emr-x.x.x</code>, where x.x.x is an Amazon EMR release version such as
     * <code>emr-5.14.0</code>. For more information about Amazon EMR release versions
     * and included application versions and features, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">https://docs.aws.amazon.com/emr/latest/ReleaseGuide/</a>.
     * The release label applies only to Amazon EMR releases version 4.0 and later.
     * Earlier versions use <code>AmiVersion</code>.</p>
     */
    inline void SetReleaseLabel(const Aws::String& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = value; }

    /**
     * <p>The Amazon EMR release label, which determines the version of open-source
     * application packages installed on the cluster. Release labels are in the form
     * <code>emr-x.x.x</code>, where x.x.x is an Amazon EMR release version such as
     * <code>emr-5.14.0</code>. For more information about Amazon EMR release versions
     * and included application versions and features, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">https://docs.aws.amazon.com/emr/latest/ReleaseGuide/</a>.
     * The release label applies only to Amazon EMR releases version 4.0 and later.
     * Earlier versions use <code>AmiVersion</code>.</p>
     */
    inline void SetReleaseLabel(Aws::String&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::move(value); }

    /**
     * <p>The Amazon EMR release label, which determines the version of open-source
     * application packages installed on the cluster. Release labels are in the form
     * <code>emr-x.x.x</code>, where x.x.x is an Amazon EMR release version such as
     * <code>emr-5.14.0</code>. For more information about Amazon EMR release versions
     * and included application versions and features, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">https://docs.aws.amazon.com/emr/latest/ReleaseGuide/</a>.
     * The release label applies only to Amazon EMR releases version 4.0 and later.
     * Earlier versions use <code>AmiVersion</code>.</p>
     */
    inline void SetReleaseLabel(const char* value) { m_releaseLabelHasBeenSet = true; m_releaseLabel.assign(value); }

    /**
     * <p>The Amazon EMR release label, which determines the version of open-source
     * application packages installed on the cluster. Release labels are in the form
     * <code>emr-x.x.x</code>, where x.x.x is an Amazon EMR release version such as
     * <code>emr-5.14.0</code>. For more information about Amazon EMR release versions
     * and included application versions and features, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">https://docs.aws.amazon.com/emr/latest/ReleaseGuide/</a>.
     * The release label applies only to Amazon EMR releases version 4.0 and later.
     * Earlier versions use <code>AmiVersion</code>.</p>
     */
    inline Cluster& WithReleaseLabel(const Aws::String& value) { SetReleaseLabel(value); return *this;}

    /**
     * <p>The Amazon EMR release label, which determines the version of open-source
     * application packages installed on the cluster. Release labels are in the form
     * <code>emr-x.x.x</code>, where x.x.x is an Amazon EMR release version such as
     * <code>emr-5.14.0</code>. For more information about Amazon EMR release versions
     * and included application versions and features, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">https://docs.aws.amazon.com/emr/latest/ReleaseGuide/</a>.
     * The release label applies only to Amazon EMR releases version 4.0 and later.
     * Earlier versions use <code>AmiVersion</code>.</p>
     */
    inline Cluster& WithReleaseLabel(Aws::String&& value) { SetReleaseLabel(std::move(value)); return *this;}

    /**
     * <p>The Amazon EMR release label, which determines the version of open-source
     * application packages installed on the cluster. Release labels are in the form
     * <code>emr-x.x.x</code>, where x.x.x is an Amazon EMR release version such as
     * <code>emr-5.14.0</code>. For more information about Amazon EMR release versions
     * and included application versions and features, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">https://docs.aws.amazon.com/emr/latest/ReleaseGuide/</a>.
     * The release label applies only to Amazon EMR releases version 4.0 and later.
     * Earlier versions use <code>AmiVersion</code>.</p>
     */
    inline Cluster& WithReleaseLabel(const char* value) { SetReleaseLabel(value); return *this;}


    /**
     * <p>Specifies whether the cluster should terminate after completing all
     * steps.</p>
     */
    inline bool GetAutoTerminate() const{ return m_autoTerminate; }

    /**
     * <p>Specifies whether the cluster should terminate after completing all
     * steps.</p>
     */
    inline bool AutoTerminateHasBeenSet() const { return m_autoTerminateHasBeenSet; }

    /**
     * <p>Specifies whether the cluster should terminate after completing all
     * steps.</p>
     */
    inline void SetAutoTerminate(bool value) { m_autoTerminateHasBeenSet = true; m_autoTerminate = value; }

    /**
     * <p>Specifies whether the cluster should terminate after completing all
     * steps.</p>
     */
    inline Cluster& WithAutoTerminate(bool value) { SetAutoTerminate(value); return *this;}


    /**
     * <p>Indicates whether Amazon EMR will lock the cluster to prevent the EC2
     * instances from being terminated by an API call or user intervention, or in the
     * event of a cluster error.</p>
     */
    inline bool GetTerminationProtected() const{ return m_terminationProtected; }

    /**
     * <p>Indicates whether Amazon EMR will lock the cluster to prevent the EC2
     * instances from being terminated by an API call or user intervention, or in the
     * event of a cluster error.</p>
     */
    inline bool TerminationProtectedHasBeenSet() const { return m_terminationProtectedHasBeenSet; }

    /**
     * <p>Indicates whether Amazon EMR will lock the cluster to prevent the EC2
     * instances from being terminated by an API call or user intervention, or in the
     * event of a cluster error.</p>
     */
    inline void SetTerminationProtected(bool value) { m_terminationProtectedHasBeenSet = true; m_terminationProtected = value; }

    /**
     * <p>Indicates whether Amazon EMR will lock the cluster to prevent the EC2
     * instances from being terminated by an API call or user intervention, or in the
     * event of a cluster error.</p>
     */
    inline Cluster& WithTerminationProtected(bool value) { SetTerminationProtected(value); return *this;}


    /**
     * <p>Indicates whether the cluster is visible to IAM principals in the account
     * associated with the cluster. When <code>true</code>, IAM principals in the
     * account can perform EMR cluster actions on the cluster that their IAM policies
     * allow. When <code>false</code>, only the IAM principal that created the cluster
     * and the account root user can perform EMR actions, regardless of IAM permissions
     * policies attached to other IAM principals.</p> <p>The default value is
     * <code>true</code> if a value is not provided when creating a cluster using the
     * EMR API <a>RunJobFlow</a> command, the CLI <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/emr/create-cluster.html">create-cluster</a>
     * command, or the Management Console. IAM principals that are allowed to perform
     * actions on the cluster can use the <a>SetVisibleToAllUsers</a> action to change
     * the value on a running cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/security_iam_emr-with-iam.html#security_set_visible_to_all_users">Understanding
     * the EMR Cluster VisibleToAllUsers Setting</a> in the <i>Amazon EMRManagement
     * Guide</i>.</p>
     */
    inline bool GetVisibleToAllUsers() const{ return m_visibleToAllUsers; }

    /**
     * <p>Indicates whether the cluster is visible to IAM principals in the account
     * associated with the cluster. When <code>true</code>, IAM principals in the
     * account can perform EMR cluster actions on the cluster that their IAM policies
     * allow. When <code>false</code>, only the IAM principal that created the cluster
     * and the account root user can perform EMR actions, regardless of IAM permissions
     * policies attached to other IAM principals.</p> <p>The default value is
     * <code>true</code> if a value is not provided when creating a cluster using the
     * EMR API <a>RunJobFlow</a> command, the CLI <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/emr/create-cluster.html">create-cluster</a>
     * command, or the Management Console. IAM principals that are allowed to perform
     * actions on the cluster can use the <a>SetVisibleToAllUsers</a> action to change
     * the value on a running cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/security_iam_emr-with-iam.html#security_set_visible_to_all_users">Understanding
     * the EMR Cluster VisibleToAllUsers Setting</a> in the <i>Amazon EMRManagement
     * Guide</i>.</p>
     */
    inline bool VisibleToAllUsersHasBeenSet() const { return m_visibleToAllUsersHasBeenSet; }

    /**
     * <p>Indicates whether the cluster is visible to IAM principals in the account
     * associated with the cluster. When <code>true</code>, IAM principals in the
     * account can perform EMR cluster actions on the cluster that their IAM policies
     * allow. When <code>false</code>, only the IAM principal that created the cluster
     * and the account root user can perform EMR actions, regardless of IAM permissions
     * policies attached to other IAM principals.</p> <p>The default value is
     * <code>true</code> if a value is not provided when creating a cluster using the
     * EMR API <a>RunJobFlow</a> command, the CLI <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/emr/create-cluster.html">create-cluster</a>
     * command, or the Management Console. IAM principals that are allowed to perform
     * actions on the cluster can use the <a>SetVisibleToAllUsers</a> action to change
     * the value on a running cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/security_iam_emr-with-iam.html#security_set_visible_to_all_users">Understanding
     * the EMR Cluster VisibleToAllUsers Setting</a> in the <i>Amazon EMRManagement
     * Guide</i>.</p>
     */
    inline void SetVisibleToAllUsers(bool value) { m_visibleToAllUsersHasBeenSet = true; m_visibleToAllUsers = value; }

    /**
     * <p>Indicates whether the cluster is visible to IAM principals in the account
     * associated with the cluster. When <code>true</code>, IAM principals in the
     * account can perform EMR cluster actions on the cluster that their IAM policies
     * allow. When <code>false</code>, only the IAM principal that created the cluster
     * and the account root user can perform EMR actions, regardless of IAM permissions
     * policies attached to other IAM principals.</p> <p>The default value is
     * <code>true</code> if a value is not provided when creating a cluster using the
     * EMR API <a>RunJobFlow</a> command, the CLI <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/emr/create-cluster.html">create-cluster</a>
     * command, or the Management Console. IAM principals that are allowed to perform
     * actions on the cluster can use the <a>SetVisibleToAllUsers</a> action to change
     * the value on a running cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/security_iam_emr-with-iam.html#security_set_visible_to_all_users">Understanding
     * the EMR Cluster VisibleToAllUsers Setting</a> in the <i>Amazon EMRManagement
     * Guide</i>.</p>
     */
    inline Cluster& WithVisibleToAllUsers(bool value) { SetVisibleToAllUsers(value); return *this;}


    /**
     * <p>The applications installed on this cluster.</p>
     */
    inline const Aws::Vector<Application>& GetApplications() const{ return m_applications; }

    /**
     * <p>The applications installed on this cluster.</p>
     */
    inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }

    /**
     * <p>The applications installed on this cluster.</p>
     */
    inline void SetApplications(const Aws::Vector<Application>& value) { m_applicationsHasBeenSet = true; m_applications = value; }

    /**
     * <p>The applications installed on this cluster.</p>
     */
    inline void SetApplications(Aws::Vector<Application>&& value) { m_applicationsHasBeenSet = true; m_applications = std::move(value); }

    /**
     * <p>The applications installed on this cluster.</p>
     */
    inline Cluster& WithApplications(const Aws::Vector<Application>& value) { SetApplications(value); return *this;}

    /**
     * <p>The applications installed on this cluster.</p>
     */
    inline Cluster& WithApplications(Aws::Vector<Application>&& value) { SetApplications(std::move(value)); return *this;}

    /**
     * <p>The applications installed on this cluster.</p>
     */
    inline Cluster& AddApplications(const Application& value) { m_applicationsHasBeenSet = true; m_applications.push_back(value); return *this; }

    /**
     * <p>The applications installed on this cluster.</p>
     */
    inline Cluster& AddApplications(Application&& value) { m_applicationsHasBeenSet = true; m_applications.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of tags associated with a cluster.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags associated with a cluster.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags associated with a cluster.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags associated with a cluster.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags associated with a cluster.</p>
     */
    inline Cluster& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags associated with a cluster.</p>
     */
    inline Cluster& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags associated with a cluster.</p>
     */
    inline Cluster& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags associated with a cluster.</p>
     */
    inline Cluster& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access Amazon
     * Web Services resources on your behalf.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access Amazon
     * Web Services resources on your behalf.</p>
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access Amazon
     * Web Services resources on your behalf.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access Amazon
     * Web Services resources on your behalf.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access Amazon
     * Web Services resources on your behalf.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access Amazon
     * Web Services resources on your behalf.</p>
     */
    inline Cluster& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access Amazon
     * Web Services resources on your behalf.</p>
     */
    inline Cluster& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access Amazon
     * Web Services resources on your behalf.</p>
     */
    inline Cluster& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p>An approximation of the cost of the cluster, represented in m1.small/hours.
     * This value is incremented one time for every hour an m1.small instance runs.
     * Larger instances are weighted more, so an EC2 instance that is roughly four
     * times more expensive would result in the normalized instance hours being
     * incremented by four. This result is only an approximation and does not reflect
     * the actual billing rate.</p>
     */
    inline int GetNormalizedInstanceHours() const{ return m_normalizedInstanceHours; }

    /**
     * <p>An approximation of the cost of the cluster, represented in m1.small/hours.
     * This value is incremented one time for every hour an m1.small instance runs.
     * Larger instances are weighted more, so an EC2 instance that is roughly four
     * times more expensive would result in the normalized instance hours being
     * incremented by four. This result is only an approximation and does not reflect
     * the actual billing rate.</p>
     */
    inline bool NormalizedInstanceHoursHasBeenSet() const { return m_normalizedInstanceHoursHasBeenSet; }

    /**
     * <p>An approximation of the cost of the cluster, represented in m1.small/hours.
     * This value is incremented one time for every hour an m1.small instance runs.
     * Larger instances are weighted more, so an EC2 instance that is roughly four
     * times more expensive would result in the normalized instance hours being
     * incremented by four. This result is only an approximation and does not reflect
     * the actual billing rate.</p>
     */
    inline void SetNormalizedInstanceHours(int value) { m_normalizedInstanceHoursHasBeenSet = true; m_normalizedInstanceHours = value; }

    /**
     * <p>An approximation of the cost of the cluster, represented in m1.small/hours.
     * This value is incremented one time for every hour an m1.small instance runs.
     * Larger instances are weighted more, so an EC2 instance that is roughly four
     * times more expensive would result in the normalized instance hours being
     * incremented by four. This result is only an approximation and does not reflect
     * the actual billing rate.</p>
     */
    inline Cluster& WithNormalizedInstanceHours(int value) { SetNormalizedInstanceHours(value); return *this;}


    /**
     * <p>The DNS name of the master node. If the cluster is on a private subnet, this
     * is the private DNS name. On a public subnet, this is the public DNS name.</p>
     */
    inline const Aws::String& GetMasterPublicDnsName() const{ return m_masterPublicDnsName; }

    /**
     * <p>The DNS name of the master node. If the cluster is on a private subnet, this
     * is the private DNS name. On a public subnet, this is the public DNS name.</p>
     */
    inline bool MasterPublicDnsNameHasBeenSet() const { return m_masterPublicDnsNameHasBeenSet; }

    /**
     * <p>The DNS name of the master node. If the cluster is on a private subnet, this
     * is the private DNS name. On a public subnet, this is the public DNS name.</p>
     */
    inline void SetMasterPublicDnsName(const Aws::String& value) { m_masterPublicDnsNameHasBeenSet = true; m_masterPublicDnsName = value; }

    /**
     * <p>The DNS name of the master node. If the cluster is on a private subnet, this
     * is the private DNS name. On a public subnet, this is the public DNS name.</p>
     */
    inline void SetMasterPublicDnsName(Aws::String&& value) { m_masterPublicDnsNameHasBeenSet = true; m_masterPublicDnsName = std::move(value); }

    /**
     * <p>The DNS name of the master node. If the cluster is on a private subnet, this
     * is the private DNS name. On a public subnet, this is the public DNS name.</p>
     */
    inline void SetMasterPublicDnsName(const char* value) { m_masterPublicDnsNameHasBeenSet = true; m_masterPublicDnsName.assign(value); }

    /**
     * <p>The DNS name of the master node. If the cluster is on a private subnet, this
     * is the private DNS name. On a public subnet, this is the public DNS name.</p>
     */
    inline Cluster& WithMasterPublicDnsName(const Aws::String& value) { SetMasterPublicDnsName(value); return *this;}

    /**
     * <p>The DNS name of the master node. If the cluster is on a private subnet, this
     * is the private DNS name. On a public subnet, this is the public DNS name.</p>
     */
    inline Cluster& WithMasterPublicDnsName(Aws::String&& value) { SetMasterPublicDnsName(std::move(value)); return *this;}

    /**
     * <p>The DNS name of the master node. If the cluster is on a private subnet, this
     * is the private DNS name. On a public subnet, this is the public DNS name.</p>
     */
    inline Cluster& WithMasterPublicDnsName(const char* value) { SetMasterPublicDnsName(value); return *this;}


    /**
     * <p>Applies only to Amazon EMR releases 4.x and later. The list of Configurations
     * supplied to the EMR cluster.</p>
     */
    inline const Aws::Vector<Configuration>& GetConfigurations() const{ return m_configurations; }

    /**
     * <p>Applies only to Amazon EMR releases 4.x and later. The list of Configurations
     * supplied to the EMR cluster.</p>
     */
    inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }

    /**
     * <p>Applies only to Amazon EMR releases 4.x and later. The list of Configurations
     * supplied to the EMR cluster.</p>
     */
    inline void SetConfigurations(const Aws::Vector<Configuration>& value) { m_configurationsHasBeenSet = true; m_configurations = value; }

    /**
     * <p>Applies only to Amazon EMR releases 4.x and later. The list of Configurations
     * supplied to the EMR cluster.</p>
     */
    inline void SetConfigurations(Aws::Vector<Configuration>&& value) { m_configurationsHasBeenSet = true; m_configurations = std::move(value); }

    /**
     * <p>Applies only to Amazon EMR releases 4.x and later. The list of Configurations
     * supplied to the EMR cluster.</p>
     */
    inline Cluster& WithConfigurations(const Aws::Vector<Configuration>& value) { SetConfigurations(value); return *this;}

    /**
     * <p>Applies only to Amazon EMR releases 4.x and later. The list of Configurations
     * supplied to the EMR cluster.</p>
     */
    inline Cluster& WithConfigurations(Aws::Vector<Configuration>&& value) { SetConfigurations(std::move(value)); return *this;}

    /**
     * <p>Applies only to Amazon EMR releases 4.x and later. The list of Configurations
     * supplied to the EMR cluster.</p>
     */
    inline Cluster& AddConfigurations(const Configuration& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(value); return *this; }

    /**
     * <p>Applies only to Amazon EMR releases 4.x and later. The list of Configurations
     * supplied to the EMR cluster.</p>
     */
    inline Cluster& AddConfigurations(Configuration&& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the security configuration applied to the cluster.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const{ return m_securityConfiguration; }

    /**
     * <p>The name of the security configuration applied to the cluster.</p>
     */
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }

    /**
     * <p>The name of the security configuration applied to the cluster.</p>
     */
    inline void SetSecurityConfiguration(const Aws::String& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = value; }

    /**
     * <p>The name of the security configuration applied to the cluster.</p>
     */
    inline void SetSecurityConfiguration(Aws::String&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::move(value); }

    /**
     * <p>The name of the security configuration applied to the cluster.</p>
     */
    inline void SetSecurityConfiguration(const char* value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration.assign(value); }

    /**
     * <p>The name of the security configuration applied to the cluster.</p>
     */
    inline Cluster& WithSecurityConfiguration(const Aws::String& value) { SetSecurityConfiguration(value); return *this;}

    /**
     * <p>The name of the security configuration applied to the cluster.</p>
     */
    inline Cluster& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(std::move(value)); return *this;}

    /**
     * <p>The name of the security configuration applied to the cluster.</p>
     */
    inline Cluster& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}


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
    inline Cluster& WithAutoScalingRole(const Aws::String& value) { SetAutoScalingRole(value); return *this;}

    /**
     * <p>An IAM role for automatic scaling policies. The default role is
     * <code>EMR_AutoScaling_DefaultRole</code>. The IAM role provides permissions that
     * the automatic scaling feature requires to launch and terminate EC2 instances in
     * an instance group.</p>
     */
    inline Cluster& WithAutoScalingRole(Aws::String&& value) { SetAutoScalingRole(std::move(value)); return *this;}

    /**
     * <p>An IAM role for automatic scaling policies. The default role is
     * <code>EMR_AutoScaling_DefaultRole</code>. The IAM role provides permissions that
     * the automatic scaling feature requires to launch and terminate EC2 instances in
     * an instance group.</p>
     */
    inline Cluster& WithAutoScalingRole(const char* value) { SetAutoScalingRole(value); return *this;}


    /**
     * <p>The way that individual Amazon EC2 instances terminate when an automatic
     * scale-in activity occurs or an instance group is resized.
     * <code>TERMINATE_AT_INSTANCE_HOUR</code> indicates that Amazon EMR terminates
     * nodes at the instance-hour boundary, regardless of when the request to terminate
     * the instance was submitted. This option is only available with Amazon EMR 5.1.0
     * and later and is the default for clusters created using that version.
     * <code>TERMINATE_AT_TASK_COMPLETION</code> indicates that Amazon EMR adds nodes
     * to a deny list and drains tasks from nodes before terminating the Amazon EC2
     * instances, regardless of the instance-hour boundary. With either behavior,
     * Amazon EMR removes the least active nodes first and blocks instance termination
     * if it could lead to HDFS corruption. <code>TERMINATE_AT_TASK_COMPLETION</code>
     * is available only in Amazon EMR version 4.1.0 and later, and is the default for
     * versions of Amazon EMR earlier than 5.1.0.</p>
     */
    inline const ScaleDownBehavior& GetScaleDownBehavior() const{ return m_scaleDownBehavior; }

    /**
     * <p>The way that individual Amazon EC2 instances terminate when an automatic
     * scale-in activity occurs or an instance group is resized.
     * <code>TERMINATE_AT_INSTANCE_HOUR</code> indicates that Amazon EMR terminates
     * nodes at the instance-hour boundary, regardless of when the request to terminate
     * the instance was submitted. This option is only available with Amazon EMR 5.1.0
     * and later and is the default for clusters created using that version.
     * <code>TERMINATE_AT_TASK_COMPLETION</code> indicates that Amazon EMR adds nodes
     * to a deny list and drains tasks from nodes before terminating the Amazon EC2
     * instances, regardless of the instance-hour boundary. With either behavior,
     * Amazon EMR removes the least active nodes first and blocks instance termination
     * if it could lead to HDFS corruption. <code>TERMINATE_AT_TASK_COMPLETION</code>
     * is available only in Amazon EMR version 4.1.0 and later, and is the default for
     * versions of Amazon EMR earlier than 5.1.0.</p>
     */
    inline bool ScaleDownBehaviorHasBeenSet() const { return m_scaleDownBehaviorHasBeenSet; }

    /**
     * <p>The way that individual Amazon EC2 instances terminate when an automatic
     * scale-in activity occurs or an instance group is resized.
     * <code>TERMINATE_AT_INSTANCE_HOUR</code> indicates that Amazon EMR terminates
     * nodes at the instance-hour boundary, regardless of when the request to terminate
     * the instance was submitted. This option is only available with Amazon EMR 5.1.0
     * and later and is the default for clusters created using that version.
     * <code>TERMINATE_AT_TASK_COMPLETION</code> indicates that Amazon EMR adds nodes
     * to a deny list and drains tasks from nodes before terminating the Amazon EC2
     * instances, regardless of the instance-hour boundary. With either behavior,
     * Amazon EMR removes the least active nodes first and blocks instance termination
     * if it could lead to HDFS corruption. <code>TERMINATE_AT_TASK_COMPLETION</code>
     * is available only in Amazon EMR version 4.1.0 and later, and is the default for
     * versions of Amazon EMR earlier than 5.1.0.</p>
     */
    inline void SetScaleDownBehavior(const ScaleDownBehavior& value) { m_scaleDownBehaviorHasBeenSet = true; m_scaleDownBehavior = value; }

    /**
     * <p>The way that individual Amazon EC2 instances terminate when an automatic
     * scale-in activity occurs or an instance group is resized.
     * <code>TERMINATE_AT_INSTANCE_HOUR</code> indicates that Amazon EMR terminates
     * nodes at the instance-hour boundary, regardless of when the request to terminate
     * the instance was submitted. This option is only available with Amazon EMR 5.1.0
     * and later and is the default for clusters created using that version.
     * <code>TERMINATE_AT_TASK_COMPLETION</code> indicates that Amazon EMR adds nodes
     * to a deny list and drains tasks from nodes before terminating the Amazon EC2
     * instances, regardless of the instance-hour boundary. With either behavior,
     * Amazon EMR removes the least active nodes first and blocks instance termination
     * if it could lead to HDFS corruption. <code>TERMINATE_AT_TASK_COMPLETION</code>
     * is available only in Amazon EMR version 4.1.0 and later, and is the default for
     * versions of Amazon EMR earlier than 5.1.0.</p>
     */
    inline void SetScaleDownBehavior(ScaleDownBehavior&& value) { m_scaleDownBehaviorHasBeenSet = true; m_scaleDownBehavior = std::move(value); }

    /**
     * <p>The way that individual Amazon EC2 instances terminate when an automatic
     * scale-in activity occurs or an instance group is resized.
     * <code>TERMINATE_AT_INSTANCE_HOUR</code> indicates that Amazon EMR terminates
     * nodes at the instance-hour boundary, regardless of when the request to terminate
     * the instance was submitted. This option is only available with Amazon EMR 5.1.0
     * and later and is the default for clusters created using that version.
     * <code>TERMINATE_AT_TASK_COMPLETION</code> indicates that Amazon EMR adds nodes
     * to a deny list and drains tasks from nodes before terminating the Amazon EC2
     * instances, regardless of the instance-hour boundary. With either behavior,
     * Amazon EMR removes the least active nodes first and blocks instance termination
     * if it could lead to HDFS corruption. <code>TERMINATE_AT_TASK_COMPLETION</code>
     * is available only in Amazon EMR version 4.1.0 and later, and is the default for
     * versions of Amazon EMR earlier than 5.1.0.</p>
     */
    inline Cluster& WithScaleDownBehavior(const ScaleDownBehavior& value) { SetScaleDownBehavior(value); return *this;}

    /**
     * <p>The way that individual Amazon EC2 instances terminate when an automatic
     * scale-in activity occurs or an instance group is resized.
     * <code>TERMINATE_AT_INSTANCE_HOUR</code> indicates that Amazon EMR terminates
     * nodes at the instance-hour boundary, regardless of when the request to terminate
     * the instance was submitted. This option is only available with Amazon EMR 5.1.0
     * and later and is the default for clusters created using that version.
     * <code>TERMINATE_AT_TASK_COMPLETION</code> indicates that Amazon EMR adds nodes
     * to a deny list and drains tasks from nodes before terminating the Amazon EC2
     * instances, regardless of the instance-hour boundary. With either behavior,
     * Amazon EMR removes the least active nodes first and blocks instance termination
     * if it could lead to HDFS corruption. <code>TERMINATE_AT_TASK_COMPLETION</code>
     * is available only in Amazon EMR version 4.1.0 and later, and is the default for
     * versions of Amazon EMR earlier than 5.1.0.</p>
     */
    inline Cluster& WithScaleDownBehavior(ScaleDownBehavior&& value) { SetScaleDownBehavior(std::move(value)); return *this;}


    /**
     * <p>Available only in Amazon EMR version 5.7.0 and later. The ID of a custom
     * Amazon EBS-backed Linux AMI if the cluster uses a custom AMI.</p>
     */
    inline const Aws::String& GetCustomAmiId() const{ return m_customAmiId; }

    /**
     * <p>Available only in Amazon EMR version 5.7.0 and later. The ID of a custom
     * Amazon EBS-backed Linux AMI if the cluster uses a custom AMI.</p>
     */
    inline bool CustomAmiIdHasBeenSet() const { return m_customAmiIdHasBeenSet; }

    /**
     * <p>Available only in Amazon EMR version 5.7.0 and later. The ID of a custom
     * Amazon EBS-backed Linux AMI if the cluster uses a custom AMI.</p>
     */
    inline void SetCustomAmiId(const Aws::String& value) { m_customAmiIdHasBeenSet = true; m_customAmiId = value; }

    /**
     * <p>Available only in Amazon EMR version 5.7.0 and later. The ID of a custom
     * Amazon EBS-backed Linux AMI if the cluster uses a custom AMI.</p>
     */
    inline void SetCustomAmiId(Aws::String&& value) { m_customAmiIdHasBeenSet = true; m_customAmiId = std::move(value); }

    /**
     * <p>Available only in Amazon EMR version 5.7.0 and later. The ID of a custom
     * Amazon EBS-backed Linux AMI if the cluster uses a custom AMI.</p>
     */
    inline void SetCustomAmiId(const char* value) { m_customAmiIdHasBeenSet = true; m_customAmiId.assign(value); }

    /**
     * <p>Available only in Amazon EMR version 5.7.0 and later. The ID of a custom
     * Amazon EBS-backed Linux AMI if the cluster uses a custom AMI.</p>
     */
    inline Cluster& WithCustomAmiId(const Aws::String& value) { SetCustomAmiId(value); return *this;}

    /**
     * <p>Available only in Amazon EMR version 5.7.0 and later. The ID of a custom
     * Amazon EBS-backed Linux AMI if the cluster uses a custom AMI.</p>
     */
    inline Cluster& WithCustomAmiId(Aws::String&& value) { SetCustomAmiId(std::move(value)); return *this;}

    /**
     * <p>Available only in Amazon EMR version 5.7.0 and later. The ID of a custom
     * Amazon EBS-backed Linux AMI if the cluster uses a custom AMI.</p>
     */
    inline Cluster& WithCustomAmiId(const char* value) { SetCustomAmiId(value); return *this;}


    /**
     * <p>The size, in GiB, of the Amazon EBS root device volume of the Linux AMI that
     * is used for each EC2 instance. Available in Amazon EMR version 4.x and
     * later.</p>
     */
    inline int GetEbsRootVolumeSize() const{ return m_ebsRootVolumeSize; }

    /**
     * <p>The size, in GiB, of the Amazon EBS root device volume of the Linux AMI that
     * is used for each EC2 instance. Available in Amazon EMR version 4.x and
     * later.</p>
     */
    inline bool EbsRootVolumeSizeHasBeenSet() const { return m_ebsRootVolumeSizeHasBeenSet; }

    /**
     * <p>The size, in GiB, of the Amazon EBS root device volume of the Linux AMI that
     * is used for each EC2 instance. Available in Amazon EMR version 4.x and
     * later.</p>
     */
    inline void SetEbsRootVolumeSize(int value) { m_ebsRootVolumeSizeHasBeenSet = true; m_ebsRootVolumeSize = value; }

    /**
     * <p>The size, in GiB, of the Amazon EBS root device volume of the Linux AMI that
     * is used for each EC2 instance. Available in Amazon EMR version 4.x and
     * later.</p>
     */
    inline Cluster& WithEbsRootVolumeSize(int value) { SetEbsRootVolumeSize(value); return *this;}


    /**
     * <p>Applies only when <code>CustomAmiID</code> is used. Specifies the type of
     * updates that are applied from the Amazon Linux AMI package repositories when an
     * instance boots using the AMI.</p>
     */
    inline const RepoUpgradeOnBoot& GetRepoUpgradeOnBoot() const{ return m_repoUpgradeOnBoot; }

    /**
     * <p>Applies only when <code>CustomAmiID</code> is used. Specifies the type of
     * updates that are applied from the Amazon Linux AMI package repositories when an
     * instance boots using the AMI.</p>
     */
    inline bool RepoUpgradeOnBootHasBeenSet() const { return m_repoUpgradeOnBootHasBeenSet; }

    /**
     * <p>Applies only when <code>CustomAmiID</code> is used. Specifies the type of
     * updates that are applied from the Amazon Linux AMI package repositories when an
     * instance boots using the AMI.</p>
     */
    inline void SetRepoUpgradeOnBoot(const RepoUpgradeOnBoot& value) { m_repoUpgradeOnBootHasBeenSet = true; m_repoUpgradeOnBoot = value; }

    /**
     * <p>Applies only when <code>CustomAmiID</code> is used. Specifies the type of
     * updates that are applied from the Amazon Linux AMI package repositories when an
     * instance boots using the AMI.</p>
     */
    inline void SetRepoUpgradeOnBoot(RepoUpgradeOnBoot&& value) { m_repoUpgradeOnBootHasBeenSet = true; m_repoUpgradeOnBoot = std::move(value); }

    /**
     * <p>Applies only when <code>CustomAmiID</code> is used. Specifies the type of
     * updates that are applied from the Amazon Linux AMI package repositories when an
     * instance boots using the AMI.</p>
     */
    inline Cluster& WithRepoUpgradeOnBoot(const RepoUpgradeOnBoot& value) { SetRepoUpgradeOnBoot(value); return *this;}

    /**
     * <p>Applies only when <code>CustomAmiID</code> is used. Specifies the type of
     * updates that are applied from the Amazon Linux AMI package repositories when an
     * instance boots using the AMI.</p>
     */
    inline Cluster& WithRepoUpgradeOnBoot(RepoUpgradeOnBoot&& value) { SetRepoUpgradeOnBoot(std::move(value)); return *this;}


    /**
     * <p>Attributes for Kerberos configuration when Kerberos authentication is enabled
     * using a security configuration. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-kerberos.html">Use
     * Kerberos Authentication</a> in the <i>Amazon EMR Management Guide</i>.</p>
     */
    inline const KerberosAttributes& GetKerberosAttributes() const{ return m_kerberosAttributes; }

    /**
     * <p>Attributes for Kerberos configuration when Kerberos authentication is enabled
     * using a security configuration. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-kerberos.html">Use
     * Kerberos Authentication</a> in the <i>Amazon EMR Management Guide</i>.</p>
     */
    inline bool KerberosAttributesHasBeenSet() const { return m_kerberosAttributesHasBeenSet; }

    /**
     * <p>Attributes for Kerberos configuration when Kerberos authentication is enabled
     * using a security configuration. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-kerberos.html">Use
     * Kerberos Authentication</a> in the <i>Amazon EMR Management Guide</i>.</p>
     */
    inline void SetKerberosAttributes(const KerberosAttributes& value) { m_kerberosAttributesHasBeenSet = true; m_kerberosAttributes = value; }

    /**
     * <p>Attributes for Kerberos configuration when Kerberos authentication is enabled
     * using a security configuration. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-kerberos.html">Use
     * Kerberos Authentication</a> in the <i>Amazon EMR Management Guide</i>.</p>
     */
    inline void SetKerberosAttributes(KerberosAttributes&& value) { m_kerberosAttributesHasBeenSet = true; m_kerberosAttributes = std::move(value); }

    /**
     * <p>Attributes for Kerberos configuration when Kerberos authentication is enabled
     * using a security configuration. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-kerberos.html">Use
     * Kerberos Authentication</a> in the <i>Amazon EMR Management Guide</i>.</p>
     */
    inline Cluster& WithKerberosAttributes(const KerberosAttributes& value) { SetKerberosAttributes(value); return *this;}

    /**
     * <p>Attributes for Kerberos configuration when Kerberos authentication is enabled
     * using a security configuration. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-kerberos.html">Use
     * Kerberos Authentication</a> in the <i>Amazon EMR Management Guide</i>.</p>
     */
    inline Cluster& WithKerberosAttributes(KerberosAttributes&& value) { SetKerberosAttributes(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline Cluster& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline Cluster& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline Cluster& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the Outpost where the cluster is launched.
     * </p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Outpost where the cluster is launched.
     * </p>
     */
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Outpost where the cluster is launched.
     * </p>
     */
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Outpost where the cluster is launched.
     * </p>
     */
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the Outpost where the cluster is launched.
     * </p>
     */
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the Outpost where the cluster is launched.
     * </p>
     */
    inline Cluster& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the Outpost where the cluster is launched.
     * </p>
     */
    inline Cluster& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the Outpost where the cluster is launched.
     * </p>
     */
    inline Cluster& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}


    /**
     * <p>Specifies the number of steps that can be executed concurrently.</p>
     */
    inline int GetStepConcurrencyLevel() const{ return m_stepConcurrencyLevel; }

    /**
     * <p>Specifies the number of steps that can be executed concurrently.</p>
     */
    inline bool StepConcurrencyLevelHasBeenSet() const { return m_stepConcurrencyLevelHasBeenSet; }

    /**
     * <p>Specifies the number of steps that can be executed concurrently.</p>
     */
    inline void SetStepConcurrencyLevel(int value) { m_stepConcurrencyLevelHasBeenSet = true; m_stepConcurrencyLevel = value; }

    /**
     * <p>Specifies the number of steps that can be executed concurrently.</p>
     */
    inline Cluster& WithStepConcurrencyLevel(int value) { SetStepConcurrencyLevel(value); return *this;}


    /**
     * <p>Placement group configured for an Amazon EMR cluster.</p>
     */
    inline const Aws::Vector<PlacementGroupConfig>& GetPlacementGroups() const{ return m_placementGroups; }

    /**
     * <p>Placement group configured for an Amazon EMR cluster.</p>
     */
    inline bool PlacementGroupsHasBeenSet() const { return m_placementGroupsHasBeenSet; }

    /**
     * <p>Placement group configured for an Amazon EMR cluster.</p>
     */
    inline void SetPlacementGroups(const Aws::Vector<PlacementGroupConfig>& value) { m_placementGroupsHasBeenSet = true; m_placementGroups = value; }

    /**
     * <p>Placement group configured for an Amazon EMR cluster.</p>
     */
    inline void SetPlacementGroups(Aws::Vector<PlacementGroupConfig>&& value) { m_placementGroupsHasBeenSet = true; m_placementGroups = std::move(value); }

    /**
     * <p>Placement group configured for an Amazon EMR cluster.</p>
     */
    inline Cluster& WithPlacementGroups(const Aws::Vector<PlacementGroupConfig>& value) { SetPlacementGroups(value); return *this;}

    /**
     * <p>Placement group configured for an Amazon EMR cluster.</p>
     */
    inline Cluster& WithPlacementGroups(Aws::Vector<PlacementGroupConfig>&& value) { SetPlacementGroups(std::move(value)); return *this;}

    /**
     * <p>Placement group configured for an Amazon EMR cluster.</p>
     */
    inline Cluster& AddPlacementGroups(const PlacementGroupConfig& value) { m_placementGroupsHasBeenSet = true; m_placementGroups.push_back(value); return *this; }

    /**
     * <p>Placement group configured for an Amazon EMR cluster.</p>
     */
    inline Cluster& AddPlacementGroups(PlacementGroupConfig&& value) { m_placementGroupsHasBeenSet = true; m_placementGroups.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ClusterStatus m_status;
    bool m_statusHasBeenSet;

    Ec2InstanceAttributes m_ec2InstanceAttributes;
    bool m_ec2InstanceAttributesHasBeenSet;

    InstanceCollectionType m_instanceCollectionType;
    bool m_instanceCollectionTypeHasBeenSet;

    Aws::String m_logUri;
    bool m_logUriHasBeenSet;

    Aws::String m_logEncryptionKmsKeyId;
    bool m_logEncryptionKmsKeyIdHasBeenSet;

    Aws::String m_requestedAmiVersion;
    bool m_requestedAmiVersionHasBeenSet;

    Aws::String m_runningAmiVersion;
    bool m_runningAmiVersionHasBeenSet;

    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet;

    bool m_autoTerminate;
    bool m_autoTerminateHasBeenSet;

    bool m_terminationProtected;
    bool m_terminationProtectedHasBeenSet;

    bool m_visibleToAllUsers;
    bool m_visibleToAllUsersHasBeenSet;

    Aws::Vector<Application> m_applications;
    bool m_applicationsHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet;

    int m_normalizedInstanceHours;
    bool m_normalizedInstanceHoursHasBeenSet;

    Aws::String m_masterPublicDnsName;
    bool m_masterPublicDnsNameHasBeenSet;

    Aws::Vector<Configuration> m_configurations;
    bool m_configurationsHasBeenSet;

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

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet;

    int m_stepConcurrencyLevel;
    bool m_stepConcurrencyLevelHasBeenSet;

    Aws::Vector<PlacementGroupConfig> m_placementGroups;
    bool m_placementGroupsHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
