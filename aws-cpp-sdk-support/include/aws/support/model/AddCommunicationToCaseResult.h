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
   * <p>The result of the <a>AddCommunicationToCase</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/AddCommunicationToCaseResponse">AWS
   * API Reference</a></p>
   */
  class AWS_SUPPORT_API AddCommunicationToCaseResult
  {
  public:
    AddCommunicationToCaseResult();
    AddCommunicationToCaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AddCommunicationToCaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>True if <a>AddCommunicationToCase</a> succeeds. Otherwise, returns an
     * error.</p>
     */
    inline bool GetResult() const{ return m_result; }

    /**
     * <p>True if <a>AddCommunicationToCase</a> succeeds. Otherwise, returns an
     * error.</p>
     */
    inline void SetResult(bool value) { m_result = value; }

    /**
     * <p>True if <a>AddCommunicationToCase</a> succeeds. Otherwise, returns an
     * error.</p>
     */
    inline AddCommunicationToCaseResult& WithResult(bool value) { SetResult(value); return *this;}

  private:

    bool m_result;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
