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
#include <aws/waf/WAF_EXPORTS.h>
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
namespace WAF
{
namespace Model
{
  class AWS_WAF_API CreateWebACLMigrationStackResult
  {
  public:
    CreateWebACLMigrationStackResult();
    CreateWebACLMigrationStackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateWebACLMigrationStackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The URL of the template created in Amazon S3. </p>
     */
    inline const Aws::String& GetS3ObjectUrl() const{ return m_s3ObjectUrl; }

    /**
     * <p>The URL of the template created in Amazon S3. </p>
     */
    inline void SetS3ObjectUrl(const Aws::String& value) { m_s3ObjectUrl = value; }

    /**
     * <p>The URL of the template created in Amazon S3. </p>
     */
    inline void SetS3ObjectUrl(Aws::String&& value) { m_s3ObjectUrl = std::move(value); }

    /**
     * <p>The URL of the template created in Amazon S3. </p>
     */
    inline void SetS3ObjectUrl(const char* value) { m_s3ObjectUrl.assign(value); }

    /**
     * <p>The URL of the template created in Amazon S3. </p>
     */
    inline CreateWebACLMigrationStackResult& WithS3ObjectUrl(const Aws::String& value) { SetS3ObjectUrl(value); return *this;}

    /**
     * <p>The URL of the template created in Amazon S3. </p>
     */
    inline CreateWebACLMigrationStackResult& WithS3ObjectUrl(Aws::String&& value) { SetS3ObjectUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the template created in Amazon S3. </p>
     */
    inline CreateWebACLMigrationStackResult& WithS3ObjectUrl(const char* value) { SetS3ObjectUrl(value); return *this;}

  private:

    Aws::String m_s3ObjectUrl;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
