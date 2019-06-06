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
#include <aws/email/model/ConfigurationSet.h>
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
   * <p>A list of configuration sets associated with your AWS account. Configuration
   * sets enable you to publish email sending events. For information about using
   * configuration sets, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListConfigurationSetsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API ListConfigurationSetsResult
  {
  public:
    ListConfigurationSetsResult();
    ListConfigurationSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListConfigurationSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of configuration sets.</p>
     */
    inline const Aws::Vector<ConfigurationSet>& GetConfigurationSets() const{ return m_configurationSets; }

    /**
     * <p>A list of configuration sets.</p>
     */
    inline void SetConfigurationSets(const Aws::Vector<ConfigurationSet>& value) { m_configurationSets = value; }

    /**
     * <p>A list of configuration sets.</p>
     */
    inline void SetConfigurationSets(Aws::Vector<ConfigurationSet>&& value) { m_configurationSets = std::move(value); }

    /**
     * <p>A list of configuration sets.</p>
     */
    inline ListConfigurationSetsResult& WithConfigurationSets(const Aws::Vector<ConfigurationSet>& value) { SetConfigurationSets(value); return *this;}

    /**
     * <p>A list of configuration sets.</p>
     */
    inline ListConfigurationSetsResult& WithConfigurationSets(Aws::Vector<ConfigurationSet>&& value) { SetConfigurationSets(std::move(value)); return *this;}

    /**
     * <p>A list of configuration sets.</p>
     */
    inline ListConfigurationSetsResult& AddConfigurationSets(const ConfigurationSet& value) { m_configurationSets.push_back(value); return *this; }

    /**
     * <p>A list of configuration sets.</p>
     */
    inline ListConfigurationSetsResult& AddConfigurationSets(ConfigurationSet&& value) { m_configurationSets.push_back(std::move(value)); return *this; }


    /**
     * <p>A token indicating that there are additional configuration sets available to
     * be listed. Pass this token to successive calls of
     * <code>ListConfigurationSets</code>. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token indicating that there are additional configuration sets available to
     * be listed. Pass this token to successive calls of
     * <code>ListConfigurationSets</code>. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token indicating that there are additional configuration sets available to
     * be listed. Pass this token to successive calls of
     * <code>ListConfigurationSets</code>. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token indicating that there are additional configuration sets available to
     * be listed. Pass this token to successive calls of
     * <code>ListConfigurationSets</code>. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token indicating that there are additional configuration sets available to
     * be listed. Pass this token to successive calls of
     * <code>ListConfigurationSets</code>. </p>
     */
    inline ListConfigurationSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token indicating that there are additional configuration sets available to
     * be listed. Pass this token to successive calls of
     * <code>ListConfigurationSets</code>. </p>
     */
    inline ListConfigurationSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token indicating that there are additional configuration sets available to
     * be listed. Pass this token to successive calls of
     * <code>ListConfigurationSets</code>. </p>
     */
    inline ListConfigurationSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListConfigurationSetsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListConfigurationSetsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ConfigurationSet> m_configurationSets;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
