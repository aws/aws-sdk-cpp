/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-zonal-shift/model/ZonalAutoshiftStatus.h>
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
namespace ARCZonalShift
{
namespace Model
{
  class UpdateZonalAutoshiftConfigurationResult
  {
  public:
    AWS_ARCZONALSHIFT_API UpdateZonalAutoshiftConfigurationResult();
    AWS_ARCZONALSHIFT_API UpdateZonalAutoshiftConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARCZONALSHIFT_API UpdateZonalAutoshiftConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for the resource that you updated the zonal autoshift
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>The identifier for the resource that you updated the zonal autoshift
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifier = value; }

    /**
     * <p>The identifier for the resource that you updated the zonal autoshift
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifier = std::move(value); }

    /**
     * <p>The identifier for the resource that you updated the zonal autoshift
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifier.assign(value); }

    /**
     * <p>The identifier for the resource that you updated the zonal autoshift
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline UpdateZonalAutoshiftConfigurationResult& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>The identifier for the resource that you updated the zonal autoshift
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline UpdateZonalAutoshiftConfigurationResult& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the resource that you updated the zonal autoshift
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline UpdateZonalAutoshiftConfigurationResult& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}


    /**
     * <p>The zonal autoshift status for the resource that you updated the zonal
     * autoshift configuration for.</p>
     */
    inline const ZonalAutoshiftStatus& GetZonalAutoshiftStatus() const{ return m_zonalAutoshiftStatus; }

    /**
     * <p>The zonal autoshift status for the resource that you updated the zonal
     * autoshift configuration for.</p>
     */
    inline void SetZonalAutoshiftStatus(const ZonalAutoshiftStatus& value) { m_zonalAutoshiftStatus = value; }

    /**
     * <p>The zonal autoshift status for the resource that you updated the zonal
     * autoshift configuration for.</p>
     */
    inline void SetZonalAutoshiftStatus(ZonalAutoshiftStatus&& value) { m_zonalAutoshiftStatus = std::move(value); }

    /**
     * <p>The zonal autoshift status for the resource that you updated the zonal
     * autoshift configuration for.</p>
     */
    inline UpdateZonalAutoshiftConfigurationResult& WithZonalAutoshiftStatus(const ZonalAutoshiftStatus& value) { SetZonalAutoshiftStatus(value); return *this;}

    /**
     * <p>The zonal autoshift status for the resource that you updated the zonal
     * autoshift configuration for.</p>
     */
    inline UpdateZonalAutoshiftConfigurationResult& WithZonalAutoshiftStatus(ZonalAutoshiftStatus&& value) { SetZonalAutoshiftStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateZonalAutoshiftConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateZonalAutoshiftConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateZonalAutoshiftConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_resourceIdentifier;

    ZonalAutoshiftStatus m_zonalAutoshiftStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
