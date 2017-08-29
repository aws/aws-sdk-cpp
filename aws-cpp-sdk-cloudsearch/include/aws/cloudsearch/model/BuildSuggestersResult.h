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
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>
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
namespace CloudSearch
{
namespace Model
{
  /**
   * <p>The result of a <code>BuildSuggester</code> request. Contains a list of the
   * fields used for suggestions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/BuildSuggestersResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCH_API BuildSuggestersResult
  {
  public:
    BuildSuggestersResult();
    BuildSuggestersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    BuildSuggestersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const Aws::Vector<Aws::String>& GetFieldNames() const{ return m_fieldNames; }

    
    inline void SetFieldNames(const Aws::Vector<Aws::String>& value) { m_fieldNames = value; }

    
    inline void SetFieldNames(Aws::Vector<Aws::String>&& value) { m_fieldNames = std::move(value); }

    
    inline BuildSuggestersResult& WithFieldNames(const Aws::Vector<Aws::String>& value) { SetFieldNames(value); return *this;}

    
    inline BuildSuggestersResult& WithFieldNames(Aws::Vector<Aws::String>&& value) { SetFieldNames(std::move(value)); return *this;}

    
    inline BuildSuggestersResult& AddFieldNames(const Aws::String& value) { m_fieldNames.push_back(value); return *this; }

    
    inline BuildSuggestersResult& AddFieldNames(Aws::String&& value) { m_fieldNames.push_back(std::move(value)); return *this; }

    
    inline BuildSuggestersResult& AddFieldNames(const char* value) { m_fieldNames.push_back(value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline BuildSuggestersResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline BuildSuggestersResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_fieldNames;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
