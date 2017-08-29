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
#include <aws/ds/model/DomainController.h>
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
  class AWS_DIRECTORYSERVICE_API DescribeDomainControllersResult
  {
  public:
    DescribeDomainControllersResult();
    DescribeDomainControllersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDomainControllersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of the <a>DomainController</a> objects that were retrieved.</p>
     */
    inline const Aws::Vector<DomainController>& GetDomainControllers() const{ return m_domainControllers; }

    /**
     * <p>List of the <a>DomainController</a> objects that were retrieved.</p>
     */
    inline void SetDomainControllers(const Aws::Vector<DomainController>& value) { m_domainControllers = value; }

    /**
     * <p>List of the <a>DomainController</a> objects that were retrieved.</p>
     */
    inline void SetDomainControllers(Aws::Vector<DomainController>&& value) { m_domainControllers = std::move(value); }

    /**
     * <p>List of the <a>DomainController</a> objects that were retrieved.</p>
     */
    inline DescribeDomainControllersResult& WithDomainControllers(const Aws::Vector<DomainController>& value) { SetDomainControllers(value); return *this;}

    /**
     * <p>List of the <a>DomainController</a> objects that were retrieved.</p>
     */
    inline DescribeDomainControllersResult& WithDomainControllers(Aws::Vector<DomainController>&& value) { SetDomainControllers(std::move(value)); return *this;}

    /**
     * <p>List of the <a>DomainController</a> objects that were retrieved.</p>
     */
    inline DescribeDomainControllersResult& AddDomainControllers(const DomainController& value) { m_domainControllers.push_back(value); return *this; }

    /**
     * <p>List of the <a>DomainController</a> objects that were retrieved.</p>
     */
    inline DescribeDomainControllersResult& AddDomainControllers(DomainController&& value) { m_domainControllers.push_back(std::move(value)); return *this; }


    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeDomainControllers</a> retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeDomainControllers</a> retrieve the next set of items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeDomainControllers</a> retrieve the next set of items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeDomainControllers</a> retrieve the next set of items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeDomainControllers</a> retrieve the next set of items.</p>
     */
    inline DescribeDomainControllersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeDomainControllers</a> retrieve the next set of items.</p>
     */
    inline DescribeDomainControllersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeDomainControllers</a> retrieve the next set of items.</p>
     */
    inline DescribeDomainControllersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DomainController> m_domainControllers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
