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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/TestGridProject.h>
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
namespace DeviceFarm
{
namespace Model
{
  class AWS_DEVICEFARM_API CreateTestGridProjectResult
  {
  public:
    CreateTestGridProjectResult();
    CreateTestGridProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateTestGridProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>ARN of the Selenium testing project that was created.</p>
     */
    inline const TestGridProject& GetTestGridProject() const{ return m_testGridProject; }

    /**
     * <p>ARN of the Selenium testing project that was created.</p>
     */
    inline void SetTestGridProject(const TestGridProject& value) { m_testGridProject = value; }

    /**
     * <p>ARN of the Selenium testing project that was created.</p>
     */
    inline void SetTestGridProject(TestGridProject&& value) { m_testGridProject = std::move(value); }

    /**
     * <p>ARN of the Selenium testing project that was created.</p>
     */
    inline CreateTestGridProjectResult& WithTestGridProject(const TestGridProject& value) { SetTestGridProject(value); return *this;}

    /**
     * <p>ARN of the Selenium testing project that was created.</p>
     */
    inline CreateTestGridProjectResult& WithTestGridProject(TestGridProject&& value) { SetTestGridProject(std::move(value)); return *this;}

  private:

    TestGridProject m_testGridProject;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
