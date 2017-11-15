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
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace SFN
{
namespace Model
{
  class AWS_SFN_API StopExecutionResult
  {
  public:
    StopExecutionResult();
    StopExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StopExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The date the execution is stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopDate() const{ return m_stopDate; }

    /**
     * <p>The date the execution is stopped.</p>
     */
    inline void SetStopDate(const Aws::Utils::DateTime& value) { m_stopDate = value; }

    /**
     * <p>The date the execution is stopped.</p>
     */
    inline void SetStopDate(Aws::Utils::DateTime&& value) { m_stopDate = std::move(value); }

    /**
     * <p>The date the execution is stopped.</p>
     */
    inline StopExecutionResult& WithStopDate(const Aws::Utils::DateTime& value) { SetStopDate(value); return *this;}

    /**
     * <p>The date the execution is stopped.</p>
     */
    inline StopExecutionResult& WithStopDate(Aws::Utils::DateTime&& value) { SetStopDate(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_stopDate;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
