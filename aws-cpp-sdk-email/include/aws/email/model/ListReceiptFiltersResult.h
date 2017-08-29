/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/ResponseMetadata.h>
#include <aws/email/model/ReceiptFilter.h>
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
namespace SES
{
namespace Model
{
  /**
   * <p>A list of IP address filters that exist under your AWS account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListReceiptFiltersResponse">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API ListReceiptFiltersResult
  {
  public:
    ListReceiptFiltersResult();
    ListReceiptFiltersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListReceiptFiltersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of IP address filter data structures, which each consist of a name, an
     * IP address range, and whether to allow or block mail from it.</p>
     */
    inline const Aws::Vector<ReceiptFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A list of IP address filter data structures, which each consist of a name, an
     * IP address range, and whether to allow or block mail from it.</p>
     */
    inline void SetFilters(const Aws::Vector<ReceiptFilter>& value) { m_filters = value; }

    /**
     * <p>A list of IP address filter data structures, which each consist of a name, an
     * IP address range, and whether to allow or block mail from it.</p>
     */
    inline void SetFilters(Aws::Vector<ReceiptFilter>&& value) { m_filters = std::move(value); }

    /**
     * <p>A list of IP address filter data structures, which each consist of a name, an
     * IP address range, and whether to allow or block mail from it.</p>
     */
    inline ListReceiptFiltersResult& WithFilters(const Aws::Vector<ReceiptFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A list of IP address filter data structures, which each consist of a name, an
     * IP address range, and whether to allow or block mail from it.</p>
     */
    inline ListReceiptFiltersResult& WithFilters(Aws::Vector<ReceiptFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A list of IP address filter data structures, which each consist of a name, an
     * IP address range, and whether to allow or block mail from it.</p>
     */
    inline ListReceiptFiltersResult& AddFilters(const ReceiptFilter& value) { m_filters.push_back(value); return *this; }

    /**
     * <p>A list of IP address filter data structures, which each consist of a name, an
     * IP address range, and whether to allow or block mail from it.</p>
     */
    inline ListReceiptFiltersResult& AddFilters(ReceiptFilter&& value) { m_filters.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListReceiptFiltersResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListReceiptFiltersResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ReceiptFilter> m_filters;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
