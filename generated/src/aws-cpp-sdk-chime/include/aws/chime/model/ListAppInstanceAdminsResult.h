/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/AppInstanceAdminSummary.h>
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
  class ListAppInstanceAdminsResult
  {
  public:
    AWS_CHIME_API ListAppInstanceAdminsResult();
    AWS_CHIME_API ListAppInstanceAdminsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API ListAppInstanceAdminsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const{ return m_appInstanceArn; }

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceArn(const Aws::String& value) { m_appInstanceArn = value; }

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceArn(Aws::String&& value) { m_appInstanceArn = std::move(value); }

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceArn(const char* value) { m_appInstanceArn.assign(value); }

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline ListAppInstanceAdminsResult& WithAppInstanceArn(const Aws::String& value) { SetAppInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline ListAppInstanceAdminsResult& WithAppInstanceArn(Aws::String&& value) { SetAppInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline ListAppInstanceAdminsResult& WithAppInstanceArn(const char* value) { SetAppInstanceArn(value); return *this;}


    /**
     * <p>The information for each administrator.</p>
     */
    inline const Aws::Vector<AppInstanceAdminSummary>& GetAppInstanceAdmins() const{ return m_appInstanceAdmins; }

    /**
     * <p>The information for each administrator.</p>
     */
    inline void SetAppInstanceAdmins(const Aws::Vector<AppInstanceAdminSummary>& value) { m_appInstanceAdmins = value; }

    /**
     * <p>The information for each administrator.</p>
     */
    inline void SetAppInstanceAdmins(Aws::Vector<AppInstanceAdminSummary>&& value) { m_appInstanceAdmins = std::move(value); }

    /**
     * <p>The information for each administrator.</p>
     */
    inline ListAppInstanceAdminsResult& WithAppInstanceAdmins(const Aws::Vector<AppInstanceAdminSummary>& value) { SetAppInstanceAdmins(value); return *this;}

    /**
     * <p>The information for each administrator.</p>
     */
    inline ListAppInstanceAdminsResult& WithAppInstanceAdmins(Aws::Vector<AppInstanceAdminSummary>&& value) { SetAppInstanceAdmins(std::move(value)); return *this;}

    /**
     * <p>The information for each administrator.</p>
     */
    inline ListAppInstanceAdminsResult& AddAppInstanceAdmins(const AppInstanceAdminSummary& value) { m_appInstanceAdmins.push_back(value); return *this; }

    /**
     * <p>The information for each administrator.</p>
     */
    inline ListAppInstanceAdminsResult& AddAppInstanceAdmins(AppInstanceAdminSummary&& value) { m_appInstanceAdmins.push_back(std::move(value)); return *this; }


    /**
     * <p>The token returned from previous API requests until the number of
     * administrators is reached.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned from previous API requests until the number of
     * administrators is reached.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token returned from previous API requests until the number of
     * administrators is reached.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token returned from previous API requests until the number of
     * administrators is reached.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token returned from previous API requests until the number of
     * administrators is reached.</p>
     */
    inline ListAppInstanceAdminsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned from previous API requests until the number of
     * administrators is reached.</p>
     */
    inline ListAppInstanceAdminsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned from previous API requests until the number of
     * administrators is reached.</p>
     */
    inline ListAppInstanceAdminsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_appInstanceArn;

    Aws::Vector<AppInstanceAdminSummary> m_appInstanceAdmins;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
