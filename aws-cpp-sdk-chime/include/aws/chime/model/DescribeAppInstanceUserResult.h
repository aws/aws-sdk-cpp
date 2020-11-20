/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/AppInstanceUser.h>
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
  class AWS_CHIME_API DescribeAppInstanceUserResult
  {
  public:
    DescribeAppInstanceUserResult();
    DescribeAppInstanceUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAppInstanceUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the app instance user.</p>
     */
    inline const AppInstanceUser& GetAppInstanceUser() const{ return m_appInstanceUser; }

    /**
     * <p>The name of the app instance user.</p>
     */
    inline void SetAppInstanceUser(const AppInstanceUser& value) { m_appInstanceUser = value; }

    /**
     * <p>The name of the app instance user.</p>
     */
    inline void SetAppInstanceUser(AppInstanceUser&& value) { m_appInstanceUser = std::move(value); }

    /**
     * <p>The name of the app instance user.</p>
     */
    inline DescribeAppInstanceUserResult& WithAppInstanceUser(const AppInstanceUser& value) { SetAppInstanceUser(value); return *this;}

    /**
     * <p>The name of the app instance user.</p>
     */
    inline DescribeAppInstanceUserResult& WithAppInstanceUser(AppInstanceUser&& value) { SetAppInstanceUser(std::move(value)); return *this;}

  private:

    AppInstanceUser m_appInstanceUser;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
