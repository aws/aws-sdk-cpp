/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
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
namespace CleanRoomsML
{
namespace Model
{
  class CreateTrainedModelResult
  {
  public:
    AWS_CLEANROOMSML_API CreateTrainedModelResult() = default;
    AWS_CLEANROOMSML_API CreateTrainedModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API CreateTrainedModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trained model.</p>
     */
    inline const Aws::String& GetTrainedModelArn() const { return m_trainedModelArn; }
    template<typename TrainedModelArnT = Aws::String>
    void SetTrainedModelArn(TrainedModelArnT&& value) { m_trainedModelArnHasBeenSet = true; m_trainedModelArn = std::forward<TrainedModelArnT>(value); }
    template<typename TrainedModelArnT = Aws::String>
    CreateTrainedModelResult& WithTrainedModelArn(TrainedModelArnT&& value) { SetTrainedModelArn(std::forward<TrainedModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique version identifier assigned to the newly created trained model.
     * This identifier can be used to reference this specific version of the trained
     * model in subsequent operations such as inference jobs or incremental
     * training.</p> <p>The initial version identifier for the base version of the
     * trained model is "NULL".</p>
     */
    inline const Aws::String& GetVersionIdentifier() const { return m_versionIdentifier; }
    template<typename VersionIdentifierT = Aws::String>
    void SetVersionIdentifier(VersionIdentifierT&& value) { m_versionIdentifierHasBeenSet = true; m_versionIdentifier = std::forward<VersionIdentifierT>(value); }
    template<typename VersionIdentifierT = Aws::String>
    CreateTrainedModelResult& WithVersionIdentifier(VersionIdentifierT&& value) { SetVersionIdentifier(std::forward<VersionIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateTrainedModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trainedModelArn;
    bool m_trainedModelArnHasBeenSet = false;

    Aws::String m_versionIdentifier;
    bool m_versionIdentifierHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
