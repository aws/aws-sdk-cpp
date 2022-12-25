/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/ExecutionEngineType.h>
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
   * <p>Specifies the execution engine (cluster) to run the notebook and perform the
   * notebook execution, for example, an EMR cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ExecutionEngineConfig">AWS
   * API Reference</a></p>
   */
  class ExecutionEngineConfig
  {
  public:
    AWS_EMR_API ExecutionEngineConfig();
    AWS_EMR_API ExecutionEngineConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API ExecutionEngineConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the execution engine. For an EMR cluster, this is
     * the cluster ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the execution engine. For an EMR cluster, this is
     * the cluster ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier of the execution engine. For an EMR cluster, this is
     * the cluster ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier of the execution engine. For an EMR cluster, this is
     * the cluster ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier of the execution engine. For an EMR cluster, this is
     * the cluster ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier of the execution engine. For an EMR cluster, this is
     * the cluster ID.</p>
     */
    inline ExecutionEngineConfig& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the execution engine. For an EMR cluster, this is
     * the cluster ID.</p>
     */
    inline ExecutionEngineConfig& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the execution engine. For an EMR cluster, this is
     * the cluster ID.</p>
     */
    inline ExecutionEngineConfig& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The type of execution engine. A value of <code>EMR</code> specifies an EMR
     * cluster.</p>
     */
    inline const ExecutionEngineType& GetType() const{ return m_type; }

    /**
     * <p>The type of execution engine. A value of <code>EMR</code> specifies an EMR
     * cluster.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of execution engine. A value of <code>EMR</code> specifies an EMR
     * cluster.</p>
     */
    inline void SetType(const ExecutionEngineType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of execution engine. A value of <code>EMR</code> specifies an EMR
     * cluster.</p>
     */
    inline void SetType(ExecutionEngineType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of execution engine. A value of <code>EMR</code> specifies an EMR
     * cluster.</p>
     */
    inline ExecutionEngineConfig& WithType(const ExecutionEngineType& value) { SetType(value); return *this;}

    /**
     * <p>The type of execution engine. A value of <code>EMR</code> specifies an EMR
     * cluster.</p>
     */
    inline ExecutionEngineConfig& WithType(ExecutionEngineType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>An optional unique ID of an EC2 security group to associate with the master
     * instance of the EMR cluster for this notebook execution. For more information
     * see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-managed-notebooks-security-groups.html">Specifying
     * EC2 Security Groups for EMR Notebooks</a> in the <i>EMR Management
     * Guide</i>.</p>
     */
    inline const Aws::String& GetMasterInstanceSecurityGroupId() const{ return m_masterInstanceSecurityGroupId; }

    /**
     * <p>An optional unique ID of an EC2 security group to associate with the master
     * instance of the EMR cluster for this notebook execution. For more information
     * see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-managed-notebooks-security-groups.html">Specifying
     * EC2 Security Groups for EMR Notebooks</a> in the <i>EMR Management
     * Guide</i>.</p>
     */
    inline bool MasterInstanceSecurityGroupIdHasBeenSet() const { return m_masterInstanceSecurityGroupIdHasBeenSet; }

    /**
     * <p>An optional unique ID of an EC2 security group to associate with the master
     * instance of the EMR cluster for this notebook execution. For more information
     * see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-managed-notebooks-security-groups.html">Specifying
     * EC2 Security Groups for EMR Notebooks</a> in the <i>EMR Management
     * Guide</i>.</p>
     */
    inline void SetMasterInstanceSecurityGroupId(const Aws::String& value) { m_masterInstanceSecurityGroupIdHasBeenSet = true; m_masterInstanceSecurityGroupId = value; }

    /**
     * <p>An optional unique ID of an EC2 security group to associate with the master
     * instance of the EMR cluster for this notebook execution. For more information
     * see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-managed-notebooks-security-groups.html">Specifying
     * EC2 Security Groups for EMR Notebooks</a> in the <i>EMR Management
     * Guide</i>.</p>
     */
    inline void SetMasterInstanceSecurityGroupId(Aws::String&& value) { m_masterInstanceSecurityGroupIdHasBeenSet = true; m_masterInstanceSecurityGroupId = std::move(value); }

    /**
     * <p>An optional unique ID of an EC2 security group to associate with the master
     * instance of the EMR cluster for this notebook execution. For more information
     * see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-managed-notebooks-security-groups.html">Specifying
     * EC2 Security Groups for EMR Notebooks</a> in the <i>EMR Management
     * Guide</i>.</p>
     */
    inline void SetMasterInstanceSecurityGroupId(const char* value) { m_masterInstanceSecurityGroupIdHasBeenSet = true; m_masterInstanceSecurityGroupId.assign(value); }

    /**
     * <p>An optional unique ID of an EC2 security group to associate with the master
     * instance of the EMR cluster for this notebook execution. For more information
     * see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-managed-notebooks-security-groups.html">Specifying
     * EC2 Security Groups for EMR Notebooks</a> in the <i>EMR Management
     * Guide</i>.</p>
     */
    inline ExecutionEngineConfig& WithMasterInstanceSecurityGroupId(const Aws::String& value) { SetMasterInstanceSecurityGroupId(value); return *this;}

    /**
     * <p>An optional unique ID of an EC2 security group to associate with the master
     * instance of the EMR cluster for this notebook execution. For more information
     * see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-managed-notebooks-security-groups.html">Specifying
     * EC2 Security Groups for EMR Notebooks</a> in the <i>EMR Management
     * Guide</i>.</p>
     */
    inline ExecutionEngineConfig& WithMasterInstanceSecurityGroupId(Aws::String&& value) { SetMasterInstanceSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>An optional unique ID of an EC2 security group to associate with the master
     * instance of the EMR cluster for this notebook execution. For more information
     * see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-managed-notebooks-security-groups.html">Specifying
     * EC2 Security Groups for EMR Notebooks</a> in the <i>EMR Management
     * Guide</i>.</p>
     */
    inline ExecutionEngineConfig& WithMasterInstanceSecurityGroupId(const char* value) { SetMasterInstanceSecurityGroupId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ExecutionEngineType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_masterInstanceSecurityGroupId;
    bool m_masterInstanceSecurityGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
