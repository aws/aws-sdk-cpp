/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
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
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>Returns information about an error state of the cluster.</p>
   
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ErrorInfo">AWS API
   * Reference</a></p>
   */
  class ErrorInfo
  {
  public:
    AWS_KAFKA_API ErrorInfo() = default;
    AWS_KAFKA_API ErrorInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ErrorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>A number describing the error programmatically.</p>
         
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    ErrorInfo& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>An optional field to provide more details about the error.</p>
 
     *        
     */
    inline const Aws::String& GetErrorString() const { return m_errorString; }
    inline bool ErrorStringHasBeenSet() const { return m_errorStringHasBeenSet; }
    template<typename ErrorStringT = Aws::String>
    void SetErrorString(ErrorStringT&& value) { m_errorStringHasBeenSet = true; m_errorString = std::forward<ErrorStringT>(value); }
    template<typename ErrorStringT = Aws::String>
    ErrorInfo& WithErrorString(ErrorStringT&& value) { SetErrorString(std::forward<ErrorStringT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorString;
    bool m_errorStringHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
