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
#include <aws/inspector/model/Finding.h>

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
  class AWS_INSPECTOR_API DescribeFindingResult
  {
  public:
    DescribeFindingResult();
    DescribeFindingResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeFindingResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Information about the finding.</p>
     */
    inline const Finding& GetFinding() const{ return m_finding; }

    /**
     * <p>Information about the finding.</p>
     */
    inline void SetFinding(const Finding& value) { m_finding = value; }

    /**
     * <p>Information about the finding.</p>
     */
    inline void SetFinding(Finding&& value) { m_finding = value; }

    /**
     * <p>Information about the finding.</p>
     */
    inline DescribeFindingResult& WithFinding(const Finding& value) { SetFinding(value); return *this;}

    /**
     * <p>Information about the finding.</p>
     */
    inline DescribeFindingResult& WithFinding(Finding&& value) { SetFinding(value); return *this;}

  private:
    Finding m_finding;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
