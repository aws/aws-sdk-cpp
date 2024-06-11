﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/SourceCredentialsInfo.h>
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
namespace CodeBuild
{
namespace Model
{
  class ListSourceCredentialsResult
  {
  public:
    AWS_CODEBUILD_API ListSourceCredentialsResult();
    AWS_CODEBUILD_API ListSourceCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API ListSourceCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of <code>SourceCredentialsInfo</code> objects. Each
     * <code>SourceCredentialsInfo</code> object includes the authentication type,
     * token ARN, and type of source provider for one set of credentials. </p>
     */
    inline const Aws::Vector<SourceCredentialsInfo>& GetSourceCredentialsInfos() const{ return m_sourceCredentialsInfos; }
    inline void SetSourceCredentialsInfos(const Aws::Vector<SourceCredentialsInfo>& value) { m_sourceCredentialsInfos = value; }
    inline void SetSourceCredentialsInfos(Aws::Vector<SourceCredentialsInfo>&& value) { m_sourceCredentialsInfos = std::move(value); }
    inline ListSourceCredentialsResult& WithSourceCredentialsInfos(const Aws::Vector<SourceCredentialsInfo>& value) { SetSourceCredentialsInfos(value); return *this;}
    inline ListSourceCredentialsResult& WithSourceCredentialsInfos(Aws::Vector<SourceCredentialsInfo>&& value) { SetSourceCredentialsInfos(std::move(value)); return *this;}
    inline ListSourceCredentialsResult& AddSourceCredentialsInfos(const SourceCredentialsInfo& value) { m_sourceCredentialsInfos.push_back(value); return *this; }
    inline ListSourceCredentialsResult& AddSourceCredentialsInfos(SourceCredentialsInfo&& value) { m_sourceCredentialsInfos.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSourceCredentialsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSourceCredentialsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSourceCredentialsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SourceCredentialsInfo> m_sourceCredentialsInfos;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
