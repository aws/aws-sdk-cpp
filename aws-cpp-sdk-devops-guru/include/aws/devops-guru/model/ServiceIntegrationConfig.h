/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/OpsCenterIntegration.h>
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

  class AWS_DEVOPSGURU_API ServiceIntegrationConfig
  {
  public:
    ServiceIntegrationConfig();
    ServiceIntegrationConfig(Aws::Utils::Json::JsonView jsonValue);
    ServiceIntegrationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const OpsCenterIntegration& GetOpsCenter() const{ return m_opsCenter; }

    
    inline bool OpsCenterHasBeenSet() const { return m_opsCenterHasBeenSet; }

    
    inline void SetOpsCenter(const OpsCenterIntegration& value) { m_opsCenterHasBeenSet = true; m_opsCenter = value; }

    
    inline void SetOpsCenter(OpsCenterIntegration&& value) { m_opsCenterHasBeenSet = true; m_opsCenter = std::move(value); }

    
    inline ServiceIntegrationConfig& WithOpsCenter(const OpsCenterIntegration& value) { SetOpsCenter(value); return *this;}

    
    inline ServiceIntegrationConfig& WithOpsCenter(OpsCenterIntegration&& value) { SetOpsCenter(std::move(value)); return *this;}

  private:

    OpsCenterIntegration m_opsCenter;
    bool m_opsCenterHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
