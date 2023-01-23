/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrassv2/model/ResolvedComponentVersion.h>
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
  class ResolveComponentCandidatesResult
  {
  public:
    AWS_GREENGRASSV2_API ResolveComponentCandidatesResult();
    AWS_GREENGRASSV2_API ResolveComponentCandidatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API ResolveComponentCandidatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of components that meet the requirements that you specify in the
     * request. This list includes each component's recipe that you can use to install
     * the component.</p>
     */
    inline const Aws::Vector<ResolvedComponentVersion>& GetResolvedComponentVersions() const{ return m_resolvedComponentVersions; }

    /**
     * <p>A list of components that meet the requirements that you specify in the
     * request. This list includes each component's recipe that you can use to install
     * the component.</p>
     */
    inline void SetResolvedComponentVersions(const Aws::Vector<ResolvedComponentVersion>& value) { m_resolvedComponentVersions = value; }

    /**
     * <p>A list of components that meet the requirements that you specify in the
     * request. This list includes each component's recipe that you can use to install
     * the component.</p>
     */
    inline void SetResolvedComponentVersions(Aws::Vector<ResolvedComponentVersion>&& value) { m_resolvedComponentVersions = std::move(value); }

    /**
     * <p>A list of components that meet the requirements that you specify in the
     * request. This list includes each component's recipe that you can use to install
     * the component.</p>
     */
    inline ResolveComponentCandidatesResult& WithResolvedComponentVersions(const Aws::Vector<ResolvedComponentVersion>& value) { SetResolvedComponentVersions(value); return *this;}

    /**
     * <p>A list of components that meet the requirements that you specify in the
     * request. This list includes each component's recipe that you can use to install
     * the component.</p>
     */
    inline ResolveComponentCandidatesResult& WithResolvedComponentVersions(Aws::Vector<ResolvedComponentVersion>&& value) { SetResolvedComponentVersions(std::move(value)); return *this;}

    /**
     * <p>A list of components that meet the requirements that you specify in the
     * request. This list includes each component's recipe that you can use to install
     * the component.</p>
     */
    inline ResolveComponentCandidatesResult& AddResolvedComponentVersions(const ResolvedComponentVersion& value) { m_resolvedComponentVersions.push_back(value); return *this; }

    /**
     * <p>A list of components that meet the requirements that you specify in the
     * request. This list includes each component's recipe that you can use to install
     * the component.</p>
     */
    inline ResolveComponentCandidatesResult& AddResolvedComponentVersions(ResolvedComponentVersion&& value) { m_resolvedComponentVersions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ResolvedComponentVersion> m_resolvedComponentVersions;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
