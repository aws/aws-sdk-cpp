/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Details about the polling configuration for the <code>JobWorker</code> action
   * engine, or executor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/JobWorkerExecutorConfiguration">AWS
   * API Reference</a></p>
   */
  class JobWorkerExecutorConfiguration
  {
  public:
    AWS_CODEPIPELINE_API JobWorkerExecutorConfiguration() = default;
    AWS_CODEPIPELINE_API JobWorkerExecutorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API JobWorkerExecutorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The accounts in which the job worker is configured and might poll for jobs as
     * part of the action execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPollingAccounts() const { return m_pollingAccounts; }
    inline bool PollingAccountsHasBeenSet() const { return m_pollingAccountsHasBeenSet; }
    template<typename PollingAccountsT = Aws::Vector<Aws::String>>
    void SetPollingAccounts(PollingAccountsT&& value) { m_pollingAccountsHasBeenSet = true; m_pollingAccounts = std::forward<PollingAccountsT>(value); }
    template<typename PollingAccountsT = Aws::Vector<Aws::String>>
    JobWorkerExecutorConfiguration& WithPollingAccounts(PollingAccountsT&& value) { SetPollingAccounts(std::forward<PollingAccountsT>(value)); return *this;}
    template<typename PollingAccountsT = Aws::String>
    JobWorkerExecutorConfiguration& AddPollingAccounts(PollingAccountsT&& value) { m_pollingAccountsHasBeenSet = true; m_pollingAccounts.emplace_back(std::forward<PollingAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The service Principals in which the job worker is configured and might poll
     * for jobs as part of the action execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPollingServicePrincipals() const { return m_pollingServicePrincipals; }
    inline bool PollingServicePrincipalsHasBeenSet() const { return m_pollingServicePrincipalsHasBeenSet; }
    template<typename PollingServicePrincipalsT = Aws::Vector<Aws::String>>
    void SetPollingServicePrincipals(PollingServicePrincipalsT&& value) { m_pollingServicePrincipalsHasBeenSet = true; m_pollingServicePrincipals = std::forward<PollingServicePrincipalsT>(value); }
    template<typename PollingServicePrincipalsT = Aws::Vector<Aws::String>>
    JobWorkerExecutorConfiguration& WithPollingServicePrincipals(PollingServicePrincipalsT&& value) { SetPollingServicePrincipals(std::forward<PollingServicePrincipalsT>(value)); return *this;}
    template<typename PollingServicePrincipalsT = Aws::String>
    JobWorkerExecutorConfiguration& AddPollingServicePrincipals(PollingServicePrincipalsT&& value) { m_pollingServicePrincipalsHasBeenSet = true; m_pollingServicePrincipals.emplace_back(std::forward<PollingServicePrincipalsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_pollingAccounts;
    bool m_pollingAccountsHasBeenSet = false;

    Aws::Vector<Aws::String> m_pollingServicePrincipals;
    bool m_pollingServicePrincipalsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
