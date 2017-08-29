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
#include <aws/importexport/ImportExport_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/importexport/model/ResponseMetadata.h>
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
namespace ImportExport
{
namespace Model
{
  class AWS_IMPORTEXPORT_API GetShippingLabelResult
  {
  public:
    GetShippingLabelResult();
    GetShippingLabelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetShippingLabelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const Aws::String& GetShippingLabelURL() const{ return m_shippingLabelURL; }

    
    inline void SetShippingLabelURL(const Aws::String& value) { m_shippingLabelURL = value; }

    
    inline void SetShippingLabelURL(Aws::String&& value) { m_shippingLabelURL = std::move(value); }

    
    inline void SetShippingLabelURL(const char* value) { m_shippingLabelURL.assign(value); }

    
    inline GetShippingLabelResult& WithShippingLabelURL(const Aws::String& value) { SetShippingLabelURL(value); return *this;}

    
    inline GetShippingLabelResult& WithShippingLabelURL(Aws::String&& value) { SetShippingLabelURL(std::move(value)); return *this;}

    
    inline GetShippingLabelResult& WithShippingLabelURL(const char* value) { SetShippingLabelURL(value); return *this;}


    
    inline const Aws::String& GetWarning() const{ return m_warning; }

    
    inline void SetWarning(const Aws::String& value) { m_warning = value; }

    
    inline void SetWarning(Aws::String&& value) { m_warning = std::move(value); }

    
    inline void SetWarning(const char* value) { m_warning.assign(value); }

    
    inline GetShippingLabelResult& WithWarning(const Aws::String& value) { SetWarning(value); return *this;}

    
    inline GetShippingLabelResult& WithWarning(Aws::String&& value) { SetWarning(std::move(value)); return *this;}

    
    inline GetShippingLabelResult& WithWarning(const char* value) { SetWarning(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetShippingLabelResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetShippingLabelResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_shippingLabelURL;

    Aws::String m_warning;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
