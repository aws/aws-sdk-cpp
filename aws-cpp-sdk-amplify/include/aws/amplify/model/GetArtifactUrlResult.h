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
#include <aws/amplify/Amplify_EXPORTS.h>
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
namespace Amplify
{
namespace Model
{
  /**
   * <p> Result structure for the get artifact request. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetArtifactUrlResult">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API GetArtifactUrlResult
  {
  public:
    GetArtifactUrlResult();
    GetArtifactUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetArtifactUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Unique Id for a artifact. </p>
     */
    inline const Aws::String& GetArtifactId() const{ return m_artifactId; }

    /**
     * <p> Unique Id for a artifact. </p>
     */
    inline void SetArtifactId(const Aws::String& value) { m_artifactId = value; }

    /**
     * <p> Unique Id for a artifact. </p>
     */
    inline void SetArtifactId(Aws::String&& value) { m_artifactId = std::move(value); }

    /**
     * <p> Unique Id for a artifact. </p>
     */
    inline void SetArtifactId(const char* value) { m_artifactId.assign(value); }

    /**
     * <p> Unique Id for a artifact. </p>
     */
    inline GetArtifactUrlResult& WithArtifactId(const Aws::String& value) { SetArtifactId(value); return *this;}

    /**
     * <p> Unique Id for a artifact. </p>
     */
    inline GetArtifactUrlResult& WithArtifactId(Aws::String&& value) { SetArtifactId(std::move(value)); return *this;}

    /**
     * <p> Unique Id for a artifact. </p>
     */
    inline GetArtifactUrlResult& WithArtifactId(const char* value) { SetArtifactId(value); return *this;}


    /**
     * <p> Presigned url for the artifact. </p>
     */
    inline const Aws::String& GetArtifactUrl() const{ return m_artifactUrl; }

    /**
     * <p> Presigned url for the artifact. </p>
     */
    inline void SetArtifactUrl(const Aws::String& value) { m_artifactUrl = value; }

    /**
     * <p> Presigned url for the artifact. </p>
     */
    inline void SetArtifactUrl(Aws::String&& value) { m_artifactUrl = std::move(value); }

    /**
     * <p> Presigned url for the artifact. </p>
     */
    inline void SetArtifactUrl(const char* value) { m_artifactUrl.assign(value); }

    /**
     * <p> Presigned url for the artifact. </p>
     */
    inline GetArtifactUrlResult& WithArtifactUrl(const Aws::String& value) { SetArtifactUrl(value); return *this;}

    /**
     * <p> Presigned url for the artifact. </p>
     */
    inline GetArtifactUrlResult& WithArtifactUrl(Aws::String&& value) { SetArtifactUrl(std::move(value)); return *this;}

    /**
     * <p> Presigned url for the artifact. </p>
     */
    inline GetArtifactUrlResult& WithArtifactUrl(const char* value) { SetArtifactUrl(value); return *this;}

  private:

    Aws::String m_artifactId;

    Aws::String m_artifactUrl;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
