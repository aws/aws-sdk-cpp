﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class EnableImageDeregistrationProtectionResponse
  {
  public:
    AWS_EC2_API EnableImageDeregistrationProtectionResponse();
    AWS_EC2_API EnableImageDeregistrationProtectionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API EnableImageDeregistrationProtectionResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an
     * error.</p>
     */
    inline const Aws::String& GetReturn() const{ return m_return; }
    inline void SetReturn(const Aws::String& value) { m_return = value; }
    inline void SetReturn(Aws::String&& value) { m_return = std::move(value); }
    inline void SetReturn(const char* value) { m_return.assign(value); }
    inline EnableImageDeregistrationProtectionResponse& WithReturn(const Aws::String& value) { SetReturn(value); return *this;}
    inline EnableImageDeregistrationProtectionResponse& WithReturn(Aws::String&& value) { SetReturn(std::move(value)); return *this;}
    inline EnableImageDeregistrationProtectionResponse& WithReturn(const char* value) { SetReturn(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline EnableImageDeregistrationProtectionResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline EnableImageDeregistrationProtectionResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_return;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
