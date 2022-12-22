/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/CheckDetail.h>
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
namespace WellArchitected
{
namespace Model
{
  class ListCheckDetailsResult
  {
  public:
    AWS_WELLARCHITECTED_API ListCheckDetailsResult();
    AWS_WELLARCHITECTED_API ListCheckDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListCheckDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details about the Trusted Advisor checks related to the Well-Architected
     * best practice.</p>
     */
    inline const Aws::Vector<CheckDetail>& GetCheckDetails() const{ return m_checkDetails; }

    /**
     * <p>The details about the Trusted Advisor checks related to the Well-Architected
     * best practice.</p>
     */
    inline void SetCheckDetails(const Aws::Vector<CheckDetail>& value) { m_checkDetails = value; }

    /**
     * <p>The details about the Trusted Advisor checks related to the Well-Architected
     * best practice.</p>
     */
    inline void SetCheckDetails(Aws::Vector<CheckDetail>&& value) { m_checkDetails = std::move(value); }

    /**
     * <p>The details about the Trusted Advisor checks related to the Well-Architected
     * best practice.</p>
     */
    inline ListCheckDetailsResult& WithCheckDetails(const Aws::Vector<CheckDetail>& value) { SetCheckDetails(value); return *this;}

    /**
     * <p>The details about the Trusted Advisor checks related to the Well-Architected
     * best practice.</p>
     */
    inline ListCheckDetailsResult& WithCheckDetails(Aws::Vector<CheckDetail>&& value) { SetCheckDetails(std::move(value)); return *this;}

    /**
     * <p>The details about the Trusted Advisor checks related to the Well-Architected
     * best practice.</p>
     */
    inline ListCheckDetailsResult& AddCheckDetails(const CheckDetail& value) { m_checkDetails.push_back(value); return *this; }

    /**
     * <p>The details about the Trusted Advisor checks related to the Well-Architected
     * best practice.</p>
     */
    inline ListCheckDetailsResult& AddCheckDetails(CheckDetail&& value) { m_checkDetails.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListCheckDetailsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListCheckDetailsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListCheckDetailsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CheckDetail> m_checkDetails;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
