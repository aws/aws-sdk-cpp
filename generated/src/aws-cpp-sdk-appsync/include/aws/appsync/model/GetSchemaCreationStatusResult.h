/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/SchemaStatus.h>
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
namespace AppSync
{
namespace Model
{
  class GetSchemaCreationStatusResult
  {
  public:
    AWS_APPSYNC_API GetSchemaCreationStatusResult() = default;
    AWS_APPSYNC_API GetSchemaCreationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API GetSchemaCreationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current state of the schema (PROCESSING, FAILED, SUCCESS, or
     * NOT_APPLICABLE). When the schema is in the ACTIVE state, you can add data.</p>
     */
    inline SchemaStatus GetStatus() const { return m_status; }
    inline void SetStatus(SchemaStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetSchemaCreationStatusResult& WithStatus(SchemaStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the status of the schema creation operation.</p>
     */
    inline const Aws::String& GetDetails() const { return m_details; }
    template<typename DetailsT = Aws::String>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::String>
    GetSchemaCreationStatusResult& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSchemaCreationStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SchemaStatus m_status{SchemaStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_details;
    bool m_detailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
