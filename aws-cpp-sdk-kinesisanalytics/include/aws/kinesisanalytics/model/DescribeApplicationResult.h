/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/model/ApplicationDetail.h>

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
namespace KinesisAnalytics
{
namespace Model
{
  /**
   * <p/>
   */
  class AWS_KINESISANALYTICS_API DescribeApplicationResult
  {
  public:
    DescribeApplicationResult();
    DescribeApplicationResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeApplicationResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Provides a description of the application, such as the application Amazon
     * Resource Name (ARN), status, latest version, and input and output configuration
     * details.</p>
     */
    inline const ApplicationDetail& GetApplicationDetail() const{ return m_applicationDetail; }

    /**
     * <p>Provides a description of the application, such as the application Amazon
     * Resource Name (ARN), status, latest version, and input and output configuration
     * details.</p>
     */
    inline void SetApplicationDetail(const ApplicationDetail& value) { m_applicationDetail = value; }

    /**
     * <p>Provides a description of the application, such as the application Amazon
     * Resource Name (ARN), status, latest version, and input and output configuration
     * details.</p>
     */
    inline void SetApplicationDetail(ApplicationDetail&& value) { m_applicationDetail = value; }

    /**
     * <p>Provides a description of the application, such as the application Amazon
     * Resource Name (ARN), status, latest version, and input and output configuration
     * details.</p>
     */
    inline DescribeApplicationResult& WithApplicationDetail(const ApplicationDetail& value) { SetApplicationDetail(value); return *this;}

    /**
     * <p>Provides a description of the application, such as the application Amazon
     * Resource Name (ARN), status, latest version, and input and output configuration
     * details.</p>
     */
    inline DescribeApplicationResult& WithApplicationDetail(ApplicationDetail&& value) { SetApplicationDetail(value); return *this;}

  private:
    ApplicationDetail m_applicationDetail;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
