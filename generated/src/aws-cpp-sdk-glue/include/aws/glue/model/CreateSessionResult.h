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
  class CreateSessionResult
  {
  public:
    AWS_GLUE_API CreateSessionResult();
    AWS_GLUE_API CreateSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API CreateSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the session object in the response.</p>
     */
    inline const Session& GetSession() const{ return m_session; }

    /**
     * <p>Returns the session object in the response.</p>
     */
    inline void SetSession(const Session& value) { m_session = value; }

    /**
     * <p>Returns the session object in the response.</p>
     */
    inline void SetSession(Session&& value) { m_session = std::move(value); }

    /**
     * <p>Returns the session object in the response.</p>
     */
    inline CreateSessionResult& WithSession(const Session& value) { SetSession(value); return *this;}

    /**
     * <p>Returns the session object in the response.</p>
     */
    inline CreateSessionResult& WithSession(Session&& value) { SetSession(std::move(value)); return *this;}

  private:

    Session m_session;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
