﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/SidewalkAccountInfoWithFingerprint.h>
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
namespace IoTWireless
{
namespace Model
{
  class ListPartnerAccountsResult
  {
  public:
    AWS_IOTWIRELESS_API ListPartnerAccountsResult();
    AWS_IOTWIRELESS_API ListPartnerAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListPartnerAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPartnerAccountsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPartnerAccountsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPartnerAccountsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline const Aws::Vector<SidewalkAccountInfoWithFingerprint>& GetSidewalk() const{ return m_sidewalk; }
    inline void SetSidewalk(const Aws::Vector<SidewalkAccountInfoWithFingerprint>& value) { m_sidewalk = value; }
    inline void SetSidewalk(Aws::Vector<SidewalkAccountInfoWithFingerprint>&& value) { m_sidewalk = std::move(value); }
    inline ListPartnerAccountsResult& WithSidewalk(const Aws::Vector<SidewalkAccountInfoWithFingerprint>& value) { SetSidewalk(value); return *this;}
    inline ListPartnerAccountsResult& WithSidewalk(Aws::Vector<SidewalkAccountInfoWithFingerprint>&& value) { SetSidewalk(std::move(value)); return *this;}
    inline ListPartnerAccountsResult& AddSidewalk(const SidewalkAccountInfoWithFingerprint& value) { m_sidewalk.push_back(value); return *this; }
    inline ListPartnerAccountsResult& AddSidewalk(SidewalkAccountInfoWithFingerprint&& value) { m_sidewalk.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPartnerAccountsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPartnerAccountsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPartnerAccountsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<SidewalkAccountInfoWithFingerprint> m_sidewalk;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
