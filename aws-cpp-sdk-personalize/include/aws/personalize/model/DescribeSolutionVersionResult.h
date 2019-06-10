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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/SolutionVersion.h>
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
namespace Personalize
{
namespace Model
{
  class AWS_PERSONALIZE_API DescribeSolutionVersionResult
  {
  public:
    DescribeSolutionVersionResult();
    DescribeSolutionVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeSolutionVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The solution version.</p>
     */
    inline const SolutionVersion& GetSolutionVersion() const{ return m_solutionVersion; }

    /**
     * <p>The solution version.</p>
     */
    inline void SetSolutionVersion(const SolutionVersion& value) { m_solutionVersion = value; }

    /**
     * <p>The solution version.</p>
     */
    inline void SetSolutionVersion(SolutionVersion&& value) { m_solutionVersion = std::move(value); }

    /**
     * <p>The solution version.</p>
     */
    inline DescribeSolutionVersionResult& WithSolutionVersion(const SolutionVersion& value) { SetSolutionVersion(value); return *this;}

    /**
     * <p>The solution version.</p>
     */
    inline DescribeSolutionVersionResult& WithSolutionVersion(SolutionVersion&& value) { SetSolutionVersion(std::move(value)); return *this;}

  private:

    SolutionVersion m_solutionVersion;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
