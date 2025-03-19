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
    AWS_KENDRA_API CreateFeaturedResultsSetResult() = default;
    AWS_KENDRA_API CreateFeaturedResultsSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API CreateFeaturedResultsSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information on the set of featured results. This includes the identifier of
     * the featured results set, whether the featured results set is active or
     * inactive, when the featured results set was created, and more.</p>
     */
    inline const FeaturedResultsSet& GetFeaturedResultsSet() const { return m_featuredResultsSet; }
    template<typename FeaturedResultsSetT = FeaturedResultsSet>
    void SetFeaturedResultsSet(FeaturedResultsSetT&& value) { m_featuredResultsSetHasBeenSet = true; m_featuredResultsSet = std::forward<FeaturedResultsSetT>(value); }
    template<typename FeaturedResultsSetT = FeaturedResultsSet>
    CreateFeaturedResultsSetResult& WithFeaturedResultsSet(FeaturedResultsSetT&& value) { SetFeaturedResultsSet(std::forward<FeaturedResultsSetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateFeaturedResultsSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FeaturedResultsSet m_featuredResultsSet;
    bool m_featuredResultsSetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
