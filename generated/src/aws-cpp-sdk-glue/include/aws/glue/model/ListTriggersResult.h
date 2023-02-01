/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Glue
{
namespace Model
{
  class ListTriggersResult
  {
  public:
    AWS_GLUE_API ListTriggersResult();
    AWS_GLUE_API ListTriggersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListTriggersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The names of all triggers in the account, or the triggers with the specified
     * tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTriggerNames() const{ return m_triggerNames; }

    /**
     * <p>The names of all triggers in the account, or the triggers with the specified
     * tags.</p>
     */
    inline void SetTriggerNames(const Aws::Vector<Aws::String>& value) { m_triggerNames = value; }

    /**
     * <p>The names of all triggers in the account, or the triggers with the specified
     * tags.</p>
     */
    inline void SetTriggerNames(Aws::Vector<Aws::String>&& value) { m_triggerNames = std::move(value); }

    /**
     * <p>The names of all triggers in the account, or the triggers with the specified
     * tags.</p>
     */
    inline ListTriggersResult& WithTriggerNames(const Aws::Vector<Aws::String>& value) { SetTriggerNames(value); return *this;}

    /**
     * <p>The names of all triggers in the account, or the triggers with the specified
     * tags.</p>
     */
    inline ListTriggersResult& WithTriggerNames(Aws::Vector<Aws::String>&& value) { SetTriggerNames(std::move(value)); return *this;}

    /**
     * <p>The names of all triggers in the account, or the triggers with the specified
     * tags.</p>
     */
    inline ListTriggersResult& AddTriggerNames(const Aws::String& value) { m_triggerNames.push_back(value); return *this; }

    /**
     * <p>The names of all triggers in the account, or the triggers with the specified
     * tags.</p>
     */
    inline ListTriggersResult& AddTriggerNames(Aws::String&& value) { m_triggerNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of all triggers in the account, or the triggers with the specified
     * tags.</p>
     */
    inline ListTriggersResult& AddTriggerNames(const char* value) { m_triggerNames.push_back(value); return *this; }


    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline ListTriggersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline ListTriggersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline ListTriggersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_triggerNames;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
