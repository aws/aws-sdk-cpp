/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
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
namespace ElasticBeanstalk
{
namespace Model
{
  /**
   * <p>Indicates if the specified CNAME is available.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CheckDNSAvailabilityResultMessage">AWS
   * API Reference</a></p>
   */
  class CheckDNSAvailabilityResult
  {
  public:
    AWS_ELASTICBEANSTALK_API CheckDNSAvailabilityResult() = default;
    AWS_ELASTICBEANSTALK_API CheckDNSAvailabilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API CheckDNSAvailabilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Indicates if the specified CNAME is available:</p> <ul> <li> <p>
     * <code>true</code> : The CNAME is available.</p> </li> <li> <p>
     * <code>false</code> : The CNAME is not available.</p> </li> </ul>
     */
    inline bool GetAvailable() const { return m_available; }
    inline void SetAvailable(bool value) { m_availableHasBeenSet = true; m_available = value; }
    inline CheckDNSAvailabilityResult& WithAvailable(bool value) { SetAvailable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified CNAME to reserve when <a>CreateEnvironment</a> is called
     * with the provided prefix.</p>
     */
    inline const Aws::String& GetFullyQualifiedCNAME() const { return m_fullyQualifiedCNAME; }
    template<typename FullyQualifiedCNAMET = Aws::String>
    void SetFullyQualifiedCNAME(FullyQualifiedCNAMET&& value) { m_fullyQualifiedCNAMEHasBeenSet = true; m_fullyQualifiedCNAME = std::forward<FullyQualifiedCNAMET>(value); }
    template<typename FullyQualifiedCNAMET = Aws::String>
    CheckDNSAvailabilityResult& WithFullyQualifiedCNAME(FullyQualifiedCNAMET&& value) { SetFullyQualifiedCNAME(std::forward<FullyQualifiedCNAMET>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CheckDNSAvailabilityResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    bool m_available{false};
    bool m_availableHasBeenSet = false;

    Aws::String m_fullyQualifiedCNAME;
    bool m_fullyQualifiedCNAMEHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
