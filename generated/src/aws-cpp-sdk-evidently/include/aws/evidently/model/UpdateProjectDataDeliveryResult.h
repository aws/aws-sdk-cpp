/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/model/Project.h>
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
  class UpdateProjectDataDeliveryResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API UpdateProjectDataDeliveryResult();
    AWS_CLOUDWATCHEVIDENTLY_API UpdateProjectDataDeliveryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API UpdateProjectDataDeliveryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure containing details about the project that you updated.</p>
     */
    inline const Project& GetProject() const{ return m_project; }

    /**
     * <p>A structure containing details about the project that you updated.</p>
     */
    inline void SetProject(const Project& value) { m_project = value; }

    /**
     * <p>A structure containing details about the project that you updated.</p>
     */
    inline void SetProject(Project&& value) { m_project = std::move(value); }

    /**
     * <p>A structure containing details about the project that you updated.</p>
     */
    inline UpdateProjectDataDeliveryResult& WithProject(const Project& value) { SetProject(value); return *this;}

    /**
     * <p>A structure containing details about the project that you updated.</p>
     */
    inline UpdateProjectDataDeliveryResult& WithProject(Project&& value) { SetProject(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateProjectDataDeliveryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateProjectDataDeliveryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateProjectDataDeliveryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Project m_project;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
