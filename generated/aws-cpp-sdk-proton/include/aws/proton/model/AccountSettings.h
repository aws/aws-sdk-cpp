/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/RepositoryBranch.h>
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
namespace Proton
{
namespace Model
{

  /**
   * <p>The Proton pipeline service role and repository data.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/AccountSettings">AWS
   * API Reference</a></p>
   */
  class AWS_PROTON_API AccountSettings
  {
  public:
    AccountSettings();
    AccountSettings(Aws::Utils::Json::JsonView jsonValue);
    AccountSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The repository that you provide with pull request provisioning.</p>
     *  <p>Provisioning by pull request is currently in feature preview and
     * is only usable with Terraform based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline const RepositoryBranch& GetPipelineProvisioningRepository() const{ return m_pipelineProvisioningRepository; }

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
    inline void SetPipelineProvisioningRepository(const RepositoryBranch& value) { m_pipelineProvisioningRepositoryHasBeenSet = true; m_pipelineProvisioningRepository = value; }

    /**
     * <p>The repository that you provide with pull request provisioning.</p>
     *  <p>Provisioning by pull request is currently in feature preview and
     * is only usable with Terraform based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline void SetPipelineProvisioningRepository(RepositoryBranch&& value) { m_pipelineProvisioningRepositoryHasBeenSet = true; m_pipelineProvisioningRepository = std::move(value); }

    /**
     * <p>The repository that you provide with pull request provisioning.</p>
     *  <p>Provisioning by pull request is currently in feature preview and
     * is only usable with Terraform based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline AccountSettings& WithPipelineProvisioningRepository(const RepositoryBranch& value) { SetPipelineProvisioningRepository(value); return *this;}

    /**
     * <p>The repository that you provide with pull request provisioning.</p>
     *  <p>Provisioning by pull request is currently in feature preview and
     * is only usable with Terraform based Proton Templates. To learn more about <a
     * href="https://aws.amazon.com/service-terms">Amazon Web Services Feature Preview
     * terms</a>, see section 2 on Beta and Previews.</p> 
     */
    inline AccountSettings& WithPipelineProvisioningRepository(RepositoryBranch&& value) { SetPipelineProvisioningRepository(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Proton pipeline service role.</p>
     */
    inline const Aws::String& GetPipelineServiceRoleArn() const{ return m_pipelineServiceRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton pipeline service role.</p>
     */
    inline bool PipelineServiceRoleArnHasBeenSet() const { return m_pipelineServiceRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton pipeline service role.</p>
     */
    inline void SetPipelineServiceRoleArn(const Aws::String& value) { m_pipelineServiceRoleArnHasBeenSet = true; m_pipelineServiceRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton pipeline service role.</p>
     */
    inline void SetPipelineServiceRoleArn(Aws::String&& value) { m_pipelineServiceRoleArnHasBeenSet = true; m_pipelineServiceRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton pipeline service role.</p>
     */
    inline void SetPipelineServiceRoleArn(const char* value) { m_pipelineServiceRoleArnHasBeenSet = true; m_pipelineServiceRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton pipeline service role.</p>
     */
    inline AccountSettings& WithPipelineServiceRoleArn(const Aws::String& value) { SetPipelineServiceRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton pipeline service role.</p>
     */
    inline AccountSettings& WithPipelineServiceRoleArn(Aws::String&& value) { SetPipelineServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton pipeline service role.</p>
     */
    inline AccountSettings& WithPipelineServiceRoleArn(const char* value) { SetPipelineServiceRoleArn(value); return *this;}

  private:

    RepositoryBranch m_pipelineProvisioningRepository;
    bool m_pipelineProvisioningRepositoryHasBeenSet;

    Aws::String m_pipelineServiceRoleArn;
    bool m_pipelineServiceRoleArnHasBeenSet;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
