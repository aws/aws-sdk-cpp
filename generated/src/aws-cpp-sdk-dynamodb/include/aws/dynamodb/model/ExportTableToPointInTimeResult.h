/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/ExportDescription.h>
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
  class ExportTableToPointInTimeResult
  {
  public:
    AWS_DYNAMODB_API ExportTableToPointInTimeResult() = default;
    AWS_DYNAMODB_API ExportTableToPointInTimeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API ExportTableToPointInTimeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains a description of the table export.</p>
     */
    inline const ExportDescription& GetExportDescription() const { return m_exportDescription; }
    template<typename ExportDescriptionT = ExportDescription>
    void SetExportDescription(ExportDescriptionT&& value) { m_exportDescriptionHasBeenSet = true; m_exportDescription = std::forward<ExportDescriptionT>(value); }
    template<typename ExportDescriptionT = ExportDescription>
    ExportTableToPointInTimeResult& WithExportDescription(ExportDescriptionT&& value) { SetExportDescription(std::forward<ExportDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ExportTableToPointInTimeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ExportDescription m_exportDescription;
    bool m_exportDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
