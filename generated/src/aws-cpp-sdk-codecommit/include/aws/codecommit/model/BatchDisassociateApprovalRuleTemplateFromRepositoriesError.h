/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Returns information about errors in a
   * BatchDisassociateApprovalRuleTemplateFromRepositories operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchDisassociateApprovalRuleTemplateFromRepositoriesError">AWS
   * API Reference</a></p>
   */
  class BatchDisassociateApprovalRuleTemplateFromRepositoriesError
  {
  public:
    AWS_CODECOMMIT_API BatchDisassociateApprovalRuleTemplateFromRepositoriesError();
    AWS_CODECOMMIT_API BatchDisassociateApprovalRuleTemplateFromRepositoriesError(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API BatchDisassociateApprovalRuleTemplateFromRepositoriesError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the repository where the association with the template was not
     * able to be removed.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository where the association with the template was not
     * able to be removed.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository where the association with the template was not
     * able to be removed.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository where the association with the template was not
     * able to be removed.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository where the association with the template was not
     * able to be removed.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository where the association with the template was not
     * able to be removed.</p>
     */
    inline BatchDisassociateApprovalRuleTemplateFromRepositoriesError& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository where the association with the template was not
     * able to be removed.</p>
     */
    inline BatchDisassociateApprovalRuleTemplateFromRepositoriesError& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository where the association with the template was not
     * able to be removed.</p>
     */
    inline BatchDisassociateApprovalRuleTemplateFromRepositoriesError& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>An error code that specifies whether the repository name was not valid or not
     * found.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>An error code that specifies whether the repository name was not valid or not
     * found.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>An error code that specifies whether the repository name was not valid or not
     * found.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>An error code that specifies whether the repository name was not valid or not
     * found.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>An error code that specifies whether the repository name was not valid or not
     * found.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>An error code that specifies whether the repository name was not valid or not
     * found.</p>
     */
    inline BatchDisassociateApprovalRuleTemplateFromRepositoriesError& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>An error code that specifies whether the repository name was not valid or not
     * found.</p>
     */
    inline BatchDisassociateApprovalRuleTemplateFromRepositoriesError& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>An error code that specifies whether the repository name was not valid or not
     * found.</p>
     */
    inline BatchDisassociateApprovalRuleTemplateFromRepositoriesError& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>An error message that provides details about why the repository name was
     * either not found or not valid.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>An error message that provides details about why the repository name was
     * either not found or not valid.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>An error message that provides details about why the repository name was
     * either not found or not valid.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>An error message that provides details about why the repository name was
     * either not found or not valid.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>An error message that provides details about why the repository name was
     * either not found or not valid.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>An error message that provides details about why the repository name was
     * either not found or not valid.</p>
     */
    inline BatchDisassociateApprovalRuleTemplateFromRepositoriesError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>An error message that provides details about why the repository name was
     * either not found or not valid.</p>
     */
    inline BatchDisassociateApprovalRuleTemplateFromRepositoriesError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>An error message that provides details about why the repository name was
     * either not found or not valid.</p>
     */
    inline BatchDisassociateApprovalRuleTemplateFromRepositoriesError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
