/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sns/model/ResponseMetadata.h>
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
namespace SNS
{
namespace Model
{
  class GetDataProtectionPolicyResult
  {
  public:
    AWS_SNS_API GetDataProtectionPolicyResult();
    AWS_SNS_API GetDataProtectionPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API GetDataProtectionPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Retrieves the <code>DataProtectionPolicy</code> in JSON string format.</p>
     */
    inline const Aws::String& GetDataProtectionPolicy() const{ return m_dataProtectionPolicy; }

    /**
     * <p>Retrieves the <code>DataProtectionPolicy</code> in JSON string format.</p>
     */
    inline void SetDataProtectionPolicy(const Aws::String& value) { m_dataProtectionPolicy = value; }

    /**
     * <p>Retrieves the <code>DataProtectionPolicy</code> in JSON string format.</p>
     */
    inline void SetDataProtectionPolicy(Aws::String&& value) { m_dataProtectionPolicy = std::move(value); }

    /**
     * <p>Retrieves the <code>DataProtectionPolicy</code> in JSON string format.</p>
     */
    inline void SetDataProtectionPolicy(const char* value) { m_dataProtectionPolicy.assign(value); }

    /**
     * <p>Retrieves the <code>DataProtectionPolicy</code> in JSON string format.</p>
     */
    inline GetDataProtectionPolicyResult& WithDataProtectionPolicy(const Aws::String& value) { SetDataProtectionPolicy(value); return *this;}

    /**
     * <p>Retrieves the <code>DataProtectionPolicy</code> in JSON string format.</p>
     */
    inline GetDataProtectionPolicyResult& WithDataProtectionPolicy(Aws::String&& value) { SetDataProtectionPolicy(std::move(value)); return *this;}

    /**
     * <p>Retrieves the <code>DataProtectionPolicy</code> in JSON string format.</p>
     */
    inline GetDataProtectionPolicyResult& WithDataProtectionPolicy(const char* value) { SetDataProtectionPolicy(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetDataProtectionPolicyResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetDataProtectionPolicyResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_dataProtectionPolicy;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
