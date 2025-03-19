/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/RedshiftServerlessAuthType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Specifies configurations for authentication to a Redshift Serverless. Specify
   * the type of authentication to use in the <code>type</code> field and include the
   * corresponding field. If you specify IAM authentication, you don't need to
   * include another field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/RedshiftServerlessAuthConfiguration">AWS
   * API Reference</a></p>
   */
  class RedshiftServerlessAuthConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API RedshiftServerlessAuthConfiguration() = default;
    AWS_BEDROCKAGENT_API RedshiftServerlessAuthConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API RedshiftServerlessAuthConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of authentication to use.</p>
     */
    inline RedshiftServerlessAuthType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RedshiftServerlessAuthType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RedshiftServerlessAuthConfiguration& WithType(RedshiftServerlessAuthType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an Secrets Manager secret for authentication.</p>
     */
    inline const Aws::String& GetUsernamePasswordSecretArn() const { return m_usernamePasswordSecretArn; }
    inline bool UsernamePasswordSecretArnHasBeenSet() const { return m_usernamePasswordSecretArnHasBeenSet; }
    template<typename UsernamePasswordSecretArnT = Aws::String>
    void SetUsernamePasswordSecretArn(UsernamePasswordSecretArnT&& value) { m_usernamePasswordSecretArnHasBeenSet = true; m_usernamePasswordSecretArn = std::forward<UsernamePasswordSecretArnT>(value); }
    template<typename UsernamePasswordSecretArnT = Aws::String>
    RedshiftServerlessAuthConfiguration& WithUsernamePasswordSecretArn(UsernamePasswordSecretArnT&& value) { SetUsernamePasswordSecretArn(std::forward<UsernamePasswordSecretArnT>(value)); return *this;}
    ///@}
  private:

    RedshiftServerlessAuthType m_type{RedshiftServerlessAuthType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_usernamePasswordSecretArn;
    bool m_usernamePasswordSecretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
