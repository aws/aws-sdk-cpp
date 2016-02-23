/*
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
#include <aws/route53/model/ChangeBatchRecord.h>

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
   * <p>A complex type that contains the <code>ChangeBatchRecord</code> element.</p>
   */
  class AWS_ROUTE53_API GetChangeDetailsResult
  {
  public:
    GetChangeDetailsResult();
    GetChangeDetailsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetChangeDetailsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A complex type that contains information about the specified change batch,
     * including the change batch ID, the status of the change, and the contained
     * changes.</p>
     */
    inline const ChangeBatchRecord& GetChangeBatchRecord() const{ return m_changeBatchRecord; }

    /**
     * <p>A complex type that contains information about the specified change batch,
     * including the change batch ID, the status of the change, and the contained
     * changes.</p>
     */
    inline void SetChangeBatchRecord(const ChangeBatchRecord& value) { m_changeBatchRecord = value; }

    /**
     * <p>A complex type that contains information about the specified change batch,
     * including the change batch ID, the status of the change, and the contained
     * changes.</p>
     */
    inline void SetChangeBatchRecord(ChangeBatchRecord&& value) { m_changeBatchRecord = value; }

    /**
     * <p>A complex type that contains information about the specified change batch,
     * including the change batch ID, the status of the change, and the contained
     * changes.</p>
     */
    inline GetChangeDetailsResult& WithChangeBatchRecord(const ChangeBatchRecord& value) { SetChangeBatchRecord(value); return *this;}

    /**
     * <p>A complex type that contains information about the specified change batch,
     * including the change batch ID, the status of the change, and the contained
     * changes.</p>
     */
    inline GetChangeDetailsResult& WithChangeBatchRecord(ChangeBatchRecord&& value) { SetChangeBatchRecord(value); return *this;}

  private:
    ChangeBatchRecord m_changeBatchRecord;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws