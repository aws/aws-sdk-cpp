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
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * Messages that provide the state of the flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Messages">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONNECT_API Messages
  {
  public:
    Messages();
    Messages(Aws::Utils::Json::JsonView jsonValue);
    Messages& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A list of errors that might have been generated from processes on this flow.
     */
    inline const Aws::Vector<Aws::String>& GetErrors() const{ return m_errors; }

    /**
     * A list of errors that might have been generated from processes on this flow.
     */
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }

    /**
     * A list of errors that might have been generated from processes on this flow.
     */
    inline void SetErrors(const Aws::Vector<Aws::String>& value) { m_errorsHasBeenSet = true; m_errors = value; }

    /**
     * A list of errors that might have been generated from processes on this flow.
     */
    inline void SetErrors(Aws::Vector<Aws::String>&& value) { m_errorsHasBeenSet = true; m_errors = std::move(value); }

    /**
     * A list of errors that might have been generated from processes on this flow.
     */
    inline Messages& WithErrors(const Aws::Vector<Aws::String>& value) { SetErrors(value); return *this;}

    /**
     * A list of errors that might have been generated from processes on this flow.
     */
    inline Messages& WithErrors(Aws::Vector<Aws::String>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * A list of errors that might have been generated from processes on this flow.
     */
    inline Messages& AddErrors(const Aws::String& value) { m_errorsHasBeenSet = true; m_errors.push_back(value); return *this; }

    /**
     * A list of errors that might have been generated from processes on this flow.
     */
    inline Messages& AddErrors(Aws::String&& value) { m_errorsHasBeenSet = true; m_errors.push_back(std::move(value)); return *this; }

    /**
     * A list of errors that might have been generated from processes on this flow.
     */
    inline Messages& AddErrors(const char* value) { m_errorsHasBeenSet = true; m_errors.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_errors;
    bool m_errorsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
