/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Returns the result structure for the get artifact request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetArtifactUrlResult">AWS
   * API Reference</a></p>
   */
  class GetArtifactUrlResult
  {
  public:
    AWS_AMPLIFY_API GetArtifactUrlResult() = default;
    AWS_AMPLIFY_API GetArtifactUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API GetArtifactUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID for an artifact. </p>
     */
    inline const Aws::String& GetArtifactId() const { return m_artifactId; }
    template<typename ArtifactIdT = Aws::String>
    void SetArtifactId(ArtifactIdT&& value) { m_artifactIdHasBeenSet = true; m_artifactId = std::forward<ArtifactIdT>(value); }
    template<typename ArtifactIdT = Aws::String>
    GetArtifactUrlResult& WithArtifactId(ArtifactIdT&& value) { SetArtifactId(std::forward<ArtifactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The presigned URL for the artifact. </p>
     */
    inline const Aws::String& GetArtifactUrl() const { return m_artifactUrl; }
    template<typename ArtifactUrlT = Aws::String>
    void SetArtifactUrl(ArtifactUrlT&& value) { m_artifactUrlHasBeenSet = true; m_artifactUrl = std::forward<ArtifactUrlT>(value); }
    template<typename ArtifactUrlT = Aws::String>
    GetArtifactUrlResult& WithArtifactUrl(ArtifactUrlT&& value) { SetArtifactUrl(std::forward<ArtifactUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetArtifactUrlResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_artifactId;
    bool m_artifactIdHasBeenSet = false;

    Aws::String m_artifactUrl;
    bool m_artifactUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
