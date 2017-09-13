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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/Trust.h>
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
namespace DirectoryService
{
namespace Model
{
  /**
   * <p>The result of a DescribeTrust request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeTrustsResult">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API DescribeTrustsResult
  {
  public:
    DescribeTrustsResult();
    DescribeTrustsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTrustsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of Trust objects that were retrieved.</p> <p>It is possible that
     * this list contains less than the number of items specified in the <i>Limit</i>
     * member of the request. This occurs if there are less than the requested number
     * of items left to retrieve, or if the limitations of the operation have been
     * exceeded.</p>
     */
    inline const Aws::Vector<Trust>& GetTrusts() const{ return m_trusts; }

    /**
     * <p>The list of Trust objects that were retrieved.</p> <p>It is possible that
     * this list contains less than the number of items specified in the <i>Limit</i>
     * member of the request. This occurs if there are less than the requested number
     * of items left to retrieve, or if the limitations of the operation have been
     * exceeded.</p>
     */
    inline void SetTrusts(const Aws::Vector<Trust>& value) { m_trusts = value; }

    /**
     * <p>The list of Trust objects that were retrieved.</p> <p>It is possible that
     * this list contains less than the number of items specified in the <i>Limit</i>
     * member of the request. This occurs if there are less than the requested number
     * of items left to retrieve, or if the limitations of the operation have been
     * exceeded.</p>
     */
    inline void SetTrusts(Aws::Vector<Trust>&& value) { m_trusts = std::move(value); }

    /**
     * <p>The list of Trust objects that were retrieved.</p> <p>It is possible that
     * this list contains less than the number of items specified in the <i>Limit</i>
     * member of the request. This occurs if there are less than the requested number
     * of items left to retrieve, or if the limitations of the operation have been
     * exceeded.</p>
     */
    inline DescribeTrustsResult& WithTrusts(const Aws::Vector<Trust>& value) { SetTrusts(value); return *this;}

    /**
     * <p>The list of Trust objects that were retrieved.</p> <p>It is possible that
     * this list contains less than the number of items specified in the <i>Limit</i>
     * member of the request. This occurs if there are less than the requested number
     * of items left to retrieve, or if the limitations of the operation have been
     * exceeded.</p>
     */
    inline DescribeTrustsResult& WithTrusts(Aws::Vector<Trust>&& value) { SetTrusts(std::move(value)); return *this;}

    /**
     * <p>The list of Trust objects that were retrieved.</p> <p>It is possible that
     * this list contains less than the number of items specified in the <i>Limit</i>
     * member of the request. This occurs if there are less than the requested number
     * of items left to retrieve, or if the limitations of the operation have been
     * exceeded.</p>
     */
    inline DescribeTrustsResult& AddTrusts(const Trust& value) { m_trusts.push_back(value); return *this; }

    /**
     * <p>The list of Trust objects that were retrieved.</p> <p>It is possible that
     * this list contains less than the number of items specified in the <i>Limit</i>
     * member of the request. This occurs if there are less than the requested number
     * of items left to retrieve, or if the limitations of the operation have been
     * exceeded.</p>
     */
    inline DescribeTrustsResult& AddTrusts(Trust&& value) { m_trusts.push_back(std::move(value)); return *this; }


    /**
     * <p>If not null, more results are available. Pass this value for the
     * <i>NextToken</i> parameter in a subsequent call to <a>DescribeTrusts</a> to
     * retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <i>NextToken</i> parameter in a subsequent call to <a>DescribeTrusts</a> to
     * retrieve the next set of items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <i>NextToken</i> parameter in a subsequent call to <a>DescribeTrusts</a> to
     * retrieve the next set of items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <i>NextToken</i> parameter in a subsequent call to <a>DescribeTrusts</a> to
     * retrieve the next set of items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <i>NextToken</i> parameter in a subsequent call to <a>DescribeTrusts</a> to
     * retrieve the next set of items.</p>
     */
    inline DescribeTrustsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <i>NextToken</i> parameter in a subsequent call to <a>DescribeTrusts</a> to
     * retrieve the next set of items.</p>
     */
    inline DescribeTrustsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <i>NextToken</i> parameter in a subsequent call to <a>DescribeTrusts</a> to
     * retrieve the next set of items.</p>
     */
    inline DescribeTrustsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Trust> m_trusts;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
