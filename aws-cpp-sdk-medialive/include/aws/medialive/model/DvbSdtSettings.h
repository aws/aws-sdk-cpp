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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/DvbSdtOutputSdt.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * DVB Service Description Table (SDT)<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DvbSdtSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API DvbSdtSettings
  {
  public:
    DvbSdtSettings();
    DvbSdtSettings(Aws::Utils::Json::JsonView jsonValue);
    DvbSdtSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Selects method of inserting SDT information into output stream. The sdtFollow
     * setting copies SDT information from input stream to output stream. The
     * sdtFollowIfPresent setting copies SDT information from input stream to output
     * stream if SDT information is present in the input, otherwise it will fall back
     * on the user-defined values. The sdtManual setting means user will enter the SDT
     * information. The sdtNone setting means output stream will not contain SDT
     * information.
     */
    inline const DvbSdtOutputSdt& GetOutputSdt() const{ return m_outputSdt; }

    /**
     * Selects method of inserting SDT information into output stream. The sdtFollow
     * setting copies SDT information from input stream to output stream. The
     * sdtFollowIfPresent setting copies SDT information from input stream to output
     * stream if SDT information is present in the input, otherwise it will fall back
     * on the user-defined values. The sdtManual setting means user will enter the SDT
     * information. The sdtNone setting means output stream will not contain SDT
     * information.
     */
    inline bool OutputSdtHasBeenSet() const { return m_outputSdtHasBeenSet; }

    /**
     * Selects method of inserting SDT information into output stream. The sdtFollow
     * setting copies SDT information from input stream to output stream. The
     * sdtFollowIfPresent setting copies SDT information from input stream to output
     * stream if SDT information is present in the input, otherwise it will fall back
     * on the user-defined values. The sdtManual setting means user will enter the SDT
     * information. The sdtNone setting means output stream will not contain SDT
     * information.
     */
    inline void SetOutputSdt(const DvbSdtOutputSdt& value) { m_outputSdtHasBeenSet = true; m_outputSdt = value; }

    /**
     * Selects method of inserting SDT information into output stream. The sdtFollow
     * setting copies SDT information from input stream to output stream. The
     * sdtFollowIfPresent setting copies SDT information from input stream to output
     * stream if SDT information is present in the input, otherwise it will fall back
     * on the user-defined values. The sdtManual setting means user will enter the SDT
     * information. The sdtNone setting means output stream will not contain SDT
     * information.
     */
    inline void SetOutputSdt(DvbSdtOutputSdt&& value) { m_outputSdtHasBeenSet = true; m_outputSdt = std::move(value); }

    /**
     * Selects method of inserting SDT information into output stream. The sdtFollow
     * setting copies SDT information from input stream to output stream. The
     * sdtFollowIfPresent setting copies SDT information from input stream to output
     * stream if SDT information is present in the input, otherwise it will fall back
     * on the user-defined values. The sdtManual setting means user will enter the SDT
     * information. The sdtNone setting means output stream will not contain SDT
     * information.
     */
    inline DvbSdtSettings& WithOutputSdt(const DvbSdtOutputSdt& value) { SetOutputSdt(value); return *this;}

    /**
     * Selects method of inserting SDT information into output stream. The sdtFollow
     * setting copies SDT information from input stream to output stream. The
     * sdtFollowIfPresent setting copies SDT information from input stream to output
     * stream if SDT information is present in the input, otherwise it will fall back
     * on the user-defined values. The sdtManual setting means user will enter the SDT
     * information. The sdtNone setting means output stream will not contain SDT
     * information.
     */
    inline DvbSdtSettings& WithOutputSdt(DvbSdtOutputSdt&& value) { SetOutputSdt(std::move(value)); return *this;}


    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline int GetRepInterval() const{ return m_repInterval; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline bool RepIntervalHasBeenSet() const { return m_repIntervalHasBeenSet; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline void SetRepInterval(int value) { m_repIntervalHasBeenSet = true; m_repInterval = value; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline DvbSdtSettings& WithRepInterval(int value) { SetRepInterval(value); return *this;}


    /**
     * The service name placed in the serviceDescriptor in the Service Description
     * Table. Maximum length is 256 characters.
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * The service name placed in the serviceDescriptor in the Service Description
     * Table. Maximum length is 256 characters.
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * The service name placed in the serviceDescriptor in the Service Description
     * Table. Maximum length is 256 characters.
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * The service name placed in the serviceDescriptor in the Service Description
     * Table. Maximum length is 256 characters.
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * The service name placed in the serviceDescriptor in the Service Description
     * Table. Maximum length is 256 characters.
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * The service name placed in the serviceDescriptor in the Service Description
     * Table. Maximum length is 256 characters.
     */
    inline DvbSdtSettings& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * The service name placed in the serviceDescriptor in the Service Description
     * Table. Maximum length is 256 characters.
     */
    inline DvbSdtSettings& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * The service name placed in the serviceDescriptor in the Service Description
     * Table. Maximum length is 256 characters.
     */
    inline DvbSdtSettings& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * The service provider name placed in the serviceDescriptor in the Service
     * Description Table. Maximum length is 256 characters.
     */
    inline const Aws::String& GetServiceProviderName() const{ return m_serviceProviderName; }

    /**
     * The service provider name placed in the serviceDescriptor in the Service
     * Description Table. Maximum length is 256 characters.
     */
    inline bool ServiceProviderNameHasBeenSet() const { return m_serviceProviderNameHasBeenSet; }

    /**
     * The service provider name placed in the serviceDescriptor in the Service
     * Description Table. Maximum length is 256 characters.
     */
    inline void SetServiceProviderName(const Aws::String& value) { m_serviceProviderNameHasBeenSet = true; m_serviceProviderName = value; }

    /**
     * The service provider name placed in the serviceDescriptor in the Service
     * Description Table. Maximum length is 256 characters.
     */
    inline void SetServiceProviderName(Aws::String&& value) { m_serviceProviderNameHasBeenSet = true; m_serviceProviderName = std::move(value); }

    /**
     * The service provider name placed in the serviceDescriptor in the Service
     * Description Table. Maximum length is 256 characters.
     */
    inline void SetServiceProviderName(const char* value) { m_serviceProviderNameHasBeenSet = true; m_serviceProviderName.assign(value); }

    /**
     * The service provider name placed in the serviceDescriptor in the Service
     * Description Table. Maximum length is 256 characters.
     */
    inline DvbSdtSettings& WithServiceProviderName(const Aws::String& value) { SetServiceProviderName(value); return *this;}

    /**
     * The service provider name placed in the serviceDescriptor in the Service
     * Description Table. Maximum length is 256 characters.
     */
    inline DvbSdtSettings& WithServiceProviderName(Aws::String&& value) { SetServiceProviderName(std::move(value)); return *this;}

    /**
     * The service provider name placed in the serviceDescriptor in the Service
     * Description Table. Maximum length is 256 characters.
     */
    inline DvbSdtSettings& WithServiceProviderName(const char* value) { SetServiceProviderName(value); return *this;}

  private:

    DvbSdtOutputSdt m_outputSdt;
    bool m_outputSdtHasBeenSet;

    int m_repInterval;
    bool m_repIntervalHasBeenSet;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;

    Aws::String m_serviceProviderName;
    bool m_serviceProviderNameHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
