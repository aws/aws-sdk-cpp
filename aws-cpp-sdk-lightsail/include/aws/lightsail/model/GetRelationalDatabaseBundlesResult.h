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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/RelationalDatabaseBundle.h>
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
namespace Lightsail
{
namespace Model
{
  class AWS_LIGHTSAIL_API GetRelationalDatabaseBundlesResult
  {
  public:
    GetRelationalDatabaseBundlesResult();
    GetRelationalDatabaseBundlesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRelationalDatabaseBundlesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object describing the result of your get relational database bundles
     * request.</p>
     */
    inline const Aws::Vector<RelationalDatabaseBundle>& GetBundles() const{ return m_bundles; }

    /**
     * <p>An object describing the result of your get relational database bundles
     * request.</p>
     */
    inline void SetBundles(const Aws::Vector<RelationalDatabaseBundle>& value) { m_bundles = value; }

    /**
     * <p>An object describing the result of your get relational database bundles
     * request.</p>
     */
    inline void SetBundles(Aws::Vector<RelationalDatabaseBundle>&& value) { m_bundles = std::move(value); }

    /**
     * <p>An object describing the result of your get relational database bundles
     * request.</p>
     */
    inline GetRelationalDatabaseBundlesResult& WithBundles(const Aws::Vector<RelationalDatabaseBundle>& value) { SetBundles(value); return *this;}

    /**
     * <p>An object describing the result of your get relational database bundles
     * request.</p>
     */
    inline GetRelationalDatabaseBundlesResult& WithBundles(Aws::Vector<RelationalDatabaseBundle>&& value) { SetBundles(std::move(value)); return *this;}

    /**
     * <p>An object describing the result of your get relational database bundles
     * request.</p>
     */
    inline GetRelationalDatabaseBundlesResult& AddBundles(const RelationalDatabaseBundle& value) { m_bundles.push_back(value); return *this; }

    /**
     * <p>An object describing the result of your get relational database bundles
     * request.</p>
     */
    inline GetRelationalDatabaseBundlesResult& AddBundles(RelationalDatabaseBundle&& value) { m_bundles.push_back(std::move(value)); return *this; }


    /**
     * <p>A token used for advancing to the next page of results of your get relational
     * database bundles request.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>A token used for advancing to the next page of results of your get relational
     * database bundles request.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>A token used for advancing to the next page of results of your get relational
     * database bundles request.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>A token used for advancing to the next page of results of your get relational
     * database bundles request.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>A token used for advancing to the next page of results of your get relational
     * database bundles request.</p>
     */
    inline GetRelationalDatabaseBundlesResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>A token used for advancing to the next page of results of your get relational
     * database bundles request.</p>
     */
    inline GetRelationalDatabaseBundlesResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>A token used for advancing to the next page of results of your get relational
     * database bundles request.</p>
     */
    inline GetRelationalDatabaseBundlesResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<RelationalDatabaseBundle> m_bundles;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
