/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxVolume.h>
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
  class ListKxVolumesResult
  {
  public:
    AWS_FINSPACE_API ListKxVolumesResult();
    AWS_FINSPACE_API ListKxVolumesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API ListKxVolumesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A summary of volumes. </p>
     */
    inline const Aws::Vector<KxVolume>& GetKxVolumeSummaries() const{ return m_kxVolumeSummaries; }

    /**
     * <p> A summary of volumes. </p>
     */
    inline void SetKxVolumeSummaries(const Aws::Vector<KxVolume>& value) { m_kxVolumeSummaries = value; }

    /**
     * <p> A summary of volumes. </p>
     */
    inline void SetKxVolumeSummaries(Aws::Vector<KxVolume>&& value) { m_kxVolumeSummaries = std::move(value); }

    /**
     * <p> A summary of volumes. </p>
     */
    inline ListKxVolumesResult& WithKxVolumeSummaries(const Aws::Vector<KxVolume>& value) { SetKxVolumeSummaries(value); return *this;}

    /**
     * <p> A summary of volumes. </p>
     */
    inline ListKxVolumesResult& WithKxVolumeSummaries(Aws::Vector<KxVolume>&& value) { SetKxVolumeSummaries(std::move(value)); return *this;}

    /**
     * <p> A summary of volumes. </p>
     */
    inline ListKxVolumesResult& AddKxVolumeSummaries(const KxVolume& value) { m_kxVolumeSummaries.push_back(value); return *this; }

    /**
     * <p> A summary of volumes. </p>
     */
    inline ListKxVolumesResult& AddKxVolumeSummaries(KxVolume&& value) { m_kxVolumeSummaries.push_back(std::move(value)); return *this; }


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
    inline ListKxVolumesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListKxVolumesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListKxVolumesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListKxVolumesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListKxVolumesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListKxVolumesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<KxVolume> m_kxVolumeSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
