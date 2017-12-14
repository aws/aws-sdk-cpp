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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/ResponseMetadata.h>
#include <aws/email/model/TemplateMetadata.h>
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
  class AWS_SES_API ListTemplatesResult
  {
  public:
    ListTemplatesResult();
    ListTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline const Aws::Vector<TemplateMetadata>& GetTemplatesMetadata() const{ return m_templatesMetadata; }

    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline void SetTemplatesMetadata(const Aws::Vector<TemplateMetadata>& value) { m_templatesMetadata = value; }

    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline void SetTemplatesMetadata(Aws::Vector<TemplateMetadata>&& value) { m_templatesMetadata = std::move(value); }

    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline ListTemplatesResult& WithTemplatesMetadata(const Aws::Vector<TemplateMetadata>& value) { SetTemplatesMetadata(value); return *this;}

    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline ListTemplatesResult& WithTemplatesMetadata(Aws::Vector<TemplateMetadata>&& value) { SetTemplatesMetadata(std::move(value)); return *this;}

    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline ListTemplatesResult& AddTemplatesMetadata(const TemplateMetadata& value) { m_templatesMetadata.push_back(value); return *this; }

    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline ListTemplatesResult& AddTemplatesMetadata(TemplateMetadata&& value) { m_templatesMetadata.push_back(std::move(value)); return *this; }


    /**
     * <p>A token indicating that there are additional email templates available to be
     * listed. Pass this token to a subsequent call to <code>ListTemplates</code> to
     * retrieve the next 50 email templates.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token indicating that there are additional email templates available to be
     * listed. Pass this token to a subsequent call to <code>ListTemplates</code> to
     * retrieve the next 50 email templates.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token indicating that there are additional email templates available to be
     * listed. Pass this token to a subsequent call to <code>ListTemplates</code> to
     * retrieve the next 50 email templates.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token indicating that there are additional email templates available to be
     * listed. Pass this token to a subsequent call to <code>ListTemplates</code> to
     * retrieve the next 50 email templates.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token indicating that there are additional email templates available to be
     * listed. Pass this token to a subsequent call to <code>ListTemplates</code> to
     * retrieve the next 50 email templates.</p>
     */
    inline ListTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token indicating that there are additional email templates available to be
     * listed. Pass this token to a subsequent call to <code>ListTemplates</code> to
     * retrieve the next 50 email templates.</p>
     */
    inline ListTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token indicating that there are additional email templates available to be
     * listed. Pass this token to a subsequent call to <code>ListTemplates</code> to
     * retrieve the next 50 email templates.</p>
     */
    inline ListTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListTemplatesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListTemplatesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TemplateMetadata> m_templatesMetadata;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
