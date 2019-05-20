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
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
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
namespace MediaPackageVod
{
namespace Model
{
  class AWS_MEDIAPACKAGEVOD_API CreatePackagingGroupResult
  {
  public:
    CreatePackagingGroupResult();
    CreatePackagingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreatePackagingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The ARN of the PackagingGroup.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The ARN of the PackagingGroup.
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * The ARN of the PackagingGroup.
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * The ARN of the PackagingGroup.
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * The ARN of the PackagingGroup.
     */
    inline CreatePackagingGroupResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The ARN of the PackagingGroup.
     */
    inline CreatePackagingGroupResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The ARN of the PackagingGroup.
     */
    inline CreatePackagingGroupResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The ID of the PackagingGroup.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the PackagingGroup.
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * The ID of the PackagingGroup.
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * The ID of the PackagingGroup.
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * The ID of the PackagingGroup.
     */
    inline CreatePackagingGroupResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the PackagingGroup.
     */
    inline CreatePackagingGroupResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the PackagingGroup.
     */
    inline CreatePackagingGroupResult& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_id;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
