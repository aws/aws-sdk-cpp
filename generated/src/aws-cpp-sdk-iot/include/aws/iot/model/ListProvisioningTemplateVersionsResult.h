/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ProvisioningTemplateVersionSummary.h>
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
namespace IoT
{
namespace Model
{
  class ListProvisioningTemplateVersionsResult
  {
  public:
    AWS_IOT_API ListProvisioningTemplateVersionsResult();
    AWS_IOT_API ListProvisioningTemplateVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListProvisioningTemplateVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of provisioning template versions.</p>
     */
    inline const Aws::Vector<ProvisioningTemplateVersionSummary>& GetVersions() const{ return m_versions; }

    /**
     * <p>The list of provisioning template versions.</p>
     */
    inline void SetVersions(const Aws::Vector<ProvisioningTemplateVersionSummary>& value) { m_versions = value; }

    /**
     * <p>The list of provisioning template versions.</p>
     */
    inline void SetVersions(Aws::Vector<ProvisioningTemplateVersionSummary>&& value) { m_versions = std::move(value); }

    /**
     * <p>The list of provisioning template versions.</p>
     */
    inline ListProvisioningTemplateVersionsResult& WithVersions(const Aws::Vector<ProvisioningTemplateVersionSummary>& value) { SetVersions(value); return *this;}

    /**
     * <p>The list of provisioning template versions.</p>
     */
    inline ListProvisioningTemplateVersionsResult& WithVersions(Aws::Vector<ProvisioningTemplateVersionSummary>&& value) { SetVersions(std::move(value)); return *this;}

    /**
     * <p>The list of provisioning template versions.</p>
     */
    inline ListProvisioningTemplateVersionsResult& AddVersions(const ProvisioningTemplateVersionSummary& value) { m_versions.push_back(value); return *this; }

    /**
     * <p>The list of provisioning template versions.</p>
     */
    inline ListProvisioningTemplateVersionsResult& AddVersions(ProvisioningTemplateVersionSummary&& value) { m_versions.push_back(std::move(value)); return *this; }


    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline ListProvisioningTemplateVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline ListProvisioningTemplateVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline ListProvisioningTemplateVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ProvisioningTemplateVersionSummary> m_versions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
