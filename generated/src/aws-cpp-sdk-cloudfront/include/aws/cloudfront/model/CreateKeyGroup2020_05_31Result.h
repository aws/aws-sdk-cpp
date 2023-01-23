/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/KeyGroup.h>
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
  class CreateKeyGroup2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API CreateKeyGroup2020_05_31Result();
    AWS_CLOUDFRONT_API CreateKeyGroup2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API CreateKeyGroup2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The key group that was just created.</p>
     */
    inline const KeyGroup& GetKeyGroup() const{ return m_keyGroup; }

    /**
     * <p>The key group that was just created.</p>
     */
    inline void SetKeyGroup(const KeyGroup& value) { m_keyGroup = value; }

    /**
     * <p>The key group that was just created.</p>
     */
    inline void SetKeyGroup(KeyGroup&& value) { m_keyGroup = std::move(value); }

    /**
     * <p>The key group that was just created.</p>
     */
    inline CreateKeyGroup2020_05_31Result& WithKeyGroup(const KeyGroup& value) { SetKeyGroup(value); return *this;}

    /**
     * <p>The key group that was just created.</p>
     */
    inline CreateKeyGroup2020_05_31Result& WithKeyGroup(KeyGroup&& value) { SetKeyGroup(std::move(value)); return *this;}


    /**
     * <p>The URL of the key group.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The URL of the key group.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The URL of the key group.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The URL of the key group.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The URL of the key group.</p>
     */
    inline CreateKeyGroup2020_05_31Result& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The URL of the key group.</p>
     */
    inline CreateKeyGroup2020_05_31Result& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The URL of the key group.</p>
     */
    inline CreateKeyGroup2020_05_31Result& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The identifier for this version of the key group.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The identifier for this version of the key group.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The identifier for this version of the key group.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The identifier for this version of the key group.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The identifier for this version of the key group.</p>
     */
    inline CreateKeyGroup2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The identifier for this version of the key group.</p>
     */
    inline CreateKeyGroup2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The identifier for this version of the key group.</p>
     */
    inline CreateKeyGroup2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    KeyGroup m_keyGroup;

    Aws::String m_location;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
