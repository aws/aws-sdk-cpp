/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ViewStatus.h>
#include <aws/connect/model/ViewType.h>
#include <aws/connect/model/ViewContent.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A view resource object. Contains metadata and content necessary to render the
   * view.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/View">AWS API
   * Reference</a></p>
   */
  class View
  {
  public:
    AWS_CONNECT_API View();
    AWS_CONNECT_API View(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API View& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the view.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline View& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline View& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline View& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the view.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline View& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline View& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline View& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the view.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline View& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline View& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline View& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the view status as either <code>SAVED</code> or
     * <code>PUBLISHED</code>. The <code>PUBLISHED</code> status will initiate
     * validation on the content.</p>
     */
    inline const ViewStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ViewStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ViewStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline View& WithStatus(const ViewStatus& value) { SetStatus(value); return *this;}
    inline View& WithStatus(ViewStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the view - <code>CUSTOMER_MANAGED</code>.</p>
     */
    inline const ViewType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ViewType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ViewType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline View& WithType(const ViewType& value) { SetType(value); return *this;}
    inline View& WithType(ViewType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the view.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline View& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline View& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline View& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current version of the view.</p>
     */
    inline int GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }
    inline View& WithVersion(int value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the version.</p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }
    inline View& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}
    inline View& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}
    inline View& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>View content containing all content necessary to render a view except for
     * runtime input data.</p>
     */
    inline const ViewContent& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const ViewContent& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(ViewContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline View& WithContent(const ViewContent& value) { SetContent(value); return *this;}
    inline View& WithContent(ViewContent&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the view resource (not specific to view
     * version).</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline View& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline View& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline View& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline View& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline View& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline View& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline View& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline View& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline View& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the view was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline View& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline View& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Latest timestamp of the <code>UpdateViewContent</code> or
     * <code>CreateViewVersion</code> operations.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline View& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline View& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the checksum value of the latest published view content.</p>
     */
    inline const Aws::String& GetViewContentSha256() const{ return m_viewContentSha256; }
    inline bool ViewContentSha256HasBeenSet() const { return m_viewContentSha256HasBeenSet; }
    inline void SetViewContentSha256(const Aws::String& value) { m_viewContentSha256HasBeenSet = true; m_viewContentSha256 = value; }
    inline void SetViewContentSha256(Aws::String&& value) { m_viewContentSha256HasBeenSet = true; m_viewContentSha256 = std::move(value); }
    inline void SetViewContentSha256(const char* value) { m_viewContentSha256HasBeenSet = true; m_viewContentSha256.assign(value); }
    inline View& WithViewContentSha256(const Aws::String& value) { SetViewContentSha256(value); return *this;}
    inline View& WithViewContentSha256(Aws::String&& value) { SetViewContentSha256(std::move(value)); return *this;}
    inline View& WithViewContentSha256(const char* value) { SetViewContentSha256(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ViewStatus m_status;
    bool m_statusHasBeenSet = false;

    ViewType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet = false;

    ViewContent m_content;
    bool m_contentHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_viewContentSha256;
    bool m_viewContentSha256HasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
