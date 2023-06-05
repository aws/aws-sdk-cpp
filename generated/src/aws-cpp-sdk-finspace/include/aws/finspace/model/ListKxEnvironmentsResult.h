/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxEnvironment.h>
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
  class ListKxEnvironmentsResult
  {
  public:
    AWS_FINSPACE_API ListKxEnvironmentsResult();
    AWS_FINSPACE_API ListKxEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API ListKxEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of environments in an account.</p>
     */
    inline const Aws::Vector<KxEnvironment>& GetEnvironments() const{ return m_environments; }

    /**
     * <p>A list of environments in an account.</p>
     */
    inline void SetEnvironments(const Aws::Vector<KxEnvironment>& value) { m_environments = value; }

    /**
     * <p>A list of environments in an account.</p>
     */
    inline void SetEnvironments(Aws::Vector<KxEnvironment>&& value) { m_environments = std::move(value); }

    /**
     * <p>A list of environments in an account.</p>
     */
    inline ListKxEnvironmentsResult& WithEnvironments(const Aws::Vector<KxEnvironment>& value) { SetEnvironments(value); return *this;}

    /**
     * <p>A list of environments in an account.</p>
     */
    inline ListKxEnvironmentsResult& WithEnvironments(Aws::Vector<KxEnvironment>&& value) { SetEnvironments(std::move(value)); return *this;}

    /**
     * <p>A list of environments in an account.</p>
     */
    inline ListKxEnvironmentsResult& AddEnvironments(const KxEnvironment& value) { m_environments.push_back(value); return *this; }

    /**
     * <p>A list of environments in an account.</p>
     */
    inline ListKxEnvironmentsResult& AddEnvironments(KxEnvironment&& value) { m_environments.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListKxEnvironmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListKxEnvironmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListKxEnvironmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListKxEnvironmentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListKxEnvironmentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListKxEnvironmentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<KxEnvironment> m_environments;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
