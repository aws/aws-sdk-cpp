﻿/**
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
    AWS_MACIE2_API BatchGetCustomDataIdentifiersResult();
    AWS_MACIE2_API BatchGetCustomDataIdentifiersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API BatchGetCustomDataIdentifiersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects, one for each custom data identifier that matches the
     * criteria specified in the request.</p>
     */
    inline const Aws::Vector<BatchGetCustomDataIdentifierSummary>& GetCustomDataIdentifiers() const{ return m_customDataIdentifiers; }
    inline void SetCustomDataIdentifiers(const Aws::Vector<BatchGetCustomDataIdentifierSummary>& value) { m_customDataIdentifiers = value; }
    inline void SetCustomDataIdentifiers(Aws::Vector<BatchGetCustomDataIdentifierSummary>&& value) { m_customDataIdentifiers = std::move(value); }
    inline BatchGetCustomDataIdentifiersResult& WithCustomDataIdentifiers(const Aws::Vector<BatchGetCustomDataIdentifierSummary>& value) { SetCustomDataIdentifiers(value); return *this;}
    inline BatchGetCustomDataIdentifiersResult& WithCustomDataIdentifiers(Aws::Vector<BatchGetCustomDataIdentifierSummary>&& value) { SetCustomDataIdentifiers(std::move(value)); return *this;}
    inline BatchGetCustomDataIdentifiersResult& AddCustomDataIdentifiers(const BatchGetCustomDataIdentifierSummary& value) { m_customDataIdentifiers.push_back(value); return *this; }
    inline BatchGetCustomDataIdentifiersResult& AddCustomDataIdentifiers(BatchGetCustomDataIdentifierSummary&& value) { m_customDataIdentifiers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of custom data identifier IDs, one for each custom data identifier
     * that was specified in the request but doesn't correlate to an existing custom
     * data identifier.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotFoundIdentifierIds() const{ return m_notFoundIdentifierIds; }
    inline void SetNotFoundIdentifierIds(const Aws::Vector<Aws::String>& value) { m_notFoundIdentifierIds = value; }
    inline void SetNotFoundIdentifierIds(Aws::Vector<Aws::String>&& value) { m_notFoundIdentifierIds = std::move(value); }
    inline BatchGetCustomDataIdentifiersResult& WithNotFoundIdentifierIds(const Aws::Vector<Aws::String>& value) { SetNotFoundIdentifierIds(value); return *this;}
    inline BatchGetCustomDataIdentifiersResult& WithNotFoundIdentifierIds(Aws::Vector<Aws::String>&& value) { SetNotFoundIdentifierIds(std::move(value)); return *this;}
    inline BatchGetCustomDataIdentifiersResult& AddNotFoundIdentifierIds(const Aws::String& value) { m_notFoundIdentifierIds.push_back(value); return *this; }
    inline BatchGetCustomDataIdentifiersResult& AddNotFoundIdentifierIds(Aws::String&& value) { m_notFoundIdentifierIds.push_back(std::move(value)); return *this; }
    inline BatchGetCustomDataIdentifiersResult& AddNotFoundIdentifierIds(const char* value) { m_notFoundIdentifierIds.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetCustomDataIdentifiersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetCustomDataIdentifiersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetCustomDataIdentifiersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchGetCustomDataIdentifierSummary> m_customDataIdentifiers;

    Aws::Vector<Aws::String> m_notFoundIdentifierIds;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
