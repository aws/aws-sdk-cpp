/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/BlueprintRun.h>
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
  class GetBlueprintRunResult
  {
  public:
    AWS_GLUE_API GetBlueprintRunResult() = default;
    AWS_GLUE_API GetBlueprintRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetBlueprintRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a <code>BlueprintRun</code> object.</p>
     */
    inline const BlueprintRun& GetBlueprintRun() const { return m_blueprintRun; }
    template<typename BlueprintRunT = BlueprintRun>
    void SetBlueprintRun(BlueprintRunT&& value) { m_blueprintRunHasBeenSet = true; m_blueprintRun = std::forward<BlueprintRunT>(value); }
    template<typename BlueprintRunT = BlueprintRun>
    GetBlueprintRunResult& WithBlueprintRun(BlueprintRunT&& value) { SetBlueprintRun(std::forward<BlueprintRunT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBlueprintRunResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BlueprintRun m_blueprintRun;
    bool m_blueprintRunHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
