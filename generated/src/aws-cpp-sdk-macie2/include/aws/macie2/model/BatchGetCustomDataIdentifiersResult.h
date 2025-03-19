/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/BatchGetCustomDataIdentifierSummary.h>
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
namespace Macie2
{
namespace Model
{
  class BatchGetCustomDataIdentifiersResult
  {
  public:
    AWS_MACIE2_API BatchGetCustomDataIdentifiersResult() = default;
    AWS_MACIE2_API BatchGetCustomDataIdentifiersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API BatchGetCustomDataIdentifiersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects, one for each custom data identifier that matches the
     * criteria specified in the request.</p>
     */
    inline const Aws::Vector<BatchGetCustomDataIdentifierSummary>& GetCustomDataIdentifiers() const { return m_customDataIdentifiers; }
    template<typename CustomDataIdentifiersT = Aws::Vector<BatchGetCustomDataIdentifierSummary>>
    void SetCustomDataIdentifiers(CustomDataIdentifiersT&& value) { m_customDataIdentifiersHasBeenSet = true; m_customDataIdentifiers = std::forward<CustomDataIdentifiersT>(value); }
    template<typename CustomDataIdentifiersT = Aws::Vector<BatchGetCustomDataIdentifierSummary>>
    BatchGetCustomDataIdentifiersResult& WithCustomDataIdentifiers(CustomDataIdentifiersT&& value) { SetCustomDataIdentifiers(std::forward<CustomDataIdentifiersT>(value)); return *this;}
    template<typename CustomDataIdentifiersT = BatchGetCustomDataIdentifierSummary>
    BatchGetCustomDataIdentifiersResult& AddCustomDataIdentifiers(CustomDataIdentifiersT&& value) { m_customDataIdentifiersHasBeenSet = true; m_customDataIdentifiers.emplace_back(std::forward<CustomDataIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of custom data identifier IDs, one for each custom data identifier
     * that was specified in the request but doesn't correlate to an existing custom
     * data identifier.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotFoundIdentifierIds() const { return m_notFoundIdentifierIds; }
    template<typename NotFoundIdentifierIdsT = Aws::Vector<Aws::String>>
    void SetNotFoundIdentifierIds(NotFoundIdentifierIdsT&& value) { m_notFoundIdentifierIdsHasBeenSet = true; m_notFoundIdentifierIds = std::forward<NotFoundIdentifierIdsT>(value); }
    template<typename NotFoundIdentifierIdsT = Aws::Vector<Aws::String>>
    BatchGetCustomDataIdentifiersResult& WithNotFoundIdentifierIds(NotFoundIdentifierIdsT&& value) { SetNotFoundIdentifierIds(std::forward<NotFoundIdentifierIdsT>(value)); return *this;}
    template<typename NotFoundIdentifierIdsT = Aws::String>
    BatchGetCustomDataIdentifiersResult& AddNotFoundIdentifierIds(NotFoundIdentifierIdsT&& value) { m_notFoundIdentifierIdsHasBeenSet = true; m_notFoundIdentifierIds.emplace_back(std::forward<NotFoundIdentifierIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetCustomDataIdentifiersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchGetCustomDataIdentifierSummary> m_customDataIdentifiers;
    bool m_customDataIdentifiersHasBeenSet = false;

    Aws::Vector<Aws::String> m_notFoundIdentifierIds;
    bool m_notFoundIdentifierIdsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
