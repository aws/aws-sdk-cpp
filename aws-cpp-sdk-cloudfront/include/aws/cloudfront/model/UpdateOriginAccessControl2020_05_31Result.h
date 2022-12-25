/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/OriginAccessControl.h>
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
namespace CloudFront
{
namespace Model
{
  class UpdateOriginAccessControl2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API UpdateOriginAccessControl2020_05_31Result();
    AWS_CLOUDFRONT_API UpdateOriginAccessControl2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API UpdateOriginAccessControl2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The origin access control after it has been updated.</p>
     */
    inline const OriginAccessControl& GetOriginAccessControl() const{ return m_originAccessControl; }

    /**
     * <p>The origin access control after it has been updated.</p>
     */
    inline void SetOriginAccessControl(const OriginAccessControl& value) { m_originAccessControl = value; }

    /**
     * <p>The origin access control after it has been updated.</p>
     */
    inline void SetOriginAccessControl(OriginAccessControl&& value) { m_originAccessControl = std::move(value); }

    /**
     * <p>The origin access control after it has been updated.</p>
     */
    inline UpdateOriginAccessControl2020_05_31Result& WithOriginAccessControl(const OriginAccessControl& value) { SetOriginAccessControl(value); return *this;}

    /**
     * <p>The origin access control after it has been updated.</p>
     */
    inline UpdateOriginAccessControl2020_05_31Result& WithOriginAccessControl(OriginAccessControl&& value) { SetOriginAccessControl(std::move(value)); return *this;}


    /**
     * <p>The new version of the origin access control after it has been updated.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The new version of the origin access control after it has been updated.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The new version of the origin access control after it has been updated.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The new version of the origin access control after it has been updated.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The new version of the origin access control after it has been updated.</p>
     */
    inline UpdateOriginAccessControl2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The new version of the origin access control after it has been updated.</p>
     */
    inline UpdateOriginAccessControl2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The new version of the origin access control after it has been updated.</p>
     */
    inline UpdateOriginAccessControl2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    OriginAccessControl m_originAccessControl;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
