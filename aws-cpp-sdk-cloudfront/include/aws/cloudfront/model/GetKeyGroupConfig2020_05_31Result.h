﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/KeyGroupConfig.h>
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
  class AWS_CLOUDFRONT_API GetKeyGroupConfig2020_05_31Result
  {
  public:
    GetKeyGroupConfig2020_05_31Result();
    GetKeyGroupConfig2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetKeyGroupConfig2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The key group configuration.</p>
     */
    inline const KeyGroupConfig& GetKeyGroupConfig() const{ return m_keyGroupConfig; }

    /**
     * <p>The key group configuration.</p>
     */
    inline void SetKeyGroupConfig(const KeyGroupConfig& value) { m_keyGroupConfig = value; }

    /**
     * <p>The key group configuration.</p>
     */
    inline void SetKeyGroupConfig(KeyGroupConfig&& value) { m_keyGroupConfig = std::move(value); }

    /**
     * <p>The key group configuration.</p>
     */
    inline GetKeyGroupConfig2020_05_31Result& WithKeyGroupConfig(const KeyGroupConfig& value) { SetKeyGroupConfig(value); return *this;}

    /**
     * <p>The key group configuration.</p>
     */
    inline GetKeyGroupConfig2020_05_31Result& WithKeyGroupConfig(KeyGroupConfig&& value) { SetKeyGroupConfig(std::move(value)); return *this;}


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
    inline GetKeyGroupConfig2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The identifier for this version of the key group.</p>
     */
    inline GetKeyGroupConfig2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The identifier for this version of the key group.</p>
     */
    inline GetKeyGroupConfig2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    KeyGroupConfig m_keyGroupConfig;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
