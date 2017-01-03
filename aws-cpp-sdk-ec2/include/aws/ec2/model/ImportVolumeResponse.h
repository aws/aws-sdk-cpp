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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ConversionTask.h>
#include <aws/ec2/model/ResponseMetadata.h>

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
namespace EC2
{
namespace Model
{
  /**
   * <p>Contains the output for ImportVolume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportVolumeResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ImportVolumeResponse
  {
  public:
    ImportVolumeResponse();
    ImportVolumeResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ImportVolumeResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Information about the conversion task.</p>
     */
    inline const ConversionTask& GetConversionTask() const{ return m_conversionTask; }

    /**
     * <p>Information about the conversion task.</p>
     */
    inline void SetConversionTask(const ConversionTask& value) { m_conversionTask = value; }

    /**
     * <p>Information about the conversion task.</p>
     */
    inline void SetConversionTask(ConversionTask&& value) { m_conversionTask = value; }

    /**
     * <p>Information about the conversion task.</p>
     */
    inline ImportVolumeResponse& WithConversionTask(const ConversionTask& value) { SetConversionTask(value); return *this;}

    /**
     * <p>Information about the conversion task.</p>
     */
    inline ImportVolumeResponse& WithConversionTask(ConversionTask&& value) { SetConversionTask(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline ImportVolumeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ImportVolumeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    ConversionTask m_conversionTask;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws