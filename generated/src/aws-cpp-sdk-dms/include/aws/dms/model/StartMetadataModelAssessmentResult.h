/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  class StartMetadataModelAssessmentResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API StartMetadataModelAssessmentResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API StartMetadataModelAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API StartMetadataModelAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the assessment operation.</p>
     */
    inline const Aws::String& GetRequestIdentifier() const { return m_requestIdentifier; }
    template<typename RequestIdentifierT = Aws::String>
    void SetRequestIdentifier(RequestIdentifierT&& value) { m_requestIdentifierHasBeenSet = true; m_requestIdentifier = std::forward<RequestIdentifierT>(value); }
    template<typename RequestIdentifierT = Aws::String>
    StartMetadataModelAssessmentResult& WithRequestIdentifier(RequestIdentifierT&& value) { SetRequestIdentifier(std::forward<RequestIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartMetadataModelAssessmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestIdentifier;
    bool m_requestIdentifierHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
