/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Trigger.h>
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
  class GetTriggersResult
  {
  public:
    AWS_GLUE_API GetTriggersResult();
    AWS_GLUE_API GetTriggersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetTriggersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of triggers for the specified job.</p>
     */
    inline const Aws::Vector<Trigger>& GetTriggers() const{ return m_triggers; }

    /**
     * <p>A list of triggers for the specified job.</p>
     */
    inline void SetTriggers(const Aws::Vector<Trigger>& value) { m_triggers = value; }

    /**
     * <p>A list of triggers for the specified job.</p>
     */
    inline void SetTriggers(Aws::Vector<Trigger>&& value) { m_triggers = std::move(value); }

    /**
     * <p>A list of triggers for the specified job.</p>
     */
    inline GetTriggersResult& WithTriggers(const Aws::Vector<Trigger>& value) { SetTriggers(value); return *this;}

    /**
     * <p>A list of triggers for the specified job.</p>
     */
    inline GetTriggersResult& WithTriggers(Aws::Vector<Trigger>&& value) { SetTriggers(std::move(value)); return *this;}

    /**
     * <p>A list of triggers for the specified job.</p>
     */
    inline GetTriggersResult& AddTriggers(const Trigger& value) { m_triggers.push_back(value); return *this; }

    /**
     * <p>A list of triggers for the specified job.</p>
     */
    inline GetTriggersResult& AddTriggers(Trigger&& value) { m_triggers.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token, if not all the requested triggers have yet been
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if not all the requested triggers have yet been
     * returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if not all the requested triggers have yet been
     * returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if not all the requested triggers have yet been
     * returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if not all the requested triggers have yet been
     * returned.</p>
     */
    inline GetTriggersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if not all the requested triggers have yet been
     * returned.</p>
     */
    inline GetTriggersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if not all the requested triggers have yet been
     * returned.</p>
     */
    inline GetTriggersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Trigger> m_triggers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
