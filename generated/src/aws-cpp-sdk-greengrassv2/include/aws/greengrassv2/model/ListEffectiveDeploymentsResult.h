/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/EffectiveDeployment.h>
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
namespace GreengrassV2
{
namespace Model
{
  class ListEffectiveDeploymentsResult
  {
  public:
    AWS_GREENGRASSV2_API ListEffectiveDeploymentsResult();
    AWS_GREENGRASSV2_API ListEffectiveDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API ListEffectiveDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that summarizes each deployment on the core device.</p>
     */
    inline const Aws::Vector<EffectiveDeployment>& GetEffectiveDeployments() const{ return m_effectiveDeployments; }

    /**
     * <p>A list that summarizes each deployment on the core device.</p>
     */
    inline void SetEffectiveDeployments(const Aws::Vector<EffectiveDeployment>& value) { m_effectiveDeployments = value; }

    /**
     * <p>A list that summarizes each deployment on the core device.</p>
     */
    inline void SetEffectiveDeployments(Aws::Vector<EffectiveDeployment>&& value) { m_effectiveDeployments = std::move(value); }

    /**
     * <p>A list that summarizes each deployment on the core device.</p>
     */
    inline ListEffectiveDeploymentsResult& WithEffectiveDeployments(const Aws::Vector<EffectiveDeployment>& value) { SetEffectiveDeployments(value); return *this;}

    /**
     * <p>A list that summarizes each deployment on the core device.</p>
     */
    inline ListEffectiveDeploymentsResult& WithEffectiveDeployments(Aws::Vector<EffectiveDeployment>&& value) { SetEffectiveDeployments(std::move(value)); return *this;}

    /**
     * <p>A list that summarizes each deployment on the core device.</p>
     */
    inline ListEffectiveDeploymentsResult& AddEffectiveDeployments(const EffectiveDeployment& value) { m_effectiveDeployments.push_back(value); return *this; }

    /**
     * <p>A list that summarizes each deployment on the core device.</p>
     */
    inline ListEffectiveDeploymentsResult& AddEffectiveDeployments(EffectiveDeployment&& value) { m_effectiveDeployments.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListEffectiveDeploymentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListEffectiveDeploymentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListEffectiveDeploymentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EffectiveDeployment> m_effectiveDeployments;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
