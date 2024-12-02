/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/AllowedImagesSettingsDisabledState.h>
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
  class DisableAllowedImagesSettingsResponse
  {
  public:
    AWS_EC2_API DisableAllowedImagesSettingsResponse();
    AWS_EC2_API DisableAllowedImagesSettingsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisableAllowedImagesSettingsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Returns <code>disabled</code> if the request succeeds; otherwise, it returns
     * an error.</p>
     */
    inline const AllowedImagesSettingsDisabledState& GetAllowedImagesSettingsState() const{ return m_allowedImagesSettingsState; }
    inline void SetAllowedImagesSettingsState(const AllowedImagesSettingsDisabledState& value) { m_allowedImagesSettingsState = value; }
    inline void SetAllowedImagesSettingsState(AllowedImagesSettingsDisabledState&& value) { m_allowedImagesSettingsState = std::move(value); }
    inline DisableAllowedImagesSettingsResponse& WithAllowedImagesSettingsState(const AllowedImagesSettingsDisabledState& value) { SetAllowedImagesSettingsState(value); return *this;}
    inline DisableAllowedImagesSettingsResponse& WithAllowedImagesSettingsState(AllowedImagesSettingsDisabledState&& value) { SetAllowedImagesSettingsState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DisableAllowedImagesSettingsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DisableAllowedImagesSettingsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    AllowedImagesSettingsDisabledState m_allowedImagesSettingsState;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
