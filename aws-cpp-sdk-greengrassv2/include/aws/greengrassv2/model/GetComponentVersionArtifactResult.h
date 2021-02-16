/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
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
namespace GreengrassV2
{
namespace Model
{
  class AWS_GREENGRASSV2_API GetComponentVersionArtifactResult
  {
  public:
    GetComponentVersionArtifactResult();
    GetComponentVersionArtifactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetComponentVersionArtifactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The URL of the artifact.</p>
     */
    inline const Aws::String& GetPreSignedUrl() const{ return m_preSignedUrl; }

    /**
     * <p>The URL of the artifact.</p>
     */
    inline void SetPreSignedUrl(const Aws::String& value) { m_preSignedUrl = value; }

    /**
     * <p>The URL of the artifact.</p>
     */
    inline void SetPreSignedUrl(Aws::String&& value) { m_preSignedUrl = std::move(value); }

    /**
     * <p>The URL of the artifact.</p>
     */
    inline void SetPreSignedUrl(const char* value) { m_preSignedUrl.assign(value); }

    /**
     * <p>The URL of the artifact.</p>
     */
    inline GetComponentVersionArtifactResult& WithPreSignedUrl(const Aws::String& value) { SetPreSignedUrl(value); return *this;}

    /**
     * <p>The URL of the artifact.</p>
     */
    inline GetComponentVersionArtifactResult& WithPreSignedUrl(Aws::String&& value) { SetPreSignedUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the artifact.</p>
     */
    inline GetComponentVersionArtifactResult& WithPreSignedUrl(const char* value) { SetPreSignedUrl(value); return *this;}

  private:

    Aws::String m_preSignedUrl;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
