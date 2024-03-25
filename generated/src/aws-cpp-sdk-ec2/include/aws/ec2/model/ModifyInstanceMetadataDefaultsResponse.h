/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
  class ModifyInstanceMetadataDefaultsResponse
  {
  public:
    AWS_EC2_API ModifyInstanceMetadataDefaultsResponse();
    AWS_EC2_API ModifyInstanceMetadataDefaultsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyInstanceMetadataDefaultsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>If the request succeeds, the response returns <code>true</code>. If the
     * request fails, no response is returned, and instead an error message is
     * returned.</p>
     */
    inline bool GetReturn() const{ return m_return; }

    /**
     * <p>If the request succeeds, the response returns <code>true</code>. If the
     * request fails, no response is returned, and instead an error message is
     * returned.</p>
     */
    inline void SetReturn(bool value) { m_return = value; }

    /**
     * <p>If the request succeeds, the response returns <code>true</code>. If the
     * request fails, no response is returned, and instead an error message is
     * returned.</p>
     */
    inline ModifyInstanceMetadataDefaultsResponse& WithReturn(bool value) { SetReturn(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyInstanceMetadataDefaultsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyInstanceMetadataDefaultsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    bool m_return;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
