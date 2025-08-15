/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/RedshiftServerlessAuthConfiguration.h>
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
   * <p>Contains configurations for authentication to Amazon Redshift
   * Serverless.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/RedshiftServerlessConfiguration">AWS
   * API Reference</a></p>
   */
  class RedshiftServerlessConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API RedshiftServerlessConfiguration() = default;
    AWS_BEDROCKAGENT_API RedshiftServerlessConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API RedshiftServerlessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Amazon Redshift workgroup.</p>
     */
    inline const Aws::String& GetWorkgroupArn() const { return m_workgroupArn; }
    inline bool WorkgroupArnHasBeenSet() const { return m_workgroupArnHasBeenSet; }
    template<typename WorkgroupArnT = Aws::String>
    void SetWorkgroupArn(WorkgroupArnT&& value) { m_workgroupArnHasBeenSet = true; m_workgroupArn = std::forward<WorkgroupArnT>(value); }
    template<typename WorkgroupArnT = Aws::String>
    RedshiftServerlessConfiguration& WithWorkgroupArn(WorkgroupArnT&& value) { SetWorkgroupArn(std::forward<WorkgroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configurations for authentication to an Amazon Redshift provisioned
     * data warehouse.</p>
     */
    inline const RedshiftServerlessAuthConfiguration& GetAuthConfiguration() const { return m_authConfiguration; }
    inline bool AuthConfigurationHasBeenSet() const { return m_authConfigurationHasBeenSet; }
    template<typename AuthConfigurationT = RedshiftServerlessAuthConfiguration>
    void SetAuthConfiguration(AuthConfigurationT&& value) { m_authConfigurationHasBeenSet = true; m_authConfiguration = std::forward<AuthConfigurationT>(value); }
    template<typename AuthConfigurationT = RedshiftServerlessAuthConfiguration>
    RedshiftServerlessConfiguration& WithAuthConfiguration(AuthConfigurationT&& value) { SetAuthConfiguration(std::forward<AuthConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workgroupArn;
    bool m_workgroupArnHasBeenSet = false;

    RedshiftServerlessAuthConfiguration m_authConfiguration;
    bool m_authConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
