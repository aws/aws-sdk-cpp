/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/AllowedImagesSettingsEnabledState.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
namespace EC2
{
namespace Model
{
  class EnableAllowedImagesSettingsResponse
  {
  public:
    AWS_EC2_API EnableAllowedImagesSettingsResponse() = default;
    AWS_EC2_API EnableAllowedImagesSettingsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API EnableAllowedImagesSettingsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Returns <code>enabled</code> or <code>audit-mode</code> if the request
     * succeeds; otherwise, it returns an error.</p>
     */
    inline AllowedImagesSettingsEnabledState GetAllowedImagesSettingsState() const { return m_allowedImagesSettingsState; }
    inline void SetAllowedImagesSettingsState(AllowedImagesSettingsEnabledState value) { m_allowedImagesSettingsStateHasBeenSet = true; m_allowedImagesSettingsState = value; }
    inline EnableAllowedImagesSettingsResponse& WithAllowedImagesSettingsState(AllowedImagesSettingsEnabledState value) { SetAllowedImagesSettingsState(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    EnableAllowedImagesSettingsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    AllowedImagesSettingsEnabledState m_allowedImagesSettingsState{AllowedImagesSettingsEnabledState::NOT_SET};
    bool m_allowedImagesSettingsStateHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
