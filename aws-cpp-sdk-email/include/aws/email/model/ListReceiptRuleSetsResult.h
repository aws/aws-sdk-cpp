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
   * <p>A list of receipt rule sets that exist under your AWS account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListReceiptRuleSetsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API ListReceiptRuleSetsResult
  {
  public:
    ListReceiptRuleSetsResult();
    ListReceiptRuleSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListReceiptRuleSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The metadata for the currently active receipt rule set. The metadata consists
     * of the rule set name and the timestamp of when the rule set was created.</p>
     */
    inline const Aws::Vector<ReceiptRuleSetMetadata>& GetRuleSets() const{ return m_ruleSets; }

    /**
     * <p>The metadata for the currently active receipt rule set. The metadata consists
     * of the rule set name and the timestamp of when the rule set was created.</p>
     */
    inline void SetRuleSets(const Aws::Vector<ReceiptRuleSetMetadata>& value) { m_ruleSets = value; }

    /**
     * <p>The metadata for the currently active receipt rule set. The metadata consists
     * of the rule set name and the timestamp of when the rule set was created.</p>
     */
    inline void SetRuleSets(Aws::Vector<ReceiptRuleSetMetadata>&& value) { m_ruleSets = std::move(value); }

    /**
     * <p>The metadata for the currently active receipt rule set. The metadata consists
     * of the rule set name and the timestamp of when the rule set was created.</p>
     */
    inline ListReceiptRuleSetsResult& WithRuleSets(const Aws::Vector<ReceiptRuleSetMetadata>& value) { SetRuleSets(value); return *this;}

    /**
     * <p>The metadata for the currently active receipt rule set. The metadata consists
     * of the rule set name and the timestamp of when the rule set was created.</p>
     */
    inline ListReceiptRuleSetsResult& WithRuleSets(Aws::Vector<ReceiptRuleSetMetadata>&& value) { SetRuleSets(std::move(value)); return *this;}

    /**
     * <p>The metadata for the currently active receipt rule set. The metadata consists
     * of the rule set name and the timestamp of when the rule set was created.</p>
     */
    inline ListReceiptRuleSetsResult& AddRuleSets(const ReceiptRuleSetMetadata& value) { m_ruleSets.push_back(value); return *this; }

    /**
     * <p>The metadata for the currently active receipt rule set. The metadata consists
     * of the rule set name and the timestamp of when the rule set was created.</p>
     */
    inline ListReceiptRuleSetsResult& AddRuleSets(ReceiptRuleSetMetadata&& value) { m_ruleSets.push_back(std::move(value)); return *this; }


    /**
     * <p>A token indicating that there are additional receipt rule sets available to
     * be listed. Pass this token to successive calls of
     * <code>ListReceiptRuleSets</code> to retrieve up to 100 receipt rule sets at a
     * time.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token indicating that there are additional receipt rule sets available to
     * be listed. Pass this token to successive calls of
     * <code>ListReceiptRuleSets</code> to retrieve up to 100 receipt rule sets at a
     * time.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token indicating that there are additional receipt rule sets available to
     * be listed. Pass this token to successive calls of
     * <code>ListReceiptRuleSets</code> to retrieve up to 100 receipt rule sets at a
     * time.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token indicating that there are additional receipt rule sets available to
     * be listed. Pass this token to successive calls of
     * <code>ListReceiptRuleSets</code> to retrieve up to 100 receipt rule sets at a
     * time.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token indicating that there are additional receipt rule sets available to
     * be listed. Pass this token to successive calls of
     * <code>ListReceiptRuleSets</code> to retrieve up to 100 receipt rule sets at a
     * time.</p>
     */
    inline ListReceiptRuleSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token indicating that there are additional receipt rule sets available to
     * be listed. Pass this token to successive calls of
     * <code>ListReceiptRuleSets</code> to retrieve up to 100 receipt rule sets at a
     * time.</p>
     */
    inline ListReceiptRuleSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token indicating that there are additional receipt rule sets available to
     * be listed. Pass this token to successive calls of
     * <code>ListReceiptRuleSets</code> to retrieve up to 100 receipt rule sets at a
     * time.</p>
     */
    inline ListReceiptRuleSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListReceiptRuleSetsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListReceiptRuleSetsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ReceiptRuleSetMetadata> m_ruleSets;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
