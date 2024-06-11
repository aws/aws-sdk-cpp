﻿/**
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
    AWS_AMPLIFY_API GetArtifactUrlResult();
    AWS_AMPLIFY_API GetArtifactUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API GetArtifactUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID for an artifact. </p>
     */
    inline const Aws::String& GetArtifactId() const{ return m_artifactId; }
    inline void SetArtifactId(const Aws::String& value) { m_artifactId = value; }
    inline void SetArtifactId(Aws::String&& value) { m_artifactId = std::move(value); }
    inline void SetArtifactId(const char* value) { m_artifactId.assign(value); }
    inline GetArtifactUrlResult& WithArtifactId(const Aws::String& value) { SetArtifactId(value); return *this;}
    inline GetArtifactUrlResult& WithArtifactId(Aws::String&& value) { SetArtifactId(std::move(value)); return *this;}
    inline GetArtifactUrlResult& WithArtifactId(const char* value) { SetArtifactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The presigned URL for the artifact. </p>
     */
    inline const Aws::String& GetArtifactUrl() const{ return m_artifactUrl; }
    inline void SetArtifactUrl(const Aws::String& value) { m_artifactUrl = value; }
    inline void SetArtifactUrl(Aws::String&& value) { m_artifactUrl = std::move(value); }
    inline void SetArtifactUrl(const char* value) { m_artifactUrl.assign(value); }
    inline GetArtifactUrlResult& WithArtifactUrl(const Aws::String& value) { SetArtifactUrl(value); return *this;}
    inline GetArtifactUrlResult& WithArtifactUrl(Aws::String&& value) { SetArtifactUrl(std::move(value)); return *this;}
    inline GetArtifactUrlResult& WithArtifactUrl(const char* value) { SetArtifactUrl(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetArtifactUrlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetArtifactUrlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetArtifactUrlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_artifactId;

    Aws::String m_artifactUrl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
