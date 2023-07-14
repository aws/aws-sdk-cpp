﻿/**
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
  class AWS_ELASTICBEANSTALK_API CheckDNSAvailabilityResult
  {
  public:
    CheckDNSAvailabilityResult();
    CheckDNSAvailabilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CheckDNSAvailabilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Indicates if the specified CNAME is available:</p> <ul> <li> <p>
     * <code>true</code> : The CNAME is available.</p> </li> <li> <p>
     * <code>false</code> : The CNAME is not available.</p> </li> </ul>
     */
    inline bool GetAvailable() const{ return m_available; }

    /**
     * <p>Indicates if the specified CNAME is available:</p> <ul> <li> <p>
     * <code>true</code> : The CNAME is available.</p> </li> <li> <p>
     * <code>false</code> : The CNAME is not available.</p> </li> </ul>
     */
    inline void SetAvailable(bool value) { m_available = value; }

    /**
     * <p>Indicates if the specified CNAME is available:</p> <ul> <li> <p>
     * <code>true</code> : The CNAME is available.</p> </li> <li> <p>
     * <code>false</code> : The CNAME is not available.</p> </li> </ul>
     */
    inline CheckDNSAvailabilityResult& WithAvailable(bool value) { SetAvailable(value); return *this;}


    /**
     * <p>The fully qualified CNAME to reserve when <a>CreateEnvironment</a> is called
     * with the provided prefix.</p>
     */
    inline const Aws::String& GetFullyQualifiedCNAME() const{ return m_fullyQualifiedCNAME; }

    /**
     * <p>The fully qualified CNAME to reserve when <a>CreateEnvironment</a> is called
     * with the provided prefix.</p>
     */
    inline void SetFullyQualifiedCNAME(const Aws::String& value) { m_fullyQualifiedCNAME = value; }

    /**
     * <p>The fully qualified CNAME to reserve when <a>CreateEnvironment</a> is called
     * with the provided prefix.</p>
     */
    inline void SetFullyQualifiedCNAME(Aws::String&& value) { m_fullyQualifiedCNAME = std::move(value); }

    /**
     * <p>The fully qualified CNAME to reserve when <a>CreateEnvironment</a> is called
     * with the provided prefix.</p>
     */
    inline void SetFullyQualifiedCNAME(const char* value) { m_fullyQualifiedCNAME.assign(value); }

    /**
     * <p>The fully qualified CNAME to reserve when <a>CreateEnvironment</a> is called
     * with the provided prefix.</p>
     */
    inline CheckDNSAvailabilityResult& WithFullyQualifiedCNAME(const Aws::String& value) { SetFullyQualifiedCNAME(value); return *this;}

    /**
     * <p>The fully qualified CNAME to reserve when <a>CreateEnvironment</a> is called
     * with the provided prefix.</p>
     */
    inline CheckDNSAvailabilityResult& WithFullyQualifiedCNAME(Aws::String&& value) { SetFullyQualifiedCNAME(std::move(value)); return *this;}

    /**
     * <p>The fully qualified CNAME to reserve when <a>CreateEnvironment</a> is called
     * with the provided prefix.</p>
     */
    inline CheckDNSAvailabilityResult& WithFullyQualifiedCNAME(const char* value) { SetFullyQualifiedCNAME(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CheckDNSAvailabilityResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CheckDNSAvailabilityResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    bool m_available;

    Aws::String m_fullyQualifiedCNAME;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
