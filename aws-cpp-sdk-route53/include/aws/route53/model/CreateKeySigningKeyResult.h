/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ChangeInfo.h>
#include <aws/route53/model/KeySigningKey.h>
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
namespace Route53
{
namespace Model
{
  class CreateKeySigningKeyResult
  {
  public:
    AWS_ROUTE53_API CreateKeySigningKeyResult();
    AWS_ROUTE53_API CreateKeySigningKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API CreateKeySigningKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const ChangeInfo& GetChangeInfo() const{ return m_changeInfo; }

    
    inline void SetChangeInfo(const ChangeInfo& value) { m_changeInfo = value; }

    
    inline void SetChangeInfo(ChangeInfo&& value) { m_changeInfo = std::move(value); }

    
    inline CreateKeySigningKeyResult& WithChangeInfo(const ChangeInfo& value) { SetChangeInfo(value); return *this;}

    
    inline CreateKeySigningKeyResult& WithChangeInfo(ChangeInfo&& value) { SetChangeInfo(std::move(value)); return *this;}


    /**
     * <p>The key-signing key (KSK) that the request creates.</p>
     */
    inline const KeySigningKey& GetKeySigningKey() const{ return m_keySigningKey; }

    /**
     * <p>The key-signing key (KSK) that the request creates.</p>
     */
    inline void SetKeySigningKey(const KeySigningKey& value) { m_keySigningKey = value; }

    /**
     * <p>The key-signing key (KSK) that the request creates.</p>
     */
    inline void SetKeySigningKey(KeySigningKey&& value) { m_keySigningKey = std::move(value); }

    /**
     * <p>The key-signing key (KSK) that the request creates.</p>
     */
    inline CreateKeySigningKeyResult& WithKeySigningKey(const KeySigningKey& value) { SetKeySigningKey(value); return *this;}

    /**
     * <p>The key-signing key (KSK) that the request creates.</p>
     */
    inline CreateKeySigningKeyResult& WithKeySigningKey(KeySigningKey&& value) { SetKeySigningKey(std::move(value)); return *this;}


    /**
     * <p>The unique URL representing the new key-signing key (KSK).</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The unique URL representing the new key-signing key (KSK).</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The unique URL representing the new key-signing key (KSK).</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The unique URL representing the new key-signing key (KSK).</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The unique URL representing the new key-signing key (KSK).</p>
     */
    inline CreateKeySigningKeyResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The unique URL representing the new key-signing key (KSK).</p>
     */
    inline CreateKeySigningKeyResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The unique URL representing the new key-signing key (KSK).</p>
     */
    inline CreateKeySigningKeyResult& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:

    ChangeInfo m_changeInfo;

    KeySigningKey m_keySigningKey;

    Aws::String m_location;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
