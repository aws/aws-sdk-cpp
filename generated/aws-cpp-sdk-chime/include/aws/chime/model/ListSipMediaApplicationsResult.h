﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/SipMediaApplication.h>
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
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API ListSipMediaApplicationsResult
  {
  public:
    ListSipMediaApplicationsResult();
    ListSipMediaApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListSipMediaApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of SIP media applications and application details.</p>
     */
    inline const Aws::Vector<SipMediaApplication>& GetSipMediaApplications() const{ return m_sipMediaApplications; }

    /**
     * <p>List of SIP media applications and application details.</p>
     */
    inline void SetSipMediaApplications(const Aws::Vector<SipMediaApplication>& value) { m_sipMediaApplications = value; }

    /**
     * <p>List of SIP media applications and application details.</p>
     */
    inline void SetSipMediaApplications(Aws::Vector<SipMediaApplication>&& value) { m_sipMediaApplications = std::move(value); }

    /**
     * <p>List of SIP media applications and application details.</p>
     */
    inline ListSipMediaApplicationsResult& WithSipMediaApplications(const Aws::Vector<SipMediaApplication>& value) { SetSipMediaApplications(value); return *this;}

    /**
     * <p>List of SIP media applications and application details.</p>
     */
    inline ListSipMediaApplicationsResult& WithSipMediaApplications(Aws::Vector<SipMediaApplication>&& value) { SetSipMediaApplications(std::move(value)); return *this;}

    /**
     * <p>List of SIP media applications and application details.</p>
     */
    inline ListSipMediaApplicationsResult& AddSipMediaApplications(const SipMediaApplication& value) { m_sipMediaApplications.push_back(value); return *this; }

    /**
     * <p>List of SIP media applications and application details.</p>
     */
    inline ListSipMediaApplicationsResult& AddSipMediaApplications(SipMediaApplication&& value) { m_sipMediaApplications.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListSipMediaApplicationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListSipMediaApplicationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListSipMediaApplicationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SipMediaApplication> m_sipMediaApplications;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
