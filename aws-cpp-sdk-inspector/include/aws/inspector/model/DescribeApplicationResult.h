/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/model/Application.h>

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
namespace Inspector
{
namespace Model
{
  class AWS_INSPECTOR_API DescribeApplicationResult
  {
  public:
    DescribeApplicationResult();
    DescribeApplicationResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeApplicationResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Information about the application.</p>
     */
    inline const Application& GetApplication() const{ return m_application; }

    /**
     * <p>Information about the application.</p>
     */
    inline void SetApplication(const Application& value) { m_application = value; }

    /**
     * <p>Information about the application.</p>
     */
    inline void SetApplication(Application&& value) { m_application = value; }

    /**
     * <p>Information about the application.</p>
     */
    inline DescribeApplicationResult& WithApplication(const Application& value) { SetApplication(value); return *this;}

    /**
     * <p>Information about the application.</p>
     */
    inline DescribeApplicationResult& WithApplication(Application&& value) { SetApplication(value); return *this;}

  private:
    Application m_application;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
