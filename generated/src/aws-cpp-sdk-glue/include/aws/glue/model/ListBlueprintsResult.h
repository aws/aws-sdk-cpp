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
  class ListBlueprintsResult
  {
  public:
    AWS_GLUE_API ListBlueprintsResult() = default;
    AWS_GLUE_API ListBlueprintsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListBlueprintsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of names of blueprints in the account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBlueprints() const { return m_blueprints; }
    template<typename BlueprintsT = Aws::Vector<Aws::String>>
    void SetBlueprints(BlueprintsT&& value) { m_blueprintsHasBeenSet = true; m_blueprints = std::forward<BlueprintsT>(value); }
    template<typename BlueprintsT = Aws::Vector<Aws::String>>
    ListBlueprintsResult& WithBlueprints(BlueprintsT&& value) { SetBlueprints(std::forward<BlueprintsT>(value)); return *this;}
    template<typename BlueprintsT = Aws::String>
    ListBlueprintsResult& AddBlueprints(BlueprintsT&& value) { m_blueprintsHasBeenSet = true; m_blueprints.emplace_back(std::forward<BlueprintsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if not all blueprint names have been returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBlueprintsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBlueprintsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_blueprints;
    bool m_blueprintsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
