/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/devops-guru/model/UpdateServiceIntegrationConfig.h>
#include <utility>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class AWS_DEVOPSGURU_API UpdateServiceIntegrationRequest : public DevOpsGuruRequest
  {
  public:
    UpdateServiceIntegrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceIntegration"; }

    Aws::String SerializePayload() const override;


    
    inline const UpdateServiceIntegrationConfig& GetServiceIntegration() const{ return m_serviceIntegration; }

    
    inline bool ServiceIntegrationHasBeenSet() const { return m_serviceIntegrationHasBeenSet; }

    
    inline void SetServiceIntegration(const UpdateServiceIntegrationConfig& value) { m_serviceIntegrationHasBeenSet = true; m_serviceIntegration = value; }

    
    inline void SetServiceIntegration(UpdateServiceIntegrationConfig&& value) { m_serviceIntegrationHasBeenSet = true; m_serviceIntegration = std::move(value); }

    
    inline UpdateServiceIntegrationRequest& WithServiceIntegration(const UpdateServiceIntegrationConfig& value) { SetServiceIntegration(value); return *this;}

    
    inline UpdateServiceIntegrationRequest& WithServiceIntegration(UpdateServiceIntegrationConfig&& value) { SetServiceIntegration(std::move(value)); return *this;}

  private:

    UpdateServiceIntegrationConfig m_serviceIntegration;
    bool m_serviceIntegrationHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
