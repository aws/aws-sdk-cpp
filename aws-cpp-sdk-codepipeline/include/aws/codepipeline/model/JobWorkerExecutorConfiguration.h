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
    AWS_CODEPIPELINE_API JobWorkerExecutorConfiguration();
    AWS_CODEPIPELINE_API JobWorkerExecutorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API JobWorkerExecutorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The accounts in which the job worker is configured and might poll for jobs as
     * part of the action execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPollingAccounts() const{ return m_pollingAccounts; }

    /**
     * <p>The accounts in which the job worker is configured and might poll for jobs as
     * part of the action execution.</p>
     */
    inline bool PollingAccountsHasBeenSet() const { return m_pollingAccountsHasBeenSet; }

    /**
     * <p>The accounts in which the job worker is configured and might poll for jobs as
     * part of the action execution.</p>
     */
    inline void SetPollingAccounts(const Aws::Vector<Aws::String>& value) { m_pollingAccountsHasBeenSet = true; m_pollingAccounts = value; }

    /**
     * <p>The accounts in which the job worker is configured and might poll for jobs as
     * part of the action execution.</p>
     */
    inline void SetPollingAccounts(Aws::Vector<Aws::String>&& value) { m_pollingAccountsHasBeenSet = true; m_pollingAccounts = std::move(value); }

    /**
     * <p>The accounts in which the job worker is configured and might poll for jobs as
     * part of the action execution.</p>
     */
    inline JobWorkerExecutorConfiguration& WithPollingAccounts(const Aws::Vector<Aws::String>& value) { SetPollingAccounts(value); return *this;}

    /**
     * <p>The accounts in which the job worker is configured and might poll for jobs as
     * part of the action execution.</p>
     */
    inline JobWorkerExecutorConfiguration& WithPollingAccounts(Aws::Vector<Aws::String>&& value) { SetPollingAccounts(std::move(value)); return *this;}

    /**
     * <p>The accounts in which the job worker is configured and might poll for jobs as
     * part of the action execution.</p>
     */
    inline JobWorkerExecutorConfiguration& AddPollingAccounts(const Aws::String& value) { m_pollingAccountsHasBeenSet = true; m_pollingAccounts.push_back(value); return *this; }

    /**
     * <p>The accounts in which the job worker is configured and might poll for jobs as
     * part of the action execution.</p>
     */
    inline JobWorkerExecutorConfiguration& AddPollingAccounts(Aws::String&& value) { m_pollingAccountsHasBeenSet = true; m_pollingAccounts.push_back(std::move(value)); return *this; }

    /**
     * <p>The accounts in which the job worker is configured and might poll for jobs as
     * part of the action execution.</p>
     */
    inline JobWorkerExecutorConfiguration& AddPollingAccounts(const char* value) { m_pollingAccountsHasBeenSet = true; m_pollingAccounts.push_back(value); return *this; }


    /**
     * <p>The service Principals in which the job worker is configured and might poll
     * for jobs as part of the action execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPollingServicePrincipals() const{ return m_pollingServicePrincipals; }

    /**
     * <p>The service Principals in which the job worker is configured and might poll
     * for jobs as part of the action execution.</p>
     */
    inline bool PollingServicePrincipalsHasBeenSet() const { return m_pollingServicePrincipalsHasBeenSet; }

    /**
     * <p>The service Principals in which the job worker is configured and might poll
     * for jobs as part of the action execution.</p>
     */
    inline void SetPollingServicePrincipals(const Aws::Vector<Aws::String>& value) { m_pollingServicePrincipalsHasBeenSet = true; m_pollingServicePrincipals = value; }

    /**
     * <p>The service Principals in which the job worker is configured and might poll
     * for jobs as part of the action execution.</p>
     */
    inline void SetPollingServicePrincipals(Aws::Vector<Aws::String>&& value) { m_pollingServicePrincipalsHasBeenSet = true; m_pollingServicePrincipals = std::move(value); }

    /**
     * <p>The service Principals in which the job worker is configured and might poll
     * for jobs as part of the action execution.</p>
     */
    inline JobWorkerExecutorConfiguration& WithPollingServicePrincipals(const Aws::Vector<Aws::String>& value) { SetPollingServicePrincipals(value); return *this;}

    /**
     * <p>The service Principals in which the job worker is configured and might poll
     * for jobs as part of the action execution.</p>
     */
    inline JobWorkerExecutorConfiguration& WithPollingServicePrincipals(Aws::Vector<Aws::String>&& value) { SetPollingServicePrincipals(std::move(value)); return *this;}

    /**
     * <p>The service Principals in which the job worker is configured and might poll
     * for jobs as part of the action execution.</p>
     */
    inline JobWorkerExecutorConfiguration& AddPollingServicePrincipals(const Aws::String& value) { m_pollingServicePrincipalsHasBeenSet = true; m_pollingServicePrincipals.push_back(value); return *this; }

    /**
     * <p>The service Principals in which the job worker is configured and might poll
     * for jobs as part of the action execution.</p>
     */
    inline JobWorkerExecutorConfiguration& AddPollingServicePrincipals(Aws::String&& value) { m_pollingServicePrincipalsHasBeenSet = true; m_pollingServicePrincipals.push_back(std::move(value)); return *this; }

    /**
     * <p>The service Principals in which the job worker is configured and might poll
     * for jobs as part of the action execution.</p>
     */
    inline JobWorkerExecutorConfiguration& AddPollingServicePrincipals(const char* value) { m_pollingServicePrincipalsHasBeenSet = true; m_pollingServicePrincipals.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_pollingAccounts;
    bool m_pollingAccountsHasBeenSet = false;

    Aws::Vector<Aws::String> m_pollingServicePrincipals;
    bool m_pollingServicePrincipalsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
