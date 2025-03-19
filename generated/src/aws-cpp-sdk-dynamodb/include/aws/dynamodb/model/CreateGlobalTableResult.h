/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/GlobalTableDescription.h>
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
  class CreateGlobalTableResult
  {
  public:
    AWS_DYNAMODB_API CreateGlobalTableResult() = default;
    AWS_DYNAMODB_API CreateGlobalTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API CreateGlobalTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains the details of the global table.</p>
     */
    inline const GlobalTableDescription& GetGlobalTableDescription() const { return m_globalTableDescription; }
    template<typename GlobalTableDescriptionT = GlobalTableDescription>
    void SetGlobalTableDescription(GlobalTableDescriptionT&& value) { m_globalTableDescriptionHasBeenSet = true; m_globalTableDescription = std::forward<GlobalTableDescriptionT>(value); }
    template<typename GlobalTableDescriptionT = GlobalTableDescription>
    CreateGlobalTableResult& WithGlobalTableDescription(GlobalTableDescriptionT&& value) { SetGlobalTableDescription(std::forward<GlobalTableDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateGlobalTableResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    GlobalTableDescription m_globalTableDescription;
    bool m_globalTableDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
