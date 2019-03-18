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
   * ESAM ManifestConfirmConditionNotification defined by
   * OC-SP-ESAM-API-I03-131025.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/EsamManifestConfirmConditionNotification">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API EsamManifestConfirmConditionNotification
  {
  public:
    EsamManifestConfirmConditionNotification();
    EsamManifestConfirmConditionNotification(Aws::Utils::Json::JsonView jsonValue);
    EsamManifestConfirmConditionNotification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Provide your ESAM ManifestConfirmConditionNotification XML document inside your
     * JSON job settings. Form the XML document as per OC-SP-ESAM-API-I03-131025. The
     * transcoder will use the Manifest Conditioning instructions in the message that
     * you supply.
     */
    inline const Aws::String& GetMccXml() const{ return m_mccXml; }

    /**
     * Provide your ESAM ManifestConfirmConditionNotification XML document inside your
     * JSON job settings. Form the XML document as per OC-SP-ESAM-API-I03-131025. The
     * transcoder will use the Manifest Conditioning instructions in the message that
     * you supply.
     */
    inline bool MccXmlHasBeenSet() const { return m_mccXmlHasBeenSet; }

    /**
     * Provide your ESAM ManifestConfirmConditionNotification XML document inside your
     * JSON job settings. Form the XML document as per OC-SP-ESAM-API-I03-131025. The
     * transcoder will use the Manifest Conditioning instructions in the message that
     * you supply.
     */
    inline void SetMccXml(const Aws::String& value) { m_mccXmlHasBeenSet = true; m_mccXml = value; }

    /**
     * Provide your ESAM ManifestConfirmConditionNotification XML document inside your
     * JSON job settings. Form the XML document as per OC-SP-ESAM-API-I03-131025. The
     * transcoder will use the Manifest Conditioning instructions in the message that
     * you supply.
     */
    inline void SetMccXml(Aws::String&& value) { m_mccXmlHasBeenSet = true; m_mccXml = std::move(value); }

    /**
     * Provide your ESAM ManifestConfirmConditionNotification XML document inside your
     * JSON job settings. Form the XML document as per OC-SP-ESAM-API-I03-131025. The
     * transcoder will use the Manifest Conditioning instructions in the message that
     * you supply.
     */
    inline void SetMccXml(const char* value) { m_mccXmlHasBeenSet = true; m_mccXml.assign(value); }

    /**
     * Provide your ESAM ManifestConfirmConditionNotification XML document inside your
     * JSON job settings. Form the XML document as per OC-SP-ESAM-API-I03-131025. The
     * transcoder will use the Manifest Conditioning instructions in the message that
     * you supply.
     */
    inline EsamManifestConfirmConditionNotification& WithMccXml(const Aws::String& value) { SetMccXml(value); return *this;}

    /**
     * Provide your ESAM ManifestConfirmConditionNotification XML document inside your
     * JSON job settings. Form the XML document as per OC-SP-ESAM-API-I03-131025. The
     * transcoder will use the Manifest Conditioning instructions in the message that
     * you supply.
     */
    inline EsamManifestConfirmConditionNotification& WithMccXml(Aws::String&& value) { SetMccXml(std::move(value)); return *this;}

    /**
     * Provide your ESAM ManifestConfirmConditionNotification XML document inside your
     * JSON job settings. Form the XML document as per OC-SP-ESAM-API-I03-131025. The
     * transcoder will use the Manifest Conditioning instructions in the message that
     * you supply.
     */
    inline EsamManifestConfirmConditionNotification& WithMccXml(const char* value) { SetMccXml(value); return *this;}

  private:

    Aws::String m_mccXml;
    bool m_mccXmlHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
