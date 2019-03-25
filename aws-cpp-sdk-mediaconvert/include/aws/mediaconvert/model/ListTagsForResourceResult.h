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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/ResourceTags.h>
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
namespace MediaConvert
{
namespace Model
{
  class AWS_MEDIACONVERT_API ListTagsForResourceResult
  {
  public:
    ListTagsForResourceResult();
    ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The Amazon Resource Name (ARN) and tags for an AWS Elemental MediaConvert
     * resource.
     */
    inline const ResourceTags& GetResourceTags() const{ return m_resourceTags; }

    /**
     * The Amazon Resource Name (ARN) and tags for an AWS Elemental MediaConvert
     * resource.
     */
    inline void SetResourceTags(const ResourceTags& value) { m_resourceTags = value; }

    /**
     * The Amazon Resource Name (ARN) and tags for an AWS Elemental MediaConvert
     * resource.
     */
    inline void SetResourceTags(ResourceTags&& value) { m_resourceTags = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) and tags for an AWS Elemental MediaConvert
     * resource.
     */
    inline ListTagsForResourceResult& WithResourceTags(const ResourceTags& value) { SetResourceTags(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) and tags for an AWS Elemental MediaConvert
     * resource.
     */
    inline ListTagsForResourceResult& WithResourceTags(ResourceTags&& value) { SetResourceTags(std::move(value)); return *this;}

  private:

    ResourceTags m_resourceTags;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
