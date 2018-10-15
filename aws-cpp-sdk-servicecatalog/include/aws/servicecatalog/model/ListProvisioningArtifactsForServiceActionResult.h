/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/servicecatalog/model/ProvisioningArtifactView.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API ListProvisioningArtifactsForServiceActionResult
  {
  public:
    ListProvisioningArtifactsForServiceActionResult();
    ListProvisioningArtifactsForServiceActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListProvisioningArtifactsForServiceActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects with information about product views and provisioning
     * artifacts.</p>
     */
    inline const Aws::Vector<ProvisioningArtifactView>& GetProvisioningArtifactViews() const{ return m_provisioningArtifactViews; }

    /**
     * <p>An array of objects with information about product views and provisioning
     * artifacts.</p>
     */
    inline void SetProvisioningArtifactViews(const Aws::Vector<ProvisioningArtifactView>& value) { m_provisioningArtifactViews = value; }

    /**
     * <p>An array of objects with information about product views and provisioning
     * artifacts.</p>
     */
    inline void SetProvisioningArtifactViews(Aws::Vector<ProvisioningArtifactView>&& value) { m_provisioningArtifactViews = std::move(value); }

    /**
     * <p>An array of objects with information about product views and provisioning
     * artifacts.</p>
     */
    inline ListProvisioningArtifactsForServiceActionResult& WithProvisioningArtifactViews(const Aws::Vector<ProvisioningArtifactView>& value) { SetProvisioningArtifactViews(value); return *this;}

    /**
     * <p>An array of objects with information about product views and provisioning
     * artifacts.</p>
     */
    inline ListProvisioningArtifactsForServiceActionResult& WithProvisioningArtifactViews(Aws::Vector<ProvisioningArtifactView>&& value) { SetProvisioningArtifactViews(std::move(value)); return *this;}

    /**
     * <p>An array of objects with information about product views and provisioning
     * artifacts.</p>
     */
    inline ListProvisioningArtifactsForServiceActionResult& AddProvisioningArtifactViews(const ProvisioningArtifactView& value) { m_provisioningArtifactViews.push_back(value); return *this; }

    /**
     * <p>An array of objects with information about product views and provisioning
     * artifacts.</p>
     */
    inline ListProvisioningArtifactsForServiceActionResult& AddProvisioningArtifactViews(ProvisioningArtifactView&& value) { m_provisioningArtifactViews.push_back(std::move(value)); return *this; }


    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListProvisioningArtifactsForServiceActionResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListProvisioningArtifactsForServiceActionResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListProvisioningArtifactsForServiceActionResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<ProvisioningArtifactView> m_provisioningArtifactViews;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
