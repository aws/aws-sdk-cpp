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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <aws/iam/model/SummaryKeyType.h>
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
namespace IAM
{
namespace Model
{
  /**
   * <p>Contains the response to a successful <a>GetAccountSummary</a> request.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccountSummaryResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API GetAccountSummaryResult
  {
  public:
    GetAccountSummaryResult();
    GetAccountSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetAccountSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A set of key–value pairs containing information about IAM entity usage and
     * IAM quotas.</p>
     */
    inline const Aws::Map<SummaryKeyType, int>& GetSummaryMap() const{ return m_summaryMap; }

    /**
     * <p>A set of key–value pairs containing information about IAM entity usage and
     * IAM quotas.</p>
     */
    inline void SetSummaryMap(const Aws::Map<SummaryKeyType, int>& value) { m_summaryMap = value; }

    /**
     * <p>A set of key–value pairs containing information about IAM entity usage and
     * IAM quotas.</p>
     */
    inline void SetSummaryMap(Aws::Map<SummaryKeyType, int>&& value) { m_summaryMap = std::move(value); }

    /**
     * <p>A set of key–value pairs containing information about IAM entity usage and
     * IAM quotas.</p>
     */
    inline GetAccountSummaryResult& WithSummaryMap(const Aws::Map<SummaryKeyType, int>& value) { SetSummaryMap(value); return *this;}

    /**
     * <p>A set of key–value pairs containing information about IAM entity usage and
     * IAM quotas.</p>
     */
    inline GetAccountSummaryResult& WithSummaryMap(Aws::Map<SummaryKeyType, int>&& value) { SetSummaryMap(std::move(value)); return *this;}

    /**
     * <p>A set of key–value pairs containing information about IAM entity usage and
     * IAM quotas.</p>
     */
    inline GetAccountSummaryResult& AddSummaryMap(const SummaryKeyType& key, int value) { m_summaryMap.emplace(key, value); return *this; }

    /**
     * <p>A set of key–value pairs containing information about IAM entity usage and
     * IAM quotas.</p>
     */
    inline GetAccountSummaryResult& AddSummaryMap(SummaryKeyType&& key, int value) { m_summaryMap.emplace(std::move(key), value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetAccountSummaryResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetAccountSummaryResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Map<SummaryKeyType, int> m_summaryMap;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
