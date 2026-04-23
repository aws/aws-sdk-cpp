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
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/SanitizationWarningReason.h>
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
namespace MQ
{
namespace Model
{

  /**
   * Returns information about the XML element or attribute that was sanitized in the
   * configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/SanitizationWarning">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API SanitizationWarning
  {
  public:
    SanitizationWarning();
    SanitizationWarning(Aws::Utils::Json::JsonView jsonValue);
    SanitizationWarning& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The name of the XML attribute that has been sanitized.
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * The name of the XML attribute that has been sanitized.
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * The name of the XML attribute that has been sanitized.
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * The name of the XML attribute that has been sanitized.
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * The name of the XML attribute that has been sanitized.
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * The name of the XML attribute that has been sanitized.
     */
    inline SanitizationWarning& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * The name of the XML attribute that has been sanitized.
     */
    inline SanitizationWarning& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * The name of the XML attribute that has been sanitized.
     */
    inline SanitizationWarning& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * The name of the XML element that has been sanitized.
     */
    inline const Aws::String& GetElementName() const{ return m_elementName; }

    /**
     * The name of the XML element that has been sanitized.
     */
    inline bool ElementNameHasBeenSet() const { return m_elementNameHasBeenSet; }

    /**
     * The name of the XML element that has been sanitized.
     */
    inline void SetElementName(const Aws::String& value) { m_elementNameHasBeenSet = true; m_elementName = value; }

    /**
     * The name of the XML element that has been sanitized.
     */
    inline void SetElementName(Aws::String&& value) { m_elementNameHasBeenSet = true; m_elementName = std::move(value); }

    /**
     * The name of the XML element that has been sanitized.
     */
    inline void SetElementName(const char* value) { m_elementNameHasBeenSet = true; m_elementName.assign(value); }

    /**
     * The name of the XML element that has been sanitized.
     */
    inline SanitizationWarning& WithElementName(const Aws::String& value) { SetElementName(value); return *this;}

    /**
     * The name of the XML element that has been sanitized.
     */
    inline SanitizationWarning& WithElementName(Aws::String&& value) { SetElementName(std::move(value)); return *this;}

    /**
     * The name of the XML element that has been sanitized.
     */
    inline SanitizationWarning& WithElementName(const char* value) { SetElementName(value); return *this;}


    /**
     * Required. The reason for which the XML elements or attributes were sanitized.
     */
    inline const SanitizationWarningReason& GetReason() const{ return m_reason; }

    /**
     * Required. The reason for which the XML elements or attributes were sanitized.
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * Required. The reason for which the XML elements or attributes were sanitized.
     */
    inline void SetReason(const SanitizationWarningReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * Required. The reason for which the XML elements or attributes were sanitized.
     */
    inline void SetReason(SanitizationWarningReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * Required. The reason for which the XML elements or attributes were sanitized.
     */
    inline SanitizationWarning& WithReason(const SanitizationWarningReason& value) { SetReason(value); return *this;}

    /**
     * Required. The reason for which the XML elements or attributes were sanitized.
     */
    inline SanitizationWarning& WithReason(SanitizationWarningReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet;

    Aws::String m_elementName;
    bool m_elementNameHasBeenSet;

    SanitizationWarningReason m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
