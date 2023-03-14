/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/ResourceInfo.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeResourceResult
  {
  public:
    AWS_LAKEFORMATION_API DescribeResourceResult();
    AWS_LAKEFORMATION_API DescribeResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API DescribeResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure containing information about an Lake Formation resource.</p>
     */
    inline const ResourceInfo& GetResourceInfo() const{ return m_resourceInfo; }

    /**
     * <p>A structure containing information about an Lake Formation resource.</p>
     */
    inline void SetResourceInfo(const ResourceInfo& value) { m_resourceInfo = value; }

    /**
     * <p>A structure containing information about an Lake Formation resource.</p>
     */
    inline void SetResourceInfo(ResourceInfo&& value) { m_resourceInfo = std::move(value); }

    /**
     * <p>A structure containing information about an Lake Formation resource.</p>
     */
    inline DescribeResourceResult& WithResourceInfo(const ResourceInfo& value) { SetResourceInfo(value); return *this;}

    /**
     * <p>A structure containing information about an Lake Formation resource.</p>
     */
    inline DescribeResourceResult& WithResourceInfo(ResourceInfo&& value) { SetResourceInfo(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ResourceInfo m_resourceInfo;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
