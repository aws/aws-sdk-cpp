/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GlueDataBrew
{
namespace Model
{
  class StartProjectSessionResult
  {
  public:
    AWS_GLUEDATABREW_API StartProjectSessionResult();
    AWS_GLUEDATABREW_API StartProjectSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUEDATABREW_API StartProjectSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the project to be acted upon.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the project to be acted upon.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the project to be acted upon.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the project to be acted upon.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the project to be acted upon.</p>
     */
    inline StartProjectSessionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the project to be acted upon.</p>
     */
    inline StartProjectSessionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the project to be acted upon.</p>
     */
    inline StartProjectSessionResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A system-generated identifier for the session.</p>
     */
    inline const Aws::String& GetClientSessionId() const{ return m_clientSessionId; }

    /**
     * <p>A system-generated identifier for the session.</p>
     */
    inline void SetClientSessionId(const Aws::String& value) { m_clientSessionId = value; }

    /**
     * <p>A system-generated identifier for the session.</p>
     */
    inline void SetClientSessionId(Aws::String&& value) { m_clientSessionId = std::move(value); }

    /**
     * <p>A system-generated identifier for the session.</p>
     */
    inline void SetClientSessionId(const char* value) { m_clientSessionId.assign(value); }

    /**
     * <p>A system-generated identifier for the session.</p>
     */
    inline StartProjectSessionResult& WithClientSessionId(const Aws::String& value) { SetClientSessionId(value); return *this;}

    /**
     * <p>A system-generated identifier for the session.</p>
     */
    inline StartProjectSessionResult& WithClientSessionId(Aws::String&& value) { SetClientSessionId(std::move(value)); return *this;}

    /**
     * <p>A system-generated identifier for the session.</p>
     */
    inline StartProjectSessionResult& WithClientSessionId(const char* value) { SetClientSessionId(value); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_clientSessionId;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
