﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/AquaConfiguration.h>
#include <aws/redshift/model/ResponseMetadata.h>
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
namespace Redshift
{
namespace Model
{
  class AWS_REDSHIFT_API ModifyAquaConfigurationResult
  {
  public:
    ModifyAquaConfigurationResult();
    ModifyAquaConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ModifyAquaConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The updated AQUA configuration of the cluster. </p>
     */
    inline const AquaConfiguration& GetAquaConfiguration() const{ return m_aquaConfiguration; }

    /**
     * <p>The updated AQUA configuration of the cluster. </p>
     */
    inline void SetAquaConfiguration(const AquaConfiguration& value) { m_aquaConfiguration = value; }

    /**
     * <p>The updated AQUA configuration of the cluster. </p>
     */
    inline void SetAquaConfiguration(AquaConfiguration&& value) { m_aquaConfiguration = std::move(value); }

    /**
     * <p>The updated AQUA configuration of the cluster. </p>
     */
    inline ModifyAquaConfigurationResult& WithAquaConfiguration(const AquaConfiguration& value) { SetAquaConfiguration(value); return *this;}

    /**
     * <p>The updated AQUA configuration of the cluster. </p>
     */
    inline ModifyAquaConfigurationResult& WithAquaConfiguration(AquaConfiguration&& value) { SetAquaConfiguration(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyAquaConfigurationResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyAquaConfigurationResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    AquaConfiguration m_aquaConfiguration;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
