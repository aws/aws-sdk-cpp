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
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm/model/CertificateSummary.h>
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
namespace ACM
{
namespace Model
{
  class AWS_ACM_API ListCertificatesResult
  {
  public:
    ListCertificatesResult();
    ListCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When the list is truncated, this value is present and contains the value to
     * use for the <code>NextToken</code> parameter in a subsequent pagination
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When the list is truncated, this value is present and contains the value to
     * use for the <code>NextToken</code> parameter in a subsequent pagination
     * request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When the list is truncated, this value is present and contains the value to
     * use for the <code>NextToken</code> parameter in a subsequent pagination
     * request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When the list is truncated, this value is present and contains the value to
     * use for the <code>NextToken</code> parameter in a subsequent pagination
     * request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When the list is truncated, this value is present and contains the value to
     * use for the <code>NextToken</code> parameter in a subsequent pagination
     * request.</p>
     */
    inline ListCertificatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When the list is truncated, this value is present and contains the value to
     * use for the <code>NextToken</code> parameter in a subsequent pagination
     * request.</p>
     */
    inline ListCertificatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When the list is truncated, this value is present and contains the value to
     * use for the <code>NextToken</code> parameter in a subsequent pagination
     * request.</p>
     */
    inline ListCertificatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of ACM certificates.</p>
     */
    inline const Aws::Vector<CertificateSummary>& GetCertificateSummaryList() const{ return m_certificateSummaryList; }

    /**
     * <p>A list of ACM certificates.</p>
     */
    inline void SetCertificateSummaryList(const Aws::Vector<CertificateSummary>& value) { m_certificateSummaryList = value; }

    /**
     * <p>A list of ACM certificates.</p>
     */
    inline void SetCertificateSummaryList(Aws::Vector<CertificateSummary>&& value) { m_certificateSummaryList = std::move(value); }

    /**
     * <p>A list of ACM certificates.</p>
     */
    inline ListCertificatesResult& WithCertificateSummaryList(const Aws::Vector<CertificateSummary>& value) { SetCertificateSummaryList(value); return *this;}

    /**
     * <p>A list of ACM certificates.</p>
     */
    inline ListCertificatesResult& WithCertificateSummaryList(Aws::Vector<CertificateSummary>&& value) { SetCertificateSummaryList(std::move(value)); return *this;}

    /**
     * <p>A list of ACM certificates.</p>
     */
    inline ListCertificatesResult& AddCertificateSummaryList(const CertificateSummary& value) { m_certificateSummaryList.push_back(value); return *this; }

    /**
     * <p>A list of ACM certificates.</p>
     */
    inline ListCertificatesResult& AddCertificateSummaryList(CertificateSummary&& value) { m_certificateSummaryList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<CertificateSummary> m_certificateSummaryList;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
