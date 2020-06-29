/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsSecurityFindingIdentifier.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A finding from a <code>BatchUpdateFindings</code> request that Security Hub
   * was unable to update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchUpdateFindingsUnprocessedFinding">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API BatchUpdateFindingsUnprocessedFinding
  {
  public:
    BatchUpdateFindingsUnprocessedFinding();
    BatchUpdateFindingsUnprocessedFinding(Aws::Utils::Json::JsonView jsonValue);
    BatchUpdateFindingsUnprocessedFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the finding that was not updated.</p>
     */
    inline const AwsSecurityFindingIdentifier& GetFindingIdentifier() const{ return m_findingIdentifier; }

    /**
     * <p>The identifier of the finding that was not updated.</p>
     */
    inline bool FindingIdentifierHasBeenSet() const { return m_findingIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the finding that was not updated.</p>
     */
    inline void SetFindingIdentifier(const AwsSecurityFindingIdentifier& value) { m_findingIdentifierHasBeenSet = true; m_findingIdentifier = value; }

    /**
     * <p>The identifier of the finding that was not updated.</p>
     */
    inline void SetFindingIdentifier(AwsSecurityFindingIdentifier&& value) { m_findingIdentifierHasBeenSet = true; m_findingIdentifier = std::move(value); }

    /**
     * <p>The identifier of the finding that was not updated.</p>
     */
    inline BatchUpdateFindingsUnprocessedFinding& WithFindingIdentifier(const AwsSecurityFindingIdentifier& value) { SetFindingIdentifier(value); return *this;}

    /**
     * <p>The identifier of the finding that was not updated.</p>
     */
    inline BatchUpdateFindingsUnprocessedFinding& WithFindingIdentifier(AwsSecurityFindingIdentifier&& value) { SetFindingIdentifier(std::move(value)); return *this;}


    /**
     * <p>The code associated with the error.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The code associated with the error.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The code associated with the error.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The code associated with the error.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The code associated with the error.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The code associated with the error.</p>
     */
    inline BatchUpdateFindingsUnprocessedFinding& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The code associated with the error.</p>
     */
    inline BatchUpdateFindingsUnprocessedFinding& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The code associated with the error.</p>
     */
    inline BatchUpdateFindingsUnprocessedFinding& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The message associated with the error.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The message associated with the error.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The message associated with the error.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The message associated with the error.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The message associated with the error.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The message associated with the error.</p>
     */
    inline BatchUpdateFindingsUnprocessedFinding& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The message associated with the error.</p>
     */
    inline BatchUpdateFindingsUnprocessedFinding& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The message associated with the error.</p>
     */
    inline BatchUpdateFindingsUnprocessedFinding& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    AwsSecurityFindingIdentifier m_findingIdentifier;
    bool m_findingIdentifierHasBeenSet;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
