/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/model/Launch.h>
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
namespace CloudWatchEvidently
{
namespace Model
{
  class GetLaunchResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API GetLaunchResult();
    AWS_CLOUDWATCHEVIDENTLY_API GetLaunchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API GetLaunchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure containing the configuration details of the launch.</p>
     */
    inline const Launch& GetLaunch() const{ return m_launch; }

    /**
     * <p>A structure containing the configuration details of the launch.</p>
     */
    inline void SetLaunch(const Launch& value) { m_launch = value; }

    /**
     * <p>A structure containing the configuration details of the launch.</p>
     */
    inline void SetLaunch(Launch&& value) { m_launch = std::move(value); }

    /**
     * <p>A structure containing the configuration details of the launch.</p>
     */
    inline GetLaunchResult& WithLaunch(const Launch& value) { SetLaunch(value); return *this;}

    /**
     * <p>A structure containing the configuration details of the launch.</p>
     */
    inline GetLaunchResult& WithLaunch(Launch&& value) { SetLaunch(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetLaunchResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetLaunchResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetLaunchResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Launch m_launch;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
