/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/Environment.h>
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
namespace finspace
{
namespace Model
{
  class ListEnvironmentsResult
  {
  public:
    AWS_FINSPACE_API ListEnvironmentsResult();
    AWS_FINSPACE_API ListEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API ListEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of all of your FinSpace environments.</p>
     */
    inline const Aws::Vector<Environment>& GetEnvironments() const{ return m_environments; }

    /**
     * <p>A list of all of your FinSpace environments.</p>
     */
    inline void SetEnvironments(const Aws::Vector<Environment>& value) { m_environments = value; }

    /**
     * <p>A list of all of your FinSpace environments.</p>
     */
    inline void SetEnvironments(Aws::Vector<Environment>&& value) { m_environments = std::move(value); }

    /**
     * <p>A list of all of your FinSpace environments.</p>
     */
    inline ListEnvironmentsResult& WithEnvironments(const Aws::Vector<Environment>& value) { SetEnvironments(value); return *this;}

    /**
     * <p>A list of all of your FinSpace environments.</p>
     */
    inline ListEnvironmentsResult& WithEnvironments(Aws::Vector<Environment>&& value) { SetEnvironments(std::move(value)); return *this;}

    /**
     * <p>A list of all of your FinSpace environments.</p>
     */
    inline ListEnvironmentsResult& AddEnvironments(const Environment& value) { m_environments.push_back(value); return *this; }

    /**
     * <p>A list of all of your FinSpace environments.</p>
     */
    inline ListEnvironmentsResult& AddEnvironments(Environment&& value) { m_environments.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline ListEnvironmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline ListEnvironmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline ListEnvironmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Environment> m_environments;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
