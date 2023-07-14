﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/PolicyVersion.h>
#include <aws/iam/model/ResponseMetadata.h>
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
namespace IAM
{
namespace Model
{
  /**
   * <p>Contains the response to a successful <a>GetPolicyVersion</a> request.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetPolicyVersionResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API GetPolicyVersionResult
  {
  public:
    GetPolicyVersionResult();
    GetPolicyVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetPolicyVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A structure containing details about the policy version.</p>
     */
    inline const PolicyVersion& GetPolicyVersion() const{ return m_policyVersion; }

    /**
     * <p>A structure containing details about the policy version.</p>
     */
    inline void SetPolicyVersion(const PolicyVersion& value) { m_policyVersion = value; }

    /**
     * <p>A structure containing details about the policy version.</p>
     */
    inline void SetPolicyVersion(PolicyVersion&& value) { m_policyVersion = std::move(value); }

    /**
     * <p>A structure containing details about the policy version.</p>
     */
    inline GetPolicyVersionResult& WithPolicyVersion(const PolicyVersion& value) { SetPolicyVersion(value); return *this;}

    /**
     * <p>A structure containing details about the policy version.</p>
     */
    inline GetPolicyVersionResult& WithPolicyVersion(PolicyVersion&& value) { SetPolicyVersion(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetPolicyVersionResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetPolicyVersionResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    PolicyVersion m_policyVersion;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
