/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail-data/CloudTrailData_EXPORTS.h>
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
namespace CloudTrailData
{
namespace Model
{

  /**
   * <p>Includes the error code and error message for events that could not be
   * ingested by CloudTrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-data-2021-08-11/ResultErrorEntry">AWS
   * API Reference</a></p>
   */
  class ResultErrorEntry
  {
  public:
    AWS_CLOUDTRAILDATA_API ResultErrorEntry() = default;
    AWS_CLOUDTRAILDATA_API ResultErrorEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAILDATA_API ResultErrorEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAILDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code for events that could not be ingested by CloudTrail. Possible
     * error codes include: <code>FieldTooLong</code>, <code>FieldNotFound</code>,
     * <code>InvalidChecksum</code>, <code>InvalidData</code>,
     * <code>InvalidRecipient</code>, <code>InvalidEventSource</code>,
     * <code>AccountNotSubscribed</code>, <code>Throttling</code>, and
     * <code>InternalFailure</code>.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    ResultErrorEntry& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that describes the error for events that could not be ingested by
     * CloudTrail.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    ResultErrorEntry& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The original event ID from the source event that could not be ingested by
     * CloudTrail.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ResultErrorEntry& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrailData
} // namespace Aws
