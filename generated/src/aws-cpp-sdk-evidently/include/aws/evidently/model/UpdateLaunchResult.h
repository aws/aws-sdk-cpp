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
  class UpdateLaunchResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API UpdateLaunchResult();
    AWS_CLOUDWATCHEVIDENTLY_API UpdateLaunchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API UpdateLaunchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains the new configuration of the launch that was
     * updated.</p>
     */
    inline const Launch& GetLaunch() const{ return m_launch; }

    /**
     * <p>A structure that contains the new configuration of the launch that was
     * updated.</p>
     */
    inline void SetLaunch(const Launch& value) { m_launch = value; }

    /**
     * <p>A structure that contains the new configuration of the launch that was
     * updated.</p>
     */
    inline void SetLaunch(Launch&& value) { m_launch = std::move(value); }

    /**
     * <p>A structure that contains the new configuration of the launch that was
     * updated.</p>
     */
    inline UpdateLaunchResult& WithLaunch(const Launch& value) { SetLaunch(value); return *this;}

    /**
     * <p>A structure that contains the new configuration of the launch that was
     * updated.</p>
     */
    inline UpdateLaunchResult& WithLaunch(Launch&& value) { SetLaunch(std::move(value)); return *this;}

  private:

    Launch m_launch;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
