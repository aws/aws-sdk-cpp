/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>The proposed access control configuration for an Amazon ECR repository. You
   * can propose a configuration for a new Amazon ECR repository or an existing
   * Amazon ECR repository that you own by specifying the Amazon ECR policy. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonECR/latest/APIReference/API_Repository.html">Repository</a>.</p>
   * <ul> <li> <p>If the configuration is for an existing Amazon ECR repository and
   * you do not specify the Amazon ECR policy, then the access preview uses the
   * existing Amazon ECR policy for the repository.</p> </li> <li> <p>If the access
   * preview is for a new resource and you do not specify the policy, then the access
   * preview assumes an Amazon ECR repository without a policy.</p> </li> <li> <p>To
   * propose deletion of an existing Amazon ECR repository policy, you can specify an
   * empty string for the Amazon ECR policy.</p> </li> </ul><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/EcrRepositoryConfiguration">AWS
   * API Reference</a></p>
   */
  class EcrRepositoryConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API EcrRepositoryConfiguration();
    AWS_ACCESSANALYZER_API EcrRepositoryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API EcrRepositoryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The JSON repository policy text to apply to the Amazon ECR repository. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policy-examples.html">Private
     * repository policy examples</a> in the <i>Amazon ECR User Guide</i>.</p>
     */
    inline const Aws::String& GetRepositoryPolicy() const{ return m_repositoryPolicy; }

    /**
     * <p>The JSON repository policy text to apply to the Amazon ECR repository. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policy-examples.html">Private
     * repository policy examples</a> in the <i>Amazon ECR User Guide</i>.</p>
     */
    inline bool RepositoryPolicyHasBeenSet() const { return m_repositoryPolicyHasBeenSet; }

    /**
     * <p>The JSON repository policy text to apply to the Amazon ECR repository. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policy-examples.html">Private
     * repository policy examples</a> in the <i>Amazon ECR User Guide</i>.</p>
     */
    inline void SetRepositoryPolicy(const Aws::String& value) { m_repositoryPolicyHasBeenSet = true; m_repositoryPolicy = value; }

    /**
     * <p>The JSON repository policy text to apply to the Amazon ECR repository. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policy-examples.html">Private
     * repository policy examples</a> in the <i>Amazon ECR User Guide</i>.</p>
     */
    inline void SetRepositoryPolicy(Aws::String&& value) { m_repositoryPolicyHasBeenSet = true; m_repositoryPolicy = std::move(value); }

    /**
     * <p>The JSON repository policy text to apply to the Amazon ECR repository. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policy-examples.html">Private
     * repository policy examples</a> in the <i>Amazon ECR User Guide</i>.</p>
     */
    inline void SetRepositoryPolicy(const char* value) { m_repositoryPolicyHasBeenSet = true; m_repositoryPolicy.assign(value); }

    /**
     * <p>The JSON repository policy text to apply to the Amazon ECR repository. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policy-examples.html">Private
     * repository policy examples</a> in the <i>Amazon ECR User Guide</i>.</p>
     */
    inline EcrRepositoryConfiguration& WithRepositoryPolicy(const Aws::String& value) { SetRepositoryPolicy(value); return *this;}

    /**
     * <p>The JSON repository policy text to apply to the Amazon ECR repository. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policy-examples.html">Private
     * repository policy examples</a> in the <i>Amazon ECR User Guide</i>.</p>
     */
    inline EcrRepositoryConfiguration& WithRepositoryPolicy(Aws::String&& value) { SetRepositoryPolicy(std::move(value)); return *this;}

    /**
     * <p>The JSON repository policy text to apply to the Amazon ECR repository. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policy-examples.html">Private
     * repository policy examples</a> in the <i>Amazon ECR User Guide</i>.</p>
     */
    inline EcrRepositoryConfiguration& WithRepositoryPolicy(const char* value) { SetRepositoryPolicy(value); return *this;}

  private:

    Aws::String m_repositoryPolicy;
    bool m_repositoryPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
