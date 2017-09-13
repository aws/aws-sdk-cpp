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
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/model/ApplicationSummary.h>
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
namespace KinesisAnalytics
{
namespace Model
{
  /**
   * <p>TBD</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/CreateApplicationResponse">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API CreateApplicationResult
  {
  public:
    CreateApplicationResult();
    CreateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>In response to your <code>CreateApplication</code> request, Amazon Kinesis
     * Analytics returns a response with a summary of the application it created,
     * including the application Amazon Resource Name (ARN), name, and status.</p>
     */
    inline const ApplicationSummary& GetApplicationSummary() const{ return m_applicationSummary; }

    /**
     * <p>In response to your <code>CreateApplication</code> request, Amazon Kinesis
     * Analytics returns a response with a summary of the application it created,
     * including the application Amazon Resource Name (ARN), name, and status.</p>
     */
    inline void SetApplicationSummary(const ApplicationSummary& value) { m_applicationSummary = value; }

    /**
     * <p>In response to your <code>CreateApplication</code> request, Amazon Kinesis
     * Analytics returns a response with a summary of the application it created,
     * including the application Amazon Resource Name (ARN), name, and status.</p>
     */
    inline void SetApplicationSummary(ApplicationSummary&& value) { m_applicationSummary = std::move(value); }

    /**
     * <p>In response to your <code>CreateApplication</code> request, Amazon Kinesis
     * Analytics returns a response with a summary of the application it created,
     * including the application Amazon Resource Name (ARN), name, and status.</p>
     */
    inline CreateApplicationResult& WithApplicationSummary(const ApplicationSummary& value) { SetApplicationSummary(value); return *this;}

    /**
     * <p>In response to your <code>CreateApplication</code> request, Amazon Kinesis
     * Analytics returns a response with a summary of the application it created,
     * including the application Amazon Resource Name (ARN), name, and status.</p>
     */
    inline CreateApplicationResult& WithApplicationSummary(ApplicationSummary&& value) { SetApplicationSummary(std::move(value)); return *this;}

  private:

    ApplicationSummary m_applicationSummary;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
