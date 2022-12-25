/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
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
namespace SecretsManager
{
namespace Model
{

  /**
   * <p>Displays errors that occurred during validation of the resource
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ValidationErrorsEntry">AWS
   * API Reference</a></p>
   */
  class ValidationErrorsEntry
  {
  public:
    AWS_SECRETSMANAGER_API ValidationErrorsEntry();
    AWS_SECRETSMANAGER_API ValidationErrorsEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API ValidationErrorsEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Checks the name of the policy.</p>
     */
    inline const Aws::String& GetCheckName() const{ return m_checkName; }

    /**
     * <p>Checks the name of the policy.</p>
     */
    inline bool CheckNameHasBeenSet() const { return m_checkNameHasBeenSet; }

    /**
     * <p>Checks the name of the policy.</p>
     */
    inline void SetCheckName(const Aws::String& value) { m_checkNameHasBeenSet = true; m_checkName = value; }

    /**
     * <p>Checks the name of the policy.</p>
     */
    inline void SetCheckName(Aws::String&& value) { m_checkNameHasBeenSet = true; m_checkName = std::move(value); }

    /**
     * <p>Checks the name of the policy.</p>
     */
    inline void SetCheckName(const char* value) { m_checkNameHasBeenSet = true; m_checkName.assign(value); }

    /**
     * <p>Checks the name of the policy.</p>
     */
    inline ValidationErrorsEntry& WithCheckName(const Aws::String& value) { SetCheckName(value); return *this;}

    /**
     * <p>Checks the name of the policy.</p>
     */
    inline ValidationErrorsEntry& WithCheckName(Aws::String&& value) { SetCheckName(std::move(value)); return *this;}

    /**
     * <p>Checks the name of the policy.</p>
     */
    inline ValidationErrorsEntry& WithCheckName(const char* value) { SetCheckName(value); return *this;}


    /**
     * <p>Displays error messages if validation encounters problems during validation
     * of the resource policy.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>Displays error messages if validation encounters problems during validation
     * of the resource policy.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>Displays error messages if validation encounters problems during validation
     * of the resource policy.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>Displays error messages if validation encounters problems during validation
     * of the resource policy.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>Displays error messages if validation encounters problems during validation
     * of the resource policy.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>Displays error messages if validation encounters problems during validation
     * of the resource policy.</p>
     */
    inline ValidationErrorsEntry& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>Displays error messages if validation encounters problems during validation
     * of the resource policy.</p>
     */
    inline ValidationErrorsEntry& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>Displays error messages if validation encounters problems during validation
     * of the resource policy.</p>
     */
    inline ValidationErrorsEntry& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_checkName;
    bool m_checkNameHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
