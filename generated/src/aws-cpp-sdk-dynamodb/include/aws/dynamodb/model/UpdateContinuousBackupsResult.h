/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/ContinuousBackupsDescription.h>
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
namespace DynamoDB
{
namespace Model
{
  class UpdateContinuousBackupsResult
  {
  public:
    AWS_DYNAMODB_API UpdateContinuousBackupsResult() = default;
    AWS_DYNAMODB_API UpdateContinuousBackupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API UpdateContinuousBackupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Represents the continuous backups and point in time recovery settings on the
     * table.</p>
     */
    inline const ContinuousBackupsDescription& GetContinuousBackupsDescription() const { return m_continuousBackupsDescription; }
    template<typename ContinuousBackupsDescriptionT = ContinuousBackupsDescription>
    void SetContinuousBackupsDescription(ContinuousBackupsDescriptionT&& value) { m_continuousBackupsDescriptionHasBeenSet = true; m_continuousBackupsDescription = std::forward<ContinuousBackupsDescriptionT>(value); }
    template<typename ContinuousBackupsDescriptionT = ContinuousBackupsDescription>
    UpdateContinuousBackupsResult& WithContinuousBackupsDescription(ContinuousBackupsDescriptionT&& value) { SetContinuousBackupsDescription(std::forward<ContinuousBackupsDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateContinuousBackupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ContinuousBackupsDescription m_continuousBackupsDescription;
    bool m_continuousBackupsDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
