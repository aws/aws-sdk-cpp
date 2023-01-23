/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/ResourceInfo.h>
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
namespace LakeFormation
{
namespace Model
{
  class ListResourcesResult
  {
  public:
    AWS_LAKEFORMATION_API ListResourcesResult();
    AWS_LAKEFORMATION_API ListResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API ListResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A summary of the data lake resources.</p>
     */
    inline const Aws::Vector<ResourceInfo>& GetResourceInfoList() const{ return m_resourceInfoList; }

    /**
     * <p>A summary of the data lake resources.</p>
     */
    inline void SetResourceInfoList(const Aws::Vector<ResourceInfo>& value) { m_resourceInfoList = value; }

    /**
     * <p>A summary of the data lake resources.</p>
     */
    inline void SetResourceInfoList(Aws::Vector<ResourceInfo>&& value) { m_resourceInfoList = std::move(value); }

    /**
     * <p>A summary of the data lake resources.</p>
     */
    inline ListResourcesResult& WithResourceInfoList(const Aws::Vector<ResourceInfo>& value) { SetResourceInfoList(value); return *this;}

    /**
     * <p>A summary of the data lake resources.</p>
     */
    inline ListResourcesResult& WithResourceInfoList(Aws::Vector<ResourceInfo>&& value) { SetResourceInfoList(std::move(value)); return *this;}

    /**
     * <p>A summary of the data lake resources.</p>
     */
    inline ListResourcesResult& AddResourceInfoList(const ResourceInfo& value) { m_resourceInfoList.push_back(value); return *this; }

    /**
     * <p>A summary of the data lake resources.</p>
     */
    inline ListResourcesResult& AddResourceInfoList(ResourceInfo&& value) { m_resourceInfoList.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * resources.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * resources.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * resources.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * resources.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * resources.</p>
     */
    inline ListResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * resources.</p>
     */
    inline ListResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * resources.</p>
     */
    inline ListResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ResourceInfo> m_resourceInfoList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
