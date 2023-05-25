/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VolumeModification.h>
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
  class ModifyVolumeResponse
  {
  public:
    AWS_EC2_API ModifyVolumeResponse();
    AWS_EC2_API ModifyVolumeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyVolumeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the volume modification.</p>
     */
    inline const VolumeModification& GetVolumeModification() const{ return m_volumeModification; }

    /**
     * <p>Information about the volume modification.</p>
     */
    inline void SetVolumeModification(const VolumeModification& value) { m_volumeModification = value; }

    /**
     * <p>Information about the volume modification.</p>
     */
    inline void SetVolumeModification(VolumeModification&& value) { m_volumeModification = std::move(value); }

    /**
     * <p>Information about the volume modification.</p>
     */
    inline ModifyVolumeResponse& WithVolumeModification(const VolumeModification& value) { SetVolumeModification(value); return *this;}

    /**
     * <p>Information about the volume modification.</p>
     */
    inline ModifyVolumeResponse& WithVolumeModification(VolumeModification&& value) { SetVolumeModification(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyVolumeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyVolumeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    VolumeModification m_volumeModification;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
