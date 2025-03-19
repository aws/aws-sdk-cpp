/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/Fleet.h>
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
namespace CodeBuild
{
namespace Model
{
  class BatchGetFleetsResult
  {
  public:
    AWS_CODEBUILD_API BatchGetFleetsResult() = default;
    AWS_CODEBUILD_API BatchGetFleetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API BatchGetFleetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the requested compute fleets.</p>
     */
    inline const Aws::Vector<Fleet>& GetFleets() const { return m_fleets; }
    template<typename FleetsT = Aws::Vector<Fleet>>
    void SetFleets(FleetsT&& value) { m_fleetsHasBeenSet = true; m_fleets = std::forward<FleetsT>(value); }
    template<typename FleetsT = Aws::Vector<Fleet>>
    BatchGetFleetsResult& WithFleets(FleetsT&& value) { SetFleets(std::forward<FleetsT>(value)); return *this;}
    template<typename FleetsT = Fleet>
    BatchGetFleetsResult& AddFleets(FleetsT&& value) { m_fleetsHasBeenSet = true; m_fleets.emplace_back(std::forward<FleetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of compute fleets for which information could not be found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFleetsNotFound() const { return m_fleetsNotFound; }
    template<typename FleetsNotFoundT = Aws::Vector<Aws::String>>
    void SetFleetsNotFound(FleetsNotFoundT&& value) { m_fleetsNotFoundHasBeenSet = true; m_fleetsNotFound = std::forward<FleetsNotFoundT>(value); }
    template<typename FleetsNotFoundT = Aws::Vector<Aws::String>>
    BatchGetFleetsResult& WithFleetsNotFound(FleetsNotFoundT&& value) { SetFleetsNotFound(std::forward<FleetsNotFoundT>(value)); return *this;}
    template<typename FleetsNotFoundT = Aws::String>
    BatchGetFleetsResult& AddFleetsNotFound(FleetsNotFoundT&& value) { m_fleetsNotFoundHasBeenSet = true; m_fleetsNotFound.emplace_back(std::forward<FleetsNotFoundT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetFleetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Fleet> m_fleets;
    bool m_fleetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_fleetsNotFound;
    bool m_fleetsNotFoundHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
