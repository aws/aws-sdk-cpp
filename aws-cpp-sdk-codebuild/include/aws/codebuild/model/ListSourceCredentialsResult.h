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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_CODEBUILD_API ListSourceCredentialsResult
  {
  public:
    ListSourceCredentialsResult();
    ListSourceCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListSourceCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of <code>SourceCredentialsInfo</code> objects. Each
     * <code>SourceCredentialsInfo</code> object includes the authentication type,
     * token ARN, and type of source provider for one set of credentials. </p>
     */
    inline const Aws::Vector<SourceCredentialsInfo>& GetSourceCredentialsInfos() const{ return m_sourceCredentialsInfos; }

    /**
     * <p> A list of <code>SourceCredentialsInfo</code> objects. Each
     * <code>SourceCredentialsInfo</code> object includes the authentication type,
     * token ARN, and type of source provider for one set of credentials. </p>
     */
    inline void SetSourceCredentialsInfos(const Aws::Vector<SourceCredentialsInfo>& value) { m_sourceCredentialsInfos = value; }

    /**
     * <p> A list of <code>SourceCredentialsInfo</code> objects. Each
     * <code>SourceCredentialsInfo</code> object includes the authentication type,
     * token ARN, and type of source provider for one set of credentials. </p>
     */
    inline void SetSourceCredentialsInfos(Aws::Vector<SourceCredentialsInfo>&& value) { m_sourceCredentialsInfos = std::move(value); }

    /**
     * <p> A list of <code>SourceCredentialsInfo</code> objects. Each
     * <code>SourceCredentialsInfo</code> object includes the authentication type,
     * token ARN, and type of source provider for one set of credentials. </p>
     */
    inline ListSourceCredentialsResult& WithSourceCredentialsInfos(const Aws::Vector<SourceCredentialsInfo>& value) { SetSourceCredentialsInfos(value); return *this;}

    /**
     * <p> A list of <code>SourceCredentialsInfo</code> objects. Each
     * <code>SourceCredentialsInfo</code> object includes the authentication type,
     * token ARN, and type of source provider for one set of credentials. </p>
     */
    inline ListSourceCredentialsResult& WithSourceCredentialsInfos(Aws::Vector<SourceCredentialsInfo>&& value) { SetSourceCredentialsInfos(std::move(value)); return *this;}

    /**
     * <p> A list of <code>SourceCredentialsInfo</code> objects. Each
     * <code>SourceCredentialsInfo</code> object includes the authentication type,
     * token ARN, and type of source provider for one set of credentials. </p>
     */
    inline ListSourceCredentialsResult& AddSourceCredentialsInfos(const SourceCredentialsInfo& value) { m_sourceCredentialsInfos.push_back(value); return *this; }

    /**
     * <p> A list of <code>SourceCredentialsInfo</code> objects. Each
     * <code>SourceCredentialsInfo</code> object includes the authentication type,
     * token ARN, and type of source provider for one set of credentials. </p>
     */
    inline ListSourceCredentialsResult& AddSourceCredentialsInfos(SourceCredentialsInfo&& value) { m_sourceCredentialsInfos.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SourceCredentialsInfo> m_sourceCredentialsInfos;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
