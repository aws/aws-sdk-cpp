/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/CoverageResource.h>
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
namespace GuardDuty
{
namespace Model
{
  class ListCoverageResult
  {
  public:
    AWS_GUARDDUTY_API ListCoverageResult();
    AWS_GUARDDUTY_API ListCoverageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API ListCoverageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of resources and their attributes providing cluster details.</p>
     */
    inline const Aws::Vector<CoverageResource>& GetResources() const{ return m_resources; }

    /**
     * <p>A list of resources and their attributes providing cluster details.</p>
     */
    inline void SetResources(const Aws::Vector<CoverageResource>& value) { m_resources = value; }

    /**
     * <p>A list of resources and their attributes providing cluster details.</p>
     */
    inline void SetResources(Aws::Vector<CoverageResource>&& value) { m_resources = std::move(value); }

    /**
     * <p>A list of resources and their attributes providing cluster details.</p>
     */
    inline ListCoverageResult& WithResources(const Aws::Vector<CoverageResource>& value) { SetResources(value); return *this;}

    /**
     * <p>A list of resources and their attributes providing cluster details.</p>
     */
    inline ListCoverageResult& WithResources(Aws::Vector<CoverageResource>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>A list of resources and their attributes providing cluster details.</p>
     */
    inline ListCoverageResult& AddResources(const CoverageResource& value) { m_resources.push_back(value); return *this; }

    /**
     * <p>A list of resources and their attributes providing cluster details.</p>
     */
    inline ListCoverageResult& AddResources(CoverageResource&& value) { m_resources.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline ListCoverageResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline ListCoverageResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline ListCoverageResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCoverageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCoverageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCoverageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<CoverageResource> m_resources;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
