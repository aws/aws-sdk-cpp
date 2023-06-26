/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/FeaturedResultsSet.h>
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
namespace kendra
{
namespace Model
{
  class CreateFeaturedResultsSetResult
  {
  public:
    AWS_KENDRA_API CreateFeaturedResultsSetResult();
    AWS_KENDRA_API CreateFeaturedResultsSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API CreateFeaturedResultsSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information on the set of featured results. This includes the identifier of
     * the featured results set, whether the featured results set is active or
     * inactive, when the featured results set was created, and more.</p>
     */
    inline const FeaturedResultsSet& GetFeaturedResultsSet() const{ return m_featuredResultsSet; }

    /**
     * <p>Information on the set of featured results. This includes the identifier of
     * the featured results set, whether the featured results set is active or
     * inactive, when the featured results set was created, and more.</p>
     */
    inline void SetFeaturedResultsSet(const FeaturedResultsSet& value) { m_featuredResultsSet = value; }

    /**
     * <p>Information on the set of featured results. This includes the identifier of
     * the featured results set, whether the featured results set is active or
     * inactive, when the featured results set was created, and more.</p>
     */
    inline void SetFeaturedResultsSet(FeaturedResultsSet&& value) { m_featuredResultsSet = std::move(value); }

    /**
     * <p>Information on the set of featured results. This includes the identifier of
     * the featured results set, whether the featured results set is active or
     * inactive, when the featured results set was created, and more.</p>
     */
    inline CreateFeaturedResultsSetResult& WithFeaturedResultsSet(const FeaturedResultsSet& value) { SetFeaturedResultsSet(value); return *this;}

    /**
     * <p>Information on the set of featured results. This includes the identifier of
     * the featured results set, whether the featured results set is active or
     * inactive, when the featured results set was created, and more.</p>
     */
    inline CreateFeaturedResultsSetResult& WithFeaturedResultsSet(FeaturedResultsSet&& value) { SetFeaturedResultsSet(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateFeaturedResultsSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateFeaturedResultsSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateFeaturedResultsSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    FeaturedResultsSet m_featuredResultsSet;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
