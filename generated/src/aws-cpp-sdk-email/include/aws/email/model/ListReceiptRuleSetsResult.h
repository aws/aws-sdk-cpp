/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/ResponseMetadata.h>
#include <aws/email/model/ReceiptRuleSetMetadata.h>
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
namespace SES
{
namespace Model
{
  /**
   * <p>A list of receipt rule sets that exist under your Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListReceiptRuleSetsResponse">AWS
   * API Reference</a></p>
   */
  class ListReceiptRuleSetsResult
  {
  public:
    AWS_SES_API ListReceiptRuleSetsResult() = default;
    AWS_SES_API ListReceiptRuleSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API ListReceiptRuleSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The metadata for the currently active receipt rule set. The metadata consists
     * of the rule set name and the timestamp of when the rule set was created.</p>
     */
    inline const Aws::Vector<ReceiptRuleSetMetadata>& GetRuleSets() const { return m_ruleSets; }
    template<typename RuleSetsT = Aws::Vector<ReceiptRuleSetMetadata>>
    void SetRuleSets(RuleSetsT&& value) { m_ruleSetsHasBeenSet = true; m_ruleSets = std::forward<RuleSetsT>(value); }
    template<typename RuleSetsT = Aws::Vector<ReceiptRuleSetMetadata>>
    ListReceiptRuleSetsResult& WithRuleSets(RuleSetsT&& value) { SetRuleSets(std::forward<RuleSetsT>(value)); return *this;}
    template<typename RuleSetsT = ReceiptRuleSetMetadata>
    ListReceiptRuleSetsResult& AddRuleSets(RuleSetsT&& value) { m_ruleSetsHasBeenSet = true; m_ruleSets.emplace_back(std::forward<RuleSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token indicating that there are additional receipt rule sets available to
     * be listed. Pass this token to successive calls of
     * <code>ListReceiptRuleSets</code> to retrieve up to 100 receipt rule sets at a
     * time.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReceiptRuleSetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListReceiptRuleSetsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ReceiptRuleSetMetadata> m_ruleSets;
    bool m_ruleSetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
