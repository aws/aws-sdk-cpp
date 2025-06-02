/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>The record that didn't generate a Match ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/FailedRecord">AWS
   * API Reference</a></p>
   */
  class FailedRecord
  {
  public:
    AWS_ENTITYRESOLUTION_API FailedRecord() = default;
    AWS_ENTITYRESOLUTION_API FailedRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API FailedRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The input source ARN of the record that didn't generate a Match ID.</p>
     */
    inline const Aws::String& GetInputSourceARN() const { return m_inputSourceARN; }
    inline bool InputSourceARNHasBeenSet() const { return m_inputSourceARNHasBeenSet; }
    template<typename InputSourceARNT = Aws::String>
    void SetInputSourceARN(InputSourceARNT&& value) { m_inputSourceARNHasBeenSet = true; m_inputSourceARN = std::forward<InputSourceARNT>(value); }
    template<typename InputSourceARNT = Aws::String>
    FailedRecord& WithInputSourceARN(InputSourceARNT&& value) { SetInputSourceARN(std::forward<InputSourceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique ID of the record that didn't generate a Match ID.</p>
     */
    inline const Aws::String& GetUniqueId() const { return m_uniqueId; }
    inline bool UniqueIdHasBeenSet() const { return m_uniqueIdHasBeenSet; }
    template<typename UniqueIdT = Aws::String>
    void SetUniqueId(UniqueIdT&& value) { m_uniqueIdHasBeenSet = true; m_uniqueId = std::forward<UniqueIdT>(value); }
    template<typename UniqueIdT = Aws::String>
    FailedRecord& WithUniqueId(UniqueIdT&& value) { SetUniqueId(std::forward<UniqueIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error message for the record that didn't generate a Match ID.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    FailedRecord& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inputSourceARN;
    bool m_inputSourceARNHasBeenSet = false;

    Aws::String m_uniqueId;
    bool m_uniqueIdHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
