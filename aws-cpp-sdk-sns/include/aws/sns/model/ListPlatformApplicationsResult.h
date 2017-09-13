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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sns/model/ResponseMetadata.h>
#include <aws/sns/model/PlatformApplication.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SNS
{
namespace Model
{
  /**
   * <p>Response for ListPlatformApplications action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListPlatformApplicationsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_SNS_API ListPlatformApplicationsResult
  {
  public:
    ListPlatformApplicationsResult();
    ListPlatformApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListPlatformApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Platform applications returned when calling ListPlatformApplications
     * action.</p>
     */
    inline const Aws::Vector<PlatformApplication>& GetPlatformApplications() const{ return m_platformApplications; }

    /**
     * <p>Platform applications returned when calling ListPlatformApplications
     * action.</p>
     */
    inline void SetPlatformApplications(const Aws::Vector<PlatformApplication>& value) { m_platformApplications = value; }

    /**
     * <p>Platform applications returned when calling ListPlatformApplications
     * action.</p>
     */
    inline void SetPlatformApplications(Aws::Vector<PlatformApplication>&& value) { m_platformApplications = std::move(value); }

    /**
     * <p>Platform applications returned when calling ListPlatformApplications
     * action.</p>
     */
    inline ListPlatformApplicationsResult& WithPlatformApplications(const Aws::Vector<PlatformApplication>& value) { SetPlatformApplications(value); return *this;}

    /**
     * <p>Platform applications returned when calling ListPlatformApplications
     * action.</p>
     */
    inline ListPlatformApplicationsResult& WithPlatformApplications(Aws::Vector<PlatformApplication>&& value) { SetPlatformApplications(std::move(value)); return *this;}

    /**
     * <p>Platform applications returned when calling ListPlatformApplications
     * action.</p>
     */
    inline ListPlatformApplicationsResult& AddPlatformApplications(const PlatformApplication& value) { m_platformApplications.push_back(value); return *this; }

    /**
     * <p>Platform applications returned when calling ListPlatformApplications
     * action.</p>
     */
    inline ListPlatformApplicationsResult& AddPlatformApplications(PlatformApplication&& value) { m_platformApplications.push_back(std::move(value)); return *this; }


    /**
     * <p>NextToken string is returned when calling ListPlatformApplications action if
     * additional records are available after the first page results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>NextToken string is returned when calling ListPlatformApplications action if
     * additional records are available after the first page results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>NextToken string is returned when calling ListPlatformApplications action if
     * additional records are available after the first page results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>NextToken string is returned when calling ListPlatformApplications action if
     * additional records are available after the first page results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>NextToken string is returned when calling ListPlatformApplications action if
     * additional records are available after the first page results.</p>
     */
    inline ListPlatformApplicationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>NextToken string is returned when calling ListPlatformApplications action if
     * additional records are available after the first page results.</p>
     */
    inline ListPlatformApplicationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>NextToken string is returned when calling ListPlatformApplications action if
     * additional records are available after the first page results.</p>
     */
    inline ListPlatformApplicationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListPlatformApplicationsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListPlatformApplicationsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<PlatformApplication> m_platformApplications;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
