/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/ScanningConfigurationFailureCode.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>The details about any failures associated with the scanning configuration of
   * a repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/RepositoryScanningConfigurationFailure">AWS
   * API Reference</a></p>
   */
  class RepositoryScanningConfigurationFailure
  {
  public:
    AWS_ECR_API RepositoryScanningConfigurationFailure();
    AWS_ECR_API RepositoryScanningConfigurationFailure(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API RepositoryScanningConfigurationFailure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the repository.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline RepositoryScanningConfigurationFailure& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline RepositoryScanningConfigurationFailure& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline RepositoryScanningConfigurationFailure& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure code.</p>
     */
    inline const ScanningConfigurationFailureCode& GetFailureCode() const{ return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(const ScanningConfigurationFailureCode& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline void SetFailureCode(ScanningConfigurationFailureCode&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }
    inline RepositoryScanningConfigurationFailure& WithFailureCode(const ScanningConfigurationFailureCode& value) { SetFailureCode(value); return *this;}
    inline RepositoryScanningConfigurationFailure& WithFailureCode(ScanningConfigurationFailureCode&& value) { SetFailureCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline RepositoryScanningConfigurationFailure& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline RepositoryScanningConfigurationFailure& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline RepositoryScanningConfigurationFailure& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    ScanningConfigurationFailureCode m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
