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
    AWS_EMR_API ExecutionEngineConfig() = default;
    AWS_EMR_API ExecutionEngineConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API ExecutionEngineConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the execution engine. For an Amazon EMR cluster,
     * this is the cluster ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ExecutionEngineConfig& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of execution engine. A value of <code>EMR</code> specifies an Amazon
     * EMR cluster.</p>
     */
    inline ExecutionEngineType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ExecutionEngineType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ExecutionEngineConfig& WithType(ExecutionEngineType value) { SetType(value); return *this;}
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
    inline const Aws::String& GetMasterInstanceSecurityGroupId() const { return m_masterInstanceSecurityGroupId; }
    inline bool MasterInstanceSecurityGroupIdHasBeenSet() const { return m_masterInstanceSecurityGroupIdHasBeenSet; }
    template<typename MasterInstanceSecurityGroupIdT = Aws::String>
    void SetMasterInstanceSecurityGroupId(MasterInstanceSecurityGroupIdT&& value) { m_masterInstanceSecurityGroupIdHasBeenSet = true; m_masterInstanceSecurityGroupId = std::forward<MasterInstanceSecurityGroupIdT>(value); }
    template<typename MasterInstanceSecurityGroupIdT = Aws::String>
    ExecutionEngineConfig& WithMasterInstanceSecurityGroupId(MasterInstanceSecurityGroupIdT&& value) { SetMasterInstanceSecurityGroupId(std::forward<MasterInstanceSecurityGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution role ARN required for the notebook execution.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    ExecutionEngineConfig& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ExecutionEngineType m_type{ExecutionEngineType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_masterInstanceSecurityGroupId;
    bool m_masterInstanceSecurityGroupIdHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
