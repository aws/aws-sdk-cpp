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
#include <aws/inspector/model/Run.h>

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
  class AWS_INSPECTOR_API DescribeRunResult
  {
  public:
    DescribeRunResult();
    DescribeRunResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeRunResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Information about the assessment run.</p>
     */
    inline const Run& GetRun() const{ return m_run; }

    /**
     * <p>Information about the assessment run.</p>
     */
    inline void SetRun(const Run& value) { m_run = value; }

    /**
     * <p>Information about the assessment run.</p>
     */
    inline void SetRun(Run&& value) { m_run = value; }

    /**
     * <p>Information about the assessment run.</p>
     */
    inline DescribeRunResult& WithRun(const Run& value) { SetRun(value); return *this;}

    /**
     * <p>Information about the assessment run.</p>
     */
    inline DescribeRunResult& WithRun(Run&& value) { SetRun(value); return *this;}

  private:
    Run m_run;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
