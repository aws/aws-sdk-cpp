﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/proton/model/RepositoryBranchInput.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class AWS_PROTON_API UpdateAccountSettingsRequest : public ProtonRequest
  {
  public:
    UpdateAccountSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccountSettings"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The repository that you provide with pull request provisioning.</p>
     *  <p>Provisioning by pull request is currently in feature preview and
     * is only usable with Terraform based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline const RepositoryBranchInput& GetPipelineProvisioningRepository() const{ return m_pipelineProvisioningRepository; }

    /**
     * <p>The repository that you provide with pull request provisioning.</p>
     *  <p>Provisioning by pull request is currently in feature preview and
     * is only usable with Terraform based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline bool PipelineProvisioningRepositoryHasBeenSet() const { return m_pipelineProvisioningRepositoryHasBeenSet; }

    /**
     * <p>The repository that you provide with pull request provisioning.</p>
     *  <p>Provisioning by pull request is currently in feature preview and
     * is only usable with Terraform based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline void SetPipelineProvisioningRepository(const RepositoryBranchInput& value) { m_pipelineProvisioningRepositoryHasBeenSet = true; m_pipelineProvisioningRepository = value; }

    /**
     * <p>The repository that you provide with pull request provisioning.</p>
     *  <p>Provisioning by pull request is currently in feature preview and
     * is only usable with Terraform based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline void SetPipelineProvisioningRepository(RepositoryBranchInput&& value) { m_pipelineProvisioningRepositoryHasBeenSet = true; m_pipelineProvisioningRepository = std::move(value); }

    /**
     * <p>The repository that you provide with pull request provisioning.</p>
     *  <p>Provisioning by pull request is currently in feature preview and
     * is only usable with Terraform based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline UpdateAccountSettingsRequest& WithPipelineProvisioningRepository(const RepositoryBranchInput& value) { SetPipelineProvisioningRepository(value); return *this;}

    /**
     * <p>The repository that you provide with pull request provisioning.</p>
     *  <p>Provisioning by pull request is currently in feature preview and
     * is only usable with Terraform based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline UpdateAccountSettingsRequest& WithPipelineProvisioningRepository(RepositoryBranchInput&& value) { SetPipelineProvisioningRepository(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Proton pipeline service role.</p>
     *  <p>Provisioning by pull request is currently in feature preview and
     * is only usable with Terraform based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline const Aws::String& GetPipelineServiceRoleArn() const{ return m_pipelineServiceRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton pipeline service role.</p>
     *  <p>Provisioning by pull request is currently in feature preview and
     * is only usable with Terraform based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline bool PipelineServiceRoleArnHasBeenSet() const { return m_pipelineServiceRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton pipeline service role.</p>
     *  <p>Provisioning by pull request is currently in feature preview and
     * is only usable with Terraform based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline void SetPipelineServiceRoleArn(const Aws::String& value) { m_pipelineServiceRoleArnHasBeenSet = true; m_pipelineServiceRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton pipeline service role.</p>
     *  <p>Provisioning by pull request is currently in feature preview and
     * is only usable with Terraform based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline void SetPipelineServiceRoleArn(Aws::String&& value) { m_pipelineServiceRoleArnHasBeenSet = true; m_pipelineServiceRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton pipeline service role.</p>
     *  <p>Provisioning by pull request is currently in feature preview and
     * is only usable with Terraform based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline void SetPipelineServiceRoleArn(const char* value) { m_pipelineServiceRoleArnHasBeenSet = true; m_pipelineServiceRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton pipeline service role.</p>
     *  <p>Provisioning by pull request is currently in feature preview and
     * is only usable with Terraform based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline UpdateAccountSettingsRequest& WithPipelineServiceRoleArn(const Aws::String& value) { SetPipelineServiceRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton pipeline service role.</p>
     *  <p>Provisioning by pull request is currently in feature preview and
     * is only usable with Terraform based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline UpdateAccountSettingsRequest& WithPipelineServiceRoleArn(Aws::String&& value) { SetPipelineServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton pipeline service role.</p>
     *  <p>Provisioning by pull request is currently in feature preview and
     * is only usable with Terraform based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline UpdateAccountSettingsRequest& WithPipelineServiceRoleArn(const char* value) { SetPipelineServiceRoleArn(value); return *this;}

  private:

    RepositoryBranchInput m_pipelineProvisioningRepository;
    bool m_pipelineProvisioningRepositoryHasBeenSet;

    Aws::String m_pipelineServiceRoleArn;
    bool m_pipelineServiceRoleArnHasBeenSet;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
