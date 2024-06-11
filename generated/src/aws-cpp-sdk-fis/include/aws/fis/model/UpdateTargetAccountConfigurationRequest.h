﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/FISRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FIS
{
namespace Model
{

  /**
   */
  class UpdateTargetAccountConfigurationRequest : public FISRequest
  {
  public:
    AWS_FIS_API UpdateTargetAccountConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTargetAccountConfiguration"; }

    AWS_FIS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the experiment template.</p>
     */
    inline const Aws::String& GetExperimentTemplateId() const{ return m_experimentTemplateId; }
    inline bool ExperimentTemplateIdHasBeenSet() const { return m_experimentTemplateIdHasBeenSet; }
    inline void SetExperimentTemplateId(const Aws::String& value) { m_experimentTemplateIdHasBeenSet = true; m_experimentTemplateId = value; }
    inline void SetExperimentTemplateId(Aws::String&& value) { m_experimentTemplateIdHasBeenSet = true; m_experimentTemplateId = std::move(value); }
    inline void SetExperimentTemplateId(const char* value) { m_experimentTemplateIdHasBeenSet = true; m_experimentTemplateId.assign(value); }
    inline UpdateTargetAccountConfigurationRequest& WithExperimentTemplateId(const Aws::String& value) { SetExperimentTemplateId(value); return *this;}
    inline UpdateTargetAccountConfigurationRequest& WithExperimentTemplateId(Aws::String&& value) { SetExperimentTemplateId(std::move(value)); return *this;}
    inline UpdateTargetAccountConfigurationRequest& WithExperimentTemplateId(const char* value) { SetExperimentTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the target account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline UpdateTargetAccountConfigurationRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline UpdateTargetAccountConfigurationRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline UpdateTargetAccountConfigurationRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role for the target account.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline UpdateTargetAccountConfigurationRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline UpdateTargetAccountConfigurationRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline UpdateTargetAccountConfigurationRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the target account.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateTargetAccountConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateTargetAccountConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateTargetAccountConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_experimentTemplateId;
    bool m_experimentTemplateIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
