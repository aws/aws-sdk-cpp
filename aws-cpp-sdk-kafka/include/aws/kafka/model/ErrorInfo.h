/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_KAFKA_API ErrorInfo
  {
  public:
    ErrorInfo();
    ErrorInfo(Aws::Utils::Json::JsonView jsonValue);
    ErrorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>A number describing the error programmatically.</p>
         
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * 
            <p>A number describing the error programmatically.</p>
         
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * 
            <p>A number describing the error programmatically.</p>
         
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * 
            <p>A number describing the error programmatically.</p>
         
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * 
            <p>A number describing the error programmatically.</p>
         
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * 
            <p>A number describing the error programmatically.</p>
         
     */
    inline ErrorInfo& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * 
            <p>A number describing the error programmatically.</p>
         
     */
    inline ErrorInfo& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * 
            <p>A number describing the error programmatically.</p>
         
     */
    inline ErrorInfo& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * 
            <p>An optional field to provide more details about the error.</p>
 
     *        
     */
    inline const Aws::String& GetErrorString() const{ return m_errorString; }

    /**
     * 
            <p>An optional field to provide more details about the error.</p>
 
     *        
     */
    inline bool ErrorStringHasBeenSet() const { return m_errorStringHasBeenSet; }

    /**
     * 
            <p>An optional field to provide more details about the error.</p>
 
     *        
     */
    inline void SetErrorString(const Aws::String& value) { m_errorStringHasBeenSet = true; m_errorString = value; }

    /**
     * 
            <p>An optional field to provide more details about the error.</p>
 
     *        
     */
    inline void SetErrorString(Aws::String&& value) { m_errorStringHasBeenSet = true; m_errorString = std::move(value); }

    /**
     * 
            <p>An optional field to provide more details about the error.</p>
 
     *        
     */
    inline void SetErrorString(const char* value) { m_errorStringHasBeenSet = true; m_errorString.assign(value); }

    /**
     * 
            <p>An optional field to provide more details about the error.</p>
 
     *        
     */
    inline ErrorInfo& WithErrorString(const Aws::String& value) { SetErrorString(value); return *this;}

    /**
     * 
            <p>An optional field to provide more details about the error.</p>
 
     *        
     */
    inline ErrorInfo& WithErrorString(Aws::String&& value) { SetErrorString(std::move(value)); return *this;}

    /**
     * 
            <p>An optional field to provide more details about the error.</p>
 
     *        
     */
    inline ErrorInfo& WithErrorString(const char* value) { SetErrorString(value); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_errorString;
    bool m_errorStringHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
