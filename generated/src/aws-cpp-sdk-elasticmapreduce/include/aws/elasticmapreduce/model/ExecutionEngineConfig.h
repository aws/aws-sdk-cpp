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
   * notebook execution, for example, an Amazon EMR cluster.</p><p><h3>See Also:</h3>
   * <a
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


    ///@{
    /**
     * <p>The unique identifier of the execution engine. For an Amazon EMR cluster,
     * this is the cluster ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ExecutionEngineConfig& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ExecutionEngineConfig& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ExecutionEngineConfig& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of execution engine. A value of <code>EMR</code> specifies an Amazon
     * EMR cluster.</p>
     */
    inline const ExecutionEngineType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ExecutionEngineType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ExecutionEngineType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ExecutionEngineConfig& WithType(const ExecutionEngineType& value) { SetType(value); return *this;}
    inline ExecutionEngineConfig& WithType(ExecutionEngineType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional unique ID of an Amazon EC2 security group to associate with the
     * master instance of the Amazon EMR cluster for this notebook execution. For more
     * information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-managed-notebooks-security-groups.html">Specifying
     * Amazon EC2 Security Groups for Amazon EMR Notebooks</a> in the <i>EMR Management
     * Guide</i>.</p>
     */
    inline const Aws::String& GetMasterInstanceSecurityGroupId() const{ return m_masterInstanceSecurityGroupId; }
    inline bool MasterInstanceSecurityGroupIdHasBeenSet() const { return m_masterInstanceSecurityGroupIdHasBeenSet; }
    inline void SetMasterInstanceSecurityGroupId(const Aws::String& value) { m_masterInstanceSecurityGroupIdHasBeenSet = true; m_masterInstanceSecurityGroupId = value; }
    inline void SetMasterInstanceSecurityGroupId(Aws::String&& value) { m_masterInstanceSecurityGroupIdHasBeenSet = true; m_masterInstanceSecurityGroupId = std::move(value); }
    inline void SetMasterInstanceSecurityGroupId(const char* value) { m_masterInstanceSecurityGroupIdHasBeenSet = true; m_masterInstanceSecurityGroupId.assign(value); }
    inline ExecutionEngineConfig& WithMasterInstanceSecurityGroupId(const Aws::String& value) { SetMasterInstanceSecurityGroupId(value); return *this;}
    inline ExecutionEngineConfig& WithMasterInstanceSecurityGroupId(Aws::String&& value) { SetMasterInstanceSecurityGroupId(std::move(value)); return *this;}
    inline ExecutionEngineConfig& WithMasterInstanceSecurityGroupId(const char* value) { SetMasterInstanceSecurityGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution role ARN required for the notebook execution.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }
    inline ExecutionEngineConfig& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline ExecutionEngineConfig& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline ExecutionEngineConfig& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ExecutionEngineType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_masterInstanceSecurityGroupId;
    bool m_masterInstanceSecurityGroupIdHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
