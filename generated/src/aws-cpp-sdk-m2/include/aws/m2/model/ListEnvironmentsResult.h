/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/EnvironmentSummary.h>
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
namespace MainframeModernization
{
namespace Model
{
  class ListEnvironmentsResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ListEnvironmentsResult();
    AWS_MAINFRAMEMODERNIZATION_API ListEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API ListEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a list of summary details for all the runtime environments in your
     * account. </p>
     */
    inline const Aws::Vector<EnvironmentSummary>& GetEnvironments() const{ return m_environments; }

    /**
     * <p>Returns a list of summary details for all the runtime environments in your
     * account. </p>
     */
    inline void SetEnvironments(const Aws::Vector<EnvironmentSummary>& value) { m_environments = value; }

    /**
     * <p>Returns a list of summary details for all the runtime environments in your
     * account. </p>
     */
    inline void SetEnvironments(Aws::Vector<EnvironmentSummary>&& value) { m_environments = std::move(value); }

    /**
     * <p>Returns a list of summary details for all the runtime environments in your
     * account. </p>
     */
    inline ListEnvironmentsResult& WithEnvironments(const Aws::Vector<EnvironmentSummary>& value) { SetEnvironments(value); return *this;}

    /**
     * <p>Returns a list of summary details for all the runtime environments in your
     * account. </p>
     */
    inline ListEnvironmentsResult& WithEnvironments(Aws::Vector<EnvironmentSummary>&& value) { SetEnvironments(std::move(value)); return *this;}

    /**
     * <p>Returns a list of summary details for all the runtime environments in your
     * account. </p>
     */
    inline ListEnvironmentsResult& AddEnvironments(const EnvironmentSummary& value) { m_environments.push_back(value); return *this; }

    /**
     * <p>Returns a list of summary details for all the runtime environments in your
     * account. </p>
     */
    inline ListEnvironmentsResult& AddEnvironments(EnvironmentSummary&& value) { m_environments.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token that's returned when the response doesn't contain all the
     * runtime environments.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that's returned when the response doesn't contain all the
     * runtime environments.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token that's returned when the response doesn't contain all the
     * runtime environments.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that's returned when the response doesn't contain all the
     * runtime environments.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token that's returned when the response doesn't contain all the
     * runtime environments.</p>
     */
    inline ListEnvironmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's returned when the response doesn't contain all the
     * runtime environments.</p>
     */
    inline ListEnvironmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's returned when the response doesn't contain all the
     * runtime environments.</p>
     */
    inline ListEnvironmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EnvironmentSummary> m_environments;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
