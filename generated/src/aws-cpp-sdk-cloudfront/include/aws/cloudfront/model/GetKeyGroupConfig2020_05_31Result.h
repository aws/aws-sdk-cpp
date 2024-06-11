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
  class GetKeyGroupConfig2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API GetKeyGroupConfig2020_05_31Result();
    AWS_CLOUDFRONT_API GetKeyGroupConfig2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API GetKeyGroupConfig2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The key group configuration.</p>
     */
    inline const KeyGroupConfig& GetKeyGroupConfig() const{ return m_keyGroupConfig; }
    inline void SetKeyGroupConfig(const KeyGroupConfig& value) { m_keyGroupConfig = value; }
    inline void SetKeyGroupConfig(KeyGroupConfig&& value) { m_keyGroupConfig = std::move(value); }
    inline GetKeyGroupConfig2020_05_31Result& WithKeyGroupConfig(const KeyGroupConfig& value) { SetKeyGroupConfig(value); return *this;}
    inline GetKeyGroupConfig2020_05_31Result& WithKeyGroupConfig(KeyGroupConfig&& value) { SetKeyGroupConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for this version of the key group.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline void SetETag(const Aws::String& value) { m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTag.assign(value); }
    inline GetKeyGroupConfig2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline GetKeyGroupConfig2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline GetKeyGroupConfig2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetKeyGroupConfig2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetKeyGroupConfig2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetKeyGroupConfig2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    KeyGroupConfig m_keyGroupConfig;

    Aws::String m_eTag;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
