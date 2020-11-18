/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace S3Control
{
namespace Model
{
  class AWS_S3CONTROL_API CreateAccessPointResult
  {
  public:
    CreateAccessPointResult();
    CreateAccessPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateAccessPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ARN of the access point.</p>  <p>This is only supported by Amazon
     * S3 on Outposts.</p> 
     */
    inline const Aws::String& GetAccessPointArn() const{ return m_accessPointArn; }

    /**
     * <p>The ARN of the access point.</p>  <p>This is only supported by Amazon
     * S3 on Outposts.</p> 
     */
    inline void SetAccessPointArn(const Aws::String& value) { m_accessPointArn = value; }

    /**
     * <p>The ARN of the access point.</p>  <p>This is only supported by Amazon
     * S3 on Outposts.</p> 
     */
    inline void SetAccessPointArn(Aws::String&& value) { m_accessPointArn = std::move(value); }

    /**
     * <p>The ARN of the access point.</p>  <p>This is only supported by Amazon
     * S3 on Outposts.</p> 
     */
    inline void SetAccessPointArn(const char* value) { m_accessPointArn.assign(value); }

    /**
     * <p>The ARN of the access point.</p>  <p>This is only supported by Amazon
     * S3 on Outposts.</p> 
     */
    inline CreateAccessPointResult& WithAccessPointArn(const Aws::String& value) { SetAccessPointArn(value); return *this;}

    /**
     * <p>The ARN of the access point.</p>  <p>This is only supported by Amazon
     * S3 on Outposts.</p> 
     */
    inline CreateAccessPointResult& WithAccessPointArn(Aws::String&& value) { SetAccessPointArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the access point.</p>  <p>This is only supported by Amazon
     * S3 on Outposts.</p> 
     */
    inline CreateAccessPointResult& WithAccessPointArn(const char* value) { SetAccessPointArn(value); return *this;}

  private:

    Aws::String m_accessPointArn;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
