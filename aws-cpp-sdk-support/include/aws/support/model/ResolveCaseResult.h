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
#include <aws/support/Support_EXPORTS.h>
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
namespace Support
{
namespace Model
{
  /**
   * <p>The status of the case returned by the <a>ResolveCase</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/ResolveCaseResponse">AWS
   * API Reference</a></p>
   */
  class AWS_SUPPORT_API ResolveCaseResult
  {
  public:
    ResolveCaseResult();
    ResolveCaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ResolveCaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the case when the <a>ResolveCase</a> request was sent.</p>
     */
    inline const Aws::String& GetInitialCaseStatus() const{ return m_initialCaseStatus; }

    /**
     * <p>The status of the case when the <a>ResolveCase</a> request was sent.</p>
     */
    inline void SetInitialCaseStatus(const Aws::String& value) { m_initialCaseStatus = value; }

    /**
     * <p>The status of the case when the <a>ResolveCase</a> request was sent.</p>
     */
    inline void SetInitialCaseStatus(Aws::String&& value) { m_initialCaseStatus = std::move(value); }

    /**
     * <p>The status of the case when the <a>ResolveCase</a> request was sent.</p>
     */
    inline void SetInitialCaseStatus(const char* value) { m_initialCaseStatus.assign(value); }

    /**
     * <p>The status of the case when the <a>ResolveCase</a> request was sent.</p>
     */
    inline ResolveCaseResult& WithInitialCaseStatus(const Aws::String& value) { SetInitialCaseStatus(value); return *this;}

    /**
     * <p>The status of the case when the <a>ResolveCase</a> request was sent.</p>
     */
    inline ResolveCaseResult& WithInitialCaseStatus(Aws::String&& value) { SetInitialCaseStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the case when the <a>ResolveCase</a> request was sent.</p>
     */
    inline ResolveCaseResult& WithInitialCaseStatus(const char* value) { SetInitialCaseStatus(value); return *this;}


    /**
     * <p>The status of the case after the <a>ResolveCase</a> request was
     * processed.</p>
     */
    inline const Aws::String& GetFinalCaseStatus() const{ return m_finalCaseStatus; }

    /**
     * <p>The status of the case after the <a>ResolveCase</a> request was
     * processed.</p>
     */
    inline void SetFinalCaseStatus(const Aws::String& value) { m_finalCaseStatus = value; }

    /**
     * <p>The status of the case after the <a>ResolveCase</a> request was
     * processed.</p>
     */
    inline void SetFinalCaseStatus(Aws::String&& value) { m_finalCaseStatus = std::move(value); }

    /**
     * <p>The status of the case after the <a>ResolveCase</a> request was
     * processed.</p>
     */
    inline void SetFinalCaseStatus(const char* value) { m_finalCaseStatus.assign(value); }

    /**
     * <p>The status of the case after the <a>ResolveCase</a> request was
     * processed.</p>
     */
    inline ResolveCaseResult& WithFinalCaseStatus(const Aws::String& value) { SetFinalCaseStatus(value); return *this;}

    /**
     * <p>The status of the case after the <a>ResolveCase</a> request was
     * processed.</p>
     */
    inline ResolveCaseResult& WithFinalCaseStatus(Aws::String&& value) { SetFinalCaseStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the case after the <a>ResolveCase</a> request was
     * processed.</p>
     */
    inline ResolveCaseResult& WithFinalCaseStatus(const char* value) { SetFinalCaseStatus(value); return *this;}

  private:

    Aws::String m_initialCaseStatus;

    Aws::String m_finalCaseStatus;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
