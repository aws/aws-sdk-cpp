﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/HsmConfiguration.h>
#include <aws/redshift/model/ResponseMetadata.h>

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
  class AWS_REDSHIFT_API CreateHsmConfigurationResult
  {
  public:
    CreateHsmConfigurationResult();
    CreateHsmConfigurationResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateHsmConfigurationResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const HsmConfiguration& GetHsmConfiguration() const{ return m_hsmConfiguration; }

    
    inline void SetHsmConfiguration(const HsmConfiguration& value) { m_hsmConfiguration = value; }

    
    inline void SetHsmConfiguration(HsmConfiguration&& value) { m_hsmConfiguration = value; }

    
    inline CreateHsmConfigurationResult& WithHsmConfiguration(const HsmConfiguration& value) { SetHsmConfiguration(value); return *this;}

    
    inline CreateHsmConfigurationResult& WithHsmConfiguration(HsmConfiguration&& value) { SetHsmConfiguration(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline CreateHsmConfigurationResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateHsmConfigurationResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    HsmConfiguration m_hsmConfiguration;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws