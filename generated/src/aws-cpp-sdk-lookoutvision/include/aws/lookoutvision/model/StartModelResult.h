/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/ModelHostingStatus.h>
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
namespace LookoutforVision
{
namespace Model
{
  class StartModelResult
  {
  public:
    AWS_LOOKOUTFORVISION_API StartModelResult();
    AWS_LOOKOUTFORVISION_API StartModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API StartModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current running status of the model.</p>
     */
    inline const ModelHostingStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current running status of the model.</p>
     */
    inline void SetStatus(const ModelHostingStatus& value) { m_status = value; }

    /**
     * <p>The current running status of the model.</p>
     */
    inline void SetStatus(ModelHostingStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current running status of the model.</p>
     */
    inline StartModelResult& WithStatus(const ModelHostingStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current running status of the model.</p>
     */
    inline StartModelResult& WithStatus(ModelHostingStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ModelHostingStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
