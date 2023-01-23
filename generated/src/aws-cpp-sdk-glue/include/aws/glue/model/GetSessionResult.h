/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/Session.h>
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
namespace Glue
{
namespace Model
{
  class GetSessionResult
  {
  public:
    AWS_GLUE_API GetSessionResult();
    AWS_GLUE_API GetSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The session object is returned in the response.</p>
     */
    inline const Session& GetSession() const{ return m_session; }

    /**
     * <p>The session object is returned in the response.</p>
     */
    inline void SetSession(const Session& value) { m_session = value; }

    /**
     * <p>The session object is returned in the response.</p>
     */
    inline void SetSession(Session&& value) { m_session = std::move(value); }

    /**
     * <p>The session object is returned in the response.</p>
     */
    inline GetSessionResult& WithSession(const Session& value) { SetSession(value); return *this;}

    /**
     * <p>The session object is returned in the response.</p>
     */
    inline GetSessionResult& WithSession(Session&& value) { SetSession(std::move(value)); return *this;}

  private:

    Session m_session;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
