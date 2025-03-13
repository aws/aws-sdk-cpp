/**
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
    AWS_SES_API ListConfigurationSetsResult() = default;
    AWS_SES_API ListConfigurationSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API ListConfigurationSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of configuration sets.</p>
     */
    inline const Aws::Vector<ConfigurationSet>& GetConfigurationSets() const { return m_configurationSets; }
    template<typename ConfigurationSetsT = Aws::Vector<ConfigurationSet>>
    void SetConfigurationSets(ConfigurationSetsT&& value) { m_configurationSetsHasBeenSet = true; m_configurationSets = std::forward<ConfigurationSetsT>(value); }
    template<typename ConfigurationSetsT = Aws::Vector<ConfigurationSet>>
    ListConfigurationSetsResult& WithConfigurationSets(ConfigurationSetsT&& value) { SetConfigurationSets(std::forward<ConfigurationSetsT>(value)); return *this;}
    template<typename ConfigurationSetsT = ConfigurationSet>
    ListConfigurationSetsResult& AddConfigurationSets(ConfigurationSetsT&& value) { m_configurationSetsHasBeenSet = true; m_configurationSets.emplace_back(std::forward<ConfigurationSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token indicating that there are additional configuration sets available to
     * be listed. Pass this token to successive calls of
     * <code>ListConfigurationSets</code>. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConfigurationSetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListConfigurationSetsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationSet> m_configurationSets;
    bool m_configurationSetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
