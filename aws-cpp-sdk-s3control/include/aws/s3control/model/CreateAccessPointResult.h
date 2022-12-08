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
  class CreateAccessPointResult
  {
  public:
    AWS_S3CONTROL_API CreateAccessPointResult();
    AWS_S3CONTROL_API CreateAccessPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API CreateAccessPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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


    /**
     * <p>The name or alias of the access point.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The name or alias of the access point.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_alias = value; }

    /**
     * <p>The name or alias of the access point.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_alias = std::move(value); }

    /**
     * <p>The name or alias of the access point.</p>
     */
    inline void SetAlias(const char* value) { m_alias.assign(value); }

    /**
     * <p>The name or alias of the access point.</p>
     */
    inline CreateAccessPointResult& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The name or alias of the access point.</p>
     */
    inline CreateAccessPointResult& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The name or alias of the access point.</p>
     */
    inline CreateAccessPointResult& WithAlias(const char* value) { SetAlias(value); return *this;}

  private:

    Aws::String m_accessPointArn;

    Aws::String m_alias;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
