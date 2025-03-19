/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/ImportTableDescription.h>
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
  class ImportTableResult
  {
  public:
    AWS_DYNAMODB_API ImportTableResult() = default;
    AWS_DYNAMODB_API ImportTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API ImportTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Represents the properties of the table created for the import, and
     * parameters of the import. The import parameters include import status, how many
     * items were processed, and how many errors were encountered. </p>
     */
    inline const ImportTableDescription& GetImportTableDescription() const { return m_importTableDescription; }
    template<typename ImportTableDescriptionT = ImportTableDescription>
    void SetImportTableDescription(ImportTableDescriptionT&& value) { m_importTableDescriptionHasBeenSet = true; m_importTableDescription = std::forward<ImportTableDescriptionT>(value); }
    template<typename ImportTableDescriptionT = ImportTableDescription>
    ImportTableResult& WithImportTableDescription(ImportTableDescriptionT&& value) { SetImportTableDescription(std::forward<ImportTableDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ImportTableResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ImportTableDescription m_importTableDescription;
    bool m_importTableDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
