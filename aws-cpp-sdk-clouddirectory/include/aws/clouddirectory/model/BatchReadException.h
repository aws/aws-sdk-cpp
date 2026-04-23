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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/BatchReadExceptionType.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>The batch read exception structure, which contains the exception type and
   * message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchReadException">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchReadException
  {
  public:
    BatchReadException();
    BatchReadException(Aws::Utils::Json::JsonView jsonValue);
    BatchReadException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A type of exception, such as <code>InvalidArnException</code>.</p>
     */
    inline const BatchReadExceptionType& GetType() const{ return m_type; }

    /**
     * <p>A type of exception, such as <code>InvalidArnException</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>A type of exception, such as <code>InvalidArnException</code>.</p>
     */
    inline void SetType(const BatchReadExceptionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>A type of exception, such as <code>InvalidArnException</code>.</p>
     */
    inline void SetType(BatchReadExceptionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>A type of exception, such as <code>InvalidArnException</code>.</p>
     */
    inline BatchReadException& WithType(const BatchReadExceptionType& value) { SetType(value); return *this;}

    /**
     * <p>A type of exception, such as <code>InvalidArnException</code>.</p>
     */
    inline BatchReadException& WithType(BatchReadExceptionType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>An exception message that is associated with the failure.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>An exception message that is associated with the failure.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>An exception message that is associated with the failure.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>An exception message that is associated with the failure.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>An exception message that is associated with the failure.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>An exception message that is associated with the failure.</p>
     */
    inline BatchReadException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>An exception message that is associated with the failure.</p>
     */
    inline BatchReadException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>An exception message that is associated with the failure.</p>
     */
    inline BatchReadException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    BatchReadExceptionType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
