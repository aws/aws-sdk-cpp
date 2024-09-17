/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agent/model/FlowDefinition.h>
#include <aws/bedrock-agent/model/FlowStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace BedrockAgent
{
namespace Model
{
  class CreateFlowVersionResult
  {
  public:
    AWS_BEDROCKAGENT_API CreateFlowVersionResult();
    AWS_BEDROCKAGENT_API CreateFlowVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API CreateFlowVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the flow.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateFlowVersionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateFlowVersionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateFlowVersionResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the flow was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline CreateFlowVersionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CreateFlowVersionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key that the flow is encrypted with.</p>
     */
    inline const Aws::String& GetCustomerEncryptionKeyArn() const{ return m_customerEncryptionKeyArn; }
    inline void SetCustomerEncryptionKeyArn(const Aws::String& value) { m_customerEncryptionKeyArn = value; }
    inline void SetCustomerEncryptionKeyArn(Aws::String&& value) { m_customerEncryptionKeyArn = std::move(value); }
    inline void SetCustomerEncryptionKeyArn(const char* value) { m_customerEncryptionKeyArn.assign(value); }
    inline CreateFlowVersionResult& WithCustomerEncryptionKeyArn(const Aws::String& value) { SetCustomerEncryptionKeyArn(value); return *this;}
    inline CreateFlowVersionResult& WithCustomerEncryptionKeyArn(Aws::String&& value) { SetCustomerEncryptionKeyArn(std::move(value)); return *this;}
    inline CreateFlowVersionResult& WithCustomerEncryptionKeyArn(const char* value) { SetCustomerEncryptionKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A definition of the nodes and connections in the flow.</p>
     */
    inline const FlowDefinition& GetDefinition() const{ return m_definition; }
    inline void SetDefinition(const FlowDefinition& value) { m_definition = value; }
    inline void SetDefinition(FlowDefinition&& value) { m_definition = std::move(value); }
    inline CreateFlowVersionResult& WithDefinition(const FlowDefinition& value) { SetDefinition(value); return *this;}
    inline CreateFlowVersionResult& WithDefinition(FlowDefinition&& value) { SetDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateFlowVersionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateFlowVersionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateFlowVersionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service role with permissions to create
     * a flow. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-permissions.html">Create
     * a service role for flows in Amazon Bedrock</a> in the Amazon Bedrock User
     * Guide.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArn.assign(value); }
    inline CreateFlowVersionResult& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline CreateFlowVersionResult& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline CreateFlowVersionResult& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the flow.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateFlowVersionResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateFlowVersionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateFlowVersionResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the version.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateFlowVersionResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateFlowVersionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateFlowVersionResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the flow.</p>
     */
    inline const FlowStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const FlowStatus& value) { m_status = value; }
    inline void SetStatus(FlowStatus&& value) { m_status = std::move(value); }
    inline CreateFlowVersionResult& WithStatus(const FlowStatus& value) { SetStatus(value); return *this;}
    inline CreateFlowVersionResult& WithStatus(FlowStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the flow that was created. Versions are numbered
     * incrementally, starting from 1.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline void SetVersion(const Aws::String& value) { m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_version.assign(value); }
    inline CreateFlowVersionResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline CreateFlowVersionResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline CreateFlowVersionResult& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateFlowVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateFlowVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateFlowVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_customerEncryptionKeyArn;

    FlowDefinition m_definition;

    Aws::String m_description;

    Aws::String m_executionRoleArn;

    Aws::String m_id;

    Aws::String m_name;

    FlowStatus m_status;

    Aws::String m_version;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
