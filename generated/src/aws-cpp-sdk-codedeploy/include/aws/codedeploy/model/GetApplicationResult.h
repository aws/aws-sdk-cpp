/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
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
   * <p>Represents the output of a <code>GetApplication</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetApplicationOutput">AWS
   * API Reference</a></p>
   */
  class GetApplicationResult
  {
  public:
    AWS_CODEDEPLOY_API GetApplicationResult();
    AWS_CODEDEPLOY_API GetApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API GetApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the application.</p>
     */
    inline const ApplicationInfo& GetApplication() const{ return m_application; }

    /**
     * <p>Information about the application.</p>
     */
    inline void SetApplication(const ApplicationInfo& value) { m_application = value; }

    /**
     * <p>Information about the application.</p>
     */
    inline void SetApplication(ApplicationInfo&& value) { m_application = std::move(value); }

    /**
     * <p>Information about the application.</p>
     */
    inline GetApplicationResult& WithApplication(const ApplicationInfo& value) { SetApplication(value); return *this;}

    /**
     * <p>Information about the application.</p>
     */
    inline GetApplicationResult& WithApplication(ApplicationInfo&& value) { SetApplication(std::move(value)); return *this;}

  private:

    ApplicationInfo m_application;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
