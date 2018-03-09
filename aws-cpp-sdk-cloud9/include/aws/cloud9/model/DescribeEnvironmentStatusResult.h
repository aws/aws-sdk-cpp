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
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/cloud9/model/EnvironmentStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Cloud9
{
namespace Model
{
  class AWS_CLOUD9_API DescribeEnvironmentStatusResult
  {
  public:
    DescribeEnvironmentStatusResult();
    DescribeEnvironmentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEnvironmentStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the environment. Available values include:</p> <ul> <li> <p>
     * <code>connecting</code>: The environment is connecting.</p> </li> <li> <p>
     * <code>creating</code>: The environment is being created.</p> </li> <li> <p>
     * <code>deleting</code>: The environment is being deleted.</p> </li> <li> <p>
     * <code>error</code>: The environment is in an error state.</p> </li> <li> <p>
     * <code>ready</code>: The environment is ready.</p> </li> <li> <p>
     * <code>stopped</code>: The environment is stopped.</p> </li> <li> <p>
     * <code>stopping</code>: The environment is stopping.</p> </li> </ul>
     */
    inline const EnvironmentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the environment. Available values include:</p> <ul> <li> <p>
     * <code>connecting</code>: The environment is connecting.</p> </li> <li> <p>
     * <code>creating</code>: The environment is being created.</p> </li> <li> <p>
     * <code>deleting</code>: The environment is being deleted.</p> </li> <li> <p>
     * <code>error</code>: The environment is in an error state.</p> </li> <li> <p>
     * <code>ready</code>: The environment is ready.</p> </li> <li> <p>
     * <code>stopped</code>: The environment is stopped.</p> </li> <li> <p>
     * <code>stopping</code>: The environment is stopping.</p> </li> </ul>
     */
    inline void SetStatus(const EnvironmentStatus& value) { m_status = value; }

    /**
     * <p>The status of the environment. Available values include:</p> <ul> <li> <p>
     * <code>connecting</code>: The environment is connecting.</p> </li> <li> <p>
     * <code>creating</code>: The environment is being created.</p> </li> <li> <p>
     * <code>deleting</code>: The environment is being deleted.</p> </li> <li> <p>
     * <code>error</code>: The environment is in an error state.</p> </li> <li> <p>
     * <code>ready</code>: The environment is ready.</p> </li> <li> <p>
     * <code>stopped</code>: The environment is stopped.</p> </li> <li> <p>
     * <code>stopping</code>: The environment is stopping.</p> </li> </ul>
     */
    inline void SetStatus(EnvironmentStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the environment. Available values include:</p> <ul> <li> <p>
     * <code>connecting</code>: The environment is connecting.</p> </li> <li> <p>
     * <code>creating</code>: The environment is being created.</p> </li> <li> <p>
     * <code>deleting</code>: The environment is being deleted.</p> </li> <li> <p>
     * <code>error</code>: The environment is in an error state.</p> </li> <li> <p>
     * <code>ready</code>: The environment is ready.</p> </li> <li> <p>
     * <code>stopped</code>: The environment is stopped.</p> </li> <li> <p>
     * <code>stopping</code>: The environment is stopping.</p> </li> </ul>
     */
    inline DescribeEnvironmentStatusResult& WithStatus(const EnvironmentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the environment. Available values include:</p> <ul> <li> <p>
     * <code>connecting</code>: The environment is connecting.</p> </li> <li> <p>
     * <code>creating</code>: The environment is being created.</p> </li> <li> <p>
     * <code>deleting</code>: The environment is being deleted.</p> </li> <li> <p>
     * <code>error</code>: The environment is in an error state.</p> </li> <li> <p>
     * <code>ready</code>: The environment is ready.</p> </li> <li> <p>
     * <code>stopped</code>: The environment is stopped.</p> </li> <li> <p>
     * <code>stopping</code>: The environment is stopping.</p> </li> </ul>
     */
    inline DescribeEnvironmentStatusResult& WithStatus(EnvironmentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Any informational message about the status of the environment.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Any informational message about the status of the environment.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>Any informational message about the status of the environment.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>Any informational message about the status of the environment.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>Any informational message about the status of the environment.</p>
     */
    inline DescribeEnvironmentStatusResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Any informational message about the status of the environment.</p>
     */
    inline DescribeEnvironmentStatusResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Any informational message about the status of the environment.</p>
     */
    inline DescribeEnvironmentStatusResult& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    EnvironmentStatus m_status;

    Aws::String m_message;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
