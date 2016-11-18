﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisioningArtifactDetail.h>

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
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API ListProvisioningArtifactsResult
  {
  public:
    ListProvisioningArtifactsResult();
    ListProvisioningArtifactsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListProvisioningArtifactsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>List of detailed provisioning artifact information objects.</p>
     */
    inline const Aws::Vector<ProvisioningArtifactDetail>& GetProvisioningArtifactDetails() const{ return m_provisioningArtifactDetails; }

    /**
     * <p>List of detailed provisioning artifact information objects.</p>
     */
    inline void SetProvisioningArtifactDetails(const Aws::Vector<ProvisioningArtifactDetail>& value) { m_provisioningArtifactDetails = value; }

    /**
     * <p>List of detailed provisioning artifact information objects.</p>
     */
    inline void SetProvisioningArtifactDetails(Aws::Vector<ProvisioningArtifactDetail>&& value) { m_provisioningArtifactDetails = value; }

    /**
     * <p>List of detailed provisioning artifact information objects.</p>
     */
    inline ListProvisioningArtifactsResult& WithProvisioningArtifactDetails(const Aws::Vector<ProvisioningArtifactDetail>& value) { SetProvisioningArtifactDetails(value); return *this;}

    /**
     * <p>List of detailed provisioning artifact information objects.</p>
     */
    inline ListProvisioningArtifactsResult& WithProvisioningArtifactDetails(Aws::Vector<ProvisioningArtifactDetail>&& value) { SetProvisioningArtifactDetails(value); return *this;}

    /**
     * <p>List of detailed provisioning artifact information objects.</p>
     */
    inline ListProvisioningArtifactsResult& AddProvisioningArtifactDetails(const ProvisioningArtifactDetail& value) { m_provisioningArtifactDetails.push_back(value); return *this; }

    /**
     * <p>List of detailed provisioning artifact information objects.</p>
     */
    inline ListProvisioningArtifactsResult& AddProvisioningArtifactDetails(ProvisioningArtifactDetail&& value) { m_provisioningArtifactDetails.push_back(value); return *this; }

    /**
     * <p>The page token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The page token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The page token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = value; }

    /**
     * <p>The page token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The page token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListProvisioningArtifactsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListProvisioningArtifactsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListProvisioningArtifactsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:
    Aws::Vector<ProvisioningArtifactDetail> m_provisioningArtifactDetails;
    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
