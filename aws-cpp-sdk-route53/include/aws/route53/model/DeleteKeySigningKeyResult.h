/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ChangeInfo.h>
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
  class DeleteKeySigningKeyResult
  {
  public:
    AWS_ROUTE53_API DeleteKeySigningKeyResult();
    AWS_ROUTE53_API DeleteKeySigningKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API DeleteKeySigningKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const ChangeInfo& GetChangeInfo() const{ return m_changeInfo; }

    
    inline void SetChangeInfo(const ChangeInfo& value) { m_changeInfo = value; }

    
    inline void SetChangeInfo(ChangeInfo&& value) { m_changeInfo = std::move(value); }

    
    inline DeleteKeySigningKeyResult& WithChangeInfo(const ChangeInfo& value) { SetChangeInfo(value); return *this;}

    
    inline DeleteKeySigningKeyResult& WithChangeInfo(ChangeInfo&& value) { SetChangeInfo(std::move(value)); return *this;}

  private:

    ChangeInfo m_changeInfo;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
