/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/BatchGetCustomDataIdentifierSummary.h>
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


    /**
     * <p>An array of objects, one for each custom data identifier that matches the
     * criteria specified in the request.</p>
     */
    inline const Aws::Vector<BatchGetCustomDataIdentifierSummary>& GetCustomDataIdentifiers() const{ return m_customDataIdentifiers; }

    /**
     * <p>An array of objects, one for each custom data identifier that matches the
     * criteria specified in the request.</p>
     */
    inline void SetCustomDataIdentifiers(const Aws::Vector<BatchGetCustomDataIdentifierSummary>& value) { m_customDataIdentifiers = value; }

    /**
     * <p>An array of objects, one for each custom data identifier that matches the
     * criteria specified in the request.</p>
     */
    inline void SetCustomDataIdentifiers(Aws::Vector<BatchGetCustomDataIdentifierSummary>&& value) { m_customDataIdentifiers = std::move(value); }

    /**
     * <p>An array of objects, one for each custom data identifier that matches the
     * criteria specified in the request.</p>
     */
    inline BatchGetCustomDataIdentifiersResult& WithCustomDataIdentifiers(const Aws::Vector<BatchGetCustomDataIdentifierSummary>& value) { SetCustomDataIdentifiers(value); return *this;}

    /**
     * <p>An array of objects, one for each custom data identifier that matches the
     * criteria specified in the request.</p>
     */
    inline BatchGetCustomDataIdentifiersResult& WithCustomDataIdentifiers(Aws::Vector<BatchGetCustomDataIdentifierSummary>&& value) { SetCustomDataIdentifiers(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each custom data identifier that matches the
     * criteria specified in the request.</p>
     */
    inline BatchGetCustomDataIdentifiersResult& AddCustomDataIdentifiers(const BatchGetCustomDataIdentifierSummary& value) { m_customDataIdentifiers.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each custom data identifier that matches the
     * criteria specified in the request.</p>
     */
    inline BatchGetCustomDataIdentifiersResult& AddCustomDataIdentifiers(BatchGetCustomDataIdentifierSummary&& value) { m_customDataIdentifiers.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of custom data identifier IDs, one for each custom data identifier
     * that was specified in the request but doesn't correlate to an existing custom
     * data identifier.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotFoundIdentifierIds() const{ return m_notFoundIdentifierIds; }

    /**
     * <p>An array of custom data identifier IDs, one for each custom data identifier
     * that was specified in the request but doesn't correlate to an existing custom
     * data identifier.</p>
     */
    inline void SetNotFoundIdentifierIds(const Aws::Vector<Aws::String>& value) { m_notFoundIdentifierIds = value; }

    /**
     * <p>An array of custom data identifier IDs, one for each custom data identifier
     * that was specified in the request but doesn't correlate to an existing custom
     * data identifier.</p>
     */
    inline void SetNotFoundIdentifierIds(Aws::Vector<Aws::String>&& value) { m_notFoundIdentifierIds = std::move(value); }

    /**
     * <p>An array of custom data identifier IDs, one for each custom data identifier
     * that was specified in the request but doesn't correlate to an existing custom
     * data identifier.</p>
     */
    inline BatchGetCustomDataIdentifiersResult& WithNotFoundIdentifierIds(const Aws::Vector<Aws::String>& value) { SetNotFoundIdentifierIds(value); return *this;}

    /**
     * <p>An array of custom data identifier IDs, one for each custom data identifier
     * that was specified in the request but doesn't correlate to an existing custom
     * data identifier.</p>
     */
    inline BatchGetCustomDataIdentifiersResult& WithNotFoundIdentifierIds(Aws::Vector<Aws::String>&& value) { SetNotFoundIdentifierIds(std::move(value)); return *this;}

    /**
     * <p>An array of custom data identifier IDs, one for each custom data identifier
     * that was specified in the request but doesn't correlate to an existing custom
     * data identifier.</p>
     */
    inline BatchGetCustomDataIdentifiersResult& AddNotFoundIdentifierIds(const Aws::String& value) { m_notFoundIdentifierIds.push_back(value); return *this; }

    /**
     * <p>An array of custom data identifier IDs, one for each custom data identifier
     * that was specified in the request but doesn't correlate to an existing custom
     * data identifier.</p>
     */
    inline BatchGetCustomDataIdentifiersResult& AddNotFoundIdentifierIds(Aws::String&& value) { m_notFoundIdentifierIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of custom data identifier IDs, one for each custom data identifier
     * that was specified in the request but doesn't correlate to an existing custom
     * data identifier.</p>
     */
    inline BatchGetCustomDataIdentifiersResult& AddNotFoundIdentifierIds(const char* value) { m_notFoundIdentifierIds.push_back(value); return *this; }

  private:

    Aws::Vector<BatchGetCustomDataIdentifierSummary> m_customDataIdentifiers;

    Aws::Vector<Aws::String> m_notFoundIdentifierIds;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
