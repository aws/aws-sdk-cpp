/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/model/ApplicationDetail.h>
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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DescribeApplicationResponse">AWS
   * API Reference</a></p>
   */
  class DescribeApplicationResult
  {
  public:
    AWS_KINESISANALYTICS_API DescribeApplicationResult();
    AWS_KINESISANALYTICS_API DescribeApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICS_API DescribeApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetApplicationDetail(ApplicationDetail&& value) { m_applicationDetail = std::move(value); }

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
    inline DescribeApplicationResult& WithApplicationDetail(ApplicationDetail&& value) { SetApplicationDetail(std::move(value)); return *this;}

  private:

    ApplicationDetail m_applicationDetail;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
