/**
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
     * <p>A repository for pipeline provisioning. Specify it if you have environments
     * configured for self-managed provisioning with services that include
     * pipelines.</p>
     */
    inline const RepositoryBranchInput& GetPipelineProvisioningRepository() const{ return m_pipelineProvisioningRepository; }

    /**
     * <p>A repository for pipeline provisioning. Specify it if you have environments
     * configured for self-managed provisioning with services that include
     * pipelines.</p>
     */
    inline bool PipelineProvisioningRepositoryHasBeenSet() const { return m_pipelineProvisioningRepositoryHasBeenSet; }

    /**
     * <p>A repository for pipeline provisioning. Specify it if you have environments
     * configured for self-managed provisioning with services that include
     * pipelines.</p>
     */
    inline void SetPipelineProvisioningRepository(const RepositoryBranchInput& value) { m_pipelineProvisioningRepositoryHasBeenSet = true; m_pipelineProvisioningRepository = value; }

    /**
     * <p>A repository for pipeline provisioning. Specify it if you have environments
     * configured for self-managed provisioning with services that include
     * pipelines.</p>
     */
    inline void SetPipelineProvisioningRepository(RepositoryBranchInput&& value) { m_pipelineProvisioningRepositoryHasBeenSet = true; m_pipelineProvisioningRepository = std::move(value); }

    /**
     * <p>A repository for pipeline provisioning. Specify it if you have environments
     * configured for self-managed provisioning with services that include
     * pipelines.</p>
     */
    inline UpdateAccountSettingsRequest& WithPipelineProvisioningRepository(const RepositoryBranchInput& value) { SetPipelineProvisioningRepository(value); return *this;}

    /**
     * <p>A repository for pipeline provisioning. Specify it if you have environments
     * configured for self-managed provisioning with services that include
     * pipelines.</p>
     */
    inline UpdateAccountSettingsRequest& WithPipelineProvisioningRepository(RepositoryBranchInput&& value) { SetPipelineProvisioningRepository(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p>
     */
    inline const Aws::String& GetPipelineServiceRoleArn() const{ return m_pipelineServiceRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p>
     */
    inline bool PipelineServiceRoleArnHasBeenSet() const { return m_pipelineServiceRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p>
     */
    inline void SetPipelineServiceRoleArn(const Aws::String& value) { m_pipelineServiceRoleArnHasBeenSet = true; m_pipelineServiceRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p>
     */
    inline void SetPipelineServiceRoleArn(Aws::String&& value) { m_pipelineServiceRoleArnHasBeenSet = true; m_pipelineServiceRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p>
     */
    inline void SetPipelineServiceRoleArn(const char* value) { m_pipelineServiceRoleArnHasBeenSet = true; m_pipelineServiceRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p>
     */
    inline UpdateAccountSettingsRequest& WithPipelineServiceRoleArn(const Aws::String& value) { SetPipelineServiceRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p>
     */
    inline UpdateAccountSettingsRequest& WithPipelineServiceRoleArn(Aws::String&& value) { SetPipelineServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p>
     */
    inline UpdateAccountSettingsRequest& WithPipelineServiceRoleArn(const char* value) { SetPipelineServiceRoleArn(value); return *this;}

  private:

    RepositoryBranchInput m_pipelineProvisioningRepository;
    bool m_pipelineProvisioningRepositoryHasBeenSet = false;

    Aws::String m_pipelineServiceRoleArn;
    bool m_pipelineServiceRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
