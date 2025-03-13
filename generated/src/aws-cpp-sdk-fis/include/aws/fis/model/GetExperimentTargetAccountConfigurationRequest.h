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
    AWS_FIS_API GetExperimentTargetAccountConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetExperimentTargetAccountConfiguration"; }

    AWS_FIS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the experiment.</p>
     */
    inline const Aws::String& GetExperimentId() const { return m_experimentId; }
    inline bool ExperimentIdHasBeenSet() const { return m_experimentIdHasBeenSet; }
    template<typename ExperimentIdT = Aws::String>
    void SetExperimentId(ExperimentIdT&& value) { m_experimentIdHasBeenSet = true; m_experimentId = std::forward<ExperimentIdT>(value); }
    template<typename ExperimentIdT = Aws::String>
    GetExperimentTargetAccountConfigurationRequest& WithExperimentId(ExperimentIdT&& value) { SetExperimentId(std::forward<ExperimentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the target account.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    GetExperimentTargetAccountConfigurationRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_experimentId;
    bool m_experimentIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
