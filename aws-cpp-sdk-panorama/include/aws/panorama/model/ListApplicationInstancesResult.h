/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/ApplicationInstance.h>
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
namespace Panorama
{
namespace Model
{
  class ListApplicationInstancesResult
  {
  public:
    AWS_PANORAMA_API ListApplicationInstancesResult();
    AWS_PANORAMA_API ListApplicationInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API ListApplicationInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of application instances.</p>
     */
    inline const Aws::Vector<ApplicationInstance>& GetApplicationInstances() const{ return m_applicationInstances; }

    /**
     * <p>A list of application instances.</p>
     */
    inline void SetApplicationInstances(const Aws::Vector<ApplicationInstance>& value) { m_applicationInstances = value; }

    /**
     * <p>A list of application instances.</p>
     */
    inline void SetApplicationInstances(Aws::Vector<ApplicationInstance>&& value) { m_applicationInstances = std::move(value); }

    /**
     * <p>A list of application instances.</p>
     */
    inline ListApplicationInstancesResult& WithApplicationInstances(const Aws::Vector<ApplicationInstance>& value) { SetApplicationInstances(value); return *this;}

    /**
     * <p>A list of application instances.</p>
     */
    inline ListApplicationInstancesResult& WithApplicationInstances(Aws::Vector<ApplicationInstance>&& value) { SetApplicationInstances(std::move(value)); return *this;}

    /**
     * <p>A list of application instances.</p>
     */
    inline ListApplicationInstancesResult& AddApplicationInstances(const ApplicationInstance& value) { m_applicationInstances.push_back(value); return *this; }

    /**
     * <p>A list of application instances.</p>
     */
    inline ListApplicationInstancesResult& AddApplicationInstances(ApplicationInstance&& value) { m_applicationInstances.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListApplicationInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListApplicationInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListApplicationInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ApplicationInstance> m_applicationInstances;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
