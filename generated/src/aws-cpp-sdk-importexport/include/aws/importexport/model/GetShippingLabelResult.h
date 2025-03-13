/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/importexport/ImportExport_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/importexport/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace ImportExport
{
namespace Model
{
  class GetShippingLabelResult
  {
  public:
    AWS_IMPORTEXPORT_API GetShippingLabelResult() = default;
    AWS_IMPORTEXPORT_API GetShippingLabelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IMPORTEXPORT_API GetShippingLabelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::String& GetShippingLabelURL() const { return m_shippingLabelURL; }
    template<typename ShippingLabelURLT = Aws::String>
    void SetShippingLabelURL(ShippingLabelURLT&& value) { m_shippingLabelURLHasBeenSet = true; m_shippingLabelURL = std::forward<ShippingLabelURLT>(value); }
    template<typename ShippingLabelURLT = Aws::String>
    GetShippingLabelResult& WithShippingLabelURL(ShippingLabelURLT&& value) { SetShippingLabelURL(std::forward<ShippingLabelURLT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWarning() const { return m_warning; }
    template<typename WarningT = Aws::String>
    void SetWarning(WarningT&& value) { m_warningHasBeenSet = true; m_warning = std::forward<WarningT>(value); }
    template<typename WarningT = Aws::String>
    GetShippingLabelResult& WithWarning(WarningT&& value) { SetWarning(std::forward<WarningT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetShippingLabelResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_shippingLabelURL;
    bool m_shippingLabelURLHasBeenSet = false;

    Aws::String m_warning;
    bool m_warningHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
