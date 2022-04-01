﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/FindingSeverity.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/model/Attribute.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>Contains information about an image scan finding.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ImageScanFinding">AWS
   * API Reference</a></p>
   */
  class AWS_ECR_API ImageScanFinding
  {
  public:
    ImageScanFinding();
    ImageScanFinding(Aws::Utils::Json::JsonView jsonValue);
    ImageScanFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name associated with the finding, usually a CVE number.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name associated with the finding, usually a CVE number.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name associated with the finding, usually a CVE number.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name associated with the finding, usually a CVE number.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name associated with the finding, usually a CVE number.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name associated with the finding, usually a CVE number.</p>
     */
    inline ImageScanFinding& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name associated with the finding, usually a CVE number.</p>
     */
    inline ImageScanFinding& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name associated with the finding, usually a CVE number.</p>
     */
    inline ImageScanFinding& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the finding.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the finding.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the finding.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the finding.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the finding.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the finding.</p>
     */
    inline ImageScanFinding& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the finding.</p>
     */
    inline ImageScanFinding& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the finding.</p>
     */
    inline ImageScanFinding& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A link containing additional details about the security vulnerability.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>A link containing additional details about the security vulnerability.</p>
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * <p>A link containing additional details about the security vulnerability.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>A link containing additional details about the security vulnerability.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * <p>A link containing additional details about the security vulnerability.</p>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>A link containing additional details about the security vulnerability.</p>
     */
    inline ImageScanFinding& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>A link containing additional details about the security vulnerability.</p>
     */
    inline ImageScanFinding& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>A link containing additional details about the security vulnerability.</p>
     */
    inline ImageScanFinding& WithUri(const char* value) { SetUri(value); return *this;}


    /**
     * <p>The finding severity.</p>
     */
    inline const FindingSeverity& GetSeverity() const{ return m_severity; }

    /**
     * <p>The finding severity.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>The finding severity.</p>
     */
    inline void SetSeverity(const FindingSeverity& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The finding severity.</p>
     */
    inline void SetSeverity(FindingSeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>The finding severity.</p>
     */
    inline ImageScanFinding& WithSeverity(const FindingSeverity& value) { SetSeverity(value); return *this;}

    /**
     * <p>The finding severity.</p>
     */
    inline ImageScanFinding& WithSeverity(FindingSeverity&& value) { SetSeverity(std::move(value)); return *this;}


    /**
     * <p>A collection of attributes of the host from which the finding is
     * generated.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A collection of attributes of the host from which the finding is
     * generated.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A collection of attributes of the host from which the finding is
     * generated.</p>
     */
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A collection of attributes of the host from which the finding is
     * generated.</p>
     */
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A collection of attributes of the host from which the finding is
     * generated.</p>
     */
    inline ImageScanFinding& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A collection of attributes of the host from which the finding is
     * generated.</p>
     */
    inline ImageScanFinding& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A collection of attributes of the host from which the finding is
     * generated.</p>
     */
    inline ImageScanFinding& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>A collection of attributes of the host from which the finding is
     * generated.</p>
     */
    inline ImageScanFinding& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_uri;
    bool m_uriHasBeenSet;

    FindingSeverity m_severity;
    bool m_severityHasBeenSet;

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
