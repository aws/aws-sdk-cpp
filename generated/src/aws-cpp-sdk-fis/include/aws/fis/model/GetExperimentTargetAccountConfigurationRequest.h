/**
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
  class GetExperimentTargetAccountConfigurationRequest : public FISRequest
  {
  public:
    AWS_FIS_API GetExperimentTargetAccountConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetExperimentTargetAccountConfiguration"; }

    AWS_FIS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the experiment.</p>
     */
    inline const Aws::String& GetExperimentId() const{ return m_experimentId; }

    /**
     * <p>The ID of the experiment.</p>
     */
    inline bool ExperimentIdHasBeenSet() const { return m_experimentIdHasBeenSet; }

    /**
     * <p>The ID of the experiment.</p>
     */
    inline void SetExperimentId(const Aws::String& value) { m_experimentIdHasBeenSet = true; m_experimentId = value; }

    /**
     * <p>The ID of the experiment.</p>
     */
    inline void SetExperimentId(Aws::String&& value) { m_experimentIdHasBeenSet = true; m_experimentId = std::move(value); }

    /**
     * <p>The ID of the experiment.</p>
     */
    inline void SetExperimentId(const char* value) { m_experimentIdHasBeenSet = true; m_experimentId.assign(value); }

    /**
     * <p>The ID of the experiment.</p>
     */
    inline GetExperimentTargetAccountConfigurationRequest& WithExperimentId(const Aws::String& value) { SetExperimentId(value); return *this;}

    /**
     * <p>The ID of the experiment.</p>
     */
    inline GetExperimentTargetAccountConfigurationRequest& WithExperimentId(Aws::String&& value) { SetExperimentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the experiment.</p>
     */
    inline GetExperimentTargetAccountConfigurationRequest& WithExperimentId(const char* value) { SetExperimentId(value); return *this;}


    /**
     * <p>The AWS account ID of the target account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The AWS account ID of the target account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The AWS account ID of the target account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The AWS account ID of the target account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The AWS account ID of the target account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The AWS account ID of the target account.</p>
     */
    inline GetExperimentTargetAccountConfigurationRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The AWS account ID of the target account.</p>
     */
    inline GetExperimentTargetAccountConfigurationRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the target account.</p>
     */
    inline GetExperimentTargetAccountConfigurationRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    Aws::String m_experimentId;
    bool m_experimentIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
