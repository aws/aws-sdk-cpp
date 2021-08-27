/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
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
namespace MWAA
{
namespace Model
{
  class AWS_MWAA_API ListEnvironmentsResult
  {
  public:
    ListEnvironmentsResult();
    ListEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of Amazon MWAA Environments.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnvironments() const{ return m_environments; }

    /**
     * <p>The list of Amazon MWAA Environments.</p>
     */
    inline void SetEnvironments(const Aws::Vector<Aws::String>& value) { m_environments = value; }

    /**
     * <p>The list of Amazon MWAA Environments.</p>
     */
    inline void SetEnvironments(Aws::Vector<Aws::String>&& value) { m_environments = std::move(value); }

    /**
     * <p>The list of Amazon MWAA Environments.</p>
     */
    inline ListEnvironmentsResult& WithEnvironments(const Aws::Vector<Aws::String>& value) { SetEnvironments(value); return *this;}

    /**
     * <p>The list of Amazon MWAA Environments.</p>
     */
    inline ListEnvironmentsResult& WithEnvironments(Aws::Vector<Aws::String>&& value) { SetEnvironments(std::move(value)); return *this;}

    /**
     * <p>The list of Amazon MWAA Environments.</p>
     */
    inline ListEnvironmentsResult& AddEnvironments(const Aws::String& value) { m_environments.push_back(value); return *this; }

    /**
     * <p>The list of Amazon MWAA Environments.</p>
     */
    inline ListEnvironmentsResult& AddEnvironments(Aws::String&& value) { m_environments.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Amazon MWAA Environments.</p>
     */
    inline ListEnvironmentsResult& AddEnvironments(const char* value) { m_environments.push_back(value); return *this; }


    /**
     * <p>The Next Token when listing MWAA environments.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The Next Token when listing MWAA environments.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The Next Token when listing MWAA environments.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The Next Token when listing MWAA environments.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The Next Token when listing MWAA environments.</p>
     */
    inline ListEnvironmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The Next Token when listing MWAA environments.</p>
     */
    inline ListEnvironmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The Next Token when listing MWAA environments.</p>
     */
    inline ListEnvironmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_environments;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
