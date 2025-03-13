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
    AWS_ARCZONALSHIFT_API UpdateZonalAutoshiftConfigurationResult() = default;
    AWS_ARCZONALSHIFT_API UpdateZonalAutoshiftConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARCZONALSHIFT_API UpdateZonalAutoshiftConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the resource that you updated the zonal autoshift
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    UpdateZonalAutoshiftConfigurationResult& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated zonal autoshift status for the resource.</p>
     */
    inline ZonalAutoshiftStatus GetZonalAutoshiftStatus() const { return m_zonalAutoshiftStatus; }
    inline void SetZonalAutoshiftStatus(ZonalAutoshiftStatus value) { m_zonalAutoshiftStatusHasBeenSet = true; m_zonalAutoshiftStatus = value; }
    inline UpdateZonalAutoshiftConfigurationResult& WithZonalAutoshiftStatus(ZonalAutoshiftStatus value) { SetZonalAutoshiftStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateZonalAutoshiftConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    ZonalAutoshiftStatus m_zonalAutoshiftStatus{ZonalAutoshiftStatus::NOT_SET};
    bool m_zonalAutoshiftStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
