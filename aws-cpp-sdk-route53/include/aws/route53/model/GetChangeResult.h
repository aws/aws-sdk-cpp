﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ChangeInfo.h>

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
  /**
   * <p>A complex type that contains the <code>ChangeInfo</code>
   * element.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetChangeResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API GetChangeResult
  {
  public:
    GetChangeResult();
    GetChangeResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetChangeResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A complex type that contains information about the specified change
     * batch.</p>
     */
    inline const ChangeInfo& GetChangeInfo() const{ return m_changeInfo; }

    /**
     * <p>A complex type that contains information about the specified change
     * batch.</p>
     */
    inline void SetChangeInfo(const ChangeInfo& value) { m_changeInfo = value; }

    /**
     * <p>A complex type that contains information about the specified change
     * batch.</p>
     */
    inline void SetChangeInfo(ChangeInfo&& value) { m_changeInfo = value; }

    /**
     * <p>A complex type that contains information about the specified change
     * batch.</p>
     */
    inline GetChangeResult& WithChangeInfo(const ChangeInfo& value) { SetChangeInfo(value); return *this;}

    /**
     * <p>A complex type that contains information about the specified change
     * batch.</p>
     */
    inline GetChangeResult& WithChangeInfo(ChangeInfo&& value) { SetChangeInfo(value); return *this;}

  private:
    ChangeInfo m_changeInfo;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws