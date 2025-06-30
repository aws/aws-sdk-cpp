/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Contains the response to a successful <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetAccountSummary.html">GetAccountSummary</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccountSummaryResponse">AWS
   * API Reference</a></p>
   */
  class GetAccountSummaryResult
  {
  public:
    AWS_IAM_API GetAccountSummaryResult() = default;
    AWS_IAM_API GetAccountSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API GetAccountSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A set of key–value pairs containing information about IAM entity usage and
     * IAM quotas.</p>
     */
    inline const Aws::Map<SummaryKeyType, int>& GetSummaryMap() const { return m_summaryMap; }
    template<typename SummaryMapT = Aws::Map<SummaryKeyType, int>>
    void SetSummaryMap(SummaryMapT&& value) { m_summaryMapHasBeenSet = true; m_summaryMap = std::forward<SummaryMapT>(value); }
    template<typename SummaryMapT = Aws::Map<SummaryKeyType, int>>
    GetAccountSummaryResult& WithSummaryMap(SummaryMapT&& value) { SetSummaryMap(std::forward<SummaryMapT>(value)); return *this;}
    inline GetAccountSummaryResult& AddSummaryMap(SummaryKeyType key, int value) {
      m_summaryMapHasBeenSet = true; m_summaryMap.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetAccountSummaryResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<SummaryKeyType, int> m_summaryMap;
    bool m_summaryMapHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
