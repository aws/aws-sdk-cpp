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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/ApplicationInfo.h>
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
namespace CodeDeploy
{
namespace Model
{
  /**
   * <p>Represents the output of a BatchGetApplications operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetApplicationsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API BatchGetApplicationsResult
  {
  public:
    BatchGetApplicationsResult();
    BatchGetApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchGetApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the applications.</p>
     */
    inline const Aws::Vector<ApplicationInfo>& GetApplicationsInfo() const{ return m_applicationsInfo; }

    /**
     * <p>Information about the applications.</p>
     */
    inline void SetApplicationsInfo(const Aws::Vector<ApplicationInfo>& value) { m_applicationsInfo = value; }

    /**
     * <p>Information about the applications.</p>
     */
    inline void SetApplicationsInfo(Aws::Vector<ApplicationInfo>&& value) { m_applicationsInfo = std::move(value); }

    /**
     * <p>Information about the applications.</p>
     */
    inline BatchGetApplicationsResult& WithApplicationsInfo(const Aws::Vector<ApplicationInfo>& value) { SetApplicationsInfo(value); return *this;}

    /**
     * <p>Information about the applications.</p>
     */
    inline BatchGetApplicationsResult& WithApplicationsInfo(Aws::Vector<ApplicationInfo>&& value) { SetApplicationsInfo(std::move(value)); return *this;}

    /**
     * <p>Information about the applications.</p>
     */
    inline BatchGetApplicationsResult& AddApplicationsInfo(const ApplicationInfo& value) { m_applicationsInfo.push_back(value); return *this; }

    /**
     * <p>Information about the applications.</p>
     */
    inline BatchGetApplicationsResult& AddApplicationsInfo(ApplicationInfo&& value) { m_applicationsInfo.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ApplicationInfo> m_applicationsInfo;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
