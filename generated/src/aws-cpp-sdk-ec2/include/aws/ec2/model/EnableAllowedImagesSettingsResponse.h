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
    AWS_EC2_API EnableAllowedImagesSettingsResponse();
    AWS_EC2_API EnableAllowedImagesSettingsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API EnableAllowedImagesSettingsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Returns <code>enabled</code> or <code>audit-mode</code> if the request
     * succeeds; otherwise, it returns an error.</p>
     */
    inline const AllowedImagesSettingsEnabledState& GetAllowedImagesSettingsState() const{ return m_allowedImagesSettingsState; }
    inline void SetAllowedImagesSettingsState(const AllowedImagesSettingsEnabledState& value) { m_allowedImagesSettingsState = value; }
    inline void SetAllowedImagesSettingsState(AllowedImagesSettingsEnabledState&& value) { m_allowedImagesSettingsState = std::move(value); }
    inline EnableAllowedImagesSettingsResponse& WithAllowedImagesSettingsState(const AllowedImagesSettingsEnabledState& value) { SetAllowedImagesSettingsState(value); return *this;}
    inline EnableAllowedImagesSettingsResponse& WithAllowedImagesSettingsState(AllowedImagesSettingsEnabledState&& value) { SetAllowedImagesSettingsState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline EnableAllowedImagesSettingsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline EnableAllowedImagesSettingsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    AllowedImagesSettingsEnabledState m_allowedImagesSettingsState;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
