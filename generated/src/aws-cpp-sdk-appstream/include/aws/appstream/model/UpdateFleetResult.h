/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/Fleet.h>
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
namespace AppStream
{
namespace Model
{
  class UpdateFleetResult
  {
  public:
    AWS_APPSTREAM_API UpdateFleetResult();
    AWS_APPSTREAM_API UpdateFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API UpdateFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the fleet.</p>
     */
    inline const Fleet& GetFleet() const{ return m_fleet; }

    /**
     * <p>Information about the fleet.</p>
     */
    inline void SetFleet(const Fleet& value) { m_fleet = value; }

    /**
     * <p>Information about the fleet.</p>
     */
    inline void SetFleet(Fleet&& value) { m_fleet = std::move(value); }

    /**
     * <p>Information about the fleet.</p>
     */
    inline UpdateFleetResult& WithFleet(const Fleet& value) { SetFleet(value); return *this;}

    /**
     * <p>Information about the fleet.</p>
     */
    inline UpdateFleetResult& WithFleet(Fleet&& value) { SetFleet(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateFleetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateFleetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateFleetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Fleet m_fleet;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
