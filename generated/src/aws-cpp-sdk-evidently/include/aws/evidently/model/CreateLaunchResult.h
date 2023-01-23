/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/model/Launch.h>
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
namespace CloudWatchEvidently
{
namespace Model
{
  class CreateLaunchResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API CreateLaunchResult();
    AWS_CLOUDWATCHEVIDENTLY_API CreateLaunchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API CreateLaunchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains the configuration of the launch that was
     * created.</p>
     */
    inline const Launch& GetLaunch() const{ return m_launch; }

    /**
     * <p>A structure that contains the configuration of the launch that was
     * created.</p>
     */
    inline void SetLaunch(const Launch& value) { m_launch = value; }

    /**
     * <p>A structure that contains the configuration of the launch that was
     * created.</p>
     */
    inline void SetLaunch(Launch&& value) { m_launch = std::move(value); }

    /**
     * <p>A structure that contains the configuration of the launch that was
     * created.</p>
     */
    inline CreateLaunchResult& WithLaunch(const Launch& value) { SetLaunch(value); return *this;}

    /**
     * <p>A structure that contains the configuration of the launch that was
     * created.</p>
     */
    inline CreateLaunchResult& WithLaunch(Launch&& value) { SetLaunch(std::move(value)); return *this;}

  private:

    Launch m_launch;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
