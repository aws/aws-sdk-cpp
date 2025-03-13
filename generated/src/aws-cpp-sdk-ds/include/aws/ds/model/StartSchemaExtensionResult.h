/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
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
namespace DirectoryService
{
namespace Model
{
  class StartSchemaExtensionResult
  {
  public:
    AWS_DIRECTORYSERVICE_API StartSchemaExtensionResult() = default;
    AWS_DIRECTORYSERVICE_API StartSchemaExtensionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API StartSchemaExtensionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the schema extension that will be applied.</p>
     */
    inline const Aws::String& GetSchemaExtensionId() const { return m_schemaExtensionId; }
    template<typename SchemaExtensionIdT = Aws::String>
    void SetSchemaExtensionId(SchemaExtensionIdT&& value) { m_schemaExtensionIdHasBeenSet = true; m_schemaExtensionId = std::forward<SchemaExtensionIdT>(value); }
    template<typename SchemaExtensionIdT = Aws::String>
    StartSchemaExtensionResult& WithSchemaExtensionId(SchemaExtensionIdT&& value) { SetSchemaExtensionId(std::forward<SchemaExtensionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartSchemaExtensionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_schemaExtensionId;
    bool m_schemaExtensionIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
