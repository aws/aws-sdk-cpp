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
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Support
{
namespace Model
{

  /**
   * <p>The description and metadata for a Trusted Advisor check.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/TrustedAdvisorCheckDescription">AWS
   * API Reference</a></p>
   */
  class AWS_SUPPORT_API TrustedAdvisorCheckDescription
  {
  public:
    TrustedAdvisorCheckDescription();
    TrustedAdvisorCheckDescription(Aws::Utils::Json::JsonView jsonValue);
    TrustedAdvisorCheckDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline TrustedAdvisorCheckDescription& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline TrustedAdvisorCheckDescription& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline TrustedAdvisorCheckDescription& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The display name for the Trusted Advisor check.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The display name for the Trusted Advisor check.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The display name for the Trusted Advisor check.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The display name for the Trusted Advisor check.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The display name for the Trusted Advisor check.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The display name for the Trusted Advisor check.</p>
     */
    inline TrustedAdvisorCheckDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The display name for the Trusted Advisor check.</p>
     */
    inline TrustedAdvisorCheckDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The display name for the Trusted Advisor check.</p>
     */
    inline TrustedAdvisorCheckDescription& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the Trusted Advisor check, which includes the alert
     * criteria and recommended actions (contains HTML markup).</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the Trusted Advisor check, which includes the alert
     * criteria and recommended actions (contains HTML markup).</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the Trusted Advisor check, which includes the alert
     * criteria and recommended actions (contains HTML markup).</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the Trusted Advisor check, which includes the alert
     * criteria and recommended actions (contains HTML markup).</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the Trusted Advisor check, which includes the alert
     * criteria and recommended actions (contains HTML markup).</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the Trusted Advisor check, which includes the alert
     * criteria and recommended actions (contains HTML markup).</p>
     */
    inline TrustedAdvisorCheckDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the Trusted Advisor check, which includes the alert
     * criteria and recommended actions (contains HTML markup).</p>
     */
    inline TrustedAdvisorCheckDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the Trusted Advisor check, which includes the alert
     * criteria and recommended actions (contains HTML markup).</p>
     */
    inline TrustedAdvisorCheckDescription& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The category of the Trusted Advisor check.</p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * <p>The category of the Trusted Advisor check.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category of the Trusted Advisor check.</p>
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category of the Trusted Advisor check.</p>
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category of the Trusted Advisor check.</p>
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * <p>The category of the Trusted Advisor check.</p>
     */
    inline TrustedAdvisorCheckDescription& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * <p>The category of the Trusted Advisor check.</p>
     */
    inline TrustedAdvisorCheckDescription& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * <p>The category of the Trusted Advisor check.</p>
     */
    inline TrustedAdvisorCheckDescription& WithCategory(const char* value) { SetCategory(value); return *this;}


    /**
     * <p>The column headings for the data returned by the Trusted Advisor check. The
     * order of the headings corresponds to the order of the data in the
     * <b>Metadata</b> element of the <a>TrustedAdvisorResourceDetail</a> for the
     * check. <b>Metadata</b> contains all the data that is shown in the Excel
     * download, even in those cases where the UI shows just summary data. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The column headings for the data returned by the Trusted Advisor check. The
     * order of the headings corresponds to the order of the data in the
     * <b>Metadata</b> element of the <a>TrustedAdvisorResourceDetail</a> for the
     * check. <b>Metadata</b> contains all the data that is shown in the Excel
     * download, even in those cases where the UI shows just summary data. </p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The column headings for the data returned by the Trusted Advisor check. The
     * order of the headings corresponds to the order of the data in the
     * <b>Metadata</b> element of the <a>TrustedAdvisorResourceDetail</a> for the
     * check. <b>Metadata</b> contains all the data that is shown in the Excel
     * download, even in those cases where the UI shows just summary data. </p>
     */
    inline void SetMetadata(const Aws::Vector<Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The column headings for the data returned by the Trusted Advisor check. The
     * order of the headings corresponds to the order of the data in the
     * <b>Metadata</b> element of the <a>TrustedAdvisorResourceDetail</a> for the
     * check. <b>Metadata</b> contains all the data that is shown in the Excel
     * download, even in those cases where the UI shows just summary data. </p>
     */
    inline void SetMetadata(Aws::Vector<Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The column headings for the data returned by the Trusted Advisor check. The
     * order of the headings corresponds to the order of the data in the
     * <b>Metadata</b> element of the <a>TrustedAdvisorResourceDetail</a> for the
     * check. <b>Metadata</b> contains all the data that is shown in the Excel
     * download, even in those cases where the UI shows just summary data. </p>
     */
    inline TrustedAdvisorCheckDescription& WithMetadata(const Aws::Vector<Aws::String>& value) { SetMetadata(value); return *this;}

    /**
     * <p>The column headings for the data returned by the Trusted Advisor check. The
     * order of the headings corresponds to the order of the data in the
     * <b>Metadata</b> element of the <a>TrustedAdvisorResourceDetail</a> for the
     * check. <b>Metadata</b> contains all the data that is shown in the Excel
     * download, even in those cases where the UI shows just summary data. </p>
     */
    inline TrustedAdvisorCheckDescription& WithMetadata(Aws::Vector<Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The column headings for the data returned by the Trusted Advisor check. The
     * order of the headings corresponds to the order of the data in the
     * <b>Metadata</b> element of the <a>TrustedAdvisorResourceDetail</a> for the
     * check. <b>Metadata</b> contains all the data that is shown in the Excel
     * download, even in those cases where the UI shows just summary data. </p>
     */
    inline TrustedAdvisorCheckDescription& AddMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.push_back(value); return *this; }

    /**
     * <p>The column headings for the data returned by the Trusted Advisor check. The
     * order of the headings corresponds to the order of the data in the
     * <b>Metadata</b> element of the <a>TrustedAdvisorResourceDetail</a> for the
     * check. <b>Metadata</b> contains all the data that is shown in the Excel
     * download, even in those cases where the UI shows just summary data. </p>
     */
    inline TrustedAdvisorCheckDescription& AddMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.push_back(std::move(value)); return *this; }

    /**
     * <p>The column headings for the data returned by the Trusted Advisor check. The
     * order of the headings corresponds to the order of the data in the
     * <b>Metadata</b> element of the <a>TrustedAdvisorResourceDetail</a> for the
     * check. <b>Metadata</b> contains all the data that is shown in the Excel
     * download, even in those cases where the UI shows just summary data. </p>
     */
    inline TrustedAdvisorCheckDescription& AddMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.push_back(value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_category;
    bool m_categoryHasBeenSet;

    Aws::Vector<Aws::String> m_metadata;
    bool m_metadataHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
