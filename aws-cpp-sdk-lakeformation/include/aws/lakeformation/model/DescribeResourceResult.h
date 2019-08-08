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
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
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
  class AWS_LAKEFORMATION_API DescribeResourceResult
  {
  public:
    DescribeResourceResult();
    DescribeResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure containing information about an AWS Lake Formation resource.</p>
     */
    inline const ResourceInfo& GetResourceInfo() const{ return m_resourceInfo; }

    /**
     * <p>A structure containing information about an AWS Lake Formation resource.</p>
     */
    inline void SetResourceInfo(const ResourceInfo& value) { m_resourceInfo = value; }

    /**
     * <p>A structure containing information about an AWS Lake Formation resource.</p>
     */
    inline void SetResourceInfo(ResourceInfo&& value) { m_resourceInfo = std::move(value); }

    /**
     * <p>A structure containing information about an AWS Lake Formation resource.</p>
     */
    inline DescribeResourceResult& WithResourceInfo(const ResourceInfo& value) { SetResourceInfo(value); return *this;}

    /**
     * <p>A structure containing information about an AWS Lake Formation resource.</p>
     */
    inline DescribeResourceResult& WithResourceInfo(ResourceInfo&& value) { SetResourceInfo(std::move(value)); return *this;}

  private:

    ResourceInfo m_resourceInfo;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
