/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/OpsCenterIntegrationConfig.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Information about updating the integration status of an AWS service, such as
   * AWS Systems Manager, with DevOps Guru. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/UpdateServiceIntegrationConfig">AWS
   * API Reference</a></p>
   */
  class AWS_DEVOPSGURU_API UpdateServiceIntegrationConfig
  {
  public:
    UpdateServiceIntegrationConfig();
    UpdateServiceIntegrationConfig(Aws::Utils::Json::JsonView jsonValue);
    UpdateServiceIntegrationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const OpsCenterIntegrationConfig& GetOpsCenter() const{ return m_opsCenter; }

    
    inline bool OpsCenterHasBeenSet() const { return m_opsCenterHasBeenSet; }

    
    inline void SetOpsCenter(const OpsCenterIntegrationConfig& value) { m_opsCenterHasBeenSet = true; m_opsCenter = value; }

    
    inline void SetOpsCenter(OpsCenterIntegrationConfig&& value) { m_opsCenterHasBeenSet = true; m_opsCenter = std::move(value); }

    
    inline UpdateServiceIntegrationConfig& WithOpsCenter(const OpsCenterIntegrationConfig& value) { SetOpsCenter(value); return *this;}

    
    inline UpdateServiceIntegrationConfig& WithOpsCenter(OpsCenterIntegrationConfig&& value) { SetOpsCenter(std::move(value)); return *this;}

  private:

    OpsCenterIntegrationConfig m_opsCenter;
    bool m_opsCenterHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
