/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/panorama/model/PackageListItem.h>
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
  class ListPackagesResult
  {
  public:
    AWS_PANORAMA_API ListPackagesResult();
    AWS_PANORAMA_API ListPackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API ListPackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListPackagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListPackagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListPackagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of packages.</p>
     */
    inline const Aws::Vector<PackageListItem>& GetPackages() const{ return m_packages; }

    /**
     * <p>A list of packages.</p>
     */
    inline void SetPackages(const Aws::Vector<PackageListItem>& value) { m_packages = value; }

    /**
     * <p>A list of packages.</p>
     */
    inline void SetPackages(Aws::Vector<PackageListItem>&& value) { m_packages = std::move(value); }

    /**
     * <p>A list of packages.</p>
     */
    inline ListPackagesResult& WithPackages(const Aws::Vector<PackageListItem>& value) { SetPackages(value); return *this;}

    /**
     * <p>A list of packages.</p>
     */
    inline ListPackagesResult& WithPackages(Aws::Vector<PackageListItem>&& value) { SetPackages(std::move(value)); return *this;}

    /**
     * <p>A list of packages.</p>
     */
    inline ListPackagesResult& AddPackages(const PackageListItem& value) { m_packages.push_back(value); return *this; }

    /**
     * <p>A list of packages.</p>
     */
    inline ListPackagesResult& AddPackages(PackageListItem&& value) { m_packages.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<PackageListItem> m_packages;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
