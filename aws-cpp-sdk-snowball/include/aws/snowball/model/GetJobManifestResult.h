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
#include <aws/snowball/Snowball_EXPORTS.h>
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
namespace Snowball
{
namespace Model
{
  class AWS_SNOWBALL_API GetJobManifestResult
  {
  public:
    GetJobManifestResult();
    GetJobManifestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetJobManifestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon S3 presigned URL for the manifest file associated with the
     * specified <code>JobId</code> value.</p>
     */
    inline const Aws::String& GetManifestURI() const{ return m_manifestURI; }

    /**
     * <p>The Amazon S3 presigned URL for the manifest file associated with the
     * specified <code>JobId</code> value.</p>
     */
    inline void SetManifestURI(const Aws::String& value) { m_manifestURI = value; }

    /**
     * <p>The Amazon S3 presigned URL for the manifest file associated with the
     * specified <code>JobId</code> value.</p>
     */
    inline void SetManifestURI(Aws::String&& value) { m_manifestURI = std::move(value); }

    /**
     * <p>The Amazon S3 presigned URL for the manifest file associated with the
     * specified <code>JobId</code> value.</p>
     */
    inline void SetManifestURI(const char* value) { m_manifestURI.assign(value); }

    /**
     * <p>The Amazon S3 presigned URL for the manifest file associated with the
     * specified <code>JobId</code> value.</p>
     */
    inline GetJobManifestResult& WithManifestURI(const Aws::String& value) { SetManifestURI(value); return *this;}

    /**
     * <p>The Amazon S3 presigned URL for the manifest file associated with the
     * specified <code>JobId</code> value.</p>
     */
    inline GetJobManifestResult& WithManifestURI(Aws::String&& value) { SetManifestURI(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 presigned URL for the manifest file associated with the
     * specified <code>JobId</code> value.</p>
     */
    inline GetJobManifestResult& WithManifestURI(const char* value) { SetManifestURI(value); return *this;}

  private:

    Aws::String m_manifestURI;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
