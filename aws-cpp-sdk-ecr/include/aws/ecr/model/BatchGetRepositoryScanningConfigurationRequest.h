﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class AWS_ECR_API BatchGetRepositoryScanningConfigurationRequest : public ECRRequest
  {
  public:
    BatchGetRepositoryScanningConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetRepositoryScanningConfiguration"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>One or more repository names to get the scanning configuration for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRepositoryNames() const{ return m_repositoryNames; }

    /**
     * <p>One or more repository names to get the scanning configuration for.</p>
     */
    inline bool RepositoryNamesHasBeenSet() const { return m_repositoryNamesHasBeenSet; }

    /**
     * <p>One or more repository names to get the scanning configuration for.</p>
     */
    inline void SetRepositoryNames(const Aws::Vector<Aws::String>& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames = value; }

    /**
     * <p>One or more repository names to get the scanning configuration for.</p>
     */
    inline void SetRepositoryNames(Aws::Vector<Aws::String>&& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames = std::move(value); }

    /**
     * <p>One or more repository names to get the scanning configuration for.</p>
     */
    inline BatchGetRepositoryScanningConfigurationRequest& WithRepositoryNames(const Aws::Vector<Aws::String>& value) { SetRepositoryNames(value); return *this;}

    /**
     * <p>One or more repository names to get the scanning configuration for.</p>
     */
    inline BatchGetRepositoryScanningConfigurationRequest& WithRepositoryNames(Aws::Vector<Aws::String>&& value) { SetRepositoryNames(std::move(value)); return *this;}

    /**
     * <p>One or more repository names to get the scanning configuration for.</p>
     */
    inline BatchGetRepositoryScanningConfigurationRequest& AddRepositoryNames(const Aws::String& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames.push_back(value); return *this; }

    /**
     * <p>One or more repository names to get the scanning configuration for.</p>
     */
    inline BatchGetRepositoryScanningConfigurationRequest& AddRepositoryNames(Aws::String&& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more repository names to get the scanning configuration for.</p>
     */
    inline BatchGetRepositoryScanningConfigurationRequest& AddRepositoryNames(const char* value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_repositoryNames;
    bool m_repositoryNamesHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
