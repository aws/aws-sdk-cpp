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
  class CreateOriginAccessControl2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API CreateOriginAccessControl2020_05_31Result();
    AWS_CLOUDFRONT_API CreateOriginAccessControl2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API CreateOriginAccessControl2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Contains an origin access control.</p>
     */
    inline const OriginAccessControl& GetOriginAccessControl() const{ return m_originAccessControl; }

    /**
     * <p>Contains an origin access control.</p>
     */
    inline void SetOriginAccessControl(const OriginAccessControl& value) { m_originAccessControl = value; }

    /**
     * <p>Contains an origin access control.</p>
     */
    inline void SetOriginAccessControl(OriginAccessControl&& value) { m_originAccessControl = std::move(value); }

    /**
     * <p>Contains an origin access control.</p>
     */
    inline CreateOriginAccessControl2020_05_31Result& WithOriginAccessControl(const OriginAccessControl& value) { SetOriginAccessControl(value); return *this;}

    /**
     * <p>Contains an origin access control.</p>
     */
    inline CreateOriginAccessControl2020_05_31Result& WithOriginAccessControl(OriginAccessControl&& value) { SetOriginAccessControl(std::move(value)); return *this;}


    /**
     * <p>The URL of the origin access control.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The URL of the origin access control.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The URL of the origin access control.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The URL of the origin access control.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The URL of the origin access control.</p>
     */
    inline CreateOriginAccessControl2020_05_31Result& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The URL of the origin access control.</p>
     */
    inline CreateOriginAccessControl2020_05_31Result& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The URL of the origin access control.</p>
     */
    inline CreateOriginAccessControl2020_05_31Result& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The version identifier for the current version of the origin access
     * control.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The version identifier for the current version of the origin access
     * control.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The version identifier for the current version of the origin access
     * control.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The version identifier for the current version of the origin access
     * control.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The version identifier for the current version of the origin access
     * control.</p>
     */
    inline CreateOriginAccessControl2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The version identifier for the current version of the origin access
     * control.</p>
     */
    inline CreateOriginAccessControl2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The version identifier for the current version of the origin access
     * control.</p>
     */
    inline CreateOriginAccessControl2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    OriginAccessControl m_originAccessControl;

    Aws::String m_location;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
