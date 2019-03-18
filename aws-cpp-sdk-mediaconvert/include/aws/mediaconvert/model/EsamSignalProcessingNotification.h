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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaConvert
{
namespace Model
{

  /**
   * ESAM SignalProcessingNotification data defined by
   * OC-SP-ESAM-API-I03-131025.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/EsamSignalProcessingNotification">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API EsamSignalProcessingNotification
  {
  public:
    EsamSignalProcessingNotification();
    EsamSignalProcessingNotification(Aws::Utils::Json::JsonView jsonValue);
    EsamSignalProcessingNotification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Provide your ESAM SignalProcessingNotification XML document inside your JSON job
     * settings. Form the XML document as per OC-SP-ESAM-API-I03-131025. The transcoder
     * will use the signal processing instructions in the message that you supply.
     * Provide your ESAM SignalProcessingNotification XML document inside your JSON job
     * settings. If you want the service to place SCTE-35 markers at the insertion
     * points you specify in the XML document, you must also enable SCTE-35 ESAM
     * (scte35Esam). Note that you can either specify an ESAM XML document or enable
     * SCTE-35 passthrough. You can't do both.
     */
    inline const Aws::String& GetSccXml() const{ return m_sccXml; }

    /**
     * Provide your ESAM SignalProcessingNotification XML document inside your JSON job
     * settings. Form the XML document as per OC-SP-ESAM-API-I03-131025. The transcoder
     * will use the signal processing instructions in the message that you supply.
     * Provide your ESAM SignalProcessingNotification XML document inside your JSON job
     * settings. If you want the service to place SCTE-35 markers at the insertion
     * points you specify in the XML document, you must also enable SCTE-35 ESAM
     * (scte35Esam). Note that you can either specify an ESAM XML document or enable
     * SCTE-35 passthrough. You can't do both.
     */
    inline bool SccXmlHasBeenSet() const { return m_sccXmlHasBeenSet; }

    /**
     * Provide your ESAM SignalProcessingNotification XML document inside your JSON job
     * settings. Form the XML document as per OC-SP-ESAM-API-I03-131025. The transcoder
     * will use the signal processing instructions in the message that you supply.
     * Provide your ESAM SignalProcessingNotification XML document inside your JSON job
     * settings. If you want the service to place SCTE-35 markers at the insertion
     * points you specify in the XML document, you must also enable SCTE-35 ESAM
     * (scte35Esam). Note that you can either specify an ESAM XML document or enable
     * SCTE-35 passthrough. You can't do both.
     */
    inline void SetSccXml(const Aws::String& value) { m_sccXmlHasBeenSet = true; m_sccXml = value; }

    /**
     * Provide your ESAM SignalProcessingNotification XML document inside your JSON job
     * settings. Form the XML document as per OC-SP-ESAM-API-I03-131025. The transcoder
     * will use the signal processing instructions in the message that you supply.
     * Provide your ESAM SignalProcessingNotification XML document inside your JSON job
     * settings. If you want the service to place SCTE-35 markers at the insertion
     * points you specify in the XML document, you must also enable SCTE-35 ESAM
     * (scte35Esam). Note that you can either specify an ESAM XML document or enable
     * SCTE-35 passthrough. You can't do both.
     */
    inline void SetSccXml(Aws::String&& value) { m_sccXmlHasBeenSet = true; m_sccXml = std::move(value); }

    /**
     * Provide your ESAM SignalProcessingNotification XML document inside your JSON job
     * settings. Form the XML document as per OC-SP-ESAM-API-I03-131025. The transcoder
     * will use the signal processing instructions in the message that you supply.
     * Provide your ESAM SignalProcessingNotification XML document inside your JSON job
     * settings. If you want the service to place SCTE-35 markers at the insertion
     * points you specify in the XML document, you must also enable SCTE-35 ESAM
     * (scte35Esam). Note that you can either specify an ESAM XML document or enable
     * SCTE-35 passthrough. You can't do both.
     */
    inline void SetSccXml(const char* value) { m_sccXmlHasBeenSet = true; m_sccXml.assign(value); }

    /**
     * Provide your ESAM SignalProcessingNotification XML document inside your JSON job
     * settings. Form the XML document as per OC-SP-ESAM-API-I03-131025. The transcoder
     * will use the signal processing instructions in the message that you supply.
     * Provide your ESAM SignalProcessingNotification XML document inside your JSON job
     * settings. If you want the service to place SCTE-35 markers at the insertion
     * points you specify in the XML document, you must also enable SCTE-35 ESAM
     * (scte35Esam). Note that you can either specify an ESAM XML document or enable
     * SCTE-35 passthrough. You can't do both.
     */
    inline EsamSignalProcessingNotification& WithSccXml(const Aws::String& value) { SetSccXml(value); return *this;}

    /**
     * Provide your ESAM SignalProcessingNotification XML document inside your JSON job
     * settings. Form the XML document as per OC-SP-ESAM-API-I03-131025. The transcoder
     * will use the signal processing instructions in the message that you supply.
     * Provide your ESAM SignalProcessingNotification XML document inside your JSON job
     * settings. If you want the service to place SCTE-35 markers at the insertion
     * points you specify in the XML document, you must also enable SCTE-35 ESAM
     * (scte35Esam). Note that you can either specify an ESAM XML document or enable
     * SCTE-35 passthrough. You can't do both.
     */
    inline EsamSignalProcessingNotification& WithSccXml(Aws::String&& value) { SetSccXml(std::move(value)); return *this;}

    /**
     * Provide your ESAM SignalProcessingNotification XML document inside your JSON job
     * settings. Form the XML document as per OC-SP-ESAM-API-I03-131025. The transcoder
     * will use the signal processing instructions in the message that you supply.
     * Provide your ESAM SignalProcessingNotification XML document inside your JSON job
     * settings. If you want the service to place SCTE-35 markers at the insertion
     * points you specify in the XML document, you must also enable SCTE-35 ESAM
     * (scte35Esam). Note that you can either specify an ESAM XML document or enable
     * SCTE-35 passthrough. You can't do both.
     */
    inline EsamSignalProcessingNotification& WithSccXml(const char* value) { SetSccXml(value); return *this;}

  private:

    Aws::String m_sccXml;
    bool m_sccXmlHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
