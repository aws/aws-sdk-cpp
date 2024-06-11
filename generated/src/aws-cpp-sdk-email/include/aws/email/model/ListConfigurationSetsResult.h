﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>A list of configuration sets associated with your Amazon Web Services
   * account. Configuration sets enable you to publish email sending events. For
   * information about using configuration sets, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListConfigurationSetsResponse">AWS
   * API Reference</a></p>
   */
  class ListConfigurationSetsResult
  {
  public:
    AWS_SES_API ListConfigurationSetsResult();
    AWS_SES_API ListConfigurationSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API ListConfigurationSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of configuration sets.</p>
     */
    inline const Aws::Vector<ConfigurationSet>& GetConfigurationSets() const{ return m_configurationSets; }
    inline void SetConfigurationSets(const Aws::Vector<ConfigurationSet>& value) { m_configurationSets = value; }
    inline void SetConfigurationSets(Aws::Vector<ConfigurationSet>&& value) { m_configurationSets = std::move(value); }
    inline ListConfigurationSetsResult& WithConfigurationSets(const Aws::Vector<ConfigurationSet>& value) { SetConfigurationSets(value); return *this;}
    inline ListConfigurationSetsResult& WithConfigurationSets(Aws::Vector<ConfigurationSet>&& value) { SetConfigurationSets(std::move(value)); return *this;}
    inline ListConfigurationSetsResult& AddConfigurationSets(const ConfigurationSet& value) { m_configurationSets.push_back(value); return *this; }
    inline ListConfigurationSetsResult& AddConfigurationSets(ConfigurationSet&& value) { m_configurationSets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token indicating that there are additional configuration sets available to
     * be listed. Pass this token to successive calls of
     * <code>ListConfigurationSets</code>. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListConfigurationSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListConfigurationSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListConfigurationSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ListConfigurationSetsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ListConfigurationSetsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationSet> m_configurationSets;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
