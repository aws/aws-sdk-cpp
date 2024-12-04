/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/RedshiftServerlessAuthConfiguration.h>
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
   * <p>Contains configurations for authentication to Amazon Redshift
   * Serverless.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/RedshiftServerlessConfiguration">AWS
   * API Reference</a></p>
   */
  class RedshiftServerlessConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API RedshiftServerlessConfiguration();
    AWS_BEDROCKAGENT_API RedshiftServerlessConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API RedshiftServerlessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies configurations for authentication to an Amazon Redshift provisioned
     * data warehouse.</p>
     */
    inline const RedshiftServerlessAuthConfiguration& GetAuthConfiguration() const{ return m_authConfiguration; }
    inline bool AuthConfigurationHasBeenSet() const { return m_authConfigurationHasBeenSet; }
    inline void SetAuthConfiguration(const RedshiftServerlessAuthConfiguration& value) { m_authConfigurationHasBeenSet = true; m_authConfiguration = value; }
    inline void SetAuthConfiguration(RedshiftServerlessAuthConfiguration&& value) { m_authConfigurationHasBeenSet = true; m_authConfiguration = std::move(value); }
    inline RedshiftServerlessConfiguration& WithAuthConfiguration(const RedshiftServerlessAuthConfiguration& value) { SetAuthConfiguration(value); return *this;}
    inline RedshiftServerlessConfiguration& WithAuthConfiguration(RedshiftServerlessAuthConfiguration&& value) { SetAuthConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Redshift workgroup.</p>
     */
    inline const Aws::String& GetWorkgroupArn() const{ return m_workgroupArn; }
    inline bool WorkgroupArnHasBeenSet() const { return m_workgroupArnHasBeenSet; }
    inline void SetWorkgroupArn(const Aws::String& value) { m_workgroupArnHasBeenSet = true; m_workgroupArn = value; }
    inline void SetWorkgroupArn(Aws::String&& value) { m_workgroupArnHasBeenSet = true; m_workgroupArn = std::move(value); }
    inline void SetWorkgroupArn(const char* value) { m_workgroupArnHasBeenSet = true; m_workgroupArn.assign(value); }
    inline RedshiftServerlessConfiguration& WithWorkgroupArn(const Aws::String& value) { SetWorkgroupArn(value); return *this;}
    inline RedshiftServerlessConfiguration& WithWorkgroupArn(Aws::String&& value) { SetWorkgroupArn(std::move(value)); return *this;}
    inline RedshiftServerlessConfiguration& WithWorkgroupArn(const char* value) { SetWorkgroupArn(value); return *this;}
    ///@}
  private:

    RedshiftServerlessAuthConfiguration m_authConfiguration;
    bool m_authConfigurationHasBeenSet = false;

    Aws::String m_workgroupArn;
    bool m_workgroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
