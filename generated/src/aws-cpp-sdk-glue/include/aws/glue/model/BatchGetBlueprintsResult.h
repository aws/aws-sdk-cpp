/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Blueprint.h>
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
  class BatchGetBlueprintsResult
  {
  public:
    AWS_GLUE_API BatchGetBlueprintsResult() = default;
    AWS_GLUE_API BatchGetBlueprintsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchGetBlueprintsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of blueprint as a <code>Blueprints</code> object.</p>
     */
    inline const Aws::Vector<Blueprint>& GetBlueprints() const { return m_blueprints; }
    template<typename BlueprintsT = Aws::Vector<Blueprint>>
    void SetBlueprints(BlueprintsT&& value) { m_blueprintsHasBeenSet = true; m_blueprints = std::forward<BlueprintsT>(value); }
    template<typename BlueprintsT = Aws::Vector<Blueprint>>
    BatchGetBlueprintsResult& WithBlueprints(BlueprintsT&& value) { SetBlueprints(std::forward<BlueprintsT>(value)); return *this;}
    template<typename BlueprintsT = Blueprint>
    BatchGetBlueprintsResult& AddBlueprints(BlueprintsT&& value) { m_blueprintsHasBeenSet = true; m_blueprints.emplace_back(std::forward<BlueprintsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns a list of <code>BlueprintNames</code> that were not found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMissingBlueprints() const { return m_missingBlueprints; }
    template<typename MissingBlueprintsT = Aws::Vector<Aws::String>>
    void SetMissingBlueprints(MissingBlueprintsT&& value) { m_missingBlueprintsHasBeenSet = true; m_missingBlueprints = std::forward<MissingBlueprintsT>(value); }
    template<typename MissingBlueprintsT = Aws::Vector<Aws::String>>
    BatchGetBlueprintsResult& WithMissingBlueprints(MissingBlueprintsT&& value) { SetMissingBlueprints(std::forward<MissingBlueprintsT>(value)); return *this;}
    template<typename MissingBlueprintsT = Aws::String>
    BatchGetBlueprintsResult& AddMissingBlueprints(MissingBlueprintsT&& value) { m_missingBlueprintsHasBeenSet = true; m_missingBlueprints.emplace_back(std::forward<MissingBlueprintsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetBlueprintsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Blueprint> m_blueprints;
    bool m_blueprintsHasBeenSet = false;

    Aws::Vector<Aws::String> m_missingBlueprints;
    bool m_missingBlueprintsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
