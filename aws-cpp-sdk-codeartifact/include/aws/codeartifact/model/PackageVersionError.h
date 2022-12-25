/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/PackageVersionErrorCode.h>
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
namespace CodeArtifact
{
namespace Model
{

  /**
   * <p>l An error associated with package. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PackageVersionError">AWS
   * API Reference</a></p>
   */
  class PackageVersionError
  {
  public:
    AWS_CODEARTIFACT_API PackageVersionError();
    AWS_CODEARTIFACT_API PackageVersionError(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API PackageVersionError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The error code associated with the error. Valid error codes are: </p> <ul>
     * <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline const PackageVersionErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p> The error code associated with the error. Valid error codes are: </p> <ul>
     * <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p> The error code associated with the error. Valid error codes are: </p> <ul>
     * <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline void SetErrorCode(const PackageVersionErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p> The error code associated with the error. Valid error codes are: </p> <ul>
     * <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline void SetErrorCode(PackageVersionErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p> The error code associated with the error. Valid error codes are: </p> <ul>
     * <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline PackageVersionError& WithErrorCode(const PackageVersionErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p> The error code associated with the error. Valid error codes are: </p> <ul>
     * <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline PackageVersionError& WithErrorCode(PackageVersionErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p> The error message associated with the error. </p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p> The error message associated with the error. </p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p> The error message associated with the error. </p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p> The error message associated with the error. </p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p> The error message associated with the error. </p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p> The error message associated with the error. </p>
     */
    inline PackageVersionError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p> The error message associated with the error. </p>
     */
    inline PackageVersionError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p> The error message associated with the error. </p>
     */
    inline PackageVersionError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    PackageVersionErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
