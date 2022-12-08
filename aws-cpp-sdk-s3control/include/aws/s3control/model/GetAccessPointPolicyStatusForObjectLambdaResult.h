/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/PolicyStatus.h>
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
  class GetAccessPointPolicyStatusForObjectLambdaResult
  {
  public:
    AWS_S3CONTROL_API GetAccessPointPolicyStatusForObjectLambdaResult();
    AWS_S3CONTROL_API GetAccessPointPolicyStatusForObjectLambdaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetAccessPointPolicyStatusForObjectLambdaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const PolicyStatus& GetPolicyStatus() const{ return m_policyStatus; }

    
    inline void SetPolicyStatus(const PolicyStatus& value) { m_policyStatus = value; }

    
    inline void SetPolicyStatus(PolicyStatus&& value) { m_policyStatus = std::move(value); }

    
    inline GetAccessPointPolicyStatusForObjectLambdaResult& WithPolicyStatus(const PolicyStatus& value) { SetPolicyStatus(value); return *this;}

    
    inline GetAccessPointPolicyStatusForObjectLambdaResult& WithPolicyStatus(PolicyStatus&& value) { SetPolicyStatus(std::move(value)); return *this;}

  private:

    PolicyStatus m_policyStatus;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
