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
  class GetTargetAccountConfigurationRequest : public FISRequest
  {
  public:
    AWS_FIS_API GetTargetAccountConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTargetAccountConfiguration"; }

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
    inline GetTargetAccountConfigurationRequest& WithExperimentTemplateId(const Aws::String& value) { SetExperimentTemplateId(value); return *this;}
    inline GetTargetAccountConfigurationRequest& WithExperimentTemplateId(Aws::String&& value) { SetExperimentTemplateId(std::move(value)); return *this;}
    inline GetTargetAccountConfigurationRequest& WithExperimentTemplateId(const char* value) { SetExperimentTemplateId(value); return *this;}
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
    inline GetTargetAccountConfigurationRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline GetTargetAccountConfigurationRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline GetTargetAccountConfigurationRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}
  private:

    Aws::String m_experimentTemplateId;
    bool m_experimentTemplateIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
